#pragma once

#include <Arduino.h>
#include <Wire.h>

class HAL
{
public:
    HAL() = default;

    void begin();

    // GPIO
    bool digitalReadPin(uint8_t pin);
    void digitalWritePin(uint8_t pin, bool state);

    // Analog
    uint16_t analogReadPin(uint8_t pin);

    // I2C
    TwoWire& i2c();

    // Pump
    void setPump(bool on);

    // Button
    bool readButton();

    // Buzzer
    void beep(uint16_t frequency, uint16_t duration);

private:
    static constexpr uint8_t BUZZER_CHANNEL = 0;
};
