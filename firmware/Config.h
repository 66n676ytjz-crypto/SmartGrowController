/******************************************************************************
 *
 * SmartGrowController
 * Configuration
 *
 ******************************************************************************/

#pragma once

#include <Arduino.h>

//=========================================================
// Firmware
//=========================================================

#define FLORA_VERSION "0.1.0-alpha"

//=========================================================
// Debug
//=========================================================

constexpr bool DEBUG_ENABLED = true;
constexpr uint32_t SERIAL_BAUD = 115200;

//=========================================================
// Hardware Pins
//=========================================================

// I2C
constexpr uint8_t PIN_SDA = 21;
constexpr uint8_t PIN_SCL = 22;

// DHT22
constexpr uint8_t PIN_DHT = 4;

// Soil Moisture
constexpr uint8_t PIN_SOIL = 34;

// Water Tank
constexpr uint8_t PIN_TANK = 35;

// Light Sensor (BH1750 on I2C)

// Relay
constexpr uint8_t PIN_PUMP = 26;

// Button
constexpr uint8_t PIN_BUTTON = 27;

// Buzzer
constexpr uint8_t PIN_BUZZER = 25;

//=========================================================
// LCD
//=========================================================

constexpr uint8_t LCD_ADDRESS = 0x27;
constexpr uint8_t LCD_COLUMNS = 20;
constexpr uint8_t LCD_ROWS = 4;

//=========================================================
// Pump Settings
//=========================================================

constexpr uint32_t PUMP_RUNTIME_MS = 2000;
constexpr uint32_t PUMP_COOLDOWN_MS = 300000;

//=========================================================
// Button Settings
//=========================================================

constexpr uint32_t BUTTON_DEBOUNCE_MS = 50;
constexpr uint32_t INFO_PAGE_TIMEOUT_MS = 15000;

//=========================================================
// Alarm Settings
//=========================================================

constexpr uint32_t BUZZER_INTERVAL_MS = 30000;

//=========================================================
// Sensor Calibration Defaults
//=========================================================

constexpr uint16_t SOIL_DRY_RAW = 2800;
constexpr uint16_t SOIL_WET_RAW = 1200;

constexpr uint8_t MIN_TANK_PERCENT = 20;