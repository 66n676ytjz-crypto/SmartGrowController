#include "FloraController.h"
#include <Arduino.h>
void FloraController::begin(){hal.begin();}
void FloraController::update(){data.system.now=millis();}
