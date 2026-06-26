/******************************************************************************
 *
 * Flora Core
 * Button Manager
 *
 ******************************************************************************/

#include "ButtonManager.h"

ButtonManager::ButtonManager(HAL& h)
    : hal(h)
{
}

void ButtonManager::begin()
{
}

void ButtonManager::update(GrowData& data)
{
    bool pressed = hal.readButton();

    if (pressed != lastState)
    {
        lastDebounce = millis();
        lastState = pressed;
    }

    if ((millis() - lastDebounce) < DEBOUNCE_MS)
        return;

    if (pressed)
    {
        data.display.infoPage = true;
        data.display.pageStart = millis();
    }

    if (data.display.infoPage &&
        millis() - data.display.pageStart > BUTTON_PAGE_TIMEOUT)
    {
        data.display.infoPage = false;
    }
}
