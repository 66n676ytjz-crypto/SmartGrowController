#pragma once

#include "Manager.h"
#include "HAL.h"

class SensorManager : public Manager
{
public:
    explicit SensorManager(HAL& hal);

    void begin() override;

    void update(GrowData& data) override;

private:
    HAL& hal;
};
};
