#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ObjectManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "ObjectManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ObjectManager, cocos2d::CCNode)
    
private:
    [[deprecated("ObjectManager::animLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn animLoaded(char const* p0);
public:

    /**
     * @note[short] Windows: 0x4bae0
     * @note[short] Android
     */
    TodoReturn getDefinition(char const* p0);
    
private:
    [[deprecated("ObjectManager::getGlobalAnimCopy not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getGlobalAnimCopy(char const* p0);
public:

    /**
     * @note[short] Windows: 0x4a7f0
     * @note[short] Android
     */
    TodoReturn instance();
    
private:
    [[deprecated("ObjectManager::loadCopiedAnimations not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadCopiedAnimations();
public:
    
private:
    [[deprecated("ObjectManager::loadCopiedSets not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadCopiedSets();
public:
    
private:
    [[deprecated("ObjectManager::purgeObjectManager not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn purgeObjectManager();
public:
    
private:
    [[deprecated("ObjectManager::replaceAllOccurencesOfString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn replaceAllOccurencesOfString(cocos2d::CCString* p0, cocos2d::CCString* p1, cocos2d::CCDictionary* p2);
public:
    
private:
    [[deprecated("ObjectManager::setLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    void setLoaded(char const* p0);
public:
    
private:
    [[deprecated("ObjectManager::setup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setup();
public:
    
private:
    [[deprecated("ObjectManager::init not implemented")]]
    /**
     * @note[short] Android
     */
    virtual bool init();
public:
};
