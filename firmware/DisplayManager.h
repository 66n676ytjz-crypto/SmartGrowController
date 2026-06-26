#pragma once

#include <LiquidCrystal_I2C.h>

#include "GrowData.h"
#include "Config.h"

class DisplayManager
{
public:
    void begin();
    void update(GrowData &data);

private:
    LiquidCrystal_I2C lcd{LCD_ADDRESS, LCD_COLUMNS, LCD_ROWS};

    bool showingInfo = false;
    unsigned long infoStart = 0;

    float lastTemp = -999.0f;
    float lastHumidity = -999.0f;
    uint8_t lastSoil = 255;
    uint8_t lastTank = 255;

    void drawHome(const GrowData &data);
    void drawInfo(const GrowData &data);
};