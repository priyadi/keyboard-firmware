#include "keymap_common.h"

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Default Layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  `|BSp|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
     * |-----------------------------------------------------------|
     * |Caps  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Del|
     * |-----------------------------------------------------------'
     * |Ctrl|Gui |Alt  |       Fn0/Space        |Alt |Gui|App |Ctrl|
     * `-----------------------------------------------------------'
     */
    [0] =
    KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS, EQL, GRV,BSPC, \
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
           BSPC,A,   S,   D,   F,   G,   H,   J,   K,   L,   FN3 ,QUOT,ENT,  \
           FN1, Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH, FN2,DEL, \
           LCTL,LGUI,LALT,          FN0,                RALT,RGUI,SLCK, RCTL),

    /* Layer 1: Hybrid ESC and hard semicolon
     * ,-----------------------------------------------------------.
     * |  `|   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |      |   |
     * |-----------------------------------------------------------'
     * |    |    |     |                        |    |   |    |    |
     * `-----------------------------------------------------------'
     */
    [1] =
    KEYMAP( GRV,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,SCLN,TRNS,          TRNS,  \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,TRNS, \
           TRNS,TRNS,TRNS,         TRNS,                          TRNS,TRNS,TRNS,TRNS),

    /* Layer 2: SpaceFn/SemicolonFn layer
     * ,-----------------------------------------------------------.
     * |  `| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|   |Del|
     * |-----------------------------------------------------------|
     * |     |   |Prv|Ply|Nxt|   |   |PgU|Up |PgD|Prs|Vl-|Vl+|Mute |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |Hom|Lef|Dow|Rig|   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |Bt3|Spc|End|   |   |   |   |      |   |
     * `-----------------------------------------------------------'
     * |    |   |     |                          |    |   |App|Ins |
     * `-----------------------------------------------------------'
     */ 
    [2] = 
    KEYMAP(GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,TRNS, DEL,   \
           CAPS,TRNS,MPRV,MPLY,MNXT,TRNS,TRNS,PGUP,  UP,PGDN,PSCR,VOLD,VOLU, MUTE,      \
           DEL ,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,LEFT,DOWN,RGHT,TRNS,TRNS,TRNS,            \
           TRNS,TRNS,TRNS,TRNS,BTN3, SPC, END,TRNS,HOME, END,TRNS,TRNS,TRNS,            \
           TRNS,TRNS,TRNS,          TRNS,               TRNS,TRNS, APP, INS),
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_KEY(2, KC_SPC),
    [3] = ACTION_LAYER_TAP_KEY(2, KC_SCLN),
    [1] = ACTION_LAYER_MODS(1, MOD_LSFT),
    [2] = ACTION_LAYER_MODS(1, MOD_RSFT)
};
