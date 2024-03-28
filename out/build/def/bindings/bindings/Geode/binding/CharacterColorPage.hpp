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

class CharacterColorPage : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "CharacterColorPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CharacterColorPage, FLAlertLayer)

    /**
     * @note[short] Windows: 0x5e9b0
     * @note[short] Android
     */
    static CharacterColorPage* create();

    /**
     * @note[short] Windows: 0x5fa50
     * @note[short] Android
     */
    int activeColorForMode(int mode);
    
private:
    [[deprecated("CharacterColorPage::checkColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkColor(int p0, UnlockType p1);
public:
    
private:
    [[deprecated("CharacterColorPage::colorForIndex not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn colorForIndex(int p0);
public:

    /**
     * @note[short] Windows: 0x5f630
     * @note[short] Android
     */
    TodoReturn createColorMenu();
    
private:
    [[deprecated("CharacterColorPage::FLAlert_Clicked not implemented")]]
    /**
     * @note[short] Android
     */
    void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("CharacterColorPage::offsetForIndex not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn offsetForIndex(int p0);
public:

    /**
     * @note[short] Windows: 0x608a0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x5fab0
     * @note[short] Android
     */
    void onMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x60000
     * @note[short] Android
     */
    void onPlayerColor(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x5f600
     * @note[short] Android
     */
    TodoReturn toggleGlow(cocos2d::CCObject* p0);
    
private:
    [[deprecated("CharacterColorPage::toggleGlowItems not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleGlowItems(bool p0);
public:

    /**
     * @note[short] Windows: 0x5f560
     * @note[short] Android
     */
    TodoReturn toggleShip(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x5fc60
     * @note[short] Android
     */
    TodoReturn updateColorMode(int p0);

    /**
     * @note[short] Windows: 0x60700
     * @note[short] Android
     */
    TodoReturn updateIconColors();

    /**
     * @note[short] Windows: 0x5ea50
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("CharacterColorPage::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("CharacterColorPage::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("CharacterColorPage::show not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void show();
public:
};
