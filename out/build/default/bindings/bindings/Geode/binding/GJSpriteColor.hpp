#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJSpriteColor {
public:
    static constexpr auto CLASS_NAME = "GJSpriteColor";
    
private:
    [[deprecated("GJSpriteColor::getColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getColorMode();
public:
    int m_colorID;
    int m_defaultColorID;
    float m_opacity;
    cocos2d::ccHSVValue m_hsv;
    bool m_usesHSV;
    float unk_10C;
    bool unk_110;
};
