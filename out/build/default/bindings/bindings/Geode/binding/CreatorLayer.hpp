#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "DialogDelegate.hpp"

class CreatorLayer : public cocos2d::CCLayer, public cocos2d::CCSceneTransitionDelegate, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "CreatorLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CreatorLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x6f4b0
     * @note[short] Android
     */
    static CreatorLayer* create();

    /**
     * @note[short] Windows: 0x6f460
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();
    
private:
    [[deprecated("CreatorLayer::canPlayOnlineLevels not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canPlayOnlineLevels();
public:

    /**
     * @note[short] Windows: 0x71550
     * @note[short] Android
     */
    TodoReturn checkQuestsStatus();

    /**
     * @note[short] Windows: 0x70b80
     * @note[short] Android
     */
    void onAdventureMap(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x71720
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x70dd0
     * @note[short] Android
     */
    void onChallenge(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x70bc0
     * @note[short] Android
     */
    void onDailyLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x70c00
     * @note[short] Android
     */
    void onEventLevel(cocos2d::CCObject* sender);
    
private:
    [[deprecated("CreatorLayer::onFameLevels not implemented")]]
    /**
     * @note[short] Android
     */
    void onFameLevels(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x70580
     * @note[short] Android
     */
    void onFeaturedLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x70790
     * @note[short] Android
     */
    void onGauntlets(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x70520
     * @note[short] Android
     */
    void onLeaderboards(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x70710
     * @note[short] Android
     */
    void onMapPacks(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x707f0
     * @note[short] Android
     */
    void onMultiplayer(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x70350
     * @note[short] Android
     */
    void onMyLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x706a0
     * @note[short] Android
     */
    void onOnlineLevels(cocos2d::CCObject* sender);
    
private:
    [[deprecated("CreatorLayer::onOnlyFullVersion not implemented")]]
    /**
     * @note[short] Android
     */
    void onOnlyFullVersion(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x70600
     * @note[short] Android
     */
    void onPaths(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x70440
     * @note[short] Android
     */
    void onSavedLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x70e00
     * @note[short] Android
     */
    void onSecretVault(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x70620
     * @note[short] Android
     */
    void onTopLists(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x71110
     * @note[short] Android
     */
    void onTreasureRoom(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x70be0
     * @note[short] Android
     */
    void onWeeklyLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x6f550
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x71800
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x71790
     * @note[short] Android
     */
    virtual void sceneWillResume();

    /**
     * @note[short] Windows: 0x71690
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);
};
