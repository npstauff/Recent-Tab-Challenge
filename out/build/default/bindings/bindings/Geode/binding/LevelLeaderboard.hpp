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
#include "LeaderboardManagerDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class LevelLeaderboard : public FLAlertLayer, public LeaderboardManagerDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "LevelLeaderboard";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelLeaderboard, FLAlertLayer)

    /**
     * @note[short] Windows: 0x257fa0
     * @note[short] Android
     */
    static LevelLeaderboard* create(GJGameLevel* p0, LevelLeaderboardType p1, LevelLeaderboardMode p2);
    
private:
    [[deprecated("LevelLeaderboard::deleteLocalScores not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deleteLocalScores();
public:
    
private:
    [[deprecated("LevelLeaderboard::getLocalScores not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getLocalScores();
public:
    
private:
    [[deprecated("LevelLeaderboard::getSpriteButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSpriteButton(gd::string p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, cocos2d::CCPoint p4, int p5);
public:

    /**
     * @note[short] Windows: 0x258060
     * @note[short] Android
     */
    bool init(GJGameLevel* p0, LevelLeaderboardType p1, LevelLeaderboardMode p2);
    
private:
    [[deprecated("LevelLeaderboard::isCorrect not implemented")]]
    /**
     * @note[short] Android
     */
    bool isCorrect(char const* p0);
public:
    
private:
    [[deprecated("LevelLeaderboard::loadScores not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadScores();
public:

    /**
     * @note[short] Windows: 0x2595f0
     * @note[short] Android
     */
    void onChangeMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2595a0
     * @note[short] Android
     */
    void onChangeType(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x6a750
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelLeaderboard::onDeleteLocalScores not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeleteLocalScores(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x259630
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2594f0
     * @note[short] Android
     */
    TodoReturn reloadLeaderboard(LevelLeaderboardType p0, LevelLeaderboardMode p1);
    
private:
    [[deprecated("LevelLeaderboard::setupLeaderboard not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupLeaderboard(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("LevelLeaderboard::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("LevelLeaderboard::keyBackClicked not implemented")]]
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
     * @note[short] Windows: 0x259880
     * @note[short] Android
     */
    virtual void loadLeaderboardFinished(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] Windows: 0x259910
     * @note[short] Android
     */
    virtual void loadLeaderboardFailed(char const* p0);

    /**
     * @note[short] Windows: 0x2590f0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0x2594d0
     * @note[short] Android
     */
    virtual void updateUserScoreFinished();

    /**
     * @note[short] Windows: 0x2594e0
     * @note[short] Android
     */
    virtual void updateUserScoreFailed();
    GJGameLevel* m_level;
    LevelLeaderboardType m_type;
    LevelLeaderboardMode m_mode;
    cocos2d::CCArray* m_scores;
    GJCommentListLayer* m_list;
    LoadingCircle* m_circle;
    TextArea* m_noInternet;
    CCMenuItemSpriteExtra* m_refreshBtn;
    CCMenuItemSpriteExtra* m_timeBtn;
    CCMenuItemSpriteExtra* m_pointsBtn;
};
