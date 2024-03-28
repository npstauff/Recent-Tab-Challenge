#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ObjectToolbox : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "ObjectToolbox";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ObjectToolbox, cocos2d::CCNode)
    gd::map<int, gd::string> m_allKeys;

    /**
     * @note[short] Windows: 0x28b340
     * @note[short] Android
     */
    static ObjectToolbox* sharedState();
    
private:
    [[deprecated("ObjectToolbox::allKeys not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn allKeys();
public:

    /**
     * @note[short] Windows: 0x2af310
     * @note[short] Android
     */
    float gridNodeSizeForKey(int p0);

    /**
     * @note[short] Out of line
     */
    const char* intKeyToFrame(int key);
    
private:
    [[deprecated("ObjectToolbox::perspectiveBlockFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn perspectiveBlockFrame(int p0);
public:
    
private:
    [[deprecated("ObjectToolbox::init not implemented")]]
    /**
     * @note[short] Android
     */
    virtual bool init();
public:
};
