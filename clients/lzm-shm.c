#include "config.h"

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include <unistd.h>
#include <sys/mman.h>
#include <signal.h>
#include <errno.h>

#include <wayland-client.h>
#include "shared/os-compatibility.h"
#include <libweston/zalloc.h>
#include "xdg-shell-client-protocol.h"
#include "fullscreen-shell-unstable-v1-client-protocol.h"
//wayland display相关
struct display {
	struct wl_display *display;
	struct wl_registry *registry;
	struct wl_compositor *compositor;
	struct xdg_wm_base *wm_base;
	struct zwp_fullscreen_shell_v1 *fshell;
	struct wl_shm *shm;
	bool has_xrgb;
};
//window相关
struct window {
	struct display *display;
	int width, height;
	struct wl_surface *surface;
	struct xdg_surface *xdg_surface;
	struct xdg_toplevel *xdg_toplevel;
	struct buffer buffers[2];
	struct buffer *prev_buffer;
	struct wl_callback *callback;
	bool wait_for_configure;
};

static int running = 1;

struct buffer {
	struct wl_buffer *buffer;
	void *shm_data;
	int busy;
};

static const struct wl_registry_listener registry_listener = {
	registry_handle_global,
	registry_handle_global_remove
};

static void
registry_handle_global(void *data, struct wl_registry *registry,
		       uint32_t id, const char *interface, uint32_t version)
{
	struct display *d = data;

	if (strcmp(interface, "wl_compositor") == 0) {
		d->compositor =
			wl_registry_bind(registry,
					 id, &wl_compositor_interface, 1);
	} else if (strcmp(interface, "xdg_wm_base") == 0) {
		d->wm_base = wl_registry_bind(registry,
					      id, &xdg_wm_base_interface, 1);
		xdg_wm_base_add_listener(d->wm_base, &xdg_wm_base_listener, d);
	} else if (strcmp(interface, "zwp_fullscreen_shell_v1") == 0) {
		d->fshell = wl_registry_bind(registry,
					     id, &zwp_fullscreen_shell_v1_interface, 1);
	} else if (strcmp(interface, "wl_shm") == 0) {
		d->shm = wl_registry_bind(registry,
					  id, &wl_shm_interface, 1);
		wl_shm_add_listener(d->shm, &shm_listener, d);
	}
}

static void
registry_handle_global_remove(void *data, struct wl_registry *registry,
			      uint32_t name)
{
}

static const struct wl_registry_listener registry_listener = {
	registry_handle_global,
	registry_handle_global_remove
};


static struct display *
create_display(void)
{
    struct display *display;
    
    //分配指针内存
    display = malloc(sizeof *display);
    if(display==NULL){
        fprintf(stderr,"out of mem\n");
        exit(1);
    }
    //连接到display
    display->display = wl_display_connect(NULL);
    assert(display->display);

    //注册进display
    display->has_xrgb = false;
    display->registry = wl_display_get_registry(display->display);
    //添加监听器
    wl_registry_add_listener(display->registry,
                &registry_listener,display);
    wl_display_roundtrip(display->display);
    if (display->shm == NULL) {
		fprintf(stderr, "No wl_shm global\n");
		exit(1);
	}

	wl_display_roundtrip(display->display);
    if (!display->has_xrgb) {
		fprintf(stderr, "WL_SHM_FORMAT_XRGB32 not available\n");
		exit(1);
	}

	return display;
}

static void
handle_xdg_surface_configure(void *data, struct xdg_surface *surface,
			     uint32_t serial)
{
	struct window *window = data;

	xdg_surface_ack_configure(surface, serial);

	if (window->wait_for_configure) {
        //重绘窗口
		redraw(window, NULL, 0);
		window->wait_for_configure = false;
	}
}

static void
handle_xdg_toplevel_configure(void *data, struct xdg_toplevel *xdg_toplevel,
			      int32_t width, int32_t height,
			      struct wl_array *state)
{
}

