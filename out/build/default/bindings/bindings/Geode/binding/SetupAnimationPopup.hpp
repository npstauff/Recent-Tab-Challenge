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

class SetupAnimationPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAnimationPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAnimationPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x31c510
     * @note[short] Android
     */
    static SetupAnimationPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x31c5c0
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupAnimationPopup::onAnimationIDArrow not implemented")]]
    /**
     * @note[short] Android
     */
    void onAnimationIDArrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupAnimationPopup::onTargetIDArrow not implemented")]]
    /**
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupAnimationPopup::updateAnimationID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateAnimationID();
public:
    
private:
    [[deprecated("SetupAnimationPopup::updateAnimationTextInputLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateAnimationTextInputLabel();
public:
    
private:
    [[deprecated("SetupAnimationPopup::updateTargetID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTargetID();
public:
    
private:
    [[deprecated("SetupAnimationPopup::updateTextInputLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTextInputLabel();
public:

    /**
     * @note[short] Windows: 0x31d110
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();

    /**
     * @note[short] Windows: 0x31d580
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x31d280
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
};