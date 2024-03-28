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

class SetupGradientPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupGradientPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupGradientPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x32f140
     * @note[short] Android
     */
    static SetupGradientPopup* create(GradientTriggerObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x32f1f0
     * @note[short] Android
     */
    bool init(GradientTriggerObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupGradientPopup::onBlending not implemented")]]
    /**
     * @note[short] Android
     */
    void onBlending(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupGradientPopup::onZLayer not implemented")]]
    /**
     * @note[short] Android
     */
    void onZLayer(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupGradientPopup::sliderChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupGradientPopup::updateBlending not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateBlending();
public:
    
private:
    [[deprecated("SetupGradientPopup::updateBlendingLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateBlendingLabel();
public:
    
private:
    [[deprecated("SetupGradientPopup::updateGradientLabels not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGradientLabels(bool p0);
public:
    
private:
    [[deprecated("SetupGradientPopup::updateZLayerButtons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateZLayerButtons();
public:
    
private:
    [[deprecated("SetupGradientPopup::determineStartValues not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("SetupGradientPopup::onPlusButton not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupGradientPopup::updateToggleItem not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateToggleItem(int p0, bool p1);
public:
    
private:
    [[deprecated("SetupGradientPopup::valueDidChange not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
public:
};
