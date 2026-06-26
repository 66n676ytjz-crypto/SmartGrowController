/******************************************************************************
 *
 * Flora Core
 * Buzzer Manager
 *
 ******************************************************************************/

#pragma once

#include <Arduino.h>

#include "HAL.h"
#include "GrowData.h"
#include "Config.h"

class BuzzerManager
{
public:

    explicit BuzzerManager(HAL& hal);

    void begin();

    void update(GrowData& data);

private:

    HAL& hal;

    uint32_t lastBeep = 0;

    void beepLowWater();
};
