#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJBaseGameLayer.hpp"
#include "CCCircleWaveDelegate.hpp"
#include "CurrencyRewardDelegate.hpp"
#include "DialogDelegate.hpp"

class PlayLayer : public GJBaseGameLayer, public CCCircleWaveDelegate, public CurrencyRewardDelegate, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "PlayLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PlayLayer, GJBaseGameLayer)

    /**
     * @note[short] Windows: 0x2dc080
     * @note[short] Android
     */
    virtual  ~PlayLayer();

    /**
     * @note[short] Windows: 0x2dc3f0
     * @note[short] Android
     */
    static PlayLayer* create(GJGameLevel* level, bool useReplay, bool dontCreateObjects);

    /**
     * @note[short] Out of line
     */
    static PlayLayer* get();

    /**
     * @note[short] Out of line
     */
    void addCircle(CCCircleWave* cw);

    /**
     * @note[short] Windows: 0x2e19b0
     * @note[short] Android
     */
    TodoReturn addObject(GameObject* p0);
    
private:
    [[deprecated("PlayLayer::addToGroupOld not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToGroupOld(GameObject* p0);
public:
    
private:
    [[deprecated("PlayLayer::applyCustomEnterEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn applyCustomEnterEffect(GameObject* p0, bool p1);
public:
    
private:
    [[deprecated("PlayLayer::applyEnterEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn applyEnterEffect(GameObject* p0, int p1, bool p2);
public:

    /**
     * @note[short] Windows: 0x2eae60
     * @note[short] Android
     */
    bool canPauseGame();
    
private:
    [[deprecated("PlayLayer::checkpointWithID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkpointWithID(int p0);
public:
    
private:
    [[deprecated("PlayLayer::colorObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn colorObject(int p0, cocos2d::ccColor3B p1);
public:
    
private:
    [[deprecated("PlayLayer::commitJumps not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn commitJumps();
public:
    
private:
    [[deprecated("PlayLayer::compareStateSnapshot not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn compareStateSnapshot();
public:

    /**
     * @note[short] Windows: 0x2e76e0
     * @note[short] Android
     */
    TodoReturn createCheckpoint();

    /**
     * @note[short] Windows: 0x2e1730
     * @note[short] Android
     */
    TodoReturn createObjectsFromSetupFinished();

    /**
     * @note[short] Windows: 0x2e9f20
     * @note[short] Android
     */
    TodoReturn delayedFullReset();

    /**
     * @note[short] Windows: 0x2ea080
     * @note[short] Android
     */
    TodoReturn delayedResetLevel();

    /**
     * @note[short] Windows: 0x2e9f80
     * @note[short] Android
     */
    TodoReturn fullReset();

    /**
     * @note[short] Out of line
     */
    float getCurrentPercent();

    /**
     * @note[short] Windows: 0x2e6680
     * @note[short] Android
     */
    int getCurrentPercentInt();
    
private:
    [[deprecated("PlayLayer::getEndPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getEndPosition();
public:

    /**
     * @note[short] Windows: 0x2e8d40
     * @note[short] Android
     */
    TodoReturn getLastCheckpoint();
    
private:
    [[deprecated("PlayLayer::getRelativeMod not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRelativeMod(cocos2d::CCPoint p0, float p1, float p2, float p3);
public:
    
private:
    [[deprecated("PlayLayer::getRelativeModNew not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRelativeModNew(cocos2d::CCPoint p0, float p1, float p2, bool p3, bool p4);
public:
    
private:
    [[deprecated("PlayLayer::getTempMilliTime not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTempMilliTime();
public:
    
private:
    [[deprecated("PlayLayer::gravityEffectFinished not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn gravityEffectFinished();
public:

    /**
     * @note[short] Windows: 0x2eacd0
     * @note[short] Android
     */
    void incrementJumps();

    /**
     * @note[short] Windows: 0x2dc4a0
     * @note[short] Android
     */
    bool init(GJGameLevel* level, bool useReplay, bool dontCreateObjects);
    
private:
    [[deprecated("PlayLayer::isGameplayActive not implemented")]]
    /**
     * @note[short] Android
     */
    bool isGameplayActive();
public:

    /**
     * @note[short] Windows: 0x2ddb60
     * @note[short] Android
     */
    void levelComplete();
    
private:
    [[deprecated("PlayLayer::loadActiveSaveObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadActiveSaveObjects(gd::vector<SavedActiveObjectState>& p0, gd::vector<SavedSpecialObjectState>& p1);
public:

    /**
     * @note[short] Windows: 0x2e4e80
     * @note[short] Android
     */
    TodoReturn loadDefaultColors();
    
private:
    [[deprecated("PlayLayer::loadDynamicSaveObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadDynamicSaveObjects(gd::vector<SavedObjectStateRef>& p0);
public:

    /**
     * @note[short] Windows: 0x2e85e0
     * @note[short] Android
     */
    TodoReturn loadFromCheckpoint(CheckpointObject* p0);
    
private:
    [[deprecated("PlayLayer::loadLastCheckpoint not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadLastCheckpoint();
public:

    /**
     * @note[short] Windows: 0x2e8550
     * @note[short] Android
     */
    TodoReturn markCheckpoint();

    /**
     * @note[short] Windows: 0x2eb480
     * @note[short] Android
     */
    void onQuit();

    /**
     * @note[short] Windows: 0x2e2530
     * @note[short] Android
     */
    TodoReturn optimizeColorGroups();

    /**
     * @note[short] Windows: 0x2e2790
     * @note[short] Android
     */
    TodoReturn optimizeOpacityGroups();

    /**
     * @note[short] Windows: 0x2eae80
     * @note[short] Android
     */
    TodoReturn pauseGame(bool p0);

    /**
     * @note[short] Windows: 0x2dfe00
     * @note[short] Android
     */
    TodoReturn playEndAnimationToPos(cocos2d::CCPoint p0);

    /**
     * @note[short] Windows: 0x2e05e0
     * @note[short] Android
     */
    TodoReturn playPlatformerEndAnimationToPos(cocos2d::CCPoint p0, bool p1);
    
private:
    [[deprecated("PlayLayer::playReplay not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playReplay(gd::string p0);
public:

    /**
     * @note[short] Windows: 0x2e0c40
     * @note[short] Android
     */
    TodoReturn prepareCreateObjectsFromSetup(gd::string& p0);

    /**
     * @note[short] Windows: 0x2eb2b0
     * @note[short] Android
     */
    TodoReturn prepareMusic(bool p0);

    /**
     * @note[short] Windows: 0x2e0ed0
     * @note[short] Android
     */
    TodoReturn processCreateObjectsFromSetup();
    
private:
    [[deprecated("PlayLayer::processLoadedMoveActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processLoadedMoveActions();
public:
    
private:
    [[deprecated("PlayLayer::queueCheckpoint not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn queueCheckpoint();
public:

    /**
     * @note[short] Windows: 0x2eb570
     * @note[short] Android
     */
    TodoReturn removeAllObjects();

    /**
     * @note[short] Windows: 0x2e8d70
     * @note[short] Android
     */
    TodoReturn removeCheckpoint(bool p0);
    
private:
    [[deprecated("PlayLayer::removeFromGroupOld not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeFromGroupOld(GameObject* p0);
public:

    /**
     * @note[short] Windows: 0x2ea130
     * @note[short] Android
     */
    void resetLevel();

    /**
     * @note[short] Windows: 0x2ea090
     * @note[short] Android
     */
    TodoReturn resetLevelFromStart();

    /**
     * @note[short] Windows: 0x2eb100
     * @note[short] Android
     */
    TodoReturn resume();

    /**
     * @note[short] Windows: 0x2eafe0
     * @note[short] Android
     */
    TodoReturn resumeAndRestart(bool p0);

    /**
     * @note[short] Windows: 0x2e9c20
     * @note[short] Android
     */
    TodoReturn saveActiveSaveObjects(gd::vector<SavedActiveObjectState>& p0, gd::vector<SavedSpecialObjectState>& p1);

    /**
     * @note[short] Windows: 0x2e9780
     * @note[short] Android
     */
    TodoReturn saveDynamicSaveObjects(gd::vector<SavedObjectStateRef>& p0);

    /**
     * @note[short] Windows: 0x2e9b70
     * @note[short] Android
     */
    TodoReturn scanActiveSaveObjects();

    /**
     * @note[short] Windows: 0x2e8f80
     * @note[short] Android
     */
    TodoReturn scanDynamicSaveObjects();

    /**
     * @note[short] Windows: 0x2dc3a0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJGameLevel* level, bool useReplay, bool dontCreateObjects);
    
private:
    [[deprecated("PlayLayer::screenFlipObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn screenFlipObject(GameObject* p0);
public:

    /**
     * @note[short] Windows: 0x2db7c0
     * @note[short] Android
     */
    void setDamageVerifiedIdx(int p0);

    /**
     * @note[short] Windows: 0x2dce40
     * @note[short] Android
     */
    TodoReturn setupHasCompleted();
    
private:
    [[deprecated("PlayLayer::shouldBlend not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shouldBlend(int p0);
public:

    /**
     * @note[short] Windows: 0x2de940
     * @note[short] Android
     */
    TodoReturn showCompleteEffect();

    /**
     * @note[short] Windows: 0x2de410
     * @note[short] Android
     */
    TodoReturn showCompleteText();
    
private:
    [[deprecated("PlayLayer::showEndLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn showEndLayer();
public:

    /**
     * @note[short] Windows: 0x2e6f90
     * @note[short] Android
     */
    TodoReturn showHint();

    /**
     * @note[short] Windows: 0x2dedc0
     * @note[short] Android
     */
    TodoReturn showNewBest(bool p0, int p1, int p2, bool p3, bool p4, bool p5);
    
private:
    [[deprecated("PlayLayer::showRetryLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn showRetryLayer();
public:
    
private:
    [[deprecated("PlayLayer::showTwoPlayerGuide not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn showTwoPlayerGuide();
public:
    
private:
    [[deprecated("PlayLayer::spawnCircle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnCircle();
public:
    
private:
    [[deprecated("PlayLayer::spawnFirework not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnFirework();
public:

    /**
     * @note[short] Windows: 0x2ddab0
     * @note[short] Android
     */
    TodoReturn startGame();

    /**
     * @note[short] Windows: 0x2ddaf0
     * @note[short] Android
     */
    TodoReturn startGameDelayed();

    /**
     * @note[short] Windows: 0x2eb3a0
     * @note[short] Android
     */
    TodoReturn startMusic();
    
private:
    [[deprecated("PlayLayer::startRecording not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn startRecording();
public:
    
private:
    [[deprecated("PlayLayer::startRecordingDelayed not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn startRecordingDelayed();
public:
    
private:
    [[deprecated("PlayLayer::stopRecording not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopRecording();
public:

    /**
     * @note[short] Windows: 0x2e84a0
     * @note[short] Android
     */
    TodoReturn storeCheckpoint(CheckpointObject* p0);
    
private:
    [[deprecated("PlayLayer::takeStateSnapshot not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn takeStateSnapshot();
public:
    
private:
    [[deprecated("PlayLayer::toggleBGEffectVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleBGEffectVisibility(bool p0);
public:
    
private:
    [[deprecated("PlayLayer::toggleGhostEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleGhostEffect(int p0);
public:

    /**
     * @note[short] Windows: 0x2ead30
     * @note[short] Android
     */
    void togglePracticeMode(bool p0);
    
private:
    [[deprecated("PlayLayer::tryStartRecord not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryStartRecord();
public:

    /**
     * @note[short] Windows: 0x2eab40
     * @note[short] Android
     */
    TodoReturn updateAttempts();

    /**
     * @note[short] Windows: 0x2e7130
     * @note[short] Android
     */
    TodoReturn updateEffectPositions();

    /**
     * @note[short] Windows: 0x2e5ad0
     * @note[short] Android
     */
    TodoReturn updateInfoLabel();
    
private:
    [[deprecated("PlayLayer::updateInvisibleBlock not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateInvisibleBlock(GameObject* p0, float p1, float p2, float p3, float p4, cocos2d::ccColor3B const& p5);
public:

    /**
     * @note[short] Windows: 0x2e5440
     * @note[short] Android
     */
    void updateProgressbar();
    
private:
    [[deprecated("PlayLayer::updateScreenRotation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateScreenRotation(int p0, bool p1, bool p2, float p3, int p4, float p5, int p6, int p7);
public:

    /**
     * @note[short] Windows: 0x1b9700
     * @note[short] Android
     */
    TodoReturn updateTimeWarp(EffectGameObject* p0, float p1);

    /**
     * @note[short] Windows: 0x2eb700
     * @note[short] Android
     */
    virtual void onEnterTransitionDidFinish();

    /**
     * @note[short] Windows: 0x2eb730
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] Windows: 0x2e7220
     * @note[short] Android
     */
    virtual TodoReturn postUpdate(float p0);

    /**
     * @note[short] Windows: 0x2e74d0
     * @note[short] Android
     */
    virtual TodoReturn checkForEnd();
    
private:
    [[deprecated("PlayLayer::testTime not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn testTime();
public:

    /**
     * @note[short] Windows: 0x2e75b0
     * @note[short] Android
     */
    virtual TodoReturn updateVerifyDamage();

    /**
     * @note[short] Windows: 0x2e7630
     * @note[short] Android
     */
    virtual TodoReturn updateAttemptTime(float p0);

    /**
     * @note[short] Windows: 0x2e2bf0
     * @note[short] Android
     */
    virtual TodoReturn updateVisibility(float p0);

    /**
     * @note[short] Windows: 0x2e3920
     * @note[short] Android
     */
    virtual TodoReturn opacityForObject(GameObject* p0);

    /**
     * @note[short] Windows: 0x2e50e0
     * @note[short] Android
     */
    virtual TodoReturn updateColor(cocos2d::ccColor3B& p0, float p1, int p2, bool p3, float p4, cocos2d::ccHSVValue& p5, int p6, bool p7, EffectGameObject* p8, int p9, int p10);
    
private:
    [[deprecated("PlayLayer::activateEndTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn activateEndTrigger(int p0, bool p1, bool p2);
public:

    /**
     * @note[short] Windows: 0x2e04d0
     * @note[short] Android
     */
    virtual TodoReturn activatePlatformerEndTrigger(EndTriggerGameObject* p0, gd::vector<int> const& p1);

    /**
     * @note[short] Windows: 0x2e6630
     * @note[short] Android
     */
    virtual TodoReturn toggleGlitter(bool p0);

    /**
     * @note[short] Windows: 0x2e6730
     * @note[short] Android
     */
    virtual TodoReturn destroyPlayer(PlayerObject* p0, GameObject* p1);

    /**
     * @note[short] Windows: 0x2e64e0
     * @note[short] Android
     */
    virtual TodoReturn toggleGroundVisibility(bool p0);

    /**
     * @note[short] Windows: 0x2e6560
     * @note[short] Android
     */
    virtual TodoReturn toggleMGVisibility(bool p0);

    /**
     * @note[short] Windows: 0x2e65b0
     * @note[short] Android
     */
    virtual TodoReturn toggleHideAttempts(bool p0);

    /**
     * @note[short] Windows: 0x2e63e0
     * @note[short] Android
     */
    virtual TodoReturn timeForPos(cocos2d::CCPoint p0, int p1, int p2, bool p3, int p4);

    /**
     * @note[short] Windows: 0x2e6450
     * @note[short] Android
     */
    virtual TodoReturn posForTime(float p0);

    /**
     * @note[short] Windows: 0x2e64a0
     * @note[short] Android
     */
    virtual TodoReturn resetSPTriggered();
    
private:
    [[deprecated("PlayLayer::updateTimeWarp not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateTimeWarp(float p0);
public:
    
private:
    [[deprecated("PlayLayer::playGravityEffect not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn playGravityEffect(bool p0);
public:

    /**
     * @note[short] Windows: 0x2e3940
     * @note[short] Android
     */
    virtual TodoReturn manualUpdateObjectColors(GameObject* p0);

    /**
     * @note[short] Windows: 0x2e76c0
     * @note[short] Android
     */
    virtual TodoReturn checkpointActivated(CheckpointGameObject* p0);
    
private:
    [[deprecated("PlayLayer::flipArt not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn flipArt(bool p0);
public:

    /**
     * @note[short] Windows: 0x2e5670
     * @note[short] Android
     */
    virtual void updateTimeLabel(int p0, int p1, bool p2);
    
private:
    [[deprecated("PlayLayer::checkSnapshot not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn checkSnapshot();
public:
    
private:
    [[deprecated("PlayLayer::toggleProgressbar not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn toggleProgressbar();
public:
    
private:
    [[deprecated("PlayLayer::toggleInfoLabel not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn toggleInfoLabel();
public:
    
private:
    [[deprecated("PlayLayer::removeAllCheckpoints not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn removeAllCheckpoints();
public:
    
private:
    [[deprecated("PlayLayer::toggleMusicInPractice not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn toggleMusicInPractice();
public:
    
private:
    [[deprecated("PlayLayer::currencyWillExit not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn currencyWillExit(CurrencyRewardLayer* p0);
public:
    
private:
    [[deprecated("PlayLayer::circleWaveWillBeRemoved not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn circleWaveWillBeRemoved(CCCircleWave* p0);
public:

    /**
     * @note[short] Windows: 0x2e6f50
     * @note[short] Android
     */
    virtual TodoReturn dialogClosed(DialogLayer* p0);
    GEODE_PAD(132);
    float m_unksomefloat;
    GEODE_PAD(36);
    cocos2d::CCArray* m_circleWaveArray;
    GEODE_PAD(28);
    cocos2d::CCSprite* m_progressBar;
    GEODE_PAD(92);
    bool m_endLayerStars;
    GEODE_PAD(184);
};
