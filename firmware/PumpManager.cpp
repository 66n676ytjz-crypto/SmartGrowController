#include "PumpManager.h"
PumpManager::PumpManager(HAL& h):hal(h){}
void PumpManager::begin(){hal.setPump(false);}
void PumpManager::update(GrowData& data){
 if(data.pump.running) hal.setPump(true);
 else hal.setPump(false);
}
