/******************************************************************************
 *
 * SmartGrowController
 * Shared Runtime Data
 *
 ******************************************************************************/

#pragma once

#include <Arduino.h>

struct SensorData
{
    float temperatureC = 0.0f;
    float temperatureF = 0.0f;
    float humidity = 0.0f;

    uint16_t soilRaw = 0;
    uint8_t soilPercent = 0;

    uint16_t tankRaw = 0;
    uint8_t tankPercent = 0;

    float lightLux = 0.0f;
};

struct PumpData
{
    bool enabled = true;
    bool running = false;

    bool manualRequest = false;
    bool lowTankLockout = false;

    uint32_t startTime = 0;
    uint32_t lastRun = 0;

    uint32_t totalRuns = 0;
    uint32_t totalRuntime = 0;
};

struct DisplayData
{
    bool infoPage = false;
    uint32_t pageStart = 0;
};

struct AlarmData
{
    bool lowWater = false;
    bool sensorFault = false;
};

struct SystemData
{
    uint32_t now = 0;

    bool wifiConnected = false;

    bool otaRunning = false;
};

struct GrowData
{
    SensorData sensors;

    PumpData pump;

    DisplayData display;

    AlarmData alarms;

    SystemData system;
};