static void
handle_xdg_toplevel_close(void *data, struct xdg_toplevel *xdg_toplevel)
{
	running = 0;
}

static const struct xdg_toplevel_listener xdg_toplevel_listener = {
	handle_xdg_toplevel_configure,
	handle_xdg_toplevel_close,
};
//xdg_surface监听回调
static const struct xdg_surface_listener xdg_surface_listener = {
	handle_xdg_surface_configure,
};

static struct window *
create_window(struct display *display, int width, int height)
{
    struct window *window;
    window = zalloc(sizeof *window);
    if(!window)
        return NULL;
    window->callback = NULL;
    window->display = display;
    window->height = height;
    window->width = width;
    //创建一个surface
    window->surface = wl_compositor_create_surface(display)

    if(display->wm_base){
        //xdg_surface是最底层的surface
        window->xdg_surface=
            xdg_wm_base_get_xdg_surface(display->wm_base,
                    window->surface);
        assert(window->xdg_surface);
        //xdg_surface监听
        xdg_surface_add_listener(window->xdg_surface,
                    &xdg_surface_listener, window);
        //toplevel是窗口显示层
        window->xdg_toplevel =
			xdg_surface_get_toplevel(window->xdg_surface);
		assert(window->xdg_toplevel);
        //xdg_toplevel监听
		xdg_toplevel_add_listener(window->xdg_toplevel,
					  &xdg_toplevel_listener, window);
        
        xdg_toplevel_set_title(window->xdg_toplevel, "simple-shm");
		//提交
        wl_surface_commit(window->surface);
		window->wait_for_configure = true;
    }else if (display->fshell) {
		zwp_fullscreen_shell_v1_present_surface(display->fshell,
							window->surface,
							ZWP_FULLSCREEN_SHELL_V1_PRESENT_METHOD_DEFAULT,
							NULL);
	} else {
		assert(0);
	}

	return window;

}


static void
redraw(void *data, struct wl_callback *callback, uint32_t time)
{
    struct window *window = data;
	struct buffer *buffer;
    //获取下一帧的buffer
	buffer = window_next_buffer(window);
    if (!buffer) {
		fprintf(stderr,
			!callback ? "Failed to create the first buffer.\n" :
			"Both buffers busy at redraw(). Server bug?\n");
		abort();
	}
    //绘制像素，存入共享内存
    paint_pixels(buffer->shm_data, 20, window->width, window->height, time);
    //attach
	wl_surface_attach(window->surface, buffer->buffer, 0, 0);
	//damage
    wl_surface_damage(window->surface,
			  20, 20, window->width - 40, window->height - 40);

	if (callback)
		wl_callback_destroy(callback);

	window->callback = wl_surface_frame(window->surface);
    //添加帧监听
	wl_callback_add_listener(window->callback, &frame_listener, window);
	//commit
    wl_surface_commit(window->surface);
	buffer->busy = 1;

}
//帧监听回调为重绘函数
static const struct wl_callback_listener frame_listener = {
	redraw
};


int
main(int argc, char **argv)
{
    struct sigaction sigint;
    struct display *display;
    struct window *window;
    int ret = 0;

    //创建display
    display = create_display();
    //创建窗口
    window = create_window();

    sigint.sa_handler = signal_int;
    sigemptyset(&sigint.sa_mask);
    sigint.sa_flags = SA_RESETHAND;
    sigaction(SIGINT,&sigint,NULL);

    //设置整个surface为damage区域
    wl_surface_damage(window->surface,0,0,
            window->window,window->height);
    if(!window->wait_for_configure)
        //第一次重绘
        redraw(window,NULL,0);
    //进入event loop
    while (running && ret != -1)
		ret = wl_display_dispatch(display->display);

	fprintf(stderr, "simple-shm exiting\n");

	destroy_window(window);
	destroy_display(display);

	return 0;
}