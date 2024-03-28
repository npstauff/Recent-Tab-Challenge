#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ColorActionSprite : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "ColorActionSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ColorActionSprite, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x1d8bf0
     * @note[short] Android
     */
    static ColorActionSprite* create();

    /**
     * @note[short] Windows: 0x1d8cb0
     * @note[short] Android
     */
    virtual bool init();
};
