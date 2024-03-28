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

class SetupShakePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupShakePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupShakePopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x357530
     * @note[short] Android
     */
    static SetupShakePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x3575e0
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupShakePopup::sliderChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupShakePopup::updateDuration not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDuration();
public:
    
private:
    [[deprecated("SetupShakePopup::updateDurLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDurLabel(bool p0);
public:
    
private:
    [[deprecated("SetupShakePopup::updateInterval not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateInterval();
public:
    
private:
    [[deprecated("SetupShakePopup::updateIntervalLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateIntervalLabel(bool p0);
public:
    
private:
    [[deprecated("SetupShakePopup::updateShake not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateShake();
public:
    
private:
    [[deprecated("SetupShakePopup::updateShakeLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateShakeLabel(bool p0);
public:

    /**
     * @note[short] Windows: 0x357e70
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();

    /**
     * @note[short] Windows: 0x3587c0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3584a0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
};
