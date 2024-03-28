#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCMenuItemSpriteExtra.hpp"

class InfoAlertButton : public CCMenuItemSpriteExtra {
public:
    static constexpr auto CLASS_NAME = "InfoAlertButton";
    GEODE_CUSTOM_CONSTRUCTOR_GD(InfoAlertButton, CCMenuItemSpriteExtra)

    /**
     * @note[short] Windows: 0x228110
     * @note[short] Android
     */
    static InfoAlertButton* create(gd::string p0, gd::string p1, float p2);

    /**
     * @note[short] Windows: 0x228230
     * @note[short] Android
     */
    bool init(gd::string p0, gd::string p1, float p2);

    /**
     * @note[short] Windows: 0x228330
     * @note[short] Android
     */
    virtual void activate();
};
