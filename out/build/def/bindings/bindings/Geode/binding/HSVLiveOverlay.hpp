#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "HSVWidgetDelegate.hpp"

class HSVLiveOverlay : public FLAlertLayer, public HSVWidgetDelegate {
public:
    static constexpr auto CLASS_NAME = "HSVLiveOverlay";
    GEODE_CUSTOM_CONSTRUCTOR_GD(HSVLiveOverlay, FLAlertLayer)

    /**
     * @note[short] Windows: 0x227740
     * @note[short] Android
     */
    static HSVLiveOverlay* create(GameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("HSVLiveOverlay::closeColorSelect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn closeColorSelect(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("HSVLiveOverlay::createHSVWidget not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createHSVWidget(int p0);
public:
    
private:
    [[deprecated("HSVLiveOverlay::determineStartValues not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn determineStartValues();
public:

    /**
     * @note[short] Windows: 0x2277f0
     * @note[short] Android
     */
    bool init(GameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("HSVLiveOverlay::onSelectTab not implemented")]]
    /**
     * @note[short] Android
     */
    void onSelectTab(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("HSVLiveOverlay::toggleControls not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleControls(bool p0);
public:
    
private:
    [[deprecated("HSVLiveOverlay::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("HSVLiveOverlay::show not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void show();
public:
    
private:
    [[deprecated("HSVLiveOverlay::hsvChanged not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn hsvChanged(ConfigureHSVWidget* p0);
public:
};
