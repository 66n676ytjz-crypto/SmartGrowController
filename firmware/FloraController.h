#pragma once
#include "GrowData.h"
#include "HAL.h"
class FloraController{public:void begin();void update();private:HAL hal;GrowData data;};
