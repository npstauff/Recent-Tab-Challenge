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

class SetupTouchTogglePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupTouchTogglePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTouchTogglePopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x362500
     * @note[short] Android
     */
    static SetupTouchTogglePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x3625a0
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupTouchTogglePopup::onControlMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onControlMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTouchTogglePopup::onDualTouchMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onDualTouchMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTouchTogglePopup::onHoldMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onHoldMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTouchTogglePopup::onTargetIDArrow not implemented")]]
    /**
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTouchTogglePopup::onTouchMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onTouchMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTouchTogglePopup::updateTargetID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTargetID();
public:
    
private:
    [[deprecated("SetupTouchTogglePopup::updateTextInputLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTextInputLabel();
public:
    
private:
    [[deprecated("SetupTouchTogglePopup::determineStartValues not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupTouchTogglePopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTouchTogglePopup::textChanged not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
};
