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

class LevelPage : public cocos2d::CCLayer, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelPage";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelPage, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x268f30
     * @note[short] Android
     */
    static LevelPage* create(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x26b3b0
     * @note[short] Android
     */
    TodoReturn addSecretCoin();
    
private:
    [[deprecated("LevelPage::addSecretDoor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addSecretDoor();
public:

    /**
     * @note[short] Windows: 0x268ff0
     * @note[short] Android
     */
    bool init(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x26c400
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelPage::onMoreGames not implemented")]]
    /**
     * @note[short] Android
     */
    void onMoreGames(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x26c080
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x26bad0
     * @note[short] Android
     */
    void onSecretDoor(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelPage::onTheTower not implemented")]]
    /**
     * @note[short] Android
     */
    void onTheTower(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelPage::playCoinEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playCoinEffect();
public:
    
private:
    [[deprecated("LevelPage::playStep2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playStep2();
public:
    
private:
    [[deprecated("LevelPage::playStep3 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playStep3();
public:

    /**
     * @note[short] Windows: 0x269a80
     * @note[short] Android
     */
    void updateDynamicPage(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x26c660
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Out of line
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Out of line
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    
private:
    [[deprecated("LevelPage::ccTouchCancelled not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("LevelPage::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:

    /**
     * @note[short] Windows: 0x26c000
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);
    void* m_unk;
    GJGameLevel* m_level;
};
