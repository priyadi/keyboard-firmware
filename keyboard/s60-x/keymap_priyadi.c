#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: Default Layer
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│ ESC │  1  │  2  │  3  │  4  │  5  │  6  │  7  │  8  │  9  │  0  │  -  │  =  │▒▒▒▒▒│BKSPC│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│ TAB │  Q  │  W  │  E  │  R  │  T  │  Y  │  U  │  I  │  O  │  P  │  [  │  ]  │  \  │█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│BKSPC│  A  │  S  │  D  │  F  │  G  │  H  │  J  │  K  │  L  │  ;  │  '  │▒▒▒▒▒│ENTER│█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│LSHFT│▒▒▒▒▒│  Z  │  X  │  C  │  V  │  B  │  N  │  M  │  ,  │  .  │  /  │▒▒▒▒▒│RSHFT│ DEL │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│LCTRL│L_GUI│L_ALT│█████│█████│█████Spc/Fn0█████│█████│█████│R_ALT│█████│ SCLK│RCTRL│█████│
└─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
     */
    KEYMAP(
         ESC,    1,    2,   3,   4,   5,   6,   7,   8,    9,    0, MINS,  EQL,   NO, BSPC, \
         TAB,    Q,    W,   E,   R,   T,   Y,   U,   I,    O,    P, LBRC, RBRC, BSLS,       \
        BSPC,    A,    S,   D,   F,   G,   H,   J,   K,    L,  FN3, QUOT,   NO,  ENT,       \
         FN1,   NO,    Z,   X,   C,   V,   B,   N,   M, COMM,  DOT, SLSH,   NO,  FN2,  DEL, \
        LCTL, LGUI, LALT,                FN0,                   NO, RALT, RGUI, RCTL),

    /* Keymap 1: Hybrid ESC and hard semicolon
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│  `  │     │     │     │     │     │     │     │     │     │     │     │     │▒▒▒▒▒│     │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │     │     │     │     │     │     │     │     │     │     │     │     │█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │     │     │     │     │     │     │     │     │SCLN │     │▒▒▒▒▒│     │█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│     │▒▒▒▒▒│     │     │     │     │     │     │     │     │     │     │▒▒▒▒▒│     │▒▒▒▒▒│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │     │█████│█████│█████│     │█████│█████│█████│     │     │     │     │█████│
└─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
     */
    KEYMAP(
     GRV, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       \
    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, SCLN, TRNS, TRNS, TRNS,       \
    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
    TRNS, TRNS, TRNS,                   TRNS,                   TRNS, TRNS, TRNS, TRNS),


    /* Overlay 2: SpaceFN/SemicolonFN layer
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│  `  │ F1  │ F2  │ F3  │ F4  │ F5  │ F6  │ F7  │ F8  │ F9  │ F10 │ F11 │ F12 │▒▒▒▒▒│ Del │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │ Prev│ Play│Next │     │     │PgUp │ Up  |PgDn │Pscr │Vol- │Vol+ │Mute │█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │     │     │     │     │Home │Left │Down │Right│     │     │▒▒▒▒▒│     │█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│     │▒▒▒▒▒│     │     │     |     │Space│ End │  `  │ Home│ End │     │▒▒▒▒▒│     │▒▒▒▒▒│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │     │█████│█████│█████│     │█████│█████│█████│     │     │     │     │█████│
└─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
     */
    KEYMAP(
	 GRV,   F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,  F10,  F11,  F12, TRNS,  DEL, \
    CAPS, TRNS, MPRV, MPLY, MNXT, TRNS, TRNS, PGUP,   UP, PGDN, PSCR, VOLD, VOLU, MUTE,       \
	 DEL, TRNS, TRNS, TRNS, TRNS, TRNS, HOME, LEFT, DOWN, RGHT, TRNS, TRNS, TRNS, TRNS,       \
	TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, SPC,  END, TRNS, HOME,  END,  TRNS, TRNS, TRNS, TRNS, \
	TRNS, TRNS, TRNS,                   TRNS,                   TRNS, TRNS,  APP, INS),
};

/*
 * Fn action definition
 */
const uint16_t PROGMEM fn_actions[] = {
    // spaceFn
    [0] = ACTION_LAYER_TAP_KEY(2, KC_SPC),
    // Hybrid Esc (shift-Esc = ~), & ignore SemicolonFn when shifted (shift-; = :)
    [1] = ACTION_LAYER_MODS(1, MOD_LSFT),
    [2] = ACTION_LAYER_MODS(1, MOD_RSFT),
    // semicolonFn
    [3] = ACTION_LAYER_TAP_KEY(2, KC_SCLN)
};
