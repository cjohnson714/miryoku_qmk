// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once
#define MIRYOKU_CLIPBOARD_WIN

#define MIRYOKU_LAYER_TAP \
KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV, \
KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS, \
KC_LCTL,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_QUOT, KC_SCLN, \
KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_LBRC,  KC_RBRC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT, \
                        KC_LALT, KC_ESC, KC_SPC, KC_TAB, KC_ENT, KC_BSPC, KC_DEL, TD(U_TD_U_BASE)

#if defined (KEYBOARD_lily58)

#define XXX KC_NO

#define MIRYOKU_LAYERMAPPING_TAP(\
     K00, K01, K02, K03, K04, K05,                K06, K07, K08, K09, K10, K11,\
     K12, K13, K14, K15, K16, K17,                K18, K19, K20, K21, K22, K23,\
     K24, K25, K26, K27, K28, K29,                K30, K31, K32, K33, K34, K35,\
     K36, K37, K38, K39, K40, K41, K42,      K43, K44, K45, K46, K47, K48, K49,\
     K50, K51, K52, K53,                          K54, K55, K56, K57\
)\
LAYOUT(\
K00, K01, K02, K03, K04, K05,                K06, K07, K08, K09, K10, K11,\
K12, K13, K14, K15, K16, K17,                K18, K19, K20, K21, K22, K23,\
K24, K25, K26, K27, K28, K29,                K30, K31, K32, K33, K34, K35,\
K36, K37, K38, K39, K40, K41, K42,      K43, K44, K45, K46, K47, K48, K49,\
K50, K51, K52, K53,                          K54, K55, K56, K57\
)

#endif

#define MIRYOKU_LAYER_EXTRA \
KC_W,              KC_L,              KC_Y,              KC_P,              KC_B,              KC_Z,              KC_F,              KC_O,              KC_U,              KC_QUOT,           \
LGUI_T(KC_C),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_M,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_A),      \
LT(U_BUTTON,KC_Q), ALGR_T(KC_J),      KC_V,              KC_D,              KC_K,              KC_X,              KC_H,              KC_SLSH,           ALGR_T(KC_COMM),    LT(U_BUTTON,KC_DOT),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP
