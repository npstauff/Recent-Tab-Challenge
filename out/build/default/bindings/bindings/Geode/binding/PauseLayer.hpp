#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCBlockLayer.hpp"

class PauseLayer : public CCBlockLayer {
public:
    static constexpr auto CLASS_NAME = "PauseLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PauseLayer, CCBlockLayer)

    /**
     * @note[short] Windows: 0x2b8940
     * @note[short] Android
     */
    static PauseLayer* create(bool p0);
    
private:
    [[deprecated("PauseLayer::createToggleButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
public:

    /**
     * @note[short] Windows: 0x2ba0f0
     * @note[short] Android
     */
    void goEdit();
    
private:
    [[deprecated("PauseLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(bool p0);
public:

    /**
     * @note[short] Windows: 0x2b9da0
     * @note[short] Android
     */
    void musicSliderChanged(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x2ba020
     * @note[short] Android
     */
    void onEdit(cocos2d::CCObject* sender);
    
private:
    [[deprecated("PauseLayer::onHelp not implemented")]]
    /**
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2b9ed0
     * @note[short] Android
     */
    void onNormalMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2b9e60
     * @note[short] Android
     */
    void onPracticeMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2ba240
     * @note[short] Android
     */
    void onQuit(cocos2d::CCObject* sender);
    
private:
    [[deprecated("PauseLayer::onRecordReplays not implemented")]]
    /**
     * @note[short] Android
     */
    void onRecordReplays(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("PauseLayer::onReplay not implemented")]]
    /**
     * @note[short] Android
     */
    void onReplay(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2b9f80
     * @note[short] Android
     */
    void onRestart(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2b9fd0
     * @note[short] Android
     */
    void onRestartFull(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2b9f30
     * @note[short] Android
     */
    void onResume(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2b94d0
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);
    
private:
    [[deprecated("PauseLayer::onTime not implemented")]]
    /**
     * @note[short] Android
     */
    void onTime(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2b94f0
     * @note[short] Android
     */
    void setupProgressBars();

    /**
     * @note[short] Windows: 0x2b0e70
     * @note[short] Android
     */
    void sfxSliderChanged(cocos2d::CCObject* p0);
    
private:
    [[deprecated("PauseLayer::tryShowBanner not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryShowBanner(float p0);
public:

    /**
     * @note[short] Windows: 0x2ba170
     * @note[short] Android
     */
    void tryQuit(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2ba3a0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x2ba310
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] Windows: 0x2b89f0
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] Out of line
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);
};
