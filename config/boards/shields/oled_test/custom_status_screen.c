/*
 * Copyright (c) 2024 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 */

#include "widgets/bongo_cat.h"

#include <zephyr/logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

static struct zmk_widget_bongo_cat bongo_cat_widget;

lv_obj_t *zmk_display_status_screen() {
    lv_obj_t *screen;

    screen = lv_obj_create(NULL);

    zmk_widget_bongo_cat_init(&bongo_cat_widget, screen);
    lv_obj_center(zmk_widget_bongo_cat_obj(&bongo_cat_widget));

    return screen;
}
