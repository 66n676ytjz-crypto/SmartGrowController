#pragma once

#include "Manager.h"
#include "HAL.h"

class ButtonManager : public Manager
{
public:
    explicit ButtonManager(HAL& hal);

    void begin() override;
    void update(GrowData& data) override;

private:
    HAL& hal;
};
