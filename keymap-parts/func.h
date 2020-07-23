#pragma once

void handle_dial_button_on(void);
void handle_dial_button_off(void);

void handle_dial_on(bool clockwise);
void handle_dial_off(void);

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SWITCH:
            /* MacOS Desktop Switcher */
            if (record->event.pressed) {
                register_code(KC_LCTL);
                register_code(KC_UP);
            } else {
                unregister_code(KC_LCTL);
                unregister_code(KC_UP);
            }
            break;
        case DIAL_LI:
            if (record->event.pressed) {
                DIAL_LIGHT = ! DIAL_LIGHT;
                rgblight_set_layer_state(DIAL_SETTING, DIAL_LIGHT);
            }
            break;
        case DIAL_TO:
            /* Increment dial mode */
            if (record->event.pressed) {
                rgblight_set_layer_state(DIAL_SETTING, false);
                DIAL_SETTING += 1;
                DIAL_SETTING %= NUM_DIAL_SETTINGS;
                if (DIAL_LIGHT) {
                    rgblight_set_layer_state(DIAL_SETTING, true);
                }
            }
            break;
        case DIAL_BT:
            if (record->event.pressed) {
                register_code(KC_3);
            } else {
                unregister_code(KC_3);
            }
            /* Handle dial button */
            // if (record->event.pressed) {
            //     handle_dial_button_on();
            // } else {
            //     handle_dial_button_off();
            // }
            break;
        case DIAL_CW:
            if (record->event.pressed) {
                register_code(KC_1);
            } else {
                unregister_code(KC_1);
            }
            /* Set dial directional flag */
            // if (record->event.pressed) {
            //     DIAL_CW_FLAG = true;
            // } else {
            //     DIAL_CW_FLAG = false;
            // }
            break;
        case DIAL_CC:
            if (record->event.pressed) {
                register_code(KC_2);
            } else {
                unregister_code(KC_2);
            }
            /* Handle dial event */
            // if (record->event.pressed) {
            //     handle_dial_on(DIAL_CW_FLAG);
            // } else {
            //     handle_dial_off();
            // }
            break;
        default:
            break;
    }
    return true;
}

void handle_dial_button_on(void) {
    switch (DIAL_SETTING) {
        case VOLUME:
            register_code(KC_MUTE);
            break;
        case DESKTOP:
            break;
        case BROWSER:
            break;
        case HISTORY:
            break;
        default:
            break;
    }
}

void handle_dial_button_off(void) {
    unregister_code(KC_MUTE);
    // ...
}

void handle_dial_on(bool clockwise) {
    switch (DIAL_SETTING) {
        case VOLUME:
            if (clockwise) {
                register_code(KC_VOLU);
            } else {
                register_code(KC_VOLD);
            }
            break;
        case DESKTOP:
            register_code(KC_LCTL);
            if (clockwise) {
                register_code(KC_RGHT);
            } else {
                register_code(KC_LEFT);
            }
            break;
        case BROWSER:
            register_code(KC_LCTL);
            register_code(KC_TAB);
            if (!clockwise) {
                register_code(KC_LSFT);
            }
            break;
        case HISTORY:
            register_code(KC_LCTL);
            register_code(KC_Z);
            if (!clockwise) {
                register_code(KC_LSFT);
            }
            break;
        default:
            break;
    }
}

void handle_dial_off(void) {
    unregister_code(KC_LCTL);
    unregister_code(KC_RGHT);
    unregister_code(KC_LEFT);
    unregister_code(KC_VOLU);
    unregister_code(KC_VOLD);
    unregister_code(KC_LSFT);
    unregister_code(KC_TAB);
    unregister_code(KC_Z);
    // ...
}

