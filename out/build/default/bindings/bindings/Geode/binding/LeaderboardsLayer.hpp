#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LeaderboardManagerDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class LeaderboardsLayer : public cocos2d::CCLayer, public LeaderboardManagerDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "LeaderboardsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LeaderboardsLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x22dbc0
     * @note[short] Android
     */
    static LeaderboardsLayer* create(LeaderboardState p0);

    /**
     * @note[short] Windows: 0x22dc60
     * @note[short] Android
     */
    bool init(LeaderboardState p0);
    
private:
    [[deprecated("LeaderboardsLayer::isCorrect not implemented")]]
    /**
     * @note[short] Android
     */
    bool isCorrect(char const* p0);
public:
    
private:
    [[deprecated("LeaderboardsLayer::onBack not implemented")]]
    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LeaderboardsLayer::onCreators not implemented")]]
    /**
     * @note[short] Android
     */
    void onCreators(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LeaderboardsLayer::onGlobal not implemented")]]
    /**
     * @note[short] Android
     */
    void onGlobal(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LeaderboardsLayer::onInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LeaderboardsLayer::onTop not implemented")]]
    /**
     * @note[short] Android
     */
    void onTop(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LeaderboardsLayer::onWeek not implemented")]]
    /**
     * @note[short] Android
     */
    void onWeek(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LeaderboardsLayer::refreshTabs not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn refreshTabs();
public:
    
private:
    [[deprecated("LeaderboardsLayer::scene not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scene(LeaderboardState p0);
public:
    
private:
    [[deprecated("LeaderboardsLayer::selectLeaderboard not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn selectLeaderboard(LeaderboardState p0);
public:
    
private:
    [[deprecated("LeaderboardsLayer::setupLevelBrowser not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupLevelBrowser(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("LeaderboardsLayer::setupTabs not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupTabs();
public:
    
private:
    [[deprecated("LeaderboardsLayer::toggleTabButtons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleTabButtons();
public:

    /**
     * @note[short] Windows: 0x22f2f0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x22f270
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0x22eb60
     * @note[short] Android
     */
    virtual void updateUserScoreFinished();

    /**
     * @note[short] Windows: 0x22eb80
     * @note[short] Android
     */
    virtual void updateUserScoreFailed();

    /**
     * @note[short] Windows: 0x22eb90
     * @note[short] Android
     */
    virtual void loadLeaderboardFinished(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] Windows: 0x22ec00
     * @note[short] Android
     */
    virtual void loadLeaderboardFailed(char const* p0);
    GJListLayer* m_list;
    cocos2d::CCArray* m_userScores;
    LeaderboardState m_state;
    CCMenuItemToggler* m_topBtn;
    CCMenuItemToggler* m_globalBtn;
    CCMenuItemToggler* m_creatorsBtn;
    CCMenuItemToggler* m_friendsBtn;
    LoadingCircle* m_circle;
    TextArea* m_noInternet;
    cocos2d::CCArray* m_tabs;
};
