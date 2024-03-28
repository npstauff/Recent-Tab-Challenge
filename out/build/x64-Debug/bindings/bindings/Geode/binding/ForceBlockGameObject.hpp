#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EffectGameObject.hpp"

class ForceBlockGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ForceBlockGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ForceBlockGameObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x3b6c50
     * @note[short] Android
     */
    static ForceBlockGameObject* create(char const* p0);
    
private:
    [[deprecated("ForceBlockGameObject::calculateForceToTarget not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn calculateForceToTarget(GameObject* p0);
public:
    
private:
    [[deprecated("ForceBlockGameObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("ForceBlockGameObject::customObjectSetup not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("ForceBlockGameObject::getSaveString not implemented")]]
    /**
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
