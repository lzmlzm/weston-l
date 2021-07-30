/* Generated by wayland-scanner 1.19.90 */

#ifndef ZWP_LINUX_EXPLICIT_SYNCHRONIZATION_UNSTABLE_V1_CLIENT_PROTOCOL_H
#define ZWP_LINUX_EXPLICIT_SYNCHRONIZATION_UNSTABLE_V1_CLIENT_PROTOCOL_H

#include <stdint.h>
#include <stddef.h>
#include "wayland-client.h"

#ifdef  __cplusplus
extern "C" {
#endif

/**
 * @page page_zwp_linux_explicit_synchronization_unstable_v1 The zwp_linux_explicit_synchronization_unstable_v1 protocol
 * @section page_ifaces_zwp_linux_explicit_synchronization_unstable_v1 Interfaces
 * - @subpage page_iface_zwp_linux_explicit_synchronization_v1 - protocol for providing explicit synchronization
 * - @subpage page_iface_zwp_linux_surface_synchronization_v1 - per-surface explicit synchronization support
 * - @subpage page_iface_zwp_linux_buffer_release_v1 - buffer release explicit synchronization
 * @section page_copyright_zwp_linux_explicit_synchronization_unstable_v1 Copyright
 * <pre>
 *
 * Copyright 2016 The Chromium Authors.
 * Copyright 2017 Intel Corporation
 * Copyright 2018 Collabora, Ltd
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
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 * </pre>
 */
struct wl_surface;
struct zwp_linux_buffer_release_v1;
struct zwp_linux_explicit_synchronization_v1;
struct zwp_linux_surface_synchronization_v1;

#ifndef ZWP_LINUX_EXPLICIT_SYNCHRONIZATION_V1_INTERFACE
#define ZWP_LINUX_EXPLICIT_SYNCHRONIZATION_V1_INTERFACE
/**
 * @page page_iface_zwp_linux_explicit_synchronization_v1 zwp_linux_explicit_synchronization_v1
 * @section page_iface_zwp_linux_explicit_synchronization_v1_desc Description
 *
 * This global is a factory interface, allowing clients to request
 * explicit synchronization for buffers on a per-surface basis.
 *
 * See zwp_linux_surface_synchronization_v1 for more information.
 *
 * This interface is derived from Chromium's
 * zcr_linux_explicit_synchronization_v1.
 *
 * Warning! The protocol described in this file is experimental and
 * backward incompatible changes may be made. Backward compatible changes
 * may be added together with the corresponding interface version bump.
 * Backward incompatible changes are done by bumping the version number in
 * the protocol and interface names and resetting the interface version.
 * Once the protocol is to be declared stable, the 'z' prefix and the
 * version number in the protocol and interface names are removed and the
 * interface version number is reset.
 * @section page_iface_zwp_linux_explicit_synchronization_v1_api API
 * See @ref iface_zwp_linux_explicit_synchronization_v1.
 */
/**
 * @defgroup iface_zwp_linux_explicit_synchronization_v1 The zwp_linux_explicit_synchronization_v1 interface
 *
 * This global is a factory interface, allowing clients to request
 * explicit synchronization for buffers on a per-surface basis.
 *
 * See zwp_linux_surface_synchronization_v1 for more information.
 *
 * This interface is derived from Chromium's
 * zcr_linux_explicit_synchronization_v1.
 *
 * Warning! The protocol described in this file is experimental and
 * backward incompatible changes may be made. Backward compatible changes
 * may be added together with the corresponding interface version bump.
 * Backward incompatible changes are done by bumping the version number in
 * the protocol and interface names and resetting the interface version.
 * Once the protocol is to be declared stable, the 'z' prefix and the
 * version number in the protocol and interface names are removed and the
 * interface version number is reset.
 */
extern const struct wl_interface zwp_linux_explicit_synchronization_v1_interface;
#endif
#ifndef ZWP_LINUX_SURFACE_SYNCHRONIZATION_V1_INTERFACE
#define ZWP_LINUX_SURFACE_SYNCHRONIZATION_V1_INTERFACE
/**
 * @page page_iface_zwp_linux_surface_synchronization_v1 zwp_linux_surface_synchronization_v1
 * @section page_iface_zwp_linux_surface_synchronization_v1_desc Description
 *
 * This object implements per-surface explicit synchronization.
 *
 * Synchronization refers to co-ordination of pipelined operations performed
 * on buffers. Most GPU clients will schedule an asynchronous operation to
 * render to the buffer, then immediately send the buffer to the compositor
 * to be attached to a surface.
 *
 * In implicit synchronization, ensuring that the rendering operation is
 * complete before the compositor displays the buffer is an implementation
 * detail handled by either the kernel or userspace graphics driver.
 *
 * By contrast, in explicit synchronization, dma_fence objects mark when the
 * asynchronous operations are complete. When submitting a buffer, the
 * client provides an acquire fence which will be waited on before the
 * compositor accesses the buffer. The Wayland server, through a
 * zwp_linux_buffer_release_v1 object, will inform the client with an event
 * which may be accompanied by a release fence, when the compositor will no
 * longer access the buffer contents due to the specific commit that
 * requested the release event.
 *
 * Each surface can be associated with only one object of this interface at
 * any time.
 *
 * In version 1 of this interface, explicit synchronization is only
 * guaranteed to be supported for buffers created with any version of the
 * wp_linux_dmabuf buffer factory. Version 2 additionally guarantees
 * explicit synchronization support for opaque EGL buffers, which is a type
 * of platform specific buffers described in the EGL_WL_bind_wayland_display
 * extension. Compositors are free to support explicit synchronization for
 * additional buffer types.
 * @section page_iface_zwp_linux_surface_synchronization_v1_api API
 * See @ref iface_zwp_linux_surface_synchronization_v1.
 */
/**
 * @defgroup iface_zwp_linux_surface_synchronization_v1 The zwp_linux_surface_synchronization_v1 interface
 *
 * This object implements per-surface explicit synchronization.
 *
 * Synchronization refers to co-ordination of pipelined operations performed
 * on buffers. Most GPU clients will schedule an asynchronous operation to
 * render to the buffer, then immediately send the buffer to the compositor
 * to be attached to a surface.
 *
 * In implicit synchronization, ensuring that the rendering operation is
 * complete before the compositor displays the buffer is an implementation
 * detail handled by either the kernel or userspace graphics driver.
 *
 * By contrast, in explicit synchronization, dma_fence objects mark when the
 * asynchronous operations are complete. When submitting a buffer, the
 * client provides an acquire fence which will be waited on before the
 * compositor accesses the buffer. The Wayland server, through a
 * zwp_linux_buffer_release_v1 object, will inform the client with an event
 * which may be accompanied by a release fence, when the compositor will no
 * longer access the buffer contents due to the specific commit that
 * requested the release event.
 *
 * Each surface can be associated with only one object of this interface at
 * any time.
 *
 * In version 1 of this interface, explicit synchronization is only
 * guaranteed to be supported for buffers created with any version of the
 * wp_linux_dmabuf buffer factory. Version 2 additionally guarantees
 * explicit synchronization support for opaque EGL buffers, which is a type
 * of platform specific buffers described in the EGL_WL_bind_wayland_display
 * extension. Compositors are free to support explicit synchronization for
 * additional buffer types.
 */
extern const struct wl_interface zwp_linux_surface_synchronization_v1_interface;
#endif
#ifndef ZWP_LINUX_BUFFER_RELEASE_V1_INTERFACE
#define ZWP_LINUX_BUFFER_RELEASE_V1_INTERFACE
/**
 * @page page_iface_zwp_linux_buffer_release_v1 zwp_linux_buffer_release_v1
 * @section page_iface_zwp_linux_buffer_release_v1_desc Description
 *
 * This object is instantiated in response to a
 * zwp_linux_surface_synchronization_v1.get_release request.
 *
 * It provides an alternative to wl_buffer.release events, providing a
 * unique release from a single wl_surface.commit request. The release event
 * also supports explicit synchronization, providing a fence FD for the
 * client to synchronize against.
 *
 * Exactly one event, either a fenced_release or an immediate_release, will
 * be emitted for the wl_surface.commit request. The compositor can choose
 * release by release which event it uses.
 *
 * This event does not replace wl_buffer.release events; servers are still
 * required to send those events.
 *
 * Once a buffer release object has delivered a 'fenced_release' or an
 * 'immediate_release' event it is automatically destroyed.
 * @section page_iface_zwp_linux_buffer_release_v1_api API
 * See @ref iface_zwp_linux_buffer_release_v1.
 */
/**
 * @defgroup iface_zwp_linux_buffer_release_v1 The zwp_linux_buffer_release_v1 interface
 *
 * This object is instantiated in response to a
 * zwp_linux_surface_synchronization_v1.get_release request.
 *
 * It provides an alternative to wl_buffer.release events, providing a
 * unique release from a single wl_surface.commit request. The release event
 * also supports explicit synchronization, providing a fence FD for the
 * client to synchronize against.
 *
 * Exactly one event, either a fenced_release or an immediate_release, will
 * be emitted for the wl_surface.commit request. The compositor can choose
 * release by release which event it uses.
 *
 * This event does not replace wl_buffer.release events; servers are still
 * required to send those events.
 *
 * Once a buffer release object has delivered a 'fenced_release' or an
 * 'immediate_release' event it is automatically destroyed.
 */
extern const struct wl_interface zwp_linux_buffer_release_v1_interface;
#endif

#ifndef ZWP_LINUX_EXPLICIT_SYNCHRONIZATION_V1_ERROR_ENUM
#define ZWP_LINUX_EXPLICIT_SYNCHRONIZATION_V1_ERROR_ENUM
enum zwp_linux_explicit_synchronization_v1_error {
	/**
	 * the surface already has a synchronization object associated
	 */
	ZWP_LINUX_EXPLICIT_SYNCHRONIZATION_V1_ERROR_SYNCHRONIZATION_EXISTS = 0,
};
#endif /* ZWP_LINUX_EXPLICIT_SYNCHRONIZATION_V1_ERROR_ENUM */

#define ZWP_LINUX_EXPLICIT_SYNCHRONIZATION_V1_DESTROY 0
#define ZWP_LINUX_EXPLICIT_SYNCHRONIZATION_V1_GET_SYNCHRONIZATION 1


/**
 * @ingroup iface_zwp_linux_explicit_synchronization_v1
 */
#define ZWP_LINUX_EXPLICIT_SYNCHRONIZATION_V1_DESTROY_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_linux_explicit_synchronization_v1
 */
#define ZWP_LINUX_EXPLICIT_SYNCHRONIZATION_V1_GET_SYNCHRONIZATION_SINCE_VERSION 1

/** @ingroup iface_zwp_linux_explicit_synchronization_v1 */
static inline void
zwp_linux_explicit_synchronization_v1_set_user_data(struct zwp_linux_explicit_synchronization_v1 *zwp_linux_explicit_synchronization_v1, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) zwp_linux_explicit_synchronization_v1, user_data);
}

