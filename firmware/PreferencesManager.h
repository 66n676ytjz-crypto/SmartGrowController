#pragma once
#include <Preferences.h>
#include "Settings.h"

class PreferencesManager {
public:
    bool begin();
    bool load(Settings& settings);
    bool save(const Settings& settings);
private:
    Preferences prefs;
};
