#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"

class SetupDashRingPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupDashRingPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupDashRingPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x36da50
     * @note[short] Android
     */
    static SetupDashRingPopup* create(DashRingObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x36db00
     * @note[short] Android
     */
    bool init(DashRingObject* p0, cocos2d::CCArray* p1);
};
