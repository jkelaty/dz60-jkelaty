#pragma once

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SWITCH:
            /* MacOS Desktop Switcher */
            if (record->event.pressed) {
                tap_code16(C(KC_UP)); // Ctrl + Up
            }
            break;
        default:
            break;
    }
    return true;
}

