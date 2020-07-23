#pragma once

const int LED_INDICATOR = 7;

const rgblight_segment_t PROGMEM volume_rgb_indicator[]  = RGBLIGHT_LAYER_SEGMENTS( {LED_INDICATOR, 1, HSV_CYAN}   );
const rgblight_segment_t PROGMEM desktop_rgb_indicator[] = RGBLIGHT_LAYER_SEGMENTS( {LED_INDICATOR, 1, HSV_RED}    );
const rgblight_segment_t PROGMEM browser_rgb_indicator[] = RGBLIGHT_LAYER_SEGMENTS( {LED_INDICATOR, 1, HSV_PURPLE} );
const rgblight_segment_t PROGMEM history_rgb_indicator[] = RGBLIGHT_LAYER_SEGMENTS( {LED_INDICATOR, 1, HSV_PINK}   );

const rgblight_segment_t* const PROGMEM jkelaty_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    volume_rgb_indicator,
    desktop_rgb_indicator,
    browser_rgb_indicator,
    history_rgb_indicator
);

void keyboard_post_init_user(void) {
    rgblight_layers = jkelaty_rgb_layers;
}
