#pragma once
#include <Arduino.h>

class Scheduler {
public:
    void begin() {}
    bool every(uint32_t intervalMs, uint32_t &lastRun, uint32_t now) {
        if (now - lastRun >= intervalMs) {
            lastRun = now;
            return true;
        }
        return false;
    }
};
