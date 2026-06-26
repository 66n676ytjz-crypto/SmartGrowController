#pragma once
#include "Manager.h"
#include "HAL.h"
class PumpManager: public Manager{
public:
 explicit PumpManager(HAL& h);
 void begin() override;
 void update(GrowData& data) override;
private:
 HAL& hal;
};
