#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCSpriteCOpacity.hpp"

class GJPathSprite : public CCSpriteCOpacity {
public:
    static constexpr auto CLASS_NAME = "GJPathSprite";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPathSprite, CCSpriteCOpacity)

    /**
     * @note[short] Windows: 0x200120
     * @note[short] Android
     */
    static GJPathSprite* create(int p0);
    
private:
    [[deprecated("GJPathSprite::addRankLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addRankLabel(int p0);
public:
    
private:
    [[deprecated("GJPathSprite::addShardSprite not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addShardSprite();
public:
    
private:
    [[deprecated("GJPathSprite::changeToLockedArt not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn changeToLockedArt();
public:

    /**
     * @note[short] Windows: 0x2001e0
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] Windows: 0x2002c0
     * @note[short] Android
     */
    TodoReturn updateState();
};
