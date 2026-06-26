/******************************************************************************
 *
 * Flora Core
 * Display Manager
 *
 ******************************************************************************/

#include "DisplayManager.h"

DisplayManager::DisplayManager()
    : lcd(LCD_ADDRESS, LCD_COLUMNS, LCD_ROWS)
{
}

void DisplayManager::begin()
{
    Wire.begin(PIN_SDA, PIN_SCL);

    lcd.init();

    lcd.backlight();

    splashScreen();
}

void DisplayManager::splashScreen()
{
    lcd.clear();

    lcd.setCursor(0,0);
    lcd.print("Flora Core");

    lcd.setCursor(0,1);
    lcd.print("Starting...");

    delay(1500);

    lcd.clear();
}

void DisplayManager::update(const GrowData& data)
{
    if(data.display.infoPage)
    {
        showInfo(data);
    }
    else
    {
        showHome(data);
    }
}

void DisplayManager::showHome(const GrowData& data)
{
    if(lastInfoPage)
    {
        lcd.clear();
        lastInfoPage = false;

        lastTemp = -1000;
        lastHumidity = -1000;
    }

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

void DisplayManager::showInfo(const GrowData& data)
{
    if(!lastInfoPage)
    {
        lcd.clear();

        lastInfoPage = true;

        lastSoil = 255;
        lastTank = 255;
    }

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
        lastTank = data.sensors.tankPercent;
    }
}
