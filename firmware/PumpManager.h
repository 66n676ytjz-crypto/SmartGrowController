#pragma once

#include "Manager.h"
#include "HAL.h"

class PumpManager : public Manager
{
public:
    explicit PumpManager(HAL& hal);

    void begin() override;
    void update(GrowData& data) override;

private:
    HAL& hal;
};
