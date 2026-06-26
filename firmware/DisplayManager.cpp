#include "DisplayManager.h"
#include "Config.h"

DisplayManager::DisplayManager():lcd(LCD_ADDRESS,LCD_COLUMNS,LCD_ROWS){}
void DisplayManager::begin(){lcd.init();lcd.backlight();lcd.clear();lcd.print("Flora Core");}
void DisplayManager::update(GrowData& data){
    lcd.setCursor(0,0);
    lcd.print("T:");
    lcd.print(data.sensors.temperatureF,1);
    lcd.print("F   ");
    lcd.setCursor(0,1);
    lcd.print("H:");
    lcd.print(data.sensors.humidity,0);
    lcd.print("%   ");
}
