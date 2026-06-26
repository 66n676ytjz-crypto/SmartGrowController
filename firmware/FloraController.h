#pragma once

#include "HAL.h"
#include "GrowData.h"

#include "SensorManager.h"
#include "DisplayManager.h"
#include "PumpManager.h"
#include "ButtonManager.h"
#include "BuzzerManager.h"

class FloraController
{
public:

    void begin();

    void update();

private:

    GrowData data;

    HAL hal;

    SensorManager sensors{hal};

    DisplayManager display;

    PumpManager pump{hal};

    ButtonManager button{hal};

    BuzzerManager buzzer{hal};
};#pragma once

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
    // Shared system data
    GrowData data;

    // Hardware layer
    HAL hal;

    // Managers
    SensorManager sensors;
    DisplayManager display;
    PumpManager pump;
    ButtonManager button;
    BuzzerManager buzzer;
};