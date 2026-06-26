#include "HAL.h"
#include "Config.h"

void HAL::begin(){
    Wire.begin(PIN_SDA,PIN_SCL);
    pinMode(PIN_BUTTON,INPUT_PULLUP);
    pinMode(PIN_PUMP,OUTPUT);
    pinMode(PIN_BUZZER,OUTPUT);
    digitalWrite(PIN_PUMP,LOW);
    digitalWrite(PIN_BUZZER,LOW);
    analogReadResolution(12);
}

bool HAL::readButton() const{
    return digitalRead(PIN_BUTTON)==LOW;
}

uint16_t HAL::readAnalog(uint8_t pin) const{
    return analogRead(pin);
}

void HAL::setPump(bool on){
    digitalWrite(PIN_PUMP,on?HIGH:LOW);
}

void HAL::setBuzzer(bool on){
    digitalWrite(PIN_BUZZER,on?HIGH:LOW);
}

TwoWire& HAL::wire(){
    return Wire;
}
