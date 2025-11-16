// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku
#define MIRYOKU_LAYER_BASE_QWERTY \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SEMI),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_SYM, BSPC), U_LT(U_FUN, DEL),  U_LT(U_NAV, TAB),  U_LT(U_MEDIA, ESC),U_LT(U_NUM,RET),U_LT(U_MOUSE, SPACE),   U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTY_FLIP \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SEMI),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_SYM, BSPC), U_LT(U_FUN, DEL),  U_LT(U_NAV, TAB),  U_LT(U_MEDIA, ESC),U_LT(U_NUM,RET),U_LT(U_MOUSE, SPACE),   U_NP,              U_NP

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SEMI),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_NAV, TAB),  U_LT(U_SYM, BSPC), U_LT(U_FUN, DEL),  U_LT(U_NUM,RET),U_LT(U_MOUSE, SPACE), U_LT(U_MEDIA, ESC),   U_NP,              U_NP

#pragma once


// Enable mouse keys
#define MIRYOKU_KLUDGE_MOUSEKEYSPR
// Your custom layer modifications
#define MIRYOKU_LAYER_NUM \
KC_LBRC, KC_7,      KC_8,      KC_9,      KC_RBRC, U_NA,    U_NA,    U_NA,    U_NA,    U_NA,    \
KC_SCLN, KC_4,      KC_5,      KC_6,      KC_EQL,  U_NA,    U_RSF,   U_RCT,   U_RAL,   U_RGU,   \
KC_GRV,  KC_1,      KC_2,      KC_3,      KC_BSLS, U_NA,    U_NA,    U_NA,    U_ALGR,  U_NA,    \
U_NA,    U_NA,      KC_DOT,    KC_0,      KC_MINS, U_NA,    U_NA,    U_NA,    U_NA,    U_NA

// Change the T position (index 13 in the num layer) to apostrophe
// Replace KC_6 above with KC_QUOT for apostrophe at T position

#define MIRYOKU_LAYER_SYM \
KC_LCBR, KC_AMPR,   KC_ASTR,   KC_LPRN,   KC_RCBR, U_NA,    U_NA,    U_NA,    U_NA,    U_NA,    \
KC_COLN, KC_DLR,    KC_PERC,   KC_CIRC,   KC_PLUS, U_NA,    U_RSF,   U_RCT,   U_RAL,   U_RGU,   \
KC_TILD, KC_EXLM,   KC_AT,     KC_HASH,   KC_PIPE, U_NA,    U_NA,    U_NA,    U_ALGR,  U_NA,    \
U_NA,    U_NA,      KC_LPRN,   KC_RPRN,   KC_UNDS, U_NA,    U_NA,    U_NA,    U_NA,    U_NA

// Change the T position (index 13) to double quote
// Replace KC_CIRC above with S(KC_QUOT) for quote at T position

// Enable mouse keys
#define MIRYOKU_LAYER_MOUSE \
U_NA,    U_NA,      U_NA,      U_NA,      U_NA,    U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,   \
U_GU,    U_AL,      U_CT,      U_SF,      U_NA,    KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, U_NA,    \
U_NA,    U_ALGR,    U_NA,      U_NA,      U_NA,    KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, U_NA,    \
U_NA,    U_NA,      U_NA,      U_NA,      U_NA,    KC_BTN1, KC_BTN3, KC_BTN2, U_NA,    U_NA

