#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "BoomScrollLayerDelegate.hpp"
#include "LevelManagerDelegate.hpp"

class GauntletSelectLayer : public cocos2d::CCLayer, public BoomScrollLayerDelegate, public LevelManagerDelegate {
public:
    static constexpr auto CLASS_NAME = "GauntletSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletSelectLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x186c40
     * @note[short] Android
     */
    static GauntletSelectLayer* create(int p0);
    
private:
    [[deprecated("GauntletSelectLayer::goToPage not implemented")]]
    /**
     * @note[short] Android
     */
    void goToPage(int p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x186cf0
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] Windows: 0x188270
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
    
private:
    [[deprecated("GauntletSelectLayer::onInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GauntletSelectLayer::onNext not implemented")]]
    /**
     * @note[short] Android
     */
    void onNext(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x1882e0
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);
    
private:
    [[deprecated("GauntletSelectLayer::onPrev not implemented")]]
    /**
     * @note[short] Android
     */
    void onPrev(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x187770
     * @note[short] Android
     */
    void onRefresh(cocos2d::CCObject* sender);
    
private:
    [[deprecated("GauntletSelectLayer::scene not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scene(int p0);
public:

    /**
     * @note[short] Windows: 0x187b90
     * @note[short] Android
     */
    void setupGauntlets();
    
private:
    [[deprecated("GauntletSelectLayer::unblockPlay not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unblockPlay();
public:
    
private:
    [[deprecated("GauntletSelectLayer::updateArrows not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateArrows();
public:

    /**
     * @note[short] Windows: 0x188640
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] Windows: 0x1882d0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x188230
     * @note[short] Android
     */
    virtual void scrollLayerWillScrollToPage(BoomScrollLayer* p0, int p1);
    
private:
    [[deprecated("GauntletSelectLayer::scrollLayerScrolledToPage not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void scrollLayerScrolledToPage(BoomScrollLayer* p0, int p1);
public:

    /**
     * @note[short] Windows: 0x187820
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2);

    /**
     * @note[short] Windows: 0x1879f0
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* p0, int p1);
};
