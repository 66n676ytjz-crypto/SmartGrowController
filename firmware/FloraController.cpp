#include "FloraController.h"

void FloraController::begin()
{
    hal.begin();

    sensors.begin();

    display.begin();

    pump.begin();

    button.begin();

    buzzer.begin();
}

void FloraController::update()
{
    sensors.update(data);

    button.update(data);

    pump.update(data);

    buzzer.update(data);

    display.update(data);
}#include "FloraController.h"

FloraController::FloraController()
    : sensors(hal),
      pump(hal),
      button(hal),
      buzzer(hal)
{
}

void FloraController::begin()
{
    hal.begin();

    sensors.begin();
    display.begin();
    pump.begin();
    button.begin();
    buzzer.begin();
}

void FloraController::update()
{
    sensors.update(data);
    button.update(data);
    pump.update(data);
    buzzer.update(data);
    display.update(data);
}