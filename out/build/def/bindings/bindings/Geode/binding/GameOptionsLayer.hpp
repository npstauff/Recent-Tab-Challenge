#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJOptionsLayer.hpp"

class GameOptionsLayer : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "GameOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameOptionsLayer, GJOptionsLayer)

    /**
     * @note[short] Windows: 0x213050
     * @note[short] Android
     */
    static GameOptionsLayer* create(GJBaseGameLayer* p0);

    /**
     * @note[short] Windows: 0x2130f0
     * @note[short] Android
     */
    bool init(GJBaseGameLayer* p0);

    /**
     * @note[short] Windows: 0x213930
     * @note[short] Android
     */
    void onPracticeMusicSync(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2139a0
     * @note[short] Android
     */
    void onUIOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x213620
     * @note[short] Android
     */
    TodoReturn showPracticeMusicSyncUnlockInfo();

    /**
     * @note[short] Windows: 0x213150
     * @note[short] Android
     */
    virtual TodoReturn setupOptions();

    /**
     * @note[short] Windows: 0x2139c0
     * @note[short] Android
     */
    virtual TodoReturn didToggle(int p0);
};
