#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCAnimatedSprite.hpp"

class GJRobotSprite : public CCAnimatedSprite {
public:
    static constexpr auto CLASS_NAME = "GJRobotSprite";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJRobotSprite, CCAnimatedSprite)

    /**
     * @note[short] Windows: 0x217510
     * @note[short] Android
     */
    static GJRobotSprite* create(int p0);
    
private:
    [[deprecated("GJRobotSprite::hideGlow not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hideGlow();
public:

    /**
     * @note[short] Windows: 0x2175e0
     * @note[short] Android
     */
    bool init(int p0, gd::string p1);
    
private:
    [[deprecated("GJRobotSprite::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(int p0);
public:
    
private:
    [[deprecated("GJRobotSprite::showGlow not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn showGlow();
public:
    
private:
    [[deprecated("GJRobotSprite::updateColor01 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateColor01(cocos2d::ccColor3B p0);
public:
    
private:
    [[deprecated("GJRobotSprite::updateColor02 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateColor02(cocos2d::ccColor3B p0);
public:

    /**
     * @note[short] Windows: 0x217b70
     * @note[short] Android
     */
    TodoReturn updateColors();

    /**
     * @note[short] Windows: 0x2180b0
     * @note[short] Android
     */
    TodoReturn updateFrame(int p0);

    /**
     * @note[short] Windows: 0x217b10
     * @note[short] Android
     */
    TodoReturn updateGlowColor(cocos2d::ccColor3B p0, bool p1);

    /**
     * @note[short] Windows: 0x217ff0
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);
    
private:
    [[deprecated("GJRobotSprite::hideSecondary not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn hideSecondary();
public:
};
