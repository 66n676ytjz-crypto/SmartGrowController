/******************************************************************************
 *
 * Flora Core
 * Flora Controller
 *
 ******************************************************************************/

#include "FloraController.h"

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
    // Read Sensors
    sensors.update(data);

    // Read Inputs
    button.update(data);

    // Process Outputs
    pump.update(data);

    buzzer.update(data);

    // Update Display Last
    display.update(data);
}
    buzzer.update(data);
    display.update(data);
}
