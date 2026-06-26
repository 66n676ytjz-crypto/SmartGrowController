#pragma once
#include <Arduino.h>
#include <Wire.h>

class HAL {
public:
    void begin();
    bool readButton() const;
    uint16_t readAnalog(uint8_t pin) const;
    void setPump(bool on);
    void setBuzzer(bool on);
    TwoWire& wire();
};
