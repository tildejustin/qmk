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

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

#define up(char) char & ~0x20

#define alpha   0x3b1
#define beta    0x3b2
#define gamma   0x3b3
#define delta   0x3b4
#define epsilon 0x3b5
#define zeta    0x3b6
#define eta     0x3b7
#define theta   0x3b8
#define iota    0x3b9
#define kappa   0x3ba
#define lambda  0x3bb
#define mu      0x3bc
#define nu      0x3bd
#define xi      0x3be
#define omicron 0x3bf
#define pi      0x3c0
#define rho     0x3c1
#define sigma   0x3c3
#define tau     0x3c4
#define upsilon 0x3c5
#define phi     0x3c6
#define chi     0x3c7
#define psi     0x3c8
#define omega   0x3c9
#define sigma_f 0x3c2

// clang-format off

enum layers {
    BASE,
    FN,
    MC,
    SYM,
    GREEK,
    // CLR
};

enum unicode_names {
    α, Α,
    β, Β,
    γ, Γ,
    δ, Δ,
    ε, Ε,
    ζ, Ζ,
    η, Η,
    θ, Θ,
    ι, Ι,
    κ, Κ,
    λ, Λ,
    μ, Μ,
    ν, Ν,
    ξ, Ξ,
    ο, Ο,
    π, Π,
    ρ, Ρ,
    σ, Σ,
    τ, Τ,
    υ, Υ,
    φ, Φ,
    χ, Χ,
    ψ, Ψ,
    ω, Ω,
    ς
};

const uint32_t PROGMEM unicode_map[] = {
    [α] = alpha,   [Α] = up(alpha),
    [β] = beta,    [Β] = up(beta),
    [γ] = gamma,   [Γ] = up(gamma),
    [δ] = delta,   [Δ] = up(delta),
    [ε] = epsilon, [Ε] = up(epsilon),
    [ζ] = zeta,    [Ζ] = up(zeta),
    [η] = eta,     [Η] = up(eta),
    [θ] = theta,   [Θ] = up(theta),
    [ι] = iota,    [Ι] = up(iota),
    [κ] = kappa,   [Κ] = up(kappa),
    [λ] = lambda,  [Λ] = up(lambda),
    [μ] = mu,      [Μ] = up(mu),
    [ν] = nu,      [Ν] = up(nu),
    [ξ] = xi,      [Ξ] = up(xi),
    [ο] = omicron, [Ο] = up(omicron),
    [π] = pi,      [Π] = up(pi),
    [ρ] = rho,     [Ρ] = up(rho),
    [σ] = sigma,   [Σ] = up(sigma),
    [τ] = tau,     [Τ] = up(tau),
    [υ] = upsilon, [Υ] = up(upsilon),
    [φ] = phi,     [Φ] = up(phi),
    [χ] = chi,     [Χ] = up(chi),
    [ψ] = psi,     [Ψ] = up(psi),
    [ω] = omega,   [Ω] = up(omega),
    [ς] = sigma_f
};

// https://getreuer.info/posts/keyboards/symbol-layer/index.html
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_ansi_82(
        KC_CAPS,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   KC_DEL,             KC_SLEP,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_ESC,             _______,
        KC_TAB,   KC_Q,     KC_W,     KC_F,     KC_P,     KC_B,     KC_LBRC,  KC_J,     KC_L,     KC_U,     KC_Y,     KC_SCLN,    KC_QUOT,  KC_BSLS,            _______,
        KC_BSPC,  KC_A,     KC_R,     KC_S,     KC_T,     KC_G,     KC_RBRC,  KC_M,     KC_N,     KC_E,     KC_I,     KC_O,                 KC_ENT,             _______,
        KC_LSFT,            KC_X,     KC_C,     KC_D,     KC_V,     KC_Z,     KC_SLSH,  KC_K,     KC_H,     KC_COMM,  KC_DOT,               KC_RSFT,  KC_UP,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 MO(SYM),  MO(GREEK),  _______,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [SYM] = LAYOUT_ansi_82(
        QK_BOOT,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
        _______,  KC_GRV,   KC_LABK,  KC_RABK,  KC_MINS,  KC_PIPE,  _______,  KC_CIRC,  KC_LCBR,  KC_RCBR,  KC_DLR,   _______,    _______,  _______,            _______,
        _______,  KC_EXLM,  KC_ASTR,  KC_SLSH,  KC_EQL,   KC_AMPR,  _______,  KC_HASH,  KC_LPRN,  KC_RPRN,  KC_SCLN,  KC_DQUO,              _______,            _______,
        _______,            KC_PLUS,  KC_LBRC,  KC_RBRC,  KC_PERC,  KC_TILD,  _______,  KC_AT,    KC_COLN,  _______,  _______,              _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  MO(FN),     TG(MC),   _______,  _______,  _______),

    [MC] = LAYOUT_ansi_82(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_F4,   KC_ESC,      KC_TAB,   KC_EQL,             _______,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_F3,    _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,            KC_F6,
        _______,            _______,  _______,  _______,  _______,  MS_WHLD,  _______,  _______,  _______,  _______,  KC_LSFT,              _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,    _______,  _______,  _______,  _______),

    [FN] = LAYOUT_ansi_82(
        _______,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FLXP,  RM_VALD,  RM_VALU,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,    KC_VOLU,  _______,            _______,
        NK_TOGG,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,            _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,    _______,  _______,  _______,  _______),

    [GREEK] = LAYOUT_ansi_82(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
        _______,  UP(θ,Θ),  UP(ω,Ω),  UP(φ,Φ),  UP(π,Π),  UP(β,Β),  _______,  _______,  UP(λ,Λ),  UP(υ,Υ),  UP(ψ,Ψ),  _______,    _______,  _______,            _______,
        _______,  UP(α,Α),  UP(ρ,Ρ),  UP(σ,Σ),  UP(τ,Τ),  UP(γ,Γ),  _______,  UP(μ,Μ),  UP(ν,Ν),  UP(ε,Ε),  UP(ι,Ι),  UP(ο,Ο),              _______,            _______,
        _______,            UP(ξ,Ξ),  UP(χ,Χ),  UP(δ,Δ),  UM(ς),    UP(ζ,Ζ),  _______,  UP(κ,Κ),  UP(η,Η),  _______,  _______,              _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,    _______,  _______,  _______,  _______),

    // = LAYOUT_ansi_82(
    //     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
    //     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
    //     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
    //     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,            _______,
    //     _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,  _______,
    //     _______,  _______,  _______,                                _______,                                _______,  _______,    _______,  _______,  _______,  _______),



    // [CLR] = LAYOUT_ansi_82(
    //     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
    //     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
    //     RM_TOGG,  RM_NEXT,  RM_VALU,  RM_HUEU,  RM_SATU,  RM_SPDU,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
    //     _______,  RM_PREV,  RM_VALD,  RM_HUED,  RM_SATD,  RM_SPDD,  _______,  _______,  _______,  _______,  _______,  _______,              _______,            _______,
    //     _______,            _______,  _______,  _______,  _______,  _______,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,  _______,
    //     _______,  _______,  _______,                                _______,                                _______,  _______,    _______,  _______,  _______,  _______),


};

void raw_hid_receive(uint8_t *data, uint8_t length) {
    data[0] ? layer_on(MC) : layer_off(MC);
}