/** @ingroup iface_zwp_linux_explicit_synchronization_v1 */
static inline void *
zwp_linux_explicit_synchronization_v1_get_user_data(struct zwp_linux_explicit_synchronization_v1 *zwp_linux_explicit_synchronization_v1)
{
	return wl_proxy_get_user_data((struct wl_proxy *) zwp_linux_explicit_synchronization_v1);
}

static inline uint32_t
zwp_linux_explicit_synchronization_v1_get_version(struct zwp_linux_explicit_synchronization_v1 *zwp_linux_explicit_synchronization_v1)
{
	return wl_proxy_get_version((struct wl_proxy *) zwp_linux_explicit_synchronization_v1);
}

/**
 * @ingroup iface_zwp_linux_explicit_synchronization_v1
 *
 * Destroy this explicit synchronization factory object. Other objects,
 * including zwp_linux_surface_synchronization_v1 objects created by this
 * factory, shall not be affected by this request.
 */
static inline void
zwp_linux_explicit_synchronization_v1_destroy(struct zwp_linux_explicit_synchronization_v1 *zwp_linux_explicit_synchronization_v1)
{
	wl_proxy_marshal((struct wl_proxy *) zwp_linux_explicit_synchronization_v1,
			 ZWP_LINUX_EXPLICIT_SYNCHRONIZATION_V1_DESTROY);

	wl_proxy_destroy((struct wl_proxy *) zwp_linux_explicit_synchronization_v1);
}

