#pragma once
#include "Manager.h"
#include <LiquidCrystal_I2C.h>

class DisplayManager: public Manager{
public:
    DisplayManager();
    void begin() override;
    void update(GrowData& data) override;
private:
    LiquidCrystal_I2C lcd;
    bool lastInfo=false;
};
