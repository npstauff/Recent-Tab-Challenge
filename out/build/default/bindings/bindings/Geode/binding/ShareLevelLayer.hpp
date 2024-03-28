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

class ShareLevelLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ShareLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShareLevelLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x387e70
     * @note[short] Android
     */
    static ShareLevelLayer* create(GJGameLevel* p0);
    
private:
    [[deprecated("ShareLevelLayer::getStarsButton not implemented")]]
    /**
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getStarsButton(int btnID, cocos2d::SEL_MenuHandler callback, cocos2d::CCMenu* menu, float scale);
public:

    /**
     * @note[short] Windows: 0x387f10
     * @note[short] Android
     */
    bool init(GJGameLevel* level);
    
private:
    [[deprecated("ShareLevelLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShareLevelLayer::onSettings not implemented")]]
    /**
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x388f20
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);
    
private:
    [[deprecated("ShareLevelLayer::selectRating not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn selectRating(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("ShareLevelLayer::setupStars not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupStars();
public:
    
private:
    [[deprecated("ShareLevelLayer::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
};
