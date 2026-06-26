#pragma once

#include "Manager.h"

class DisplayManager : public Manager
{
public:
    DisplayManager();

    void begin() override;
    void update(GrowData& data) override;
};
