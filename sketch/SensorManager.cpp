{\rtf1\ansi\ansicpg1252\cocoartf2822
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include "SensorManager.h"\
\
SensorManager::SensorManager(HAL& h)\
    : hal(h),\
      dht(PIN_DHT, DHT11)\
\{\
\}\
\
void SensorManager::begin()\
\{\
    dht.begin();\
\}\
\
uint8_t SensorManager::percent(uint16_t value,\
                               uint16_t dry,\
                               uint16_t wet)\
\{\
    value = constrain(value, wet, dry);\
\
    return map(value,\
               dry,\
               wet,\
               0,\
               100);\
\}\
\
void SensorManager::update(GrowData& data)\
\{\
    if (millis() - lastRead < SENSOR_INTERVAL)\
        return;\
\
    lastRead = millis();\
\
    data.sensors.temperatureF =\
        dht.readTemperature(true);\
\
    data.sensors.humidity =\
        dht.readHumidity();\
\
    data.sensors.soilRaw =\
        hal.readSoil();\
\
    data.sensors.waterRaw =\
        hal.readWater();\
\
    data.sensors.lightRaw =\
        hal.readLight();\
\
    data.sensors.soilPercent =\
        percent(data.sensors.soilRaw,\
                data.sensors.soilDry,\
                data.sensors.soilWet);\
\
    data.sensors.tankPercent =\
        map(data.sensors.waterRaw,\
            data.sensors.waterLow,\
            4095,\
            0,\
            100);\
\
    data.alarms.lowWater =\
        data.sensors.waterRaw < data.sensors.waterLow;\
\
    data.alarms.soilDry =\
        data.sensors.soilPercent < 30;\
\
    data.sensors.valid =\
        !isnan(data.sensors.temperatureF) &&\
        !isnan(data.sensors.humidity);\
\
    data.system.uptime = millis();\
\}}