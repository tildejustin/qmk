/* Copyright 2025 tildejustin
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

// clang-format off

enum layers {
    BASE,
    FN,
    MC,
    SYM
    // CLR
};

// i know these shortcuts
#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

// SFT_T(KC_Z)
// fn could be momentary in the first momentary layer, i'm only going to use the left hand for them anyway
// https://getreuer.info/posts/keyboards/symbol-layer/index.html
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_ansi_82(
        KC_CAPS,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   KC_DEL,             _______,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_ESC,             _______,
        KC_TAB,   KC_Q,     KC_W,     KC_F,     KC_P,     KC_B,     KC_LBRC,  KC_J,     KC_L,     KC_U,     KC_Y,     KC_SCLN,    KC_QUOT,  KC_BSLS,            _______,
        KC_BSPC,  KC_A,     KC_R,     KC_S,     KC_T,     KC_G,     KC_RBRC,  KC_M,     KC_N,     KC_E,     KC_I,     KC_O,                 KC_ENT,             _______,
        KC_LSFT,            KC_X,     KC_C,     KC_D,     KC_V,     KC_Z,     KC_SLSH,  KC_K,     KC_H,     KC_COMM,  KC_DOT,               KC_RSFT,  KC_UP,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 MO(SYM),  _______,     _______, KC_LEFT,  KC_DOWN,  KC_RGHT),

    [SYM] = LAYOUT_ansi_82(
        QK_BOOT,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
        _______,  KC_GRV,   KC_LABK,  KC_RABK,  KC_MINS,  KC_PIPE,  _______,  KC_CIRC,  KC_LCBR,  KC_RCBR,  KC_DLR,   _______,    _______,  _______,            _______,
        _______,  KC_EXLM,  KC_ASTR,  KC_SLSH,  KC_EQL,   KC_AMPR,  _______,  KC_HASH,  KC_LPRN,  KC_RPRN,  KC_SCLN,  KC_DQUO,              _______,            _______,
        _______,            KC_PLUS,  KC_LBRC,  KC_RBRC,  KC_PERC,  KC_TILD,  _______,  KC_AT,    KC_COLN,  _______,  _______,              _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  MO(FN),     TG(MC),   _______,  _______,  _______),

    [MC] = LAYOUT_ansi_82(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_TAB,   KC_F4,      _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_F3,    _______,  _______,  _______,  _______,    _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,            KC_F6,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,    KC_LSFT,  _______,  _______,  _______),

    [FN] = LAYOUT_ansi_82(
        _______,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FLXP,  RM_VALD,  RM_VALU,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,    KC_VOLU,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,            _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,    _______,  _______,  _______,  _______),


    // [CLR] = LAYOUT_ansi_82(
    //     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
    //     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
    //     RM_TOGG,  RM_NEXT,  RM_VALU,  RM_HUEU,  RM_SATU,  RM_SPDU,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
    //     _______,  RM_PREV,  RM_VALD,  RM_HUED,  RM_SATD,  RM_SPDD,  _______,  _______,  _______,  _______,  _______,  _______,              _______,            _______,
    //     _______,            _______,  _______,  _______,  _______,  _______,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,  _______,
    //     _______,  _______,  _______,                                _______,                                _______,  _______,    _______,  _______,  _______,  _______),


};

void raw_hid_receive(uint8_t *data, uint8_t length) {
    // Your code goes here
    // `data` is a pointer to the buffer containing the received HID report
    // `length` is the length of the report - always `RAW_EPSIZE`
    if (data[0]) {
        layer_on(MC);
    } else {
        layer_off(MC);
    }
}