/**
 * @ingroup iface_zwp_linux_explicit_synchronization_v1
 *
 * Instantiate an interface extension for the given wl_surface to provide
 * explicit synchronization.
 *
 * If the given wl_surface already has an explicit synchronization object
 * associated, the synchronization_exists protocol error is raised.
 *
 * Graphics APIs, like EGL or Vulkan, that manage the buffer queue and
 * commits of a wl_surface themselves, are likely to be using this
 * extension internally. If a client is using such an API for a
 * wl_surface, it should not directly use this extension on that surface,
 * to avoid raising a synchronization_exists protocol error.
 */
static inline struct zwp_linux_surface_synchronization_v1 *
zwp_linux_explicit_synchronization_v1_get_synchronization(struct zwp_linux_explicit_synchronization_v1 *zwp_linux_explicit_synchronization_v1, struct wl_surface *surface)
{
	struct wl_proxy *id;

	id = wl_proxy_marshal_constructor((struct wl_proxy *) zwp_linux_explicit_synchronization_v1,
			 ZWP_LINUX_EXPLICIT_SYNCHRONIZATION_V1_GET_SYNCHRONIZATION, &zwp_linux_surface_synchronization_v1_interface, NULL, surface);

	return (struct zwp_linux_surface_synchronization_v1 *) id;
}

