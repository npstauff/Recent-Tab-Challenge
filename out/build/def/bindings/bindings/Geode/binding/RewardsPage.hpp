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
#include "FLAlertLayerProtocol.hpp"
#include "GJRewardDelegate.hpp"

class RewardsPage : public FLAlertLayer, public FLAlertLayerProtocol, public GJRewardDelegate {
public:
    static constexpr auto CLASS_NAME = "RewardsPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RewardsPage, FLAlertLayer)

    /**
     * @note[short] Windows: 0x2f6750
     * @note[short] Android
     */
    static RewardsPage* create();
    
private:
    [[deprecated("RewardsPage::getRewardFrame not implemented")]]
    /**
     * @note[short] Android
     */
    static char const* getRewardFrame(int p0, int p1);
public:

    /**
     * @note[short] Windows: 0x6a750
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f7a00
     * @note[short] Android
     */
    void onFreeStuff(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f74a0
     * @note[short] Android
     */
    void onReward(cocos2d::CCObject* sender);
    
private:
    [[deprecated("RewardsPage::tryGetRewards not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryGetRewards();
public:
    
private:
    [[deprecated("RewardsPage::unlockLayerClosed not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unlockLayerClosed(RewardUnlockLayer* p0);
public:
    
private:
    [[deprecated("RewardsPage::updateTimers not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTimers(float p0);
public:

    /**
     * @note[short] Windows: 0x2f67f0
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("RewardsPage::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("RewardsPage::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:

    /**
     * @note[short] Windows: 0x2f17f0
     * @note[short] Android
     */
    virtual void show();
    
private:
    [[deprecated("RewardsPage::FLAlert_Clicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("RewardsPage::rewardsStatusFinished not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn rewardsStatusFinished(int p0);
public:
    
private:
    [[deprecated("RewardsPage::rewardsStatusFailed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn rewardsStatusFailed();
public:
    cocos2d::CCLabelBMFont* m_leftLabel;
    cocos2d::CCLabelBMFont* m_rightLabel;
    CCMenuItemSpriteExtra* m_leftChest;
    CCMenuItemSpriteExtra* m_rightChest;
    bool m_leftOpen;
    bool m_rightOpen;
    cocos2d::CCNode* m_openLayer;
};
