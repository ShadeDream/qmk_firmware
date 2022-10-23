#include QMK_KEYBOARD_H

// Each layer gets a name for readability.
// The underscores don't mean anything - you can
// have a layer called STUFF or any other name.
// Layer names don't all need to be of the same
// length, and you can also skip them entirely
// and just use numbers.
#define _BL 0
#define _FN 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* 0: qwerty-like
    * ,-----------------------------------------------------------.
    * |`  |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|BackSp |
    * |-----------------------------------------------------------|
    * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |
    * |-----------------------------------------------------------|
    * |Caps  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '| Enter  |
    * |-----------------------------------------------------------|
    * |Shft|  \|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /| Shift    |
    * |-----------------------------------------------------------'
    * |Ctrl|GUI |Alt |           Space        |Alt |GUI |FN  |Del |
    * `-----------------------------------------------------------'
    */
  [_BL] = LAYOUT_60_ansi(
    KC_GRV, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_BSPC, \
    KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSLS, \
    KC_CAPS,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,KC_ENT,  \
    KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT, \
    KC_LCTL,KC_LGUI,KC_LALT,          KC_SPC,                     KC_RALT,KC_RGUI,MO(_FN),KC_DEL
  ),

  /* 1: Poker-like
    * ,-----------------------------------------------------------.
    * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Delete |
    * |-----------------------------------------------------------|
    * |     |   | Up|   |   |   |   |   |   |   |Ply|Prv|Nxt| Ins |
    * |-----------------------------------------------------------|
    * |      |Lft|Dwn|Rgt|   |   |   |NmL|ScL|Pau|Hom|PUp|PrntScrn|
    * |-----------------------------------------------------------|
    * |    |   |   |   |   |   |   | V-| V+|Mut|End|PDn|          |
    * |-----------------------------------------------------------'
    * |     |    |     |                        |     |FN  |      |
    * `-----------------------------------------------------------'
    */
  [_FN] = LAYOUT_60_ansi(
    KC_ESC, KC_F1,  KC_F2,  KC_3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, KC_DEL, \
    KC_NO  ,KC_NO  ,KC_UP  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_MPLY,KC_MPRV,KC_MNXT,KC_INS, \
    KC_NO  ,KC_LEFT,KC_DOWN,KC_RGHT,KC_NO  ,KC_NO  ,KC_NO  ,KC_NLCK,KC_SLCK,KC_PAUS,KC_HOME,KC_PGUP,KC_PSCR, \
    KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_VOLD,KC_VOLU,KC_MUTE,KC_END ,KC_PGDN,KC_NO  , \
    KC_NO  ,KC_NO  ,KC_NO  ,          KC_NO  ,                    KC_NO  ,KC_NO  ,KC_TRNS,KC_NO
  )
};
