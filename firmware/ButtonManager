/******************************************************************************
 *
 * Flora Core
 * Button Manager
 *
 ******************************************************************************/

#pragma once

#include <Arduino.h>

#include "HAL.h"
#include "GrowData.h"

class ButtonManager
{
public:

    ButtonManager(HAL& hal);

    void begin();

    void update(GrowData& data);

private:

    HAL& hal;

    bool lastState = false;

    uint32_t lastDebounce = 0;

    static constexpr uint32_t DEBOUNCE_MS = 50;
};
