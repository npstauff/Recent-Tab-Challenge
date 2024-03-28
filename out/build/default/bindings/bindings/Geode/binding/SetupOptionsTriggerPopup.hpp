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

class SetupOptionsTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupOptionsTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupOptionsTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x340390
     * @note[short] Android
     */
    static SetupOptionsTriggerPopup* create(GameOptionsTrigger* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupOptionsTriggerPopup::addOption not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addOption(int p0, gd::string p1);
public:

    /**
     * @note[short] Windows: 0x340440
     * @note[short] Android
     */
    bool init(GameOptionsTrigger* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x340a50
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
};
