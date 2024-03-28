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
#include "NumberInputDelegate.hpp"

class ShareLevelSettingsLayer : public FLAlertLayer, public NumberInputDelegate {
public:
    static constexpr auto CLASS_NAME = "ShareLevelSettingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShareLevelSettingsLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x389a70
     * @note[short] Android
     */
    static ShareLevelSettingsLayer* create(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x389b10
     * @note[short] Android
     */
    bool init(GJGameLevel* p0);
    
private:
    [[deprecated("ShareLevelSettingsLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShareLevelSettingsLayer::onCopyable not implemented")]]
    /**
     * @note[short] Android
     */
    void onCopyable(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShareLevelSettingsLayer::onEditPassword not implemented")]]
    /**
     * @note[short] Android
     */
    void onEditPassword(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShareLevelSettingsLayer::onPassword not implemented")]]
    /**
     * @note[short] Android
     */
    void onPassword(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShareLevelSettingsLayer::onUnlisted not implemented")]]
    /**
     * @note[short] Android
     */
    void onUnlisted(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShareLevelSettingsLayer::onUnlistedFriendsOnly not implemented")]]
    /**
     * @note[short] Android
     */
    void onUnlistedFriendsOnly(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShareLevelSettingsLayer::updateSettingsState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSettingsState();
public:

    /**
     * @note[short] Windows: 0x38a600
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Out of line
     */
    virtual void numberInputClosed(NumberInputLayer* p0);
};
