#pragma once

#include "Config.h"
#include "GrowData.h"

#include "HAL.h"

#include "SensorManager.h"
#include "DisplayManager.h"
#include "PumpManager.h"
#include "ButtonManager.h"
#include "BuzzerManager.h"

class GrowSystem
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
};