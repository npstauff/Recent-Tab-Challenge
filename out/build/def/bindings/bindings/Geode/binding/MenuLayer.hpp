#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayerProtocol.hpp"
#include "GooglePlayDelegate.hpp"

class MenuLayer : public cocos2d::CCLayer, public FLAlertLayerProtocol, public GooglePlayDelegate {
public:
    static constexpr auto CLASS_NAME = "MenuLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MenuLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x27b3d0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(bool p0);
    
private:
    [[deprecated("MenuLayer::endGame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn endGame();
public:
    
private:
    [[deprecated("MenuLayer::firstNetworkTest not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn firstNetworkTest();
public:

    /**
     * @note[short] Windows: 0x27c830
     * @note[short] Android
     */
    void onAchievements(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x27c9d0
     * @note[short] Android
     */
    void onCreator(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x27c500
     * @note[short] Android
     */
    void onDaily(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x27c780
     * @note[short] Android
     */
    void onDiscord(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MenuLayer::onEveryplay not implemented")]]
    /**
     * @note[short] Android
     */
    void onEveryplay(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x27c700
     * @note[short] Android
     */
    void onFacebook(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MenuLayer::onFreeLevels not implemented")]]
    /**
     * @note[short] Android
     */
    void onFreeLevels(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::onFullVersion not implemented")]]
    /**
     * @note[short] Android
     */
    void onFullVersion(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::onGameCenter not implemented")]]
    /**
     * @note[short] Android
     */
    void onGameCenter(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x27ca40
     * @note[short] Android
     */
    void onGarage(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MenuLayer::onGooglePlayGames not implemented")]]
    /**
     * @note[short] Android
     */
    void onGooglePlayGames(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x27c7a0
     * @note[short] Android
     */
    void onMoreGames(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x27c690
     * @note[short] Android
     */
    void onMyProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x27cae0
     * @note[short] Android
     */
    void onNewgrounds(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x27c930
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MenuLayer::onOptionsInstant not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn onOptionsInstant();
public:

    /**
     * @note[short] Windows: 0x27c890
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x27cb70
     * @note[short] Android
     */
    void onQuit(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x27c6e0
     * @note[short] Android
     */
    void onRobTop(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x27c9a0
     * @note[short] Android
     */
    void onStats(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MenuLayer::onTrailer not implemented")]]
    /**
     * @note[short] Android
     */
    void onTrailer(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x27c760
     * @note[short] Android
     */
    void onTwitch(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x27c720
     * @note[short] Android
     */
    void onTwitter(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x27c740
     * @note[short] Android
     */
    void onYouTube(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MenuLayer::openOptions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn openOptions(bool p0);
public:
    
private:
    [[deprecated("MenuLayer::showGCQuestion not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn showGCQuestion();
public:
    
private:
    [[deprecated("MenuLayer::showMeltdownPromo not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn showMeltdownPromo();
public:

    /**
     * @note[short] Windows: 0x27c660
     * @note[short] Android
     */
    TodoReturn showTOS();
    
private:
    [[deprecated("MenuLayer::syncPlatformAchievements not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn syncPlatformAchievements(float p0);
public:
    
private:
    [[deprecated("MenuLayer::tryShowAd not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryShowAd(float p0);
public:

    /**
     * @note[short] Windows: 0x27c520
     * @note[short] Android
     */
    TodoReturn updateUserProfileButton();
    
private:
    [[deprecated("MenuLayer::videoOptionsClosed not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn videoOptionsClosed();
public:
    
private:
    [[deprecated("MenuLayer::videoOptionsOpened not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn videoOptionsOpened();
public:
    
private:
    [[deprecated("MenuLayer::willClose not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn willClose();
public:

    /**
     * @note[short] Windows: 0x27b450
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x27cb60
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x27cd70
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] Windows: 0x27c860
     * @note[short] Android
     */
    virtual TodoReturn googlePlaySignedIn();

    /**
     * @note[short] Windows: 0x27cbf0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
