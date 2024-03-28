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
#include "DynamicScrollDelegate.hpp"

class LevelSelectLayer : public cocos2d::CCLayer, public BoomScrollLayerDelegate, public DynamicScrollDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelSelectLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x267bc0
     * @note[short] Android
     */
     ~LevelSelectLayer();

    /**
     * @note[short] Windows: 0x267c60
     * @note[short] Android
     */
    static LevelSelectLayer* create(int p0);

    /**
     * @note[short] Windows: 0x268ac0
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForPage(int page);

    /**
     * @note[short] Windows: 0x268980
     * @note[short] Android
     */
    TodoReturn getColorValue(int p0, int p1, float p2);

    /**
     * @note[short] Windows: 0x267d00
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] Windows: 0x268d00
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x268750
     * @note[short] Android
     */
    void onDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x268e30
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x268c40
     * @note[short] Android
     */
    void onNext(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelSelectLayer::onPlay not implemented")]]
    /**
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x268ca0
     * @note[short] Android
     */
    void onPrev(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x267c20
     * @note[short] Android
     */
    TodoReturn scene(int p0);
    
private:
    [[deprecated("LevelSelectLayer::tryShowAd not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryShowAd();
public:

    /**
     * @note[short] Windows: 0x268d60
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x268d70
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] Windows: 0x268790
     * @note[short] Android
     */
    virtual void updatePageWithObject(cocos2d::CCObject* p0, cocos2d::CCObject* p1);

    /**
     * @note[short] Windows: 0x2687f0
     * @note[short] Android
     */
    virtual TodoReturn scrollLayerMoved(cocos2d::CCPoint p0);
};
