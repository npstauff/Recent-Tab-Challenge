#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"
#include "FLAlertLayerProtocol.hpp"

class OptionsLayer : public GJDropDownLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "OptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(OptionsLayer, GJDropDownLayer)

    /**
     * @note[short] Windows: 0x2b01c0
     * @note[short] Android
     */
    static OptionsLayer* create();
    
private:
    [[deprecated("OptionsLayer::createToggleButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
public:
    
private:
    [[deprecated("OptionsLayer::exitLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn exitLayer();
public:

    /**
     * @note[short] Windows: 0x2b0d80
     * @note[short] Android
     */
    TodoReturn musicSliderChanged(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x2b1380
     * @note[short] Android
     */
    void onAccount(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2b1400
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2b0ce0
     * @note[short] Android
     */
    void onMenuMusic(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2b0f70
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);
    
private:
    [[deprecated("OptionsLayer::onProgressBar not implemented")]]
    /**
     * @note[short] Android
     */
    void onProgressBar(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2b13c0
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);
    
private:
    [[deprecated("OptionsLayer::onRecordReplays not implemented")]]
    /**
     * @note[short] Android
     */
    void onRecordReplays(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2b0f90
     * @note[short] Android
     */
    void onSecretVault(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2b0f30
     * @note[short] Android
     */
    void onSoundtracks(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2b1340
     * @note[short] Android
     */
    void onSupport(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2b1320
     * @note[short] Android
     */
    void onVideo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2b0e70
     * @note[short] Android
     */
    TodoReturn sfxSliderChanged(cocos2d::CCObject* p0);
    
private:
    [[deprecated("OptionsLayer::tryEnableRecord not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryEnableRecord();
public:

    /**
     * @note[short] Windows: 0x2b02d0
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] Windows: 0x2b1420
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] Out of line
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
