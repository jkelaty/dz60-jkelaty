#pragma once

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_all(
        KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  XXXXXXX, KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT, XXXXXXX, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_DEL,
        KC_LCTL, KC_LALT, KC_LGUI,                   XXXXXXX, KC_SPC,  XXXXXXX,                   MO(MODF),MO(CONT),KC_LEFT, KC_DOWN, KC_RGHT
    ),
    
    [MODF] = LAYOUT_all(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX, KC_DEL,
        SWITCH,  _______, KC_UP,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_GRV,
        _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, XXXXXXX, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_SLEP, KC_VOLU, _______,
        RESET,   EEP_RST, _______,                   XXXXXXX, _______, XXXXXXX,                   _______, _______, KC_BRID, KC_VOLD, KC_BRIU
    ),
    
    [CONT] = LAYOUT_all(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_GRV,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, XXXXXXX, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MPLY, _______,
        _______, _______, _______,                   XXXXXXX, _______, XXXXXXX,                   _______, _______, KC_MPRV, KC_MUTE, KC_MNXT
    )
};

