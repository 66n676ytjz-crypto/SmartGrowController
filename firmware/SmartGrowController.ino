/******************************************************************************
 *
 * SmartGrowController
 * Flora Core Firmware
 *
 * Main Application Entry Point
 *
 ******************************************************************************/

#include <Arduino.h>

#include "Config.h"
#include "FloraController.h"

//=====================================================================
// Application
//=====================================================================

FloraController app;

//=====================================================================
// Arduino Setup
//=====================================================================

void setup()
{
    Serial.begin(SERIAL_BAUD);

#if DEBUG_ENABLED
    Serial.println();
    Serial.println(F("========================================"));
    Serial.println(F(" SmartGrowController"));
    Serial.print(F(" Version: "));
    Serial.println(FLORA_VERSION);
    Serial.println(F("========================================"));
#endif

    app.begin();
}

//=====================================================================
// Arduino Loop
//=====================================================================

void loop()
{
    app.update();
}
