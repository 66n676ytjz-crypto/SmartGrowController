#include <Arduino.h>
#include "Config.h"
#include "FloraController.h"

FloraController app;

void setup(){Serial.begin(SERIAL_BAUD);app.begin();}
void loop(){app.update();}
