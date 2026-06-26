/******************************************************************************
 *
 * Flora Core
 * Flora Controller
 *
 ******************************************************************************/

#pragma once

#include "Config.h"
#include "GrowData.h"

#include "HAL.h"

#include "SensorManager.h"
#include "DisplayManager.h"
#include "PumpManager.h"
#include "ButtonManager.h"
#include "BuzzerManager.h"

class FloraController
{
public:

    FloraController();

    void begin();

    void update();

private:

    //=========================================================
    // Shared Data
    //=========================================================

    GrowData data;

    //=========================================================
    // Hardware
    //=========================================================

    HAL hal;

    //=========================================================
    // Managers
    //=========================================================

    SensorManager sensors;

    DisplayManager display;

    PumpManager pump;

    ButtonManager button;

    BuzzerManager buzzer;
};
    ButtonManager button;
    BuzzerManager buzzer;
};
