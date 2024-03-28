#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJDifficultySprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "GJDifficultySprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJDifficultySprite, cocos2d::CCSprite)

    /**
     * @note[short] Windows: 0x216be0
     * @note[short] Android
     */
    static GJDifficultySprite* create(int p0, GJDifficultyName p1);
    
private:
    [[deprecated("GJDifficultySprite::getDifficultyFrame not implemented")]]
    /**
     * @note[short] Android
     */
    gd::string getDifficultyFrame(int p0, GJDifficultyName p1);
public:

    /**
     * @note[short] Windows: 0x216cb0
     * @note[short] Android
     */
    bool init(int p0, GJDifficultyName p1);

    /**
     * @note[short] Windows: 0x216e30
     * @note[short] Android
     */
    void updateDifficultyFrame(int p0, GJDifficultyName p1);

    /**
     * @note[short] Windows: 0x216ff0
     * @note[short] Android
     */
    void updateFeatureState(GJFeatureState p0);

    /**
     * @note[short] Windows: 0x216f70
     * @note[short] Android
     */
    void updateFeatureStateFromLevel(GJGameLevel* p0);
};
