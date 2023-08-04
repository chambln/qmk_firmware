// Copyright 2018-2020
// ENDO Katsuhiro <ka2hiro@curlybracket.co.jp>
// David Philip Barr <@davidphilipbarr>
// Pierre Chevalier <pierrechevalier83@gmail.com>
// SPDX-License-Identifier: GPL-2.0+

#pragma once

#define EE_HANDS

/* Swap Q and B for PCB variant.  */
#undef DIRECT_PINS
#define DIRECT_PINS { \
    { D7, F7, F6, F5, F4 }, \
    { B1, B3, B2, B6, D3 }, \
    { D1, D0, D4, C6, E6 }, \
    { B5, B4, NO_PIN, NO_PIN, NO_PIN } \
}
#undef DIRECT_PINS_RIGHT
#define DIRECT_PINS_RIGHT { \
    { F4, F5, F6, F7, D7 }, \
    { D3, B6, B2, B3, B1 }, \
    { E6, C6, D4, D0, D1 }, \
    { B5, B4, NO_PIN, NO_PIN, NO_PIN } \
}
