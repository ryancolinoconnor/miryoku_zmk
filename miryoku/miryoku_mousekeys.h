// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once
#define U_MOUSE_MOVE_MAX   3400
#define U_MOUSE_SCROLL_MAX 10


#define ZMK_POINTING_DEFAULT_MOVE_VAL 1250
#define ZMK_POINTING_DEFAULT_SCRL_VAL 100

#define U_MOUSE_MOVE_EXPONENT 1
#define U_MOUSE_MOVE_TIME 1500
#define U_MOUSE_MOVE_DELAY 0
#define U_MOUSE_SCROLL_EXPONENT 1
#define U_MOUSE_SCROLL_TIME 5000
#define U_MOUSE_SCROLL_DELAY 0

#define U_BTN1 &mkp MB1
#define U_BTN2 &mkp MB2
#define U_BTN3 &mkp MB3

#undef MOVE_UP
#undef MOVE_DOWN
#define MOVE_UP    MOVE_Y(-U_MOUSE_MOVE_MAX)
#define MOVE_DOWN  MOVE_Y(U_MOUSE_MOVE_MAX)
#define MOVE_LEFT  MOVE_X(-U_MOUSE_MOVE_MAX)
#define MOVE_RIGHT MOVE_X(U_MOUSE_MOVE_MAX)


#define U_MS_D &mmv MOVE_DOWN
#define U_MS_L &mmv MOVE_LEFT
#define U_MS_R &mmv MOVE_RIGHT
#define U_MS_U &mmv MOVE_UP
#define U_WH_D &msc SCRL_DOWN
#define U_WH_L &msc SCRL_LEFT
#define U_WH_R &msc SCRL_RIGHT
#define U_WH_U &msc SCRL_UP

