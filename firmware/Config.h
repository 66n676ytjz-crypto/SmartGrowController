#pragma once
#include <Arduino.h>
#define FLORA_VERSION "0.1.0-alpha"
constexpr uint32_t SERIAL_BAUD=115200;
constexpr uint8_t PIN_SDA=21,PIN_SCL=22,PIN_DHT=4,PIN_SOIL=34,PIN_TANK=35,PIN_PUMP=26,PIN_BUTTON=27,PIN_BUZZER=25;
constexpr uint8_t LCD_ADDRESS=0x27,LCD_COLUMNS=20,LCD_ROWS=4;
