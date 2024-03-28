#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class KeybindingsManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "KeybindingsManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(KeybindingsManager, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x22d460
     * @note[short] Android
     */
    static KeybindingsManager* sharedState();
    
private:
    [[deprecated("KeybindingsManager::commandForKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn commandForKey(cocos2d::enumKeyCodes p0, GJKeyGroup p1, bool p2, bool p3, bool p4);
public:
    
private:
    [[deprecated("KeybindingsManager::commandForKeyMods not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn commandForKeyMods(cocos2d::enumKeyCodes p0, GJKeyGroup p1);
public:
    
private:
    [[deprecated("KeybindingsManager::commandForKeyNoMods not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn commandForKeyNoMods(cocos2d::enumKeyCodes p0, GJKeyGroup p1);
public:
    
private:
    [[deprecated("KeybindingsManager::commandToKeyForGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn commandToKeyForGroup(GJKeyGroup p0);
public:

    /**
     * @note[short] Windows: 0x22d570
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* p0);
    
private:
    [[deprecated("KeybindingsManager::encodeDataTo not implemented")]]
    /**
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("KeybindingsManager::firstSetup not implemented")]]
    /**
     * @note[short] Android
     */
    void firstSetup();
public:
    
private:
    [[deprecated("KeybindingsManager::groupForCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn groupForCommand(GJKeyCommand p0);
public:
    
private:
    [[deprecated("KeybindingsManager::keyForCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn keyForCommand(GJKeyCommand p0);
public:
    
private:
    [[deprecated("KeybindingsManager::keyToCommandForGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn keyToCommandForGroup(GJKeyGroup p0);
public:
    
private:
    [[deprecated("KeybindingsManager::init not implemented")]]
    /**
     * @note[short] Android
     */
    virtual bool init();
public:
};
