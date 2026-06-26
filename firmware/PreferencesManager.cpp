#include "PreferencesManager.h"

bool PreferencesManager::begin() {
    return prefs.begin("flora", false);
}
bool PreferencesManager::load(Settings&) {
    // TODO: Load persisted settings
    return true;
}
bool PreferencesManager::save(const Settings&) {
    // TODO: Save persisted settings
    return true;
}
