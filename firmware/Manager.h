#pragma once
#include "GrowData.h"
class Manager{
public:
    virtual ~Manager()=default;
    virtual void begin()=0;
    virtual void update(GrowData& data)=0;
};
