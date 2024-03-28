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
#include "GJDailyLevelDelegate.hpp"
#include "LevelDownloadDelegate.hpp"

class DailyLevelPage : public FLAlertLayer, public FLAlertLayerProtocol, public GJDailyLevelDelegate, public LevelDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "DailyLevelPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DailyLevelPage, FLAlertLayer)

    /**
     * @note[short] Windows: 0x97630
     * @note[short] Android
     */
    static DailyLevelPage* create(GJTimedLevelType p0);

    /**
     * @note[short] Windows: 0x992a0
     * @note[short] Android
     */
    TodoReturn claimLevelReward(DailyLevelNode* p0, GJGameLevel* p1, cocos2d::CCPoint p2);

    /**
     * @note[short] Windows: 0x98a70
     * @note[short] Android
     */
    TodoReturn createDailyNode(GJGameLevel* p0, bool p1, float p2, bool p3);

    /**
     * @note[short] Windows: 0x989c0
     * @note[short] Android
     */
    TodoReturn createNodeIfLoaded();

    /**
     * @note[short] Windows: 0x98960
     * @note[short] Android
     */
    TodoReturn downloadAndCreateNode();

    /**
     * @note[short] Windows: 0x98c40
     * @note[short] Android
     */
    TodoReturn exitDailyNode(DailyLevelNode* p0, float p1);

    /**
     * @note[short] Windows: 0x98cf0
     * @note[short] Android
     */
    TodoReturn getDailyTime();

    /**
     * @note[short] Windows: 0x98da0
     * @note[short] Android
     */
    TodoReturn getDailyTimeString(int p0);

    /**
     * @note[short] Windows: 0x976d0
     * @note[short] Android
     */
    bool init(GJTimedLevelType p0);
    
private:
    [[deprecated("DailyLevelPage::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("DailyLevelPage::onTheSafe not implemented")]]
    /**
     * @note[short] Android
     */
    void onTheSafe(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("DailyLevelPage::refreshDailyPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn refreshDailyPage();
public:
    
private:
    [[deprecated("DailyLevelPage::skipDailyLevel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn skipDailyLevel(DailyLevelNode* p0, GJGameLevel* p1);
public:

    /**
     * @note[short] Windows: 0x98910
     * @note[short] Android
     */
    TodoReturn tryGetDailyStatus();

    /**
     * @note[short] Windows: 0x99120
     * @note[short] Android
     */
    void updateTimers(float p0);
    
private:
    [[deprecated("DailyLevelPage::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("DailyLevelPage::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:

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
     * @note[short] Windows: 0x98550
     * @note[short] Android
     */
    virtual void dailyStatusFinished(GJTimedLevelType p0);

    /**
     * @note[short] Windows: 0x986f0
     * @note[short] Android
     */
    virtual void dailyStatusFailed(GJTimedLevelType p0, GJErrorCode p1);

    /**
     * @note[short] Windows: 0x988a0
     * @note[short] Android
     */
    virtual void levelDownloadFinished(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x988f0
     * @note[short] Android
     */
    virtual void levelDownloadFailed(int p0);
    cocos2d::CCLabelBMFont* m_timeLabel;
    LoadingCircle* m_timeCircle;
    LoadingCircle* m_nodeCircle;
    bool m_gettingDailyStatus;
    DailyLevelNode* m_dailyNode;
    bool m_downloadStarted;
    GJTimedLevelType m_type;
    int m_downloadLevelID;
};
