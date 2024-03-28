#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LevelOptionsLayer.hpp"

class LevelOptionsLayer2 : public LevelOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "LevelOptionsLayer2";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelOptionsLayer2, LevelOptionsLayer)

    /**
     * @note[short] Windows: 0x271f10
     * @note[short] Android
     */
    static LevelOptionsLayer2* create(LevelSettingsObject* p0);

    /**
     * @note[short] Windows: 0x271fb0
     * @note[short] Android
     */
    bool init(LevelSettingsObject* p0);

    /**
     * @note[short] Windows: 0x272080
     * @note[short] Android
     */
    virtual void setupOptions();
};
