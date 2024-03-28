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
#include "TextInputDelegate.hpp"

class GJAccountSettingsLayer : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "GJAccountSettingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJAccountSettingsLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x208440
     * @note[short] Android
     */
    static GJAccountSettingsLayer* create(int p0);
    
private:
    [[deprecated("GJAccountSettingsLayer::createToggleButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, float p5, float p6);
public:

    /**
     * @note[short] Windows: 0x2084f0
     * @note[short] Android
     */
    bool init(int p0);
    
private:
    [[deprecated("GJAccountSettingsLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJAccountSettingsLayer::onCommentSetting not implemented")]]
    /**
     * @note[short] Android
     */
    void onCommentSetting(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJAccountSettingsLayer::onFriendRequests not implemented")]]
    /**
     * @note[short] Android
     */
    void onFriendRequests(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJAccountSettingsLayer::onMessageSetting not implemented")]]
    /**
     * @note[short] Android
     */
    void onMessageSetting(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJAccountSettingsLayer::onUpdate not implemented")]]
    /**
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJAccountSettingsLayer::updateScoreValues not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateScoreValues();
public:
    
private:
    [[deprecated("GJAccountSettingsLayer::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("GJAccountSettingsLayer::textInputShouldOffset not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn textInputShouldOffset(CCTextInputNode* p0, float p1);
public:
    
private:
    [[deprecated("GJAccountSettingsLayer::textInputReturn not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn textInputReturn(CCTextInputNode* p0);
public:
};
