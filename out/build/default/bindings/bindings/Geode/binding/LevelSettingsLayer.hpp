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
#include "ColorSelectDelegate.hpp"
#include "SelectArtDelegate.hpp"
#include "SelectSettingDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "CustomSongLayerDelegate.hpp"
#include "TextInputDelegate.hpp"

class LevelSettingsLayer : public FLAlertLayer, public ColorSelectDelegate, public SelectArtDelegate, public SelectSettingDelegate, public FLAlertLayerProtocol, public CustomSongLayerDelegate, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelSettingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelSettingsLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x26cd70
     * @note[short] Android
     */
    static LevelSettingsLayer* create(LevelSettingsObject* p0, LevelEditorLayer* p1);
    
private:
    [[deprecated("LevelSettingsLayer::createToggleButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
public:

    /**
     * @note[short] Windows: 0x26ce20
     * @note[short] Android
     */
    bool init(LevelSettingsObject* p0, LevelEditorLayer* p1);
    
private:
    [[deprecated("LevelSettingsLayer::onBGArt not implemented")]]
    /**
     * @note[short] Android
     */
    void onBGArt(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x26f640
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x26f7e0
     * @note[short] Android
     */
    void onCol(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelSettingsLayer::onDisable not implemented")]]
    /**
     * @note[short] Android
     */
    void onDisable(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x26f990
     * @note[short] Android
     */
    void onFGArt(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x26eff0
     * @note[short] Android
     */
    void onGameplayMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x26f930
     * @note[short] Android
     */
    void onGArt(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x26f760
     * @note[short] Android
     */
    void onLiveEdit(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelSettingsLayer::onMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onOptionToggle not implemented")]]
    /**
     * @note[short] Android
     */
    void onOptionToggle(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x26f9d0
     * @note[short] Android
     */
    void onSelectFont(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelSettingsLayer::onSelectMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onSelectMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onSelectSpeed not implemented")]]
    /**
     * @note[short] Android
     */
    void onSelectSpeed(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onSettings not implemented")]]
    /**
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x26f790
     * @note[short] Android
     */
    void onShowPicker(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelSettingsLayer::onSpeed not implemented")]]
    /**
     * @note[short] Android
     */
    void onSpeed(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::showPicker not implemented")]]
    /**
     * @note[short] Android
     */
    void showPicker(ColorAction* p0);
public:

    /**
     * @note[short] Windows: 0x26f870
     * @note[short] Android
     */
    TodoReturn updateColorSprite(ColorChannelSprite* p0);

    /**
     * @note[short] Windows: 0x26f810
     * @note[short] Android
     */
    TodoReturn updateColorSprites();
    
private:
    [[deprecated("LevelSettingsLayer::updateGameplayModeButtons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGameplayModeButtons();
public:

    /**
     * @note[short] Windows: 0x26f2b0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Windows: 0x26fbe0
     * @note[short] Android
     */
    virtual void keyBackClicked();
    
private:
    [[deprecated("LevelSettingsLayer::FLAlert_Clicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x26f800
     * @note[short] Android
     */
    virtual void colorSelectClosed(cocos2d::CCNode* p0);

    /**
     * @note[short] Windows: 0x26f9f0
     * @note[short] Android
     */
    virtual void selectArtClosed(SelectArtLayer* p0);

    /**
     * @note[short] Windows: 0x26f170
     * @note[short] Android
     */
    virtual TodoReturn selectSettingClosed(SelectSettingLayer* p0);
    
private:
    [[deprecated("LevelSettingsLayer::textInputClosed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);
public:

    /**
     * @note[short] Windows: 0x26f560
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
};
