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

class SetupAnimSettingsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAnimSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAnimSettingsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x31d690
     * @note[short] Android
     */
    static SetupAnimSettingsPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x31d740
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupAnimSettingsPopup::updateAnimSettings not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateAnimSettings();
public:
    
private:
    [[deprecated("SetupAnimSettingsPopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
};
