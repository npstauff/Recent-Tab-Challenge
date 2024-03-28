#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class BitmapFontCache : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "BitmapFontCache";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BitmapFontCache, cocos2d::CCObject)
    
private:
    [[deprecated("BitmapFontCache::sharedFontCache not implemented")]]
    /**
     * @note[short] Android
     */
    static BitmapFontCache* sharedFontCache();
public:
    
private:
    [[deprecated("BitmapFontCache::fontWithConfigFile not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn fontWithConfigFile(char const* p0, float p1);
public:
    
private:
    [[deprecated("BitmapFontCache::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init();
public:
    
private:
    [[deprecated("BitmapFontCache::purgeSharedFontCache not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn purgeSharedFontCache();
public:
};
