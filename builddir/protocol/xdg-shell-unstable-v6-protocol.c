/* Generated by wayland-scanner 1.19.90 */

/*
 * Copyright © 2008-2013 Kristian Høgsberg
 * Copyright © 2013      Rafael Antognolli
 * Copyright © 2013      Jasper St. Pierre
 * Copyright © 2010-2013 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#include <stdlib.h>
#include <stdint.h>
#include "wayland-util.h"

#ifndef __has_attribute
# define __has_attribute(x) 0  /* Compatibility with non-clang compilers. */
#endif

#if (__has_attribute(visibility) || defined(__GNUC__) && __GNUC__ >= 4)
#define WL_PRIVATE __attribute__ ((visibility("hidden")))
#else
#define WL_PRIVATE
#endif

extern const struct wl_interface wl_output_interface;
extern const struct wl_interface wl_seat_interface;
extern const struct wl_interface wl_surface_interface;
extern const struct wl_interface zxdg_popup_v6_interface;
extern const struct wl_interface zxdg_positioner_v6_interface;
extern const struct wl_interface zxdg_surface_v6_interface;
extern const struct wl_interface zxdg_toplevel_v6_interface;

static const struct wl_interface *xdg_shell_unstable_v6_types[] = {
	NULL,
	NULL,
	NULL,
	NULL,
	&zxdg_positioner_v6_interface,
	&zxdg_surface_v6_interface,
	&wl_surface_interface,
	&zxdg_toplevel_v6_interface,
	&zxdg_popup_v6_interface,
	&zxdg_surface_v6_interface,
	&zxdg_positioner_v6_interface,
	&zxdg_toplevel_v6_interface,
	&wl_seat_interface,
	NULL,
	NULL,
	NULL,
	&wl_seat_interface,
	NULL,
	&wl_seat_interface,
	NULL,
	NULL,
	&wl_output_interface,
	&wl_seat_interface,
	NULL,
};

static const struct wl_message zxdg_shell_v6_requests[] = {
	{ "destroy", "", xdg_shell_unstable_v6_types + 0 },
	{ "create_positioner", "n", xdg_shell_unstable_v6_types + 4 },
	{ "get_xdg_surface", "no", xdg_shell_unstable_v6_types + 5 },
	{ "pong", "u", xdg_shell_unstable_v6_types + 0 },
};

static const struct wl_message zxdg_shell_v6_events[] = {
	{ "ping", "u", xdg_shell_unstable_v6_types + 0 },
};

WL_PRIVATE const struct wl_interface zxdg_shell_v6_interface = {
	"zxdg_shell_v6", 1,
	4, zxdg_shell_v6_requests,
	1, zxdg_shell_v6_events,
};

static const struct wl_message zxdg_positioner_v6_requests[] = {
	{ "destroy", "", xdg_shell_unstable_v6_types + 0 },
	{ "set_size", "ii", xdg_shell_unstable_v6_types + 0 },
	{ "set_anchor_rect", "iiii", xdg_shell_unstable_v6_types + 0 },
	{ "set_anchor", "u", xdg_shell_unstable_v6_types + 0 },
	{ "set_gravity", "u", xdg_shell_unstable_v6_types + 0 },
	{ "set_constraint_adjustment", "u", xdg_shell_unstable_v6_types + 0 },
	{ "set_offset", "ii", xdg_shell_unstable_v6_types + 0 },
};

WL_PRIVATE const struct wl_interface zxdg_positioner_v6_interface = {
	"zxdg_positioner_v6", 1,
	7, zxdg_positioner_v6_requests,
	0, NULL,
};

static const struct wl_message zxdg_surface_v6_requests[] = {
	{ "destroy", "", xdg_shell_unstable_v6_types + 0 },
	{ "get_toplevel", "n", xdg_shell_unstable_v6_types + 7 },
	{ "get_popup", "noo", xdg_shell_unstable_v6_types + 8 },
	{ "set_window_geometry", "iiii", xdg_shell_unstable_v6_types + 0 },
	{ "ack_configure", "u", xdg_shell_unstable_v6_types + 0 },
};

static const struct wl_message zxdg_surface_v6_events[] = {
	{ "configure", "u", xdg_shell_unstable_v6_types + 0 },
};

WL_PRIVATE const struct wl_interface zxdg_surface_v6_interface = {
	"zxdg_surface_v6", 1,
	5, zxdg_surface_v6_requests,
	1, zxdg_surface_v6_events,
};

static const struct wl_message zxdg_toplevel_v6_requests[] = {
	{ "destroy", "", xdg_shell_unstable_v6_types + 0 },
	{ "set_parent", "?o", xdg_shell_unstable_v6_types + 11 },
	{ "set_title", "s", xdg_shell_unstable_v6_types + 0 },
	{ "set_app_id", "s", xdg_shell_unstable_v6_types + 0 },
	{ "show_window_menu", "ouii", xdg_shell_unstable_v6_types + 12 },
	{ "move", "ou", xdg_shell_unstable_v6_types + 16 },
	{ "resize", "ouu", xdg_shell_unstable_v6_types + 18 },
	{ "set_max_size", "ii", xdg_shell_unstable_v6_types + 0 },
	{ "set_min_size", "ii", xdg_shell_unstable_v6_types + 0 },
	{ "set_maximized", "", xdg_shell_unstable_v6_types + 0 },
	{ "unset_maximized", "", xdg_shell_unstable_v6_types + 0 },
	{ "set_fullscreen", "?o", xdg_shell_unstable_v6_types + 21 },
	{ "unset_fullscreen", "", xdg_shell_unstable_v6_types + 0 },
	{ "set_minimized", "", xdg_shell_unstable_v6_types + 0 },
};

static const struct wl_message zxdg_toplevel_v6_events[] = {
	{ "configure", "iia", xdg_shell_unstable_v6_types + 0 },
	{ "close", "", xdg_shell_unstable_v6_types + 0 },
};

WL_PRIVATE const struct wl_interface zxdg_toplevel_v6_interface = {
	"zxdg_toplevel_v6", 1,
	14, zxdg_toplevel_v6_requests,
	2, zxdg_toplevel_v6_events,
};

static const struct wl_message zxdg_popup_v6_requests[] = {
	{ "destroy", "", xdg_shell_unstable_v6_types + 0 },
	{ "grab", "ou", xdg_shell_unstable_v6_types + 22 },
};

static const struct wl_message zxdg_popup_v6_events[] = {
	{ "configure", "iiii", xdg_shell_unstable_v6_types + 0 },
	{ "popup_done", "", xdg_shell_unstable_v6_types + 0 },
};

WL_PRIVATE const struct wl_interface zxdg_popup_v6_interface = {
	"zxdg_popup_v6", 1,
	2, zxdg_popup_v6_requests,
	2, zxdg_popup_v6_events,
};

