#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GManager.hpp"

class LocalLevelManager : public GManager {
public:
    static constexpr auto CLASS_NAME = "LocalLevelManager";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LocalLevelManager, GManager)

    /**
     * @note[short] Windows: 0x277760
     * @note[short] Android
     */
    static LocalLevelManager* sharedState();
	inline static LocalLevelManager* get() {
        return LocalLevelManager::sharedState();
    }

    /**
     * @note[short] Windows: 0x277cb0
     * @note[short] Android
     */
    cocos2d::CCDictionary* getAllLevelsInDict();

    /**
     * @note[short] Windows: 0x277e00
     * @note[short] Android
     */
    TodoReturn getAllLevelsWithName(gd::string p0);
    
private:
    [[deprecated("LocalLevelManager::getCreatedLevels not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCreatedLevels(int p0);
public:

    /**
     * @note[short] Windows: 0x2784f0
     * @note[short] Android
     */
    TodoReturn getCreatedLists(int p0);
    
private:
    [[deprecated("LocalLevelManager::getLevelsInNameGroups not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getLevelsInNameGroups();
public:

    /**
     * @note[short] Windows: 0x277a90
     * @note[short] Android
     */
    TodoReturn getMainLevelString(int p0);
    
private:
    [[deprecated("LocalLevelManager::markLevelsAsUnmodified not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn markLevelsAsUnmodified();
public:
    
private:
    [[deprecated("LocalLevelManager::moveLevelToTop not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn moveLevelToTop(GJGameLevel* p0);
public:
    
private:
    [[deprecated("LocalLevelManager::reorderLevels not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reorderLevels();
public:

    /**
     * @note[short] Windows: 0x277900
     * @note[short] Android
     */
    TodoReturn tryLoadMainLevelString(int p0);
    
private:
    [[deprecated("LocalLevelManager::updateLevelOrder not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLevelOrder();
public:
    
private:
    [[deprecated("LocalLevelManager::updateLevelRevision not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLevelRevision();
public:

    /**
     * @note[short] Windows: 0x2778d0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x2785d0
     * @note[short] Android
     */
    virtual void encodeDataTo(DS_Dictionary* p0);

    /**
     * @note[short] Windows: 0x278620
     * @note[short] Android
     */
    virtual void dataLoaded(DS_Dictionary* p0);

    /**
     * @note[short] Windows: 0x278560
     * @note[short] Android
     */
    virtual void firstLoad();
    cocos2d::CCArray* m_localLevels;
    cocos2d::CCArray* m_LLM03;
    gd::map<int, gd::string> m_mainLevels;
};
