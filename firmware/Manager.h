/******************************************************************************
 *
 * SmartGrowController
 * Manager Base Class
 *
 * All application managers inherit from this interface.
 *
 ******************************************************************************/

#pragma once

#include "GrowData.h"

class Manager
{
public:
    virtual ~Manager() = default;

    // Called once during startup
    virtual void begin() = 0;

    // Called every loop
    virtual void update(GrowData& data) = 0;
};
