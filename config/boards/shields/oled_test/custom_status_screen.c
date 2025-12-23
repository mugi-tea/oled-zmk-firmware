/*
 * Copyright (c) 2024 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 */

#include <lvgl.h>

lv_obj_t *zmk_display_status_screen() {
    lv_obj_t *screen = lv_obj_create(NULL);

    lv_obj_t *label = lv_label_create(screen);
    lv_label_set_text(label, "HELLO");
    lv_obj_center(label);

    return screen;
}
