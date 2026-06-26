#include "GrowSystem.h"

void GrowSystem::begin()
{
    hal.begin();

    sensors.begin();

    display.begin();

    pump.begin();

    button.begin();

    buzzer.begin();
}

void GrowSystem::update()
{
    sensors.update(data);

    button.update(data);

    pump.update(data);

    buzzer.update(data);

    display.update(data);
}