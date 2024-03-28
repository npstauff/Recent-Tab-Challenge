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

class EnterEffectObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "EnterEffectObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EnterEffectObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x38e9c0
     * @note[short] Android
     */
    static EnterEffectObject* create(char const* p0);
    
private:
    [[deprecated("EnterEffectObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("EnterEffectObject::resetEnterAnimValues not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetEnterAnimValues();
public:
    
private:
    [[deprecated("EnterEffectObject::customSetup not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void customSetup();
public:
    
private:
    [[deprecated("EnterEffectObject::customObjectSetup not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("EnterEffectObject::getSaveString not implemented")]]
    /**
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
