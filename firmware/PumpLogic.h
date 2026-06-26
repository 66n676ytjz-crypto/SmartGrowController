#pragma once
#include <Arduino.h>
struct PumpLogicConfig{
    uint32_t runtimeMs=2000;
    uint32_t cooldownMs=300000;
    uint8_t minTankPercent=20;
    uint8_t drySoilPercent=30;
};
