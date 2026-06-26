{\rtf1\ansi\ansicpg1252\cocoartf2822
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 /******************************************************************************\
 *\
 * Flora Core\
 * SmartGrowController\
 *\
 * Configuration\
 *\
 ******************************************************************************/\
\
#pragma once\
\
#include <Arduino.h>\
\
//=====================================================================\
// Version\
//=====================================================================\
\
#define FLORA_VERSION        "0.1.0"\
#define FLORA_BUILD_DATE     __DATE__\
#define FLORA_BUILD_TIME     __TIME__\
\
//=====================================================================\
// Hardware Pins\
//=====================================================================\
\
constexpr uint8_t PIN_BUTTON = 5;\
constexpr uint8_t PIN_BUZZER = 16;\
constexpr uint8_t PIN_DHT = 17;\
constexpr uint8_t PIN_RELAY = 25;\
\
constexpr uint8_t PIN_SOIL = 32;\
constexpr uint8_t PIN_WATER = 33;\
constexpr uint8_t PIN_LIGHT = 34;\
\
//=====================================================================\
// I2C\
//=====================================================================\
\
constexpr uint8_t PIN_SDA = 21;\
constexpr uint8_t PIN_SCL = 22;\
\
//=====================================================================\
// LCD\
//=====================================================================\
\
constexpr uint8_t LCD_ADDRESS = 0x27;\
constexpr uint8_t LCD_COLUMNS = 16;\
constexpr uint8_t LCD_ROWS = 2;\
\
//=====================================================================\
// Timing\
//=====================================================================\
\
constexpr uint32_t SENSOR_INTERVAL = 2000;\
constexpr uint32_t DISPLAY_INTERVAL = 250;\
constexpr uint32_t BUTTON_PAGE_TIMEOUT = 15000;\
\
constexpr uint32_t PUMP_RUNTIME = 2000;\
constexpr uint32_t PUMP_COOLDOWN = 300000;\
\
constexpr uint32_t BUZZER_INTERVAL = 30000;\
\
//=====================================================================\
// Calibration Defaults\
//=====================================================================\
\
constexpr int SOIL_DRY_DEFAULT = 2800;\
constexpr int SOIL_WET_DEFAULT = 1200;\
\
constexpr int WATER_LOW_DEFAULT = 1200;\
\
//=====================================================================\
// WiFi\
//=====================================================================\
\
constexpr char HOSTNAME[] = "Flora-Core";\
\
//=====================================================================\
// Debug\
//=====================================================================\
\
#define SERIAL_BAUD 115200\
\
#define DEBUG_SERIAL true\
\
#if DEBUG_SERIAL\
#define DEBUG_PRINT(x) Serial.print(x)\
#define DEBUG_PRINTLN(x) Serial.println(x)\
#else\
#define DEBUG_PRINT(x)\
#define DEBUG_PRINTLN(x)\
#endif}