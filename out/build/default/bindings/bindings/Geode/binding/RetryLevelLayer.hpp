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
#include "RewardedVideoDelegate.hpp"

class RetryLevelLayer : public GJDropDownLayer, public RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "RetryLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RetryLevelLayer, GJDropDownLayer)

    /**
     * @note[short] Windows: 0x2f54d0
     * @note[short] Android
     */
    static RetryLevelLayer* create();
    
private:
    [[deprecated("RetryLevelLayer::getEndText not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getEndText();
public:
    
private:
    [[deprecated("RetryLevelLayer::onEveryplay not implemented")]]
    /**
     * @note[short] Android
     */
    void onEveryplay(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2f6230
     * @note[short] Android
     */
    void onMenu(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f6140
     * @note[short] Android
     */
    void onReplay(cocos2d::CCObject* sender);
    
private:
    [[deprecated("RetryLevelLayer::onRewardedVideo not implemented")]]
    /**
     * @note[short] Android
     */
    void onRewardedVideo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("RetryLevelLayer::setupLastProgress not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupLastProgress();
public:

    /**
     * @note[short] Windows: 0x2f62e0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x2f6190
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] Windows: 0x2f5650
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] Windows: 0x2f6010
     * @note[short] Android
     */
    virtual void showLayer(bool p0);

    /**
     * @note[short] Windows: 0x2f6100
     * @note[short] Android
     */
    virtual void enterAnimFinished();

    /**
     * @note[short] Windows: 0x2f6130
     * @note[short] Android
     */
    virtual TodoReturn rewardedVideoFinished();
    
private:
    [[deprecated("RetryLevelLayer::shouldOffsetRewardCurrency not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn shouldOffsetRewardCurrency();
public:

    /**
     * @note[short] Out of line
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);
};
