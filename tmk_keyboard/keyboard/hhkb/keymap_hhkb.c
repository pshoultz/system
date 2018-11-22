/*
 * HHKB Layout
 */
#include "keymap_common.h"


#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
        /* Layer: Typing
     * ,-----------------------------------------------------------.
     * |CTl|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
     * |-----------------------------------------------------------|
     * |ESC   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |TRN|
     * `-----------------------------------------------------------'
     *       |Alt|Gui  |         Space         |Gui  |Alt|
     *       `-------------------------------------------'
     */
    KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV,   \
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC,       \
           LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,             \
           LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,RGUI,             \
                FN1,LALT,         SPC,                RALT,FN2),

        /* Layer 1: Movement and Function Keys
     * ,-----------------------------------------------------------.
     * |ESC| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|   |   |
     * |-----------------------------------------------------------|
     * |   |   |   |   |   |   |   |   |HOME|END|   |    |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |LEFT|DOWN|UP|RGHT|   |   |Enter |
     * |-----------------------------------------------------------|
     * |      |   |DEL|   |   |   |   |   |   |PGDN|PGUP|      |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
    KEYMAP(ESC, F1,  F2,  F3,  F4,  F5,  F6,    F7,    F8,     F9,   F10,  F11,  F12,  NO,  FN0,   \
           NO,  NO,  NO,  NO,  NO,  NO,  NO,    NO,    HOME,   END,  NO,   NO,   NO,   BSPC,       \
           NO,  NO,  NO,  NO,  NO,  NO,  LEFT,  DOWN,  UP,     RGHT, NO,   NO,   ENT,              \
           NO,  NO,  DEL, NO,  NO,  NO,  NO,    NO,    PGDN,   PGUP, NO,   NO,   TRNS,               \
                TRNS,NO,          NO,               NO,TRNS),

        /* Layer 2: Mouse
     * ,-----------------------------------------------------------.
     * |   |ACL0|ACL1|ACL2|   |   |   |   |   |   |   |   |  |   | |
     * |-----------------------------------------------------------|
     * |    |   |   |   |   |   |   |   |WH_L|WH_D|WH_U|WH_R|   |  |
     * |-----------------------------------------------------------|
     * |      |BTN1|BTN2|   |   |   |MS_L|MS_D|MS_U|MS_R|   |   |  |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |PGUP|PGDN|   |   |    |
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
    KEYMAP(NO,  ACL0,  ACL1,  ACL2,  NO,    NO,  NO,    NO,    NO,     NO,   NO,   NO,   NO,  NO,  FN0,   \
           NO,  NO,    NO,    NO,    NO,    NO,  WH_L,  WH_D,  WH_U,   WH_R, NO,   NO,   NO,  NO,       \
           NO,  BTN1,  BTN2,  NO,    NO,    NO,  MS_L,  MS_D,  MS_U,   MS_R, NO,   NO,   NO,              \
           NO,  NO,    NO,    NO,    NO,    NO,  NO,    NO,    PGDN,   PGUP, NO,   NO,   TRNS,               \
                TRNS,NO,          NO,               NO,TRNS),
};

/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const action_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
    [0]  = ACTION_LAYER_MOMENTARY(1),
    [1]  = ACTION_LAYER_MOMENTARY(2),
    [2]  = ACTION_LAYER_MOMENTARY(3),
    [3]  = ACTION_LAYER_MOMENTARY(4),
    [4]  = ACTION_LAYER_MOMENTARY(5),
    [5]  = ACTION_LAYER_MOMENTARY(6),
    [6]  = ACTION_LAYER_MOMENTARY(7),
    [7]  = ACTION_LAYER_TOGGLE(1),
    [8]  = ACTION_LAYER_TOGGLE(2),
    [9]  = ACTION_LAYER_TOGGLE(3),
    [10] = ACTION_LAYER_TAP_TOGGLE(1),
    [11] = ACTION_LAYER_TAP_TOGGLE(2),
    [12] = ACTION_LAYER_TAP_TOGGLE(3),
    [13] = ACTION_LAYER_TAP_KEY(1, KC_BSLASH),
    [14] = ACTION_LAYER_TAP_KEY(2, KC_TAB),
    [15] = ACTION_LAYER_TAP_KEY(3, KC_ENTER),
    [16] = ACTION_LAYER_TAP_KEY(4, KC_SPACE),
    [17] = ACTION_LAYER_TAP_KEY(5, KC_SCOLON),
    [18] = ACTION_LAYER_TAP_KEY(6, KC_QUOTE),
    [19] = ACTION_LAYER_TAP_KEY(7, KC_SLASH),
    [20] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_SPACE),
    [21] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_SPACE),
    [22] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_QUOTE),
    [23] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_ENTER),
    [24] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC),
    [25] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_BSPACE),
    [26] = ACTION_MODS_ONESHOT(MOD_LCTL),
    [27] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_ESC),
    [28] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_BSPACE),
    [29] = ACTION_MODS_ONESHOT(MOD_LSFT),
    [30] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_GRAVE),
    [31] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_BSLASH),
};
#else
const action_t fn_actions[] PROGMEM = {
    [0]  = ACTION_LAYER_TOGGLE(0),
    [1]  = ACTION_LAYER_TOGGLE(1),
    [2]  = ACTION_LAYER_TOGGLE(2),
};
#endif
