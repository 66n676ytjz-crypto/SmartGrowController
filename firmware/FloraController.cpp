/******************************************************************************
 *
 * SmartGrowController
 * Flora Controller
 *
 ******************************************************************************/

#include "FloraController.h"

FloraController::FloraController()
    :
    sensors(hal),
    button(hal),
    pump(hal),
    buzzer(hal)
{
}

void FloraController::begin()
{
    hal.begin();

    sensors.begin();

    display.begin();

    button.begin();

    pump.begin();

    buzzer.begin();
}

void FloraController::update()
{
    //-------------------------------------------------
    // System Time
    //-------------------------------------------------

    data.system.now = millis();

    //-------------------------------------------------
    // Inputs
    //-------------------------------------------------

    sensors.update(data);

    button.update(data);

    //-------------------------------------------------
    // Automation
    //-------------------------------------------------

    pump.update(data);

    buzzer.update(data);

    //-------------------------------------------------
    // Outputs
    //-------------------------------------------------

    display.update(data);
}
