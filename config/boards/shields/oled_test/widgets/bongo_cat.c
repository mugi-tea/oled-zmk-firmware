/*
 * Copyright (c) 2024 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include <zephyr/kernel.h>

#include <zephyr/logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#include <zmk/display.h>

#include "bongo_cat.h"

static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

int zmk_widget_bongo_cat_init(struct zmk_widget_bongo_cat *widget, lv_obj_t *parent) {
    widget->obj = lv_label_create(parent);
    lv_label_set_text(widget->obj, "TEST");
    lv_obj_center(widget->obj);

    sys_slist_append(&widgets, &widget->node);

    return 0;
}

lv_obj_t *zmk_widget_bongo_cat_obj(struct zmk_widget_bongo_cat *widget) {
    return widget->obj;
}
