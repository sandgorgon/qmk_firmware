// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
	_BASE_,
	_FUN_,
	_SUPER_,
	_MOUSE_
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE_] = LAYOUT_ortho_5x14(
        QK_REBOOT,      KC_1,      KC_2,   KC_3,        KC_4,           KC_5,         KC_HOME,       KC_PAGE_UP,    KC_6,     KC_7,      KC_8,     KC_9,     KC_0,         KC_EQUAL,
        LCTL(KC_X),     KC_Q,      KC_W,   KC_E,        KC_R,           KC_T,         KC_END,        KC_PAGE_DOWN,  KC_Y,     KC_U,      KC_I,     KC_O,     KC_P,         KC_LEFT_BRACKET,
        LCTL(KC_V),     KC_A,      KC_S,   KC_D,        KC_F,           KC_G,         KC_CAPS_LOCK,  QK_LOCK,       KC_H,     KC_J,      KC_K,     KC_L,     KC_SEMICOLON, KC_RIGHT_BRACKET,
        LCTL(KC_C),     KC_Z,      KC_X,   KC_C,        KC_V,           KC_B,         KC_GRAVE,      KC_BACKSLASH,  KC_N,     KC_M,      KC_COMMA, KC_DOT,   KC_SLASH,     KC_INSERT,
        LCA(KC_DELETE), KC_ESCAPE, KC_TAB, KC_LEFT_GUI, KC_RIGHT_SHIFT, KC_BACKSPACE, KC_RIGHT_CTRL, KC_LALT,       KC_SPACE, MO(_FUN_), KC_MINUS, KC_QUOTE, KC_ENTER,     KC_DELETE
    ),

    [_FUN_] = LAYOUT_ortho_5x14(
        DM_REC1, KC_NO,           KC_NO,            KC_NO,          KC_NO,                   KC_NO,                   KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,  KC_NO, KC_NO,          KC_NO,
        DM_REC2, LSFT(KC_1),      LSFT(KC_2),       KC_UP,          LSFT(KC_4),              LSFT(KC_5),              KC_NO,          KC_NO,          KC_PAGE_UP,     KC_7,           KC_8,   KC_9,  KC_BACKSPACE,   KC_TRANSPARENT,
        DM_PLY1, LSFT(KC_9),      KC_LEFT,          KC_DOWN,        KC_RIGHT,                LSFT(KC_0),              KC_NO,          KC_NO,          KC_PAGE_DOWN,   KC_4,           KC_5,   KC_6,  KC_CAPS_LOCK,   KC_TRANSPARENT,
        DM_PLY2, KC_LEFT_BRACKET, KC_RIGHT_BRACKET, LSFT(KC_3),     LSFT(KC_LEFT_BRACKET),   LSFT(KC_RIGHT_BRACKET),  LSFT(KC_6),     LSFT(KC_7),     LSFT(KC_8),     KC_1,           KC_2,   KC_3,  LSFT(KC_EQUAL), KC_TRANSPARENT,
        DM_RSTP, TO(_SUPER_),     KC_INSERT,        KC_TRANSPARENT, KC_TRANSPARENT,          KC_DELETE,               KC_TRANSPARENT, TO(_MOUSE_),    KC_TRANSPARENT, KC_TRANSPARENT, KC_DOT, KC_0,  KC_EQUAL,       KC_TRANSPARENT
    ),

    [_SUPER_] = LAYOUT_ortho_5x14(
        KC_TRANSPARENT, KC_NO,      KC_NO,             KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,           KC_NO,          KC_NO,               KC_NO,
        KC_TRANSPARENT, KC_INSERT,  KC_HOME,           KC_NO,          KC_END,         KC_PAGE_UP,     KC_NO,          KC_NO,          KC_UP,          KC_F7,          KC_F8,           KC_F9,          KC_F10,              KC_NO,
        KC_TRANSPARENT, KC_DELETE,  KC_NO,             KC_NO,          KC_NO,          KC_PAGE_DOWN,   KC_NO,          KC_NO,          KC_DOWN,        KC_F4,          KC_F5,           KC_F6,          KC_F11,              KC_NO,
        KC_TRANSPARENT, KC_NO,      KC_AUDIO_VOL_UP,   KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_F1,          KC_F2,           KC_F3,          KC_F12,              KC_TRANSPARENT,
        KC_TRANSPARENT, TO(_BASE_), KC_AUDIO_VOL_DOWN, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PRINT_SCREEN, KC_SCROLL_LOCK, KC_MEDIA_PLAY_PAUSE, KC_TRANSPARENT
    ),

    [_MOUSE_] = LAYOUT_ortho_5x14(
        KC_TRANSPARENT, KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_TRANSPARENT, KC_MS_BTN3,  KC_MS_BTN2,     KC_MS_UP,       KC_MS_BTN1,     KC_NO,          KC_NO,          KC_NO,      KC_NO,          KC_LEFT_SHIFT,  KC_MS_WH_UP,    KC_LEFT_CTRL,   KC_NO,          KC_NO,
        KC_TRANSPARENT, KC_DELETE,   KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_BTN4,     KC_NO,          KC_NO,      KC_NO,          KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_RIGHT, KC_NO,          KC_NO,
        KC_TRANSPARENT, KC_NO,       KC_NO,          KC_NO,          KC_NO,          KC_MS_BTN5,     KC_NO,          KC_NO,      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_TRANSPARENT, TO(_SUPER_), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(_BASE_), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO
    )
};
