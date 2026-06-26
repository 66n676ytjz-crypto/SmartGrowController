#pragma once

#include <LiquidCrystal_I2C.h>

#include "GrowData.h"
#include "Config.h"

class DisplayManager
{
public:
    void begin();

    void update(const GrowData& data);

    void showHome();

    void showInfo();

private:
    LiquidCrystal_I2C lcd =
        LiquidCrystal_I2C(
            LCD_ADDRESS,
            LCD_COLUMNS,
            LCD_ROWS);

    bool currentInfoPage = false;

    float lastTemp = -999;
    float lastHumidity = -999;

    uint8_t lastSoil = 255;
    uint8_t lastTank = 255;
};