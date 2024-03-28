#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AchievementManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "AchievementManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AchievementManager, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x9ac0
     * @note[short] Android
     */
    static AchievementManager* sharedState();
    
private:
    [[deprecated("AchievementManager::achievementForUnlock not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn achievementForUnlock(int p0, UnlockType p1);
public:

    /**
     * @note[short] Windows: 0x9bc0
     * @note[short] Android
     */
    void addAchievement(gd::string p0, gd::string p1, gd::string p2, gd::string p3, gd::string p4, int p5);

    /**
     * @note[short] Windows: 0x9f60
     * @note[short] Android
     */
    void addManualAchievements();
    
private:
    [[deprecated("AchievementManager::areAchievementsEarned not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn areAchievementsEarned(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("AchievementManager::checkAchFromUnlock not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkAchFromUnlock(char const* p0);
public:
    
private:
    [[deprecated("AchievementManager::dataLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("AchievementManager::encodeDataTo not implemented")]]
    /**
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("AchievementManager::firstSetup not implemented")]]
    /**
     * @note[short] Android
     */
    void firstSetup();
public:
    
private:
    [[deprecated("AchievementManager::getAchievementRewardDict not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAchievementRewardDict();
public:
    
private:
    [[deprecated("AchievementManager::getAchievementsWithID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAchievementsWithID(char const* p0);
public:
    
private:
    [[deprecated("AchievementManager::getAllAchievements not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAllAchievements();
public:
    
private:
    [[deprecated("AchievementManager::getAllAchievementsSorted not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAllAchievementsSorted(bool p0);
public:
    
private:
    [[deprecated("AchievementManager::isAchievementAvailable not implemented")]]
    /**
     * @note[short] Android
     */
    bool isAchievementAvailable(gd::string p0);
public:
    
private:
    [[deprecated("AchievementManager::isAchievementEarned not implemented")]]
    /**
     * @note[short] Android
     */
    bool isAchievementEarned(char const* p0);
public:
    
private:
    [[deprecated("AchievementManager::limitForAchievement not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn limitForAchievement(gd::string p0);
public:
    
private:
    [[deprecated("AchievementManager::notifyAchievement not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn notifyAchievement(char const* p0, char const* p1, char const* p2);
public:

    /**
     * @note[short] Windows: 0x1b550
     * @note[short] Android
     */
    TodoReturn notifyAchievementWithID(char const* p0);
    
private:
    [[deprecated("AchievementManager::percentageForCount not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn percentageForCount(int p0, int p1);
public:

    /**
     * @note[short] Windows: 0x1ab50
     * @note[short] Android
     */
    TodoReturn percentForAchievement(char const* p0);

    /**
     * @note[short] Windows: 0x1b7e0
     * @note[short] Android
     */
    void reportAchievementWithID(char const* p0, int p1, bool p2);

    /**
     * @note[short] Windows: 0x1b8f0
     * @note[short] Android
     */
    void reportPlatformAchievementWithID(char const* p0, int p1);

    /**
     * @note[short] Windows: 0x1b730
     * @note[short] Android
     */
    void resetAchievement(char const* p0);
    
private:
    [[deprecated("AchievementManager::resetAchievements not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetAchievements();
public:
    
private:
    [[deprecated("AchievementManager::setup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setup();
public:
    
private:
    [[deprecated("AchievementManager::storeAchievementUnlocks not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn storeAchievementUnlocks();
public:
    
private:
    [[deprecated("AchievementManager::init not implemented")]]
    /**
     * @note[short] Android
     */
    virtual bool init();
public:
};
