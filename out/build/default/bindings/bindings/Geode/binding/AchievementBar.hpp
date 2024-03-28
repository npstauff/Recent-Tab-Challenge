#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AchievementBar : public cocos2d::CCNodeRGBA {
public:
    static constexpr auto CLASS_NAME = "AchievementBar";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AchievementBar, cocos2d::CCNodeRGBA)

    /**
     * @note[short] Windows: 0x59720
     * @note[short] Android
     */
    static AchievementBar* create(char const* title, char const* desc, char const* icon, bool quest);

    /**
     * @note[short] Windows: 0x59800
     * @note[short] Android
     */
    bool init(char const* title, char const* desc, char const* icon, bool quest);

    /**
     * @note[short] Windows: 0x5a610
     * @note[short] Android
     */
    void show();

    /**
     * @note[short] Windows: 0x5a850
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);
};
