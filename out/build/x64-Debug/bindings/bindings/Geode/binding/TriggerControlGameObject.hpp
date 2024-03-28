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

class TriggerControlGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "TriggerControlGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TriggerControlGameObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x3b8110
     * @note[short] Android
     */
    static TriggerControlGameObject* create(char const* p0);
    
private:
    [[deprecated("TriggerControlGameObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("TriggerControlGameObject::updateTriggerControlFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTriggerControlFrame();
public:
    
private:
    [[deprecated("TriggerControlGameObject::triggerObject not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);
public:
    
private:
    [[deprecated("TriggerControlGameObject::customObjectSetup not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("TriggerControlGameObject::getSaveString not implemented")]]
    /**
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
