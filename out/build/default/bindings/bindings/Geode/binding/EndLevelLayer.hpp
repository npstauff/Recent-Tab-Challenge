#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"

class EndLevelLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "EndLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EndLevelLayer, GJDropDownLayer)

    /**
     * @note[short] Windows: 0xe7380
     * @note[short] Android
     */
    static EndLevelLayer* create();

    /**
     * @note[short] Windows: 0xe9720
     * @note[short] Android
     */
    TodoReturn coinEnterFinished(cocos2d::CCPoint p0);

    /**
     * @note[short] Windows: 0xe96f0
     * @note[short] Android
     */
    TodoReturn coinEnterFinishedO(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0xe9cd0
     * @note[short] Android
     */
    TodoReturn currencyEnterFinished();

    /**
     * @note[short] Windows: 0xea0c0
     * @note[short] Android
     */
    TodoReturn diamondEnterFinished();

    /**
     * @note[short] Windows: 0xe8a60
     * @note[short] Android
     */
    TodoReturn getCoinString();

    /**
     * @note[short] Windows: 0xea370
     * @note[short] Android
     */
    TodoReturn getEndText();

    /**
     * @note[short] Windows: 0xe9060
     * @note[short] Android
     */
    void goEdit();

    /**
     * @note[short] Windows: 0xe8fb0
     * @note[short] Android
     */
    void onEdit(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EndLevelLayer::onEveryplay not implemented")]]
    /**
     * @note[short] Android
     */
    void onEveryplay(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xe89f0
     * @note[short] Android
     */
    void onLevelLeaderboard(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xe8ec0
     * @note[short] Android
     */
    void onMenu(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xe8dc0
     * @note[short] Android
     */
    void onReplay(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xe9570
     * @note[short] Android
     */
    void playCoinEffect(float p0);

    /**
     * @note[short] Windows: 0xe99c0
     * @note[short] Android
     */
    void playCurrencyEffect(float p0);

    /**
     * @note[short] Windows: 0xe9db0
     * @note[short] Android
     */
    void playDiamondEffect(float p0);

    /**
     * @note[short] Windows: 0xea1a0
     * @note[short] Android
     */
    void playEndEffect();

    /**
     * @note[short] Windows: 0xe9120
     * @note[short] Android
     */
    void playStarEffect(float p0);

    /**
     * @note[short] Windows: 0xe9440
     * @note[short] Android
     */
    TodoReturn starEnterFinished();
    
private:
    [[deprecated("EndLevelLayer::tryShowBanner not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryShowBanner(float p0);
public:

    /**
     * @note[short] Windows: 0xe9110
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0xea310
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] Windows: 0xe74f0
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] Windows: 0xe8c20
     * @note[short] Android
     */
    virtual void showLayer(bool p0);

    /**
     * @note[short] Out of line
     */
    virtual void enterAnimFinished();

    /**
     * @note[short] Out of line
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);
    PlayLayer* m_playLayer;
    bool m_unknown1;
    bool m_unknown2;
    bool m_unknown3;
    bool m_unknown4;
    bool m_unknown5;
    int m_unknown6;
    cocos2d::CCArray* m_coinsToAnimate;
};
