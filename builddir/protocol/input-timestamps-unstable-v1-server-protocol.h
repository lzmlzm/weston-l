/* Generated by wayland-scanner 1.19.90 */

#ifndef INPUT_TIMESTAMPS_UNSTABLE_V1_SERVER_PROTOCOL_H
#define INPUT_TIMESTAMPS_UNSTABLE_V1_SERVER_PROTOCOL_H

#include <stdint.h>
#include <stddef.h>
#include "wayland-server.h"

#ifdef  __cplusplus
extern "C" {
#endif

struct wl_client;
struct wl_resource;

/**
 * @page page_input_timestamps_unstable_v1 The input_timestamps_unstable_v1 protocol
 * High-resolution timestamps for input events
 *
 * @section page_desc_input_timestamps_unstable_v1 Description
 *
 * This protocol specifies a way for a client to request and receive
 * high-resolution timestamps for input events.
 *
 * Warning! The protocol described in this file is experimental and
 * backward incompatible changes may be made. Backward compatible changes
 * may be added together with the corresponding interface version bump.
 * Backward incompatible changes are done by bumping the version number in
 * the protocol and interface names and resetting the interface version.
 * Once the protocol is to be declared stable, the 'z' prefix and the
 * version number in the protocol and interface names are removed and the
 * interface version number is reset.
 *
 * @section page_ifaces_input_timestamps_unstable_v1 Interfaces
 * - @subpage page_iface_zwp_input_timestamps_manager_v1 - context object for high-resolution input timestamps
 * - @subpage page_iface_zwp_input_timestamps_v1 - context object for input timestamps
 * @section page_copyright_input_timestamps_unstable_v1 Copyright
 * <pre>
 *
 * Copyright © 2017 Collabora, Ltd.
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
 * </pre>
 */
struct wl_keyboard;
struct wl_pointer;
struct wl_touch;
struct zwp_input_timestamps_manager_v1;
struct zwp_input_timestamps_v1;

#ifndef ZWP_INPUT_TIMESTAMPS_MANAGER_V1_INTERFACE
#define ZWP_INPUT_TIMESTAMPS_MANAGER_V1_INTERFACE
/**
 * @page page_iface_zwp_input_timestamps_manager_v1 zwp_input_timestamps_manager_v1
 * @section page_iface_zwp_input_timestamps_manager_v1_desc Description
 *
 * A global interface used for requesting high-resolution timestamps
 * for input events.
 * @section page_iface_zwp_input_timestamps_manager_v1_api API
 * See @ref iface_zwp_input_timestamps_manager_v1.
 */
/**
 * @defgroup iface_zwp_input_timestamps_manager_v1 The zwp_input_timestamps_manager_v1 interface
 *
 * A global interface used for requesting high-resolution timestamps
 * for input events.
 */
extern const struct wl_interface zwp_input_timestamps_manager_v1_interface;
#endif
#ifndef ZWP_INPUT_TIMESTAMPS_V1_INTERFACE
#define ZWP_INPUT_TIMESTAMPS_V1_INTERFACE
/**
 * @page page_iface_zwp_input_timestamps_v1 zwp_input_timestamps_v1
 * @section page_iface_zwp_input_timestamps_v1_desc Description
 *
 * Provides high-resolution timestamp events for a set of subscribed input
 * events. The set of subscribed input events is determined by the
 * zwp_input_timestamps_manager_v1 request used to create this object.
 * @section page_iface_zwp_input_timestamps_v1_api API
 * See @ref iface_zwp_input_timestamps_v1.
 */
/**
 * @defgroup iface_zwp_input_timestamps_v1 The zwp_input_timestamps_v1 interface
 *
 * Provides high-resolution timestamp events for a set of subscribed input
 * events. The set of subscribed input events is determined by the
 * zwp_input_timestamps_manager_v1 request used to create this object.
 */
extern const struct wl_interface zwp_input_timestamps_v1_interface;
#endif

/**
 * @ingroup iface_zwp_input_timestamps_manager_v1
 * @struct zwp_input_timestamps_manager_v1_interface
 */
struct zwp_input_timestamps_manager_v1_interface {
	/**
	 * destroy the input timestamps manager object
	 *
	 * Informs the server that the client will no longer be using
	 * this protocol object. Existing objects created by this object
	 * are not affected.
	 */
	void (*destroy)(struct wl_client *client,
			struct wl_resource *resource);
	/**
	 * subscribe to high-resolution keyboard timestamp events
	 *
	 * Creates a new input timestamps object that represents a
	 * subscription to high-resolution timestamp events for all
	 * wl_keyboard events that carry a timestamp.
	 *
	 * If the associated wl_keyboard object is invalidated, either
	 * through client action (e.g. release) or server-side changes, the
	 * input timestamps object becomes inert and the client should
	 * destroy it by calling zwp_input_timestamps_v1.destroy.
	 * @param keyboard the wl_keyboard object for which to get timestamp events
	 */
	void (*get_keyboard_timestamps)(struct wl_client *client,
					struct wl_resource *resource,
					uint32_t id,
					struct wl_resource *keyboard);
	/**
	 * subscribe to high-resolution pointer timestamp events
	 *
	 * Creates a new input timestamps object that represents a
	 * subscription to high-resolution timestamp events for all
	 * wl_pointer events that carry a timestamp.
	 *
	 * If the associated wl_pointer object is invalidated, either
	 * through client action (e.g. release) or server-side changes, the
	 * input timestamps object becomes inert and the client should
	 * destroy it by calling zwp_input_timestamps_v1.destroy.
	 * @param pointer the wl_pointer object for which to get timestamp events
	 */
	void (*get_pointer_timestamps)(struct wl_client *client,
				       struct wl_resource *resource,
				       uint32_t id,
				       struct wl_resource *pointer);
	/**
	 * subscribe to high-resolution touch timestamp events
	 *
	 * Creates a new input timestamps object that represents a
	 * subscription to high-resolution timestamp events for all
	 * wl_touch events that carry a timestamp.
	 *
	 * If the associated wl_touch object becomes invalid, either
	 * through client action (e.g. release) or server-side changes, the
	 * input timestamps object becomes inert and the client should
	 * destroy it by calling zwp_input_timestamps_v1.destroy.
	 * @param touch the wl_touch object for which to get timestamp events
	 */
	void (*get_touch_timestamps)(struct wl_client *client,
				     struct wl_resource *resource,
				     uint32_t id,
				     struct wl_resource *touch);
};


/**
 * @ingroup iface_zwp_input_timestamps_manager_v1
 */
#define ZWP_INPUT_TIMESTAMPS_MANAGER_V1_DESTROY_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_input_timestamps_manager_v1
 */
#define ZWP_INPUT_TIMESTAMPS_MANAGER_V1_GET_KEYBOARD_TIMESTAMPS_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_input_timestamps_manager_v1
 */
#define ZWP_INPUT_TIMESTAMPS_MANAGER_V1_GET_POINTER_TIMESTAMPS_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_input_timestamps_manager_v1
 */
#define ZWP_INPUT_TIMESTAMPS_MANAGER_V1_GET_TOUCH_TIMESTAMPS_SINCE_VERSION 1

/**
 * @ingroup iface_zwp_input_timestamps_v1
 * @struct zwp_input_timestamps_v1_interface
 */
struct zwp_input_timestamps_v1_interface {
	/**
	 * destroy the input timestamps object
	 *
	 * Informs the server that the client will no longer be using
	 * this protocol object. After the server processes the request, no
	 * more timestamp events will be emitted.
	 */
	void (*destroy)(struct wl_client *client,
			struct wl_resource *resource);
};

#define ZWP_INPUT_TIMESTAMPS_V1_TIMESTAMP 0

/**
 * @ingroup iface_zwp_input_timestamps_v1
 */
#define ZWP_INPUT_TIMESTAMPS_V1_TIMESTAMP_SINCE_VERSION 1

/**
 * @ingroup iface_zwp_input_timestamps_v1
 */
#define ZWP_INPUT_TIMESTAMPS_V1_DESTROY_SINCE_VERSION 1

/**
 * @ingroup iface_zwp_input_timestamps_v1
 * Sends an timestamp event to the client owning the resource.
 * @param resource_ The client's resource
 * @param tv_sec_hi high 32 bits of the seconds part of the timestamp
 * @param tv_sec_lo low 32 bits of the seconds part of the timestamp
 * @param tv_nsec nanoseconds part of the timestamp
 */
static inline void
zwp_input_timestamps_v1_send_timestamp(struct wl_resource *resource_, uint32_t tv_sec_hi, uint32_t tv_sec_lo, uint32_t tv_nsec)
{
	wl_resource_post_event(resource_, ZWP_INPUT_TIMESTAMPS_V1_TIMESTAMP, tv_sec_hi, tv_sec_lo, tv_nsec);
}

#ifdef  __cplusplus
}
#endif

#endif
