#include "HAL.h"
#include "Config.h"

void HAL::begin()
{
    Wire.begin(PIN_SDA, PIN_SCL);

    pinMode(PIN_BUTTON, INPUT_PULLUP);

    pinMode(PIN_PUMP, OUTPUT);
    digitalWrite(PIN_PUMP, LOW);

    pinMode(PIN_BUZZER, OUTPUT);

    analogReadResolution(12);
}

bool HAL::digitalReadPin(uint8_t pin)
{
    return digitalRead(pin);
}

void HAL::digitalWritePin(uint8_t pin, bool state)
{
    digitalWrite(pin, state ? HIGH : LOW);
}

uint16_t HAL::analogReadPin(uint8_t pin)
{
    return analogRead(pin);
}

TwoWire& HAL::i2c()
{
    return Wire;
}

void HAL::setPump(bool on)
{
    digitalWrite(PIN_PUMP, on ? HIGH : LOW);
}

bool HAL::readButton()
{
    // Active-low button
    return digitalRead(PIN_BUTTON) == LOW;
}

void HAL::beep(uint16_t frequency, uint16_t duration)
{
#if ESP_ARDUINO_VERSION_MAJOR >= 3
    ledcAttach(PIN_BUZZER, frequency, 8);
    delay(duration);
    ledcDetach(PIN_BUZZER);
#else
    ledcSetup(BUZZER_CHANNEL, frequency, 8);
    ledcAttachPin(PIN_BUZZER, BUZZER_CHANNEL);
    ledcWriteTone(BUZZER_CHANNEL, frequency);
    delay(duration);
    ledcWriteTone(BUZZER_CHANNEL, 0);
#endif
}
