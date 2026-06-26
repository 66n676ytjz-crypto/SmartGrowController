#pragma once
#include "Manager.h"
#include "HAL.h"
class BuzzerManager: public Manager{
public:
 explicit BuzzerManager(HAL& h);
 void begin() override;
 void update(GrowData& data) override;
private:
 HAL& hal;
 uint32_t lastBeep=0;
};
