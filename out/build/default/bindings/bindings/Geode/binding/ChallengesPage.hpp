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
#include "GJChallengeDelegate.hpp"
#include "CurrencyRewardDelegate.hpp"

class ChallengesPage : public FLAlertLayer, public FLAlertLayerProtocol, public GJChallengeDelegate, public CurrencyRewardDelegate {
public:
    static constexpr auto CLASS_NAME = "ChallengesPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ChallengesPage, FLAlertLayer)

    /**
     * @note[short] Windows: 0x5c4c0
     * @note[short] Android
     */
    static ChallengesPage* create();
    
private:
    [[deprecated("ChallengesPage::claimItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn claimItem(ChallengeNode* p0, GJChallengeItem* p1, cocos2d::CCPoint p2);
public:

    /**
     * @note[short] Windows: 0x5d190
     * @note[short] Android
     */
    ChallengeNode* createChallengeNode(int number, bool skipAnimation, float animLength, bool isNew);
    
private:
    [[deprecated("ChallengesPage::exitNodeAtSlot not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn exitNodeAtSlot(int p0, float p1);
public:

    /**
     * @note[short] Windows: 0x5d830
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("ChallengesPage::tryGetChallenges not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryGetChallenges();
public:
    
private:
    [[deprecated("ChallengesPage::updateDots not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDots();
public:

    /**
     * @note[short] Windows: 0x5d450
     * @note[short] Android
     */
    void updateTimers(float p0);

    /**
     * @note[short] Windows: 0x5c560
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("ChallengesPage::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:

    /**
     * @note[short] Windows: 0x5d860
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x5d6d0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] Out of line
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0x5cf40
     * @note[short] Android
     */
    virtual TodoReturn challengeStatusFinished();

    /**
     * @note[short] Windows: 0x5d0d0
     * @note[short] Android
     */
    virtual TodoReturn challengeStatusFailed();

    /**
     * @note[short] Windows: 0x5da30
     * @note[short] Android
     */
    virtual void currencyWillExit(CurrencyRewardLayer* p0);
    cocos2d::CCArray* m_dots;
    cocos2d::CCLabelBMFont* m_countdownLabel;
    LoadingCircle* m_circle;
    bool m_triedToLoad;
    bool m_unkBool;
    CurrencyRewardLayer* m_currencyRewardLayer;
    cocos2d::CCDictionary* m_challengeNodes;
};
