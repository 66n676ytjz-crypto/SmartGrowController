#pragma once
#include "GrowData.h"
#include "HAL.h"
#include "Settings.h"

struct Context {
    HAL& hal;
    GrowData& data;
    Settings& settings;
};
