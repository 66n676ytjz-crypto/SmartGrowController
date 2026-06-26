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
};#include "DisplayManager.h"

void DisplayManager::begin()
{
    lcd.init();
    lcd.backlight();

    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Flora Core");
    lcd.setCursor(0,1);
    lcd.print("Starting...");
}

void DisplayManager::update(GrowData &data)
{
    // Switch pages based on GrowData
    showingInfo = data.display.infoPage;

    if(showingInfo)
    {
        if(millis() - data.display.pageStart > BUTTON_PAGE_TIMEOUT)
        {
            data.display.infoPage = false;
            showingInfo = false;
        }
    }

    if(showingInfo)
        drawInfo(data);
    else
        drawHome(data);
}

void DisplayManager::drawHome(const GrowData &data)
{
    if(lastTemp != data.sensors.temperatureF)
    {
        lcd.setCursor(0,0);
        lcd.print("Temp:");
        lcd.print(data.sensors.temperatureF,1);
        lcd.print((char)223);
        lcd.print("F ");

        lastTemp = data.sensors.temperatureF;
    }

    if(lastHumidity != data.sensors.humidity)
    {
        lcd.setCursor(0,1);
        lcd.print("Hum :");
        lcd.print(data.sensors.humidity,0);
        lcd.print("%   ");

        lastHumidity = data.sensors.humidity;
    }
}

void DisplayManager::drawInfo(const GrowData &data)
{
    if(lastSoil != data.sensors.soilPercent)
    {
        lcd.setCursor(0,0);
        lcd.print("Soil:");
        lcd.print(data.sensors.soilPercent);
        lcd.print("%   ");

        lastSoil = data.sensors.soilPercent;
    }

    if(lastTank != data.sensors.tankPercent)
    {
        lcd.setCursor(0,1);
        lcd.print("Tank:");
        lcd.print(data.sensors.tankPercent);
        lcd.print("%   ");

        lastTank = data.sensors.tankPercent;
    }
}