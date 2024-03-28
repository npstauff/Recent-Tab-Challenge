#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GameObject.hpp"

class SmartGameObject : public GameObject {
public:
    static constexpr auto CLASS_NAME = "SmartGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SmartGameObject, GameObject)

    /**
     * @note[short] Windows: 0x397c20
     * @note[short] Android
     */
    static SmartGameObject* create(char const* p0);

    /**
     * @note[short] Windows: 0x397cc0
     * @note[short] Android
     */
    bool init(char const* p0);
    
private:
    [[deprecated("SmartGameObject::updateSmartFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSmartFrame();
public:
    
private:
    [[deprecated("SmartGameObject::customObjectSetup not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("SmartGameObject::getSaveString not implemented")]]
    /**
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
    bool m_property157;
};
