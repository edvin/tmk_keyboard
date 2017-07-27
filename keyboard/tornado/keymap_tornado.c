#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP_TORNADO(
        ESC, 1,   2,   3,   4,   5, BSPC,6,   7,   8,   9,   0,   MINS,EQL,  \
        TAB, Q,   W,   E,   R,   T,      Y,   U,   I,   O,   P,   LBRC,RBRC, \
        FN0, A,   S,   D,   F,   G, ENT, H,   J,   K,   L,   SCLN,QUOT,BSLS, \
        LSFT,Z,   X,   C,   V,   B,      N,   M,   COMM,DOT, SLSH,RSFT,      \
        LCTL,LGUI,LALT,FN1,         SPC,           RALT,FN2, FN2, RCTL),
    /* 1: Mouse layer */
    KEYMAP_TORNADO(
        ESC, F1,  F2,  F3,  F4,  F5,   DEL,F6,  F7,  F8,  F9,  F10, F11, F12,   \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,WH_U,MS_U,  WH_D,TRNS,TRNS,TRNS,\
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,WH_L,MS_L,MS_D,MS_R,WH_R,TRNS,TRNS,  \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,       \
        TRNS,TRNS,TRNS,BTN1,          BTN2,          TRNS,TRNS,TRNS,TRNS),
    /* 2: F + Arrow Keys layer */
    KEYMAP_TORNADO(
        GRV, F1,  F2,  F3,  F4,  F5,   DEL,F6,  F7,  F8,  F9,  F10, F11, F12, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,PGUP,UP,  PGDN,PSCR,SLCK,PAUS,\
        TRNS,TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,HOME,LEFT,DOWN,RGHT,INS,DEL,TRNS,  \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     END,TRNS,TRNS,TRNS,TRNS,TRNS,     \
        TRNS,TRNS,TRNS,TRNS,          TRNS,          TRNS,TRNS,TRNS,TRNS),
};
const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),  // To Mouse overlay
    [1] = ACTION_LAYER_MOMENTARY(2),  // To F + Arrow Keys overlay
    [2] = ACTION_LAYER_TOGGLE(1),     // Toggle F + Arrow Keys overlay,
    [3] = ACTION_LAYER_TOGGLE(2),     // Toggle Mouse overlay
};
