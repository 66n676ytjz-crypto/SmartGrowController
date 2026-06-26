#pragma once
#include <Arduino.h>

struct Settings {
    uint16_t soilDry = 2800;
    uint16_t soilWet = 1200;
    uint8_t minimumTankPercent = 20;
    uint32_t pumpRuntimeMs = 2000;
    uint32_t pumpCooldownMs = 300000;
};
