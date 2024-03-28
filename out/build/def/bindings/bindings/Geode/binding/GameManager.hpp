#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "UIButtonConfig.hpp"
#include "GManager.hpp"

class GameManager : public GManager {
public:
    static constexpr auto CLASS_NAME = "GameManager";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameManager, GManager)

    /**
     * @note[short] Out of line
     */
    static GameManager* get();

    /**
     * @note[short] Windows: 0x121540
     * @note[short] Android
     */
    static GameManager* sharedState();

    /**
     * @note[short] Out of line
     */
    PlayLayer* getPlayLayer();

    /**
     * @note[short] Out of line
     */
    LevelEditorLayer* getEditorLayer();

    /**
     * @note[short] Out of line
     */
    GJBaseGameLayer* getGameLayer();

    /**
     * @note[short] Out of line
     */
    int getPlayerFrame();

    /**
     * @note[short] Out of line
     */
    int getPlayerShip();

    /**
     * @note[short] Out of line
     */
    int getPlayerBall();

    /**
     * @note[short] Out of line
     */
    int getPlayerBird();

    /**
     * @note[short] Out of line
     */
    int getPlayerDart();

    /**
     * @note[short] Out of line
     */
    int getPlayerRobot();

    /**
     * @note[short] Out of line
     */
    int getPlayerSpider();

    /**
     * @note[short] Out of line
     */
    int getPlayerSwing();

    /**
     * @note[short] Out of line
     */
    int getPlayerGlowColor();

    /**
     * @note[short] Out of line
     */
    int getPlayerStreak();

    /**
     * @note[short] Out of line
     */
    int getPlayerShipFire();

    /**
     * @note[short] Out of line
     */
    int getPlayerDeathEffect();

    /**
     * @note[short] Out of line
     */
    int getPlayerJetpack();

    /**
     * @note[short] Out of line
     */
    int getPlayerColor();

    /**
     * @note[short] Out of line
     */
    int getPlayerColor2();

    /**
     * @note[short] Out of line
     */
    bool getPlayerGlow();

    /**
     * @note[short] Out of line
     */
    void setPlayerFrame(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerShip(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerBall(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerBird(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerDart(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerRobot(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerSpider(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerSwing(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerColor3(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerStreak(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerShipStreak(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerDeathEffect(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerJetpack(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerColor(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerColor2(int id);

    /**
     * @note[short] Out of line
     */
    void setPlayerGlow(bool v);

    /**
     * @note[short] Out of line
     */
    bool getGameVariableDefault(const char* key, bool defaultValue);

    /**
     * @note[short] Out of line
     */
    int getIntGameVariableDefault(const char* key, int defaultValue);
    
private:
    [[deprecated("GameManager::accountStatusChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn accountStatusChanged();
public:

    /**
     * @note[short] Windows: 0x1270f0
     * @note[short] Android
     */
    TodoReturn activeIconForType(IconType p0);

    /**
     * @note[short] Windows: 0x14da60
     * @note[short] Android
     */
    TodoReturn addCustomAnimationFrame(int p0, int p1, gd::string p2, gd::string p3);
    
private:
    [[deprecated("GameManager::addDuplicateLastFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addDuplicateLastFrame(int p0);
public:

    /**
     * @note[short] Windows: 0x14d8c0
     * @note[short] Android
     */
    TodoReturn addGameAnimation(int p0, int p1, float p2, gd::string p3, gd::string p4, int p5);
    
private:
    [[deprecated("GameManager::addIconDelegate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addIconDelegate(cocos2d::CCObject* p0, int p1);
public:

    /**
     * @note[short] Windows: 0x128ea0
     * @note[short] Android
     */
    TodoReturn addNewCustomObject(gd::string p0);
    
private:
    [[deprecated("GameManager::addToGJLog not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToGJLog(cocos2d::CCString* p0);
public:
    
private:
    [[deprecated("GameManager::applicationDidEnterBackground not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn applicationDidEnterBackground();
public:

    /**
     * @note[short] Windows: 0x12ded0
     * @note[short] Android
     */
    TodoReturn applicationWillEnterForeground();

    /**
     * @note[short] Windows: 0x1278d0
     * @note[short] Android
     */
    TodoReturn calculateBaseKeyForIcons();
    
private:
    [[deprecated("GameManager::canShowRewardedVideo not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canShowRewardedVideo();
public:

    /**
     * @note[short] Windows: 0x1234f0
     * @note[short] Android
     */
    TodoReturn checkSteamAchievementUnlock();

    /**
     * @note[short] Windows: 0x1297d0
     * @note[short] Android
     */
    TodoReturn checkUsedIcons();
    
private:
    [[deprecated("GameManager::claimItemsResponse not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn claimItemsResponse(gd::string p0);
public:
    
private:
    [[deprecated("GameManager::clearGJLog not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn clearGJLog();
public:

    /**
     * @note[short] Windows: 0x126090
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForIdx(int p0);
    
private:
    [[deprecated("GameManager::colorForPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn colorForPos(int p0);
public:

    /**
     * @note[short] Windows: 0x122350
     * @note[short] Android
     */
    TodoReturn colorKey(int p0, UnlockType p1);

    /**
     * @note[short] Windows: 0x122b50
     * @note[short] Android
     */
    TodoReturn completedAchievement(gd::string p0);

    /**
     * @note[short] Windows: 0x127270
     * @note[short] Android
     */
    TodoReturn countForType(IconType p0);
    
private:
    [[deprecated("GameManager::defaultFrameForAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn defaultFrameForAnimation(int p0);
public:
    
private:
    [[deprecated("GameManager::defaultYOffsetForBG2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn defaultYOffsetForBG2(int p0);
public:
    
private:
    [[deprecated("GameManager::didExitPlayscene not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn didExitPlayscene();
public:

    /**
     * @note[short] Windows: 0x12de10
     * @note[short] Android
     */
    TodoReturn doQuickSave();
    
private:
    [[deprecated("GameManager::dpadConfigToString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn dpadConfigToString(UIButtonConfig& p0);
public:
    
private:
    [[deprecated("GameManager::eventUnlockFeature not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn eventUnlockFeature(char const* p0);
public:

    /**
     * @note[short] Windows: 0x1219f0
     * @note[short] Android
     */
    TodoReturn fadeInMenuMusic();

    /**
     * @note[short] Windows: 0x121a60
     * @note[short] Android
     */
    TodoReturn fadeInMusic(gd::string p0);

    /**
     * @note[short] Windows: 0x127ed0
     * @note[short] Android
     */
    TodoReturn finishedLoadingBGAsync(cocos2d::CCObject* p0);
    
private:
    [[deprecated("GameManager::finishedLoadingGAsync not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn finishedLoadingGAsync(int p0);
public:
    
private:
    [[deprecated("GameManager::finishedLoadingGAsync1 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn finishedLoadingGAsync1(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GameManager::finishedLoadingGAsync2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn finishedLoadingGAsync2(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GameManager::finishedLoadingIconAsync not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn finishedLoadingIconAsync(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GameManager::finishedLoadingMGAsync not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn finishedLoadingMGAsync(int p0);
public:
    
private:
    [[deprecated("GameManager::finishedLoadingMGAsync1 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn finishedLoadingMGAsync1(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GameManager::finishedLoadingMGAsync2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn finishedLoadingMGAsync2(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] Windows: 0x126f20
     * @note[short] Android
     */
    TodoReturn followTwitch();

    /**
     * @note[short] Windows: 0x126e00
     * @note[short] Android
     */
    TodoReturn followTwitter();
    
private:
    [[deprecated("GameManager::framesForAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn framesForAnimation(int p0);
public:
    
private:
    [[deprecated("GameManager::frameTimeForAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn frameTimeForAnimation(int p0);
public:
    
private:
    [[deprecated("GameManager::generateSecretNumber not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn generateSecretNumber();
public:
    
private:
    [[deprecated("GameManager::getBGTexture not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getBGTexture(int p0);
public:
    
private:
    [[deprecated("GameManager::getFontFile not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getFontFile(int p0);
public:

    /**
     * @note[short] Windows: 0x127c30
     * @note[short] Android
     */
    TodoReturn getFontTexture(int p0);

    /**
     * @note[short] Windows: 0x128730
     * @note[short] Android
     */
    bool getGameVariable(char const* p0);
    
private:
    [[deprecated("GameManager::getGTexture not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getGTexture(int p0);
public:

    /**
     * @note[short] Out of line
     */
    int getIconRequestID();

    /**
     * @note[short] Windows: 0x128c80
     * @note[short] Android
     */
    int getIntGameVariable(char const* p0);

    /**
     * @note[short] Windows: 0x1216e0
     * @note[short] Android
     */
    TodoReturn getMenuMusicFile();
    
private:
    [[deprecated("GameManager::getMGTexture not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMGTexture(int p0);
public:

    /**
     * @note[short] Windows: 0x128d70
     * @note[short] Android
     */
    TodoReturn getNextUniqueObjectKey();

    /**
     * @note[short] Windows: 0x128de0
     * @note[short] Android
     */
    TodoReturn getNextUsedKey(int p0, bool p1);
    
private:
    [[deprecated("GameManager::getOrderedCustomObjectKeys not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getOrderedCustomObjectKeys();
public:

    /**
     * @note[short] Windows: 0x1217b0
     * @note[short] Android
     */
    TodoReturn getPracticeMusicFile();

    /**
     * @note[short] Windows: 0x128a20
     * @note[short] Android
     */
    bool getUGV(char const* p0);

    /**
     * @note[short] Windows: 0x122690
     * @note[short] Android
     */
    TodoReturn getUnlockForAchievement(gd::string p0, int& p1, UnlockType& p2);
    
private:
    [[deprecated("GameManager::groundHasSecondaryColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn groundHasSecondaryColor(int p0);
public:
    
private:
    [[deprecated("GameManager::iconAndTypeForKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn iconAndTypeForKey(int p0, int& p1, int& p2);
public:

    /**
     * @note[short] Windows: 0x121d30
     * @note[short] Android
     */
    TodoReturn iconKey(int p0, IconType p1);

    /**
     * @note[short] Windows: 0x122090
     * @note[short] Android
     */
    UnlockType iconTypeToUnlockType(IconType p0);

    /**
     * @note[short] Windows: 0x122490
     * @note[short] Android
     */
    bool isColorUnlocked(int p0, UnlockType p1);
    
private:
    [[deprecated("GameManager::isIconLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    bool isIconLoaded(int p0, int p1);
public:

    /**
     * @note[short] Windows: 0x121f90
     * @note[short] Android
     */
    bool isIconUnlocked(int p0, IconType p1);
    
private:
    [[deprecated("GameManager::itemPurchased not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn itemPurchased(char const* p0);
public:

    /**
     * @note[short] Windows: 0x126fb0
     * @note[short] Android
     */
    TodoReturn joinDiscord();

    /**
     * @note[short] Windows: 0x127040
     * @note[short] Android
     */
    TodoReturn joinReddit();

    /**
     * @note[short] Out of line
     */
    int keyForIcon(int iconIdx, int iconEnum);
    
private:
    [[deprecated("GameManager::levelIsPremium not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn levelIsPremium(int p0, int p1);
public:

    /**
     * @note[short] Windows: 0x126d70
     * @note[short] Android
     */
    TodoReturn likeFacebook();

    /**
     * @note[short] Windows: 0x127dc0
     * @note[short] Android
     */
    void loadBackground(int p0);

    /**
     * @note[short] Windows: 0x127e60
     * @note[short] Android
     */
    TodoReturn loadBackgroundAsync(int p0);

    /**
     * @note[short] Windows: 0x127c80
     * @note[short] Android
     */
    TodoReturn loadDeathEffect(int p0);
    
private:
    [[deprecated("GameManager::loadDpadFromString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadDpadFromString(UIButtonConfig& p0, gd::string p1);
public:

    /**
     * @note[short] Windows: 0x12af80
     * @note[short] Android
     */
    TodoReturn loadDPadLayout(int p0, bool p1);

    /**
     * @note[short] Windows: 0x127ba0
     * @note[short] Android
     */
    TodoReturn loadFont(int p0);

    /**
     * @note[short] Windows: 0x1281f0
     * @note[short] Android
     */
    void loadGround(int p0);
    
private:
    [[deprecated("GameManager::loadGroundAsync not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadGroundAsync(int p0);
public:

    /**
     * @note[short] Windows: 0x127440
     * @note[short] Android
     */
    cocos2d::CCTexture2D* loadIcon(int p0, int p1, int p2);
    
private:
    [[deprecated("GameManager::loadIconAsync not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadIconAsync(int p0, int p1, int p2, cocos2d::CCObject* p3);
public:

    /**
     * @note[short] Windows: 0x127f50
     * @note[short] Android
     */
    void loadMiddleground(int p0);
    
private:
    [[deprecated("GameManager::loadMiddlegroundAsync not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadMiddlegroundAsync(int p0);
public:
    
private:
    [[deprecated("GameManager::loadVideoSettings not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadVideoSettings();
public:

    /**
     * @note[short] Windows: 0x122610
     * @note[short] Android
     */
    TodoReturn lockColor(int p0, UnlockType p1);

    /**
     * @note[short] Windows: 0x1222d0
     * @note[short] Android
     */
    TodoReturn lockIcon(int p0, IconType p1);
    
private:
    [[deprecated("GameManager::logLoadedIconInfo not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn logLoadedIconInfo();
public:

    /**
     * @note[short] Windows: 0x1270d0
     * @note[short] Android
     */
    TodoReturn openEditorGuide();

    /**
     * @note[short] Windows: 0x121890
     * @note[short] Android
     */
    TodoReturn playMenuMusic();

    /**
     * @note[short] Windows: 0x121b40
     * @note[short] Android
     */
    TodoReturn playSFXTrigger(SFXTriggerGameObject* p0);

    /**
     * @note[short] Windows: 0x12b720
     * @note[short] Android
     */
    TodoReturn prepareDPadSettings();
    
private:
    [[deprecated("GameManager::printGJLog not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn printGJLog();
public:

    /**
     * @note[short] Windows: 0x12e3e0
     * @note[short] Android
     */
    TodoReturn queueReloadMenu();
    
private:
    [[deprecated("GameManager::rateGame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn rateGame();
public:

    /**
     * @note[short] Windows: 0x129ce0
     * @note[short] Android
     */
    void recountUserStats(gd::string p0);

    /**
     * @note[short] Windows: 0x12e4b0
     * @note[short] Android
     */
    void reloadAll(bool switchingModes, bool toFullscreen, bool borderless, bool unused);

    /**
     * @note[short] Out of line
     */
    void reloadAll(bool switchingModes, bool toFullscreen, bool unused);

    /**
     * @note[short] Windows: 0x12e540
     * @note[short] Android
     */
    TodoReturn reloadAllStep2();

    /**
     * @note[short] Windows: 0x12e6a0
     * @note[short] Android
     */
    TodoReturn reloadAllStep3();

    /**
     * @note[short] Windows: 0x12e740
     * @note[short] Android
     */
    TodoReturn reloadAllStep4();

    /**
     * @note[short] Windows: 0x12e7b0
     * @note[short] Android
     */
    TodoReturn reloadAllStep5();
    
private:
    [[deprecated("GameManager::reloadMenu not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reloadMenu();
public:
    
private:
    [[deprecated("GameManager::removeCustomObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeCustomObject(int p0);
public:

    /**
     * @note[short] Windows: 0x127370
     * @note[short] Android
     */
    TodoReturn removeIconDelegate(int p0);
    
private:
    [[deprecated("GameManager::reorderKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reorderKey(int p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x1234a0
     * @note[short] Android
     */
    TodoReturn reportAchievementWithID(char const* p0, int p1, bool p2);

    /**
     * @note[short] Windows: 0x122d50
     * @note[short] Android
     */
    TodoReturn reportPercentageForLevel(int p0, int p1, bool p2);
    
private:
    [[deprecated("GameManager::resetAchievement not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetAchievement(gd::string p0);
public:
    
private:
    [[deprecated("GameManager::resetAdTimer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetAdTimer();
public:
    
private:
    [[deprecated("GameManager::resetAllIcons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetAllIcons();
public:
    
private:
    [[deprecated("GameManager::resetCoinUnlocks not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetCoinUnlocks();
public:
    
private:
    [[deprecated("GameManager::resetDPadSettings not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetDPadSettings(bool p0);
public:

    /**
     * @note[short] Windows: 0x12e800
     * @note[short] Android
     */
    TodoReturn resolutionForKey(int p0);

    /**
     * @note[short] Windows: 0x12e110
     * @note[short] Android
     */
    TodoReturn returnToLastScene(GJGameLevel* p0);
    
private:
    [[deprecated("GameManager::rewardedVideoAdFinished not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn rewardedVideoAdFinished(int p0);
public:
    
private:
    [[deprecated("GameManager::rewardedVideoHidden not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn rewardedVideoHidden();
public:
    
private:
    [[deprecated("GameManager::rewardedVideoHiddenDelayed not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn rewardedVideoHiddenDelayed();
public:
    
private:
    [[deprecated("GameManager::safePopScene not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn safePopScene();
public:
    
private:
    [[deprecated("GameManager::saveAdTimer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn saveAdTimer();
public:

    /**
     * @note[short] Windows: 0x12ac70
     * @note[short] Android
     */
    TodoReturn saveDPadLayout(int p0, bool p1);

    /**
     * @note[short] Windows: 0x1284e0
     * @note[short] Android
     */
    void setGameVariable(char const* p0, bool p1);
    
private:
    [[deprecated("GameManager::setHasRatingPower not implemented")]]
    /**
     * @note[short] Android
     */
    void setHasRatingPower(int p0);
public:

    /**
     * @note[short] Windows: 0x128b80
     * @note[short] Android
     */
    void setIntGameVariable(char const* p0, int p1);

    /**
     * @note[short] Windows: 0xf3760
     * @note[short] Android
     */
    void setPlayerUserID(int p0);

    /**
     * @note[short] Windows: 0x1288d0
     * @note[short] Android
     */
    void setUGV(char const* p0, bool p1);

    /**
     * @note[short] Windows: 0x14b280
     * @note[short] Android
     */
    TodoReturn setupGameAnimations();

    /**
     * @note[short] Windows: 0x1279a0
     * @note[short] Android
     */
    gd::string sheetNameForIcon(int p0, int p1);
    
private:
    [[deprecated("GameManager::shortenAdTimer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shortenAdTimer(float p0);
public:
    
private:
    [[deprecated("GameManager::shouldShowInterstitial not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shouldShowInterstitial(int p0, int p1, int p2);
public:
    
private:
    [[deprecated("GameManager::showInterstitial not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn showInterstitial();
public:
    
private:
    [[deprecated("GameManager::showInterstitialForced not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn showInterstitialForced();
public:
    
private:
    [[deprecated("GameManager::showMainMenuAd not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn showMainMenuAd();
public:
    
private:
    [[deprecated("GameManager::startUpdate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn startUpdate();
public:

    /**
     * @note[short] Windows: 0x128f90
     * @note[short] Android
     */
    TodoReturn stringForCustomObject(int p0);

    /**
     * @note[short] Windows: 0x126e90
     * @note[short] Android
     */
    TodoReturn subYouTube();
    
private:
    [[deprecated("GameManager::switchCustomObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn switchCustomObjects(int p0, int p1);
public:
    
private:
    [[deprecated("GameManager::switchScreenMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn switchScreenMode(bool p0, bool p1);
public:
    
private:
    [[deprecated("GameManager::syncPlatformAchievements not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn syncPlatformAchievements();
public:

    /**
     * @note[short] Windows: 0x128890
     * @note[short] Android
     */
    TodoReturn toggleGameVariable(char const* p0);
    
private:
    [[deprecated("GameManager::tryCacheAd not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryCacheAd();
public:
    
private:
    [[deprecated("GameManager::tryShowInterstitial not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryShowInterstitial(int p0, int p1, int p2);
public:

    /**
     * @note[short] Windows: 0x127d40
     * @note[short] Android
     */
    TodoReturn unloadBackground();

    /**
     * @note[short] Windows: 0x1276b0
     * @note[short] Android
     */
    TodoReturn unloadIcon(int p0, int p1, int p2);

    /**
     * @note[short] Windows: 0x127870
     * @note[short] Android
     */
    TodoReturn unloadIcons(int p0);

    /**
     * @note[short] Windows: 0x122560
     * @note[short] Android
     */
    TodoReturn unlockColor(int p0, UnlockType p1);
    
private:
    [[deprecated("GameManager::unlockedPremium not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unlockedPremium();
public:

    /**
     * @note[short] Windows: 0x122220
     * @note[short] Android
     */
    TodoReturn unlockIcon(int p0, IconType p1);

    /**
     * @note[short] Windows: 0x122190
     * @note[short] Android
     */
    TodoReturn unlockTypeToIconType(int p0);

    /**
     * @note[short] Windows: 0x12ec60
     * @note[short] Android
     */
    TodoReturn updateCustomFPS();
    
private:
    [[deprecated("GameManager::updateMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMusic();
public:
    
private:
    [[deprecated("GameManager::verifyAchievementUnlocks not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn verifyAchievementUnlocks();
public:
    
private:
    [[deprecated("GameManager::verifyCoinUnlocks not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn verifyCoinUnlocks();
public:
    
private:
    [[deprecated("GameManager::verifyStarUnlocks not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn verifyStarUnlocks();
public:
    
private:
    [[deprecated("GameManager::verifySyncedCoins not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn verifySyncedCoins();
public:
    
private:
    [[deprecated("GameManager::videoAdHidden not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn videoAdHidden();
public:
    
private:
    [[deprecated("GameManager::videoAdShowed not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn videoAdShowed();
public:
    
private:
    [[deprecated("GameManager::update not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void update(float p0);
public:

    /**
     * @note[short] Windows: 0x1215c0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x12d480
     * @note[short] Android
     */
    virtual void encodeDataTo(DS_Dictionary* p0);

    /**
     * @note[short] Windows: 0x12b830
     * @note[short] Android
     */
    virtual void dataLoaded(DS_Dictionary* p0);

    /**
     * @note[short] Windows: 0x12cb20
     * @note[short] Android
     */
    virtual void firstLoad();
    cocos2d::CCDictionary* m_unkAnimationDict;
    cocos2d::CCDictionary* m_unkAnimationDict2;
    cocos2d::CCDictionary* m_frameTimeForAnimation;
    cocos2d::CCDictionary* m_framesForAnimation;
    cocos2d::CCDictionary* m_defaultFrames;
    bool m_switchModes;
    bool m_toFullscreen;
    bool m_reloading;
    bool m_unkBool1;
    bool m_unkBool2;
    bool m_vsyncEnabled;
    cocos2d::CCDictionary* m_valueKeeper;
    cocos2d::CCDictionary* m_unlockValueKeeper;
    cocos2d::CCDictionary* m_customObjectDict;
    double m_adTimer;
    double m_adCache;
    bool m_unkBool3;
    int m_unkSize4_1;
    double m_unkDouble2;
    int m_unkSize4_2;
    int m_unkSize4_3;
    bool m_loaded;
    bool m_googlePlaySignedIn;
    gd::string m_unknownString;
    int m_unkSize4_4;
    PlayLayer* m_playLayer;
    LevelEditorLayer* m_levelEditorLayer;
    GJBaseGameLayer* m_gameLayer;
    void* m_unkPtr;
    MenuLayer* m_menuLayer;
    bool m_inMenuLayer;
    void* m_unknownVariable;
    bool m_unknownBool3;
    bool m_unknownPlayLayerBool;
    bool m_unknownBool4;
    bool m_unknownBool5;
    gd::string m_playerUDID;
    gd::string m_playerName;
    bool m_commentsEnabled;
    geode::SeedValueRSV m_playerUserID;
    float m_bgVolume;
    float m_sfxVolume;
    float m_timeOffset;
    bool m_ratedGame;
    bool m_clickedFacebook;
    bool m_clickedTwitter;
    bool m_clickedYouTube;
    bool m_clickedTwitch;
    bool m_clickedDiscord_;
    bool m_clickedReddit;
    double m_socialsDuration;
    bool m_showedAd;
    bool m_unknownBool;
    bool m_editorEnabled;
    int m_sceneEnum;
    bool m_searchObjectBool;
    geode::SeedValueRSV m_playerFrame;
    geode::SeedValueRSV m_playerShip;
    geode::SeedValueRSV m_playerBall;
    geode::SeedValueRSV m_playerBird;
    geode::SeedValueRSV m_playerDart;
    geode::SeedValueRSV m_playerRobot;
    geode::SeedValueRSV m_playerSpider;
    geode::SeedValueRSV m_playerSwing;
    geode::SeedValueRSV m_playerColor;
    geode::SeedValueRSV m_playerColor2;
    geode::SeedValueRSV m_playerGlowColor;
    geode::SeedValueRSV m_playerStreak;
    geode::SeedValueRSV m_playerShipFire;
    geode::SeedValueRSV m_playerDeathEffect;
    geode::SeedValueRSV m_playerJetpack;
    geode::SeedValueSR m_chk;
    geode::SeedValueSR m_secretNumber;
    bool m_playerGlow;
    IconType m_playerIconType;
    bool m_everyPlaySetup;
    bool m_showSongMarkers;
    bool m_showBPMMarkers;
    bool m_recordGameplay;
    bool m_showProgressBar;
    bool m_performanceMode;
    bool m_unkBool4;
    bool m_clickedGarage;
    bool m_clickedEditor;
    bool m_clickedName;
    bool m_clickedPractice;
    bool m_showedEditorGuide;
    bool m_showedRateDiffDialog;
    bool m_showedRateStarDialog;
    bool m_showedLowDetailDialog;
    void* m_unkPtr2;
    void* m_unkPtr3;
    int m_unkSize4_5;
    int m_unkSize4_6;
    int m_unkSize4_7;
    int m_unkSize4_8;
    int m_loadedBgID;
    int m_loadedGroundID;
    int m_loadedMG;
    int m_loadedFont;
    int m_loadedDeathEffect;
    bool m_loadingBG;
    bool m_loadingG;
    bool m_loadingG1;
    bool m_finishedLoadingG1;
    bool m_shouldLoadG1;
    bool m_finishedLoadingMG1;
    bool m_finishedLoadingMG2;
    bool m_unkBool5;
    int m_unkSize4_9;
    int m_unkSize4_10;
    int m_unkSize4_11;
    int m_bootups;
    bool m_hasRatedGame;
    bool m_unkBool6;
    bool m_shouldLoadUnlockValueKeeper;
    bool m_unkBool7;
    bool m_unkBool8;
    geode::SeedValueRSV m_hasRP;
    bool m_canGetLevelSaveData;
    int m_resolution;
    int m_texQuality;
    bool m_somethingInMenuLayer;
    void* m_unkPtr4;
    bool m_unkBool9;
    int m_unkSize4_12;
    int m_unkSize4_13;
    bool m_unkBool10;
    int m_unkSize4_14;
    bool m_disableThumbstick;
    float m_customFPSTarget;
    bool m_unkBool11;
    int m_customMenuSongID;
    int m_customPracticeSongID;
    gd::map<int, int> m_loadIcon;
    gd::map<int, gd::map<int, int>> m_loadIcon2;
    gd::map<int, bool> m_isIconBeingLoaded;
    std::array<int, 9>* m_keyStartForIcon;
    void* m_somethingKeyForIcon;
    void* m_idk;
    gd::map<int, gd::vector<cocos2d::CCObject*>> m_iconDelegates;
    int m_iconRequestID;
    cocos2d::CCArray* m_unkArray;
    void* m_someAdPointer;
    int m_unkSize4_15;
    int m_unkSize4_16;
    int m_unkSize4_17;
    UIButtonConfig m_dpad1;
    UIButtonConfig m_dpad2;
    UIButtonConfig m_dpad3;
    UIButtonConfig m_dpad4;
    UIButtonConfig m_dpad5;
    gd::string m_dpadLayout1;
    gd::string m_dpadLayout2;
    gd::string m_dpadLayout3;
    gd::string m_dpadLayoutDual1;
    gd::string m_dpadLayoutDual2;
    gd::string m_dpadLayoutDual3;
    int m_unkSize4_18;
    int m_unkSize4_19;
    int m_unkSize4_20;
    bool m_unkBool12;
};
