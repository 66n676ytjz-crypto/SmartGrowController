#include "ButtonManager.h"
#include "Config.h"
#include <Arduino.h>
ButtonManager::ButtonManager(HAL& h):hal(h){}
void ButtonManager::begin(){}
void ButtonManager::update(GrowData& data){
 bool pressed=hal.readButton();
 if(pressed && !lastState){
   data.display.infoPage=!data.display.infoPage;
   data.display.pageStart=millis();
 }
 lastState=pressed;
}
