#pragma once
#include <Arduino.h>
struct SensorData{float temperatureC=0,temperatureF=0,humidity=0,lightLux=0;uint16_t soilRaw=0,tankRaw=0;uint8_t soilPercent=0,tankPercent=0;};
struct PumpData{bool enabled=true;bool running=false;};
struct DisplayData{bool infoPage=false;uint32_t pageStart=0;};
struct AlarmData{bool lowWater=false;};
struct SystemData{uint32_t now=0;};
struct GrowData{SensorData sensors;PumpData pump;DisplayData display;AlarmData alarms;SystemData system;};
