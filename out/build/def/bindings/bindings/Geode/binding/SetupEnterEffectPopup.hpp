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
#include "HSVWidgetDelegate.hpp"

class SetupEnterEffectPopup : public SetupTriggerPopup, public HSVWidgetDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupEnterEffectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupEnterEffectPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x32d400
     * @note[short] Android
     */
    static SetupEnterEffectPopup* create(EnterEffectObject* p0, cocos2d::CCArray* p1, int p2);

    /**
     * @note[short] Windows: 0x32d4b0
     * @note[short] Android
     */
    bool init(EnterEffectObject* p0, cocos2d::CCArray* p1, int p2);
    
private:
    [[deprecated("SetupEnterEffectPopup::onEnterType not implemented")]]
    /**
     * @note[short] Android
     */
    void onEnterType(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::onHSV not implemented")]]
    /**
     * @note[short] Android
     */
    void onHSV(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::onNextFreeEnterChannel not implemented")]]
    /**
     * @note[short] Android
     */
    void onNextFreeEnterChannel(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::onNextFreeEnterEffectID not implemented")]]
    /**
     * @note[short] Android
     */
    void onNextFreeEnterEffectID(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::updateHSVButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateHSVButton();
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::determineStartValues not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::updateInputValue not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateInputValue(int p0, float& p1);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::updateInputNode not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateInputNode(int p0, float p1);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::valueDidChange not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::triggerValueFromSliderValue not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn triggerValueFromSliderValue(int p0, float p1);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::triggerSliderValueFromValue not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn triggerSliderValueFromValue(int p0, float p1);
public:
    
private:
    [[deprecated("SetupEnterEffectPopup::hsvPopupClosed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn hsvPopupClosed(HSVWidgetPopup* p0, cocos2d::ccHSVValue p1);
public:
};
