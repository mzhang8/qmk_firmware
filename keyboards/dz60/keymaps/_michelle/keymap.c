#include QMK_KEYBOARD_H

// Define Base, Fn, and Ctrl layers
#define _QWERTY 0
#define _FL 1
#define _CL 2

#define FL  MO(_FL)
#define CL  MO(_CL)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


/* QWERTY 
* ,-----------------------------------------------------------------------------------------.
* | ~ |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |   bkspace   |
* |-----------------------------------------------------------------------------------------+
* | Tab   |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \    |
* |-----------------------------------------------------------------------------------------+
* | Caps    |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
* |-----------------------------------------------------------------------------------------+
* | Shift     |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |   /   |      Esc      |
* |-----------------------------------------------------------------------------------------+
* | Ctrl  |  Alt |  Cmd |                Space            |   Cmd   |  Alt |  Fn  |  Ctrl   |
* `-----------------------------------------------------------------------------------------'
*/
	[_QWERTY] = LAYOUT_60_ansi(
		KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,           KC_BSPC,
		KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
		LT(CL, KC_CAPS),          KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
		KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_ESC,
		KC_LCTL, KC_LALT,          KC_LGUI,                   KC_SPC,                             KC_RGUI, KC_RALT,          FL,   KC_RCTL),


/* Fn
* F1 - brightness -
* F2 - brightness +
* F3 - none
* F4 - none
* F5 - backlight -
* F6 - backlight +
* F7 - rewind
* F8 - none
* F9 - forward
* F10 - mute
* F11 - volume -
* F12 - volume + 
* ,------------------------------------------------------------------------------------------------------.
* | Esc |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10  |  F11  |  F12  |  power  |
* |------------------------------------------------------------------------------------------------------+
* | ...                                                													 |
* `------------------------------------------------------------------------------------------------------'
*/
	[_FL] = LAYOUT_60_ansi(
		KC_ESC,  KC_BRMD,   KC_BRMU,   KC_F3,   KC_F4,   RGB_VAD,   RGB_VAI,   KC_MRWD,   KC_F8,   KC_MFFD,   KC__MUTE,  KC__VOLDOWN,  KC__VOLUP,   KC_POWER,
		KC_TRNS,          RGB_TOG, RGB_MOD, RGB_HUD, RGB_HUI, RGB_SAD, RGB_SAI, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_SLCK, KC_PAUS, RESET,
		KC_TRNS,          BL_TOGG, BL_DEC, BL_INC, BL_STEP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_INS,  KC_HOME, KC_PGUP, KC_TRNS,
		KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_DEL,  KC_END,  KC_PGDN,          KC_TRNS,
		KC_TRNS, KC_TRNS,          KC_TRNS,                   KC_TRNS,                            KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS),


/* Capslock
 * This is just for the arrow keys using HJKL
 */

	[_CL] = LAYOUT_60_ansi(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT,  KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,          KC_TRNS,
		KC_TRNS, KC_TRNS,          KC_TRNS,                   KC_TRNS,                            KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS)
};