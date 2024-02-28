// Copyright 2022 @filterpaper
// SPDX-License-Identifier: GPL-2.0+

#include QMK_KEYBOARD_H

// borderlands 3, left hand only
//	1	2	3	4	menu
//	sprint	left	forward	right	reload
//	crouch	grenade	back	mode	2use
//				use	jump

// qmk flash --keyboard a_dux --keymap game --bootloader dfu-split-left

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_2(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_TAB,        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    KC_F,    KC_A,    KC_W,    KC_D,    KC_R,        KC_H,    KC_J,    KC_K,    KC_L,    KC_QUOT,
    KC_X,    KC_Z,    KC_S,    KC_C,    KC_Q,        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
                          KC_E, KC_SPC,     KC_SPC,  KC_ENT
    )
};
