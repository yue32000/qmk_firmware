#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BL 0
#define _FL 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BL: (Base Layer) Default Layer
   * .-------------------.
   * |NL F|   /|   *|   -|
   * |-------------------|
   * |   7|   8|   9|    |
   * |--------------|    |
   * |   4|   5|   6|   +|
   * |-------------------|
   * |   1|   2|   3|    |
   * |--------------|    |
   * |        0|   .| Ent|
   * '-------------------'
   */
  [_BL] = LAYOUT_numpad_10x5(
    KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,
    KC_Q, KC_W, KC_E, KC_R, KC_T,KC_Y, KC_U, KC_I, KC_Q, KC_P,
    KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_ENTER,
    KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_NO, KC_NO, KC_SLASH,
    KC_LEFT_CTRL, KC_LEFT_SHIFT, KC_CAPS, KC_LEFT_ALT, KC_NO, KC_NO, KC_NO, KC_SPACE, KC_BACKSPACE, KC_NO 
  )

  /* Keymap _FL: Function Layer
   * .-------------------.
   * |NL F|    |    | Fn0|
   * |-------------------|
   * |    | Fn4|    |    |
   * |--------------|    |
   * | Fn3|BL_S| Fn2| Fn6|
   * |-------------------|
   * |    | Fn5|    |    |
   * |--------------|    |
   * |      Fn1|    | Fn7|
   * '-------------------'
   */
  // [_FL] = LAYOUT_numpad_5x5(
  //   LT(_FL, KC_NUM),  _______, _______, UG_TOGG,
  //   _______,          UG_SATU, _______,
  //   UG_HUED,          BL_STEP, UG_HUEU, UG_VALU,
  //   _______,          UG_SATD, _______,
  //   UG_NEXT,                   _______, UG_VALD
  // )
};
