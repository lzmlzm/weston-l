/* Generated by wayland-scanner 1.19.90 */

#ifndef TEXT_CURSOR_POSITION_SERVER_PROTOCOL_H
#define TEXT_CURSOR_POSITION_SERVER_PROTOCOL_H

#include <stdint.h>
#include <stddef.h>
#include "wayland-server.h"

#ifdef  __cplusplus
extern "C" {
#endif

struct wl_client;
struct wl_resource;

/**
 * @page page_text_cursor_position The text_cursor_position protocol
 * @section page_ifaces_text_cursor_position Interfaces
 * - @subpage page_iface_text_cursor_position - 
 */
struct text_cursor_position;
struct wl_surface;

#ifndef TEXT_CURSOR_POSITION_INTERFACE
#define TEXT_CURSOR_POSITION_INTERFACE
/**
 * @page page_iface_text_cursor_position text_cursor_position
 * @section page_iface_text_cursor_position_api API
 * See @ref iface_text_cursor_position.
 */
/**
 * @defgroup iface_text_cursor_position The text_cursor_position interface
 */
extern const struct wl_interface text_cursor_position_interface;
#endif

/**
 * @ingroup iface_text_cursor_position
 * @struct text_cursor_position_interface
 */
struct text_cursor_position_interface {
	/**
	 */
	void (*notify)(struct wl_client *client,
		       struct wl_resource *resource,
		       struct wl_resource *surface,
		       wl_fixed_t x,
		       wl_fixed_t y);
};


/**
 * @ingroup iface_text_cursor_position
 */
#define TEXT_CURSOR_POSITION_NOTIFY_SINCE_VERSION 1

#ifdef  __cplusplus
}
#endif

#endif
