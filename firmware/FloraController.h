/******************************************************************************
 *
 * SmartGrowController
 * Flora Controller
 *
 ******************************************************************************/

#pragma once

#include "GrowData.h"
#include "HAL.h"

#include "SensorManager.h"
#include "DisplayManager.h"
#include "ButtonManager.h"
#include "PumpManager.h"
#include "BuzzerManager.h"

class FloraController
{
public:

    FloraController();

    void begin();

    void update();

private:

    //=================================================
    // Shared Runtime Data
    //=================================================

    GrowData data;

    //=================================================
    // Hardware
    //=================================================

    HAL hal;

    //=================================================
    // Managers
    //=================================================

    SensorManager sensors;

    DisplayManager display;

    ButtonManager button;

    PumpManager pump;

    BuzzerManager buzzer;
};
