#include "SensorManager.h"
#include "Config.h"

SensorManager::SensorManager(HAL& h):hal(h){}

void SensorManager::begin(){}

void SensorManager::update(GrowData& data){
    data.sensors.soilRaw=hal.readAnalog(PIN_SOIL);
    data.sensors.tankRaw=hal.readAnalog(PIN_TANK);

    data.sensors.soilPercent=constrain(map(data.sensors.soilRaw,2800,1200,0,100),0,100);
    data.sensors.tankPercent=constrain(map(data.sensors.tankRaw,1200,4095,0,100),0,100);

    data.alarms.lowWater=data.sensors.tankPercent<20;
}
