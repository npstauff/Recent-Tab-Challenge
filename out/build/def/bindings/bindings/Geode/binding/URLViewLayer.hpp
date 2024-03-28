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

class URLViewLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "URLViewLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(URLViewLayer, GJDropDownLayer)

    /**
     * @note[short] Windows: 0x2166a0
     * @note[short] Android
     */
    static URLViewLayer* create(gd::string p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x216770
     * @note[short] Android
     */
    bool init(gd::string p0, cocos2d::CCArray* p1);
};
