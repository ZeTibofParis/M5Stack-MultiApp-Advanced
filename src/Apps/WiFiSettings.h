#pragma once
#include "M5StackMod.h"
#include "WifiWps/WpsConnect.h"

class WifiSettingsClass
{
public:
    WifiSettingsClass();
    ~WifiSettingsClass();

    void Run();

private:
    void AP_Mode();
    void STA_Mode();
    void APSTA_Mode();
    void SmartConfig();
};