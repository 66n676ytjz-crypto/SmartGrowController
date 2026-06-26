struct PumpData
{
    bool enabled = true;

    bool running = false;

    bool manualRequest = false;

    bool lowTankLockout = false;

    uint32_t startTime = 0;

    uint32_t lastRun = 0;

    uint32_t totalRuns = 0;

    uint32_t totalRuntime = 0;
};
