#include "BuzzerManager.h"
#include <Arduino.h>
BuzzerManager::BuzzerManager(HAL& h):hal(h){}
void BuzzerManager::begin(){}
void BuzzerManager::update(GrowData& data){
 if(data.alarms.lowWater && millis()-lastBeep>30000){
   hal.setBuzzer(true);
   delay(100);
   hal.setBuzzer(false);
   lastBeep=millis();
 }
}
