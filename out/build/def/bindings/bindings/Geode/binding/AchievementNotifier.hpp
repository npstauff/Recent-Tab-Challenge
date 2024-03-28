#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AchievementNotifier : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "AchievementNotifier";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AchievementNotifier, cocos2d::CCNode)
    
private:
    [[deprecated("AchievementNotifier::sharedState not implemented")]]
    /**
     * @note[short] Android
     */
    static AchievementNotifier* sharedState();
public:
    
private:
    [[deprecated("AchievementNotifier::achievementDisplayFinished not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn achievementDisplayFinished();
public:
    
private:
    [[deprecated("AchievementNotifier::notifyAchievement not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn notifyAchievement(char const* title, char const* desc, char const* icon, bool quest);
public:

    /**
     * @note[short] Windows: 0x1c0a0
     * @note[short] Android
     */
    TodoReturn showNextAchievement();

    /**
     * @note[short] Windows: 0x1c200
     * @note[short] Android
     */
    void willSwitchToScene(cocos2d::CCScene* p0);
    
private:
    [[deprecated("AchievementNotifier::init not implemented")]]
    /**
     * @note[short] Android
     */
    virtual bool init();
public:
};
