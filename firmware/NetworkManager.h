#pragma once
#include "Manager.h"

class NetworkManager : public Manager {
public:
    void begin() override;
    void update(GrowData& data) override;
};
