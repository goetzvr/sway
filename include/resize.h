#ifndef _SWAY_RESIZE_H
#define _SWAY_RESIZE_H
#include <stdbool.h>

bool mouse_resize_tiled(struct wlc_origin prev_pos);
bool resize_tiled(int amount, bool use_width);

#endif
