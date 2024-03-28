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

class UIObjectSettingsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "UIObjectSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UIObjectSettingsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x367170
     * @note[short] Android
     */
    static UIObjectSettingsPopup* create(UISettingsGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x367220
     * @note[short] Android
     */
    bool init(UISettingsGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("UIObjectSettingsPopup::onCustomToggleTriggerValue not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
public:
};
