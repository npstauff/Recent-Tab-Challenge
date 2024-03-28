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

class GameLevelOptionsLayer : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "GameLevelOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameLevelOptionsLayer, GJOptionsLayer)

    /**
     * @note[short] Windows: 0x213c10
     * @note[short] Android
     */
    static GameLevelOptionsLayer* create(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x213cb0
     * @note[short] Android
     */
    bool init(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x213d20
     * @note[short] Android
     */
    virtual void setupOptions();

    /**
     * @note[short] Windows: 0x213d70
     * @note[short] Android
     */
    virtual void didToggle(int p0);
};
