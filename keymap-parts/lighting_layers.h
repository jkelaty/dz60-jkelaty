#pragma once

// LED position for dial
const int LED_POSITION = 7;

const rgblight_segment_t PROGMEM volume_rgb_indicator[]  = RGBLIGHT_LAYER_SEGMENTS( {LED_POSITION, 1, HSV_CYAN}   );
const rgblight_segment_t PROGMEM desktop_rgb_indicator[] = RGBLIGHT_LAYER_SEGMENTS( {LED_POSITION, 1, HSV_RED}    );
const rgblight_segment_t PROGMEM browser_rgb_indicator[] = RGBLIGHT_LAYER_SEGMENTS( {LED_POSITION, 1, HSV_PURPLE} );
const rgblight_segment_t PROGMEM history_rgb_indicator[] = RGBLIGHT_LAYER_SEGMENTS( {LED_POSITION, 1, HSV_PINK}   );

const rgblight_segment_t* const PROGMEM jkelaty_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    [VOLUME]  = volume_rgb_indicator,
    [DESKTOP] = desktop_rgb_indicator,
    [BROWSER] = browser_rgb_indicator,
    [HISTORY] = history_rgb_indicator
);

void keyboard_post_init_user(void) {
    rgblight_layers = jkelaty_rgb_layers;
}

