// Copyright 2026 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

/*******************************************************************************
  88888888888 888      d8b                .d888 d8b 888               d8b
      888     888      Y8P               d88P"  Y8P 888               Y8P
      888     888                        888        888
      888     88888b.  888 .d8888b       888888 888 888  .d88b.       888 .d8888b
      888     888 "88b 888 88K           888    888 888 d8P  Y8b      888 88K
      888     888  888 888 "Y8888b.      888    888 888 88888888      888 "Y8888b.
      888     888  888 888      X88      888    888 888 Y8b.          888      X88
      888     888  888 888  88888P'      888    888 888  "Y8888       888  88888P'
                                                        888                 888
                                                        888                 888
                                                        888                 888
     .d88b.   .d88b.  88888b.   .d88b.  888d888 8888b.  888888 .d88b.   .d88888
    d88P"88b d8P  Y8b 888 "88b d8P  Y8b 888P"      "88b 888   d8P  Y8b d88" 888
    888  888 88888888 888  888 88888888 888    .d888888 888   88888888 888  888
    Y88b 888 Y8b.     888  888 Y8b.     888    888  888 Y88b. Y8b.     Y88b 888
     "Y88888  "Y8888  888  888  "Y8888  888    "Y888888  "Y888 "Y8888   "Y88888
         888
    Y8b d88P
     "Y88P"
*******************************************************************************/

#pragma once

#ifndef AUDIO_PIN
#    define AUDIO_PIN A5
#endif // AUDIO_PIN

#ifndef AUDIO_PIN_ALT
#    define AUDIO_PIN_ALT A4
#endif // AUDIO_PIN_ALT

#ifndef DIODE_DIRECTION
#    define DIODE_DIRECTION COL2ROW
#endif // DIODE_DIRECTION

#ifndef RGBLIGHT_HUE_STEP
#    define RGBLIGHT_HUE_STEP 32
#endif // RGBLIGHT_HUE_STEP

#ifndef RGBLIGHT_LED_COUNT
#    define RGBLIGHT_LED_COUNT 18
#endif // RGBLIGHT_LED_COUNT

#ifndef WS2812_DI_PIN
#    define WS2812_DI_PIN D7
#endif // WS2812_DI_PIN

#ifndef LAYOUT
#    define LAYOUT LAYOUT_all
#endif // LAYOUT

#ifndef DEVICE_VER
#    define DEVICE_VER 0x0001
#endif // DEVICE_VER

#ifndef MANUFACTURER
#    define MANUFACTURER "Clueboard"
#endif // MANUFACTURER

#ifndef PRODUCT
#    define PRODUCT "Clueboard 66% rev4"
#endif // PRODUCT

#ifndef PRODUCT_ID
#    define PRODUCT_ID 0x2390
#endif // PRODUCT_ID

#ifndef VENDOR_ID
#    define VENDOR_ID 0xC1ED
#endif // VENDOR_ID

#ifndef MATRIX_COLS
#    define MATRIX_COLS 8
#endif // MATRIX_COLS

#ifndef MATRIX_ROWS
#    define MATRIX_ROWS 10
#endif // MATRIX_ROWS

#ifndef MATRIX_COL_PINS
#    define MATRIX_COL_PINS { B10, B2, B1, B0, A7, B4, B3, B5 }
#endif // MATRIX_COL_PINS

#ifndef MATRIX_ROW_PINS
#    define MATRIX_ROW_PINS { B11, A6, A3, A2, A1, B7, B6, C15, C14, C13 }
#endif // MATRIX_ROW_PINS

#define RGBLIGHT_EFFECT_ALTERNATING

#define RGBLIGHT_EFFECT_BREATHING

#define RGBLIGHT_EFFECT_CHRISTMAS

#define RGBLIGHT_EFFECT_KNIGHT

#define RGBLIGHT_EFFECT_RAINBOW_MOOD

#define RGBLIGHT_EFFECT_RAINBOW_SWIRL

#define RGBLIGHT_EFFECT_RGB_TEST

#define RGBLIGHT_EFFECT_SNAKE

#define RGBLIGHT_EFFECT_STATIC_GRADIENT

#define RGBLIGHT_EFFECT_TWINKLE
