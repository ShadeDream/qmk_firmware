#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BL 0
#define _FL 1

#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BL] = LAYOUT(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSPC,  KC_ESC,   _______, \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC, KC_BSLS,            KC_DEL,  \
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT,  KC_ENT,                      KC_PGUP, \
    KC_LSFT,          KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,           KC_UP,    KC_PGDN, \
    KC_LCTL, KC_LALT, KC_LGUI,                          KC_SPC,                 KC_RGUI, MO(_FL),                     KC_LEFT, KC_DOWN,  KC_RIGHT
  ),

  [_FL] = LAYOUT(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,   KC_F10,  KC_F11,   KC_F12,  KC_DEL,   _______,  _______, \
    KC_CAPS, _______, KC_UP,   _______, _______,_______,_______,_______,_______,_______, KC_MPLY, KC_MPRV,  KC_MNXT, _______,            KC_INS,  \
    _______, KC_LEFT, KC_DOWN, KC_RIGHT,_______,_______,_______,KC_NLCK,KC_SLCK,KC_PAUS, KC_HOME, KC_PGUP,  KC_PSCR,                     KC_HOME, \
    _______,          _______, _______, _______,_______,_______,KC_VOLD,KC_VOLU,KC_MUTE, KC_END,  KC_PGDN,  _______,           KC_VOLU,  KC_END,  \
    _______, _______, _______,                          _______,                _______, _______,                     KC_MPRV, KC_VOLD,  KC_MNXT
  )

};
