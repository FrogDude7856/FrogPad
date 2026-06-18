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

#include "quantum.h"

// Layout content

#define XXX KC_NO

#define LAYOUT_66_ansi(k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k5A, k5B, k5C, k5D, k5E, k5G, k5H, k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k6A, k6B, k6C, k6D, k6E, k6F, k6H, k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k7A, k7B, k7C, k7D, k7F, k3A, k3C, k3D, k3E, k3F, k3G, k3H, k8A, k8B, k8C, k8D, k8F, k8G, k4A, k4B, k4C, k4G, k9C, k9D, k9E, k9F, k9G, k9H) { \
    { k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H }, \
    { k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H }, \
    { k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H }, \
    { k3A, XXX, k3C, k3D, k3E, k3F, k3G, k3H }, \
    { k4A, k4B, k4C, XXX, XXX, XXX, k4G, XXX }, \
    { k5A, k5B, k5C, k5D, k5E, XXX, k5G, k5H }, \
    { k6A, k6B, k6C, k6D, k6E, k6F, XXX, k6H }, \
    { k7A, k7B, k7C, k7D, XXX, k7F, XXX, XXX }, \
    { k8A, k8B, k8C, k8D, XXX, k8F, k8G, XXX }, \
    { XXX, XXX, k9C, k9D, k9E, k9F, k9G, k9H } \
}

#define LAYOUT_66_iso(k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k5A, k5B, k5C, k5D, k5E, k5G, k5H, k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k6A, k6B, k6C, k6D, k6E, k6H, k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k7A, k7B, k7C, k7D, k7E, k7F, k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k8A, k8B, k8C, k8D, k8F, k8G, k4A, k4B, k4C, k4G, k9C, k9D, k9E, k9F, k9G, k9H) { \
    { k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H }, \
    { k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H }, \
    { k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H }, \
    { k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H }, \
    { k4A, k4B, k4C, XXX, XXX, XXX, k4G, XXX }, \
    { k5A, k5B, k5C, k5D, k5E, XXX, k5G, k5H }, \
    { k6A, k6B, k6C, k6D, k6E, XXX, XXX, k6H }, \
    { k7A, k7B, k7C, k7D, k7E, k7F, XXX, XXX }, \
    { k8A, k8B, k8C, k8D, XXX, k8F, k8G, XXX }, \
    { XXX, XXX, k9C, k9D, k9E, k9F, k9G, k9H } \
}

#define LAYOUT_all(k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k5A, k5B, k5C, k5D, k5E, k5F, k5G, k5H, k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k6A, k6B, k6C, k6D, k6E, k6F, k6H, k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k7A, k7B, k7C, k7D, k7E, k7F, k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k8A, k8B, k8C, k8D, k8E, k8F, k8G, k4A, k4B, k4C, k4D, k4F, k4G, k9A, k9C, k9D, k9E, k9F, k9G, k9H) { \
    { k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H }, \
    { k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H }, \
    { k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H }, \
    { k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H }, \
    { k4A, k4B, k4C, k4D, XXX, k4F, k4G, XXX }, \
    { k5A, k5B, k5C, k5D, k5E, k5F, k5G, k5H }, \
    { k6A, k6B, k6C, k6D, k6E, k6F, XXX, k6H }, \
    { k7A, k7B, k7C, k7D, k7E, k7F, XXX, XXX }, \
    { k8A, k8B, k8C, k8D, k8E, k8F, k8G, XXX }, \
    { k9A, XXX, k9C, k9D, k9E, k9F, k9G, k9H } \
}

#ifndef LAYOUT
#   define LAYOUT LAYOUT_all
#endif
