#pragma once
#include "Manager.h"
#include "HAL.h"
class ButtonManager: public Manager{
public:
 explicit ButtonManager(HAL& h);
 void begin() override;
 void update(GrowData& data) override;
private:
 HAL& hal;
 bool lastState=false;
 uint32_t lastChange=0;
};
