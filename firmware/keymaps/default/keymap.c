// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = {
        { KC_ESCAPE, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_AUDIO_VOL_UP, KC_AUDIO_VOL_DOWN },
        { KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL, KC_BACKSPACE, _______ },
        { KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LEFT_BRACKET, KC_RIGHT_BRACKET, KC_BACKSLASH, _______ },
        { KC_CAPS_LOCK, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SEMICOLON, KC_QUOTE, KC_ENTER, _______, _______ },
        { KC_LEFT_SHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_RIGHT_SHIFT, _______, _______, _______ },
        { KC_LEFT_CTRL, KC_LEFT_GUI, KC_LEFT_ALT, KC_SPACE, MO(1), KC_HOME, KC_END, KC_RIGHT_CTRL, _______, _______, _______, _______, _______, _______, _______ }
    },
    [1] = {
        { KC_TILDE, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ },
        { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_DELETE, _______ },
        { _______, _______, _______, _______, _______, _______, _______, _______, KC_UP, _______, _______, _______, _______, _______, _______ },
        { _______, _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______, _______, _______, _______, _______ },
        { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ },
        { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ }
    }
};

// Electrical position to Physical Position
#define ledX(Column) (224 / (15 - 1) * Column)
#define ledY(Row) (64 / (6 - 1) * Row)

led_config_t g_led_config = { 
    // Key Matrix to LED Index
    {
        {  1 }
    }, 
    // LED Index to Physical Position
    {
        { ledX(0),  ledY(0) }
    }, 
    // LED Index to Flag
    {
        0xFF
    }
};