#ifndef ZWP_LINUX_SURFACE_SYNCHRONIZATION_V1_ERROR_ENUM
#define ZWP_LINUX_SURFACE_SYNCHRONIZATION_V1_ERROR_ENUM
enum zwp_linux_surface_synchronization_v1_error {
	/**
	 * the fence specified by the client could not be imported
	 */
	ZWP_LINUX_SURFACE_SYNCHRONIZATION_V1_ERROR_INVALID_FENCE = 0,
	/**
	 * multiple fences added for a single surface commit
	 */
	ZWP_LINUX_SURFACE_SYNCHRONIZATION_V1_ERROR_DUPLICATE_FENCE = 1,
	/**
	 * multiple releases added for a single surface commit
	 */
	ZWP_LINUX_SURFACE_SYNCHRONIZATION_V1_ERROR_DUPLICATE_RELEASE = 2,
	/**
	 * the associated wl_surface was destroyed
	 */
	ZWP_LINUX_SURFACE_SYNCHRONIZATION_V1_ERROR_NO_SURFACE = 3,
	/**
	 * the buffer does not support explicit synchronization
	 */
	ZWP_LINUX_SURFACE_SYNCHRONIZATION_V1_ERROR_UNSUPPORTED_BUFFER = 4,
	/**
	 * no buffer was attached
	 */
	ZWP_LINUX_SURFACE_SYNCHRONIZATION_V1_ERROR_NO_BUFFER = 5,
};
#endif /* ZWP_LINUX_SURFACE_SYNCHRONIZATION_V1_ERROR_ENUM */

#define ZWP_LINUX_SURFACE_SYNCHRONIZATION_V1_DESTROY 0
#define ZWP_LINUX_SURFACE_SYNCHRONIZATION_V1_SET_ACQUIRE_FENCE 1
#define ZWP_LINUX_SURFACE_SYNCHRONIZATION_V1_GET_RELEASE 2


/**
 * @ingroup iface_zwp_linux_surface_synchronization_v1
 */
#define ZWP_LINUX_SURFACE_SYNCHRONIZATION_V1_DESTROY_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_linux_surface_synchronization_v1
 */
#define ZWP_LINUX_SURFACE_SYNCHRONIZATION_V1_SET_ACQUIRE_FENCE_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_linux_surface_synchronization_v1
 */
#define ZWP_LINUX_SURFACE_SYNCHRONIZATION_V1_GET_RELEASE_SINCE_VERSION 1

/** @ingroup iface_zwp_linux_surface_synchronization_v1 */
static inline void
zwp_linux_surface_synchronization_v1_set_user_data(struct zwp_linux_surface_synchronization_v1 *zwp_linux_surface_synchronization_v1, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) zwp_linux_surface_synchronization_v1, user_data);
}

