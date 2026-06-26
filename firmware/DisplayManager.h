/******************************************************************************
 *
 * Flora Core
 * Display Manager
 *
 ******************************************************************************/

#pragma once

#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#include "Config.h"
#include "GrowData.h"

class DisplayManager
{
public:

    DisplayManager();

    void begin();

    void update(const GrowData& data);

private:

    LiquidCrystal_I2C lcd;

    bool lastInfoPage = false;

    float lastTemp = -1000;
    float lastHumidity = -1000;

    uint8_t lastSoil = 255;
    uint8_t lastTank = 255;

    void showHome(const GrowData& data);

    void showInfo(const GrowData& data);

    void splashScreen();
};
    void drawHome(const GrowData &data);
    void drawInfo(const GrowData &data);
};
