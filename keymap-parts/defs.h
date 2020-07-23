#pragma once

/*
 * Custom keycodes
 */
enum jkelaty_keycodes {
    SWITCH = SAFE_RANGE,
    DIAL_LI,  // Dial light indicator toggle
    DIAL_TO,  // Dial mode toggle
    DIAL_BT,  // Dial button switch
    DIAL_CW,  // Dial clockwise
    DIAL_CC   // Dial counter-clockwise
};

/*
 * Rotary encoder (dial) settings/modes
 */
enum dial_settings {
    VOLUME = 0,
    DESKTOP,
    BROWSER,
    HISTORY,
    NUM_DIAL_SETTINGS
};

/*
 * KB layers
 */
enum jkelaty_layers {
    BASE = 0,
    MODF
};

/*
 * Globals
 */
int DIAL_SETTING = VOLUME;
bool DIAL_CW_FLAG = false;
bool DIAL_LIGHT = false;

