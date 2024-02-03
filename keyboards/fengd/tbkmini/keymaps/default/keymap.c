/* Copyright 2019 ENDO Katsuhiro <fengdu_xiangyang@163.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

enum layer_number { _QWERTY = 0, _LOWER, _RAISE, _ADJUST };

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define ADJUST MO(_ADJUST)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT_split_3x6_3(
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,              KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
      KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,              KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, RSFT_T(KC_QUOT),
      KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,              KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RCTL,
                                 LGUI_T(KC_SPC), KC_ESC,  RAISE,             LOWER, KC_DEL, RALT_T(KC_ENT)
    ),

    [_LOWER] = LAYOUT_split_3x6_3(
      _______, KC_1, KC_2, KC_3, KC_4, KC_5,                           KC_6, KC_7, KC_8, KC_9, KC_0, _______,
      _______, _______, _______, _______, _______, _______,           KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, _______, _______,
      _______, _______, _______, _______, _______, _______,           _______, _______, _______, _______, _______, _______,
                                 _______, _______, ADJUST,            _______, _______, _______
    ),

    [_RAISE] = LAYOUT_split_3x6_3(
      _______, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,              KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
      KC_F1  , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,      KC_F6,            KC_TILD,KC_PLUS, KC_MINS, KC_LBRC, KC_RBRC, KC_PIPE,
      KC_F7  , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,     KC_F12,           KC_GRV,KC_EQL, KC_UNDS, KC_LCBR, KC_RCBR, KC_BSLS,
                                  _______, _______, _______,            ADJUST, _______, KC_RGUI
    ),

    [_ADJUST] = LAYOUT_split_3x6_3(
      EE_CLR, _______,   _______, _______, _______, KC_MUTE,           _______, _______,   _______, _______, _______, _______,
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, _______, KC_VOLU,           _______, _______,   _______, _______, _______, _______,
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, _______, KC_VOLD,           _______, _______, _______, _______, _______, _______,
                                    _______, _______, _______,        _______, _______, _______
    )
};
// clang-format on
