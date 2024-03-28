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

class SetupTimeWarpPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupTimeWarpPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTimeWarpPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x361c90
     * @note[short] Android
     */
    static SetupTimeWarpPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x361d40
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupTimeWarpPopup::sliderChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupTimeWarpPopup::updateTimeWarp not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTimeWarp();
public:
    
private:
    [[deprecated("SetupTimeWarpPopup::updateTimeWarpLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTimeWarpLabel();
public:

    /**
     * @note[short] Windows: 0x362120
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();
    
private:
    [[deprecated("SetupTimeWarpPopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
};