/** @ingroup iface_zwp_linux_surface_synchronization_v1 */
static inline void *
zwp_linux_surface_synchronization_v1_get_user_data(struct zwp_linux_surface_synchronization_v1 *zwp_linux_surface_synchronization_v1)
{
	return wl_proxy_get_user_data((struct wl_proxy *) zwp_linux_surface_synchronization_v1);
}

static inline uint32_t
zwp_linux_surface_synchronization_v1_get_version(struct zwp_linux_surface_synchronization_v1 *zwp_linux_surface_synchronization_v1)
{
	return wl_proxy_get_version((struct wl_proxy *) zwp_linux_surface_synchronization_v1);
}

/**
 * @ingroup iface_zwp_linux_surface_synchronization_v1
 *
 * Destroy this explicit synchronization object.
 *
 * Any fence set by this object with set_acquire_fence since the last
 * commit will be discarded by the server. Any fences set by this object
 * before the last commit are not affected.
 *
 * zwp_linux_buffer_release_v1 objects created by this object are not
 * affected by this request.
 */
static inline void
zwp_linux_surface_synchronization_v1_destroy(struct zwp_linux_surface_synchronization_v1 *zwp_linux_surface_synchronization_v1)
{
	wl_proxy_marshal((struct wl_proxy *) zwp_linux_surface_synchronization_v1,
			 ZWP_LINUX_SURFACE_SYNCHRONIZATION_V1_DESTROY);

	wl_proxy_destroy((struct wl_proxy *) zwp_linux_surface_synchronization_v1);
}

/**
 * @ingroup iface_zwp_linux_surface_synchronization_v1
 *
 * Set the acquire fence that must be signaled before the compositor
 * may sample from the buffer attached with wl_surface.attach. The fence
 * is a dma_fence kernel object.
 *
 * The acquire fence is double-buffered state, and will be applied on the
 * next wl_surface.commit request for the associated surface. Thus, it
 * applies only to the buffer that is attached to the surface at commit
 * time.
 *
 * If the provided fd is not a valid dma_fence fd, then an INVALID_FENCE
 * error is raised.
 *
 * If a fence has already been attached during the same commit cycle, a
 * DUPLICATE_FENCE error is raised.
 *
 * If the associated wl_surface was destroyed, a NO_SURFACE error is
 * raised.
 *
 * If at surface commit time the attached buffer does not support explicit
 * synchronization, an UNSUPPORTED_BUFFER error is raised.
 *
 * If at surface commit time there is no buffer attached, a NO_BUFFER
 * error is raised.
 */
static inline void
zwp_linux_surface_synchronization_v1_set_acquire_fence(struct zwp_linux_surface_synchronization_v1 *zwp_linux_surface_synchronization_v1, int32_t fd)
{
	wl_proxy_marshal((struct wl_proxy *) zwp_linux_surface_synchronization_v1,
			 ZWP_LINUX_SURFACE_SYNCHRONIZATION_V1_SET_ACQUIRE_FENCE, fd);
}

/**
 * @ingroup iface_zwp_linux_surface_synchronization_v1
 *
 * Create a listener for the release of the buffer attached by the
 * client with wl_surface.attach. See zwp_linux_buffer_release_v1
 * documentation for more information.
 *
 * The release object is double-buffered state, and will be associated
 * with the buffer that is attached to the surface at wl_surface.commit
 * time.
 *
 * If a zwp_linux_buffer_release_v1 object has already been requested for
 * the surface in the same commit cycle, a DUPLICATE_RELEASE error is
 * raised.
 *
 * If the associated wl_surface was destroyed, a NO_SURFACE error
 * is raised.
 *
 * If at surface commit time there is no buffer attached, a NO_BUFFER
 * error is raised.
 */
