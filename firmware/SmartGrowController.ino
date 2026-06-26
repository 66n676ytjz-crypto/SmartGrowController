/******************************************************************************
 *
 * SmartGrowController
 * Flora Core
 *
 * Main Arduino Sketch
 *
 ******************************************************************************/

#include <Arduino.h>

#include "Config.h"
#include "FloraController.h"

//=====================================================================
// Global Application
//=====================================================================

FloraController flora;

//=====================================================================
// Setup
//=====================================================================

void setup()
{
    Serial.begin(SERIAL_BAUD);

    DEBUG_PRINTLN();
    DEBUG_PRINTLN("========================================");
    DEBUG_PRINTLN("      Flora Core");
    DEBUG_PRINT("      Version ");
    DEBUG_PRINTLN(FLORA_VERSION);
    DEBUG_PRINTLN("========================================");

    flora.begin();

    DEBUG_PRINTLN("System Ready");
}

//=====================================================================
// Main Loop
//=====================================================================

void loop()
{
    flora.update();
}
{
    flora.update();
}