static inline struct zwp_linux_buffer_release_v1 *
zwp_linux_surface_synchronization_v1_get_release(struct zwp_linux_surface_synchronization_v1 *zwp_linux_surface_synchronization_v1)
{
	struct wl_proxy *release;

	release = wl_proxy_marshal_constructor((struct wl_proxy *) zwp_linux_surface_synchronization_v1,
			 ZWP_LINUX_SURFACE_SYNCHRONIZATION_V1_GET_RELEASE, &zwp_linux_buffer_release_v1_interface, NULL);

	return (struct zwp_linux_buffer_release_v1 *) release;
}

/**
 * @ingroup iface_zwp_linux_buffer_release_v1
 * @struct zwp_linux_buffer_release_v1_listener
 */
struct zwp_linux_buffer_release_v1_listener {
	/**
	 * release buffer with fence
	 *
	 * Sent when the compositor has finalised its usage of the
	 * associated buffer for the relevant commit, providing a dma_fence
	 * which will be signaled when all operations by the compositor on
	 * that buffer for that commit have finished.
	 *
	 * Once the fence has signaled, and assuming the associated buffer
	 * is not pending release from other wl_surface.commit requests, no
	 * additional explicit or implicit synchronization is required to
	 * safely reuse or destroy the buffer.
	 *
	 * This event destroys the zwp_linux_buffer_release_v1 object.
	 * @param fence fence for last operation on buffer
	 */
	void (*fenced_release)(void *data,
			       struct zwp_linux_buffer_release_v1 *zwp_linux_buffer_release_v1,
			       int32_t fence);
	/**
	 * release buffer immediately
	 *
	 * Sent when the compositor has finalised its usage of the
	 * associated buffer for the relevant commit, and either performed
	 * no operations using it, or has a guarantee that all its
	 * operations on that buffer for that commit have finished.
	 *
	 * Once this event is received, and assuming the associated buffer
	 * is not pending release from other wl_surface.commit requests, no
	 * additional explicit or implicit synchronization is required to
	 * safely reuse or destroy the buffer.
	 *
	 * This event destroys the zwp_linux_buffer_release_v1 object.
	 */
	void (*immediate_release)(void *data,
				  struct zwp_linux_buffer_release_v1 *zwp_linux_buffer_release_v1);
};

/**
 * @ingroup iface_zwp_linux_buffer_release_v1
 */
static inline int
zwp_linux_buffer_release_v1_add_listener(struct zwp_linux_buffer_release_v1 *zwp_linux_buffer_release_v1,
					 const struct zwp_linux_buffer_release_v1_listener *listener, void *data)
{
	return wl_proxy_add_listener((struct wl_proxy *) zwp_linux_buffer_release_v1,
				     (void (**)(void)) listener, data);
}

/**
 * @ingroup iface_zwp_linux_buffer_release_v1
 */
#define ZWP_LINUX_BUFFER_RELEASE_V1_FENCED_RELEASE_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_linux_buffer_release_v1
 */
#define ZWP_LINUX_BUFFER_RELEASE_V1_IMMEDIATE_RELEASE_SINCE_VERSION 1


/** @ingroup iface_zwp_linux_buffer_release_v1 */
static inline void
zwp_linux_buffer_release_v1_set_user_data(struct zwp_linux_buffer_release_v1 *zwp_linux_buffer_release_v1, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) zwp_linux_buffer_release_v1, user_data);
}

/** @ingroup iface_zwp_linux_buffer_release_v1 */
static inline void *
zwp_linux_buffer_release_v1_get_user_data(struct zwp_linux_buffer_release_v1 *zwp_linux_buffer_release_v1)
{
	return wl_proxy_get_user_data((struct wl_proxy *) zwp_linux_buffer_release_v1);
}

static inline uint32_t
zwp_linux_buffer_release_v1_get_version(struct zwp_linux_buffer_release_v1 *zwp_linux_buffer_release_v1)
{
	return wl_proxy_get_version((struct wl_proxy *) zwp_linux_buffer_release_v1);
}

/** @ingroup iface_zwp_linux_buffer_release_v1 */
static inline void
zwp_linux_buffer_release_v1_destroy(struct zwp_linux_buffer_release_v1 *zwp_linux_buffer_release_v1)
{
	wl_proxy_destroy((struct wl_proxy *) zwp_linux_buffer_release_v1);
}

#ifdef  __cplusplus
}
#endif

#endif
