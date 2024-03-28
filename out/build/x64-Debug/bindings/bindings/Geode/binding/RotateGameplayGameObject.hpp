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

class RotateGameplayGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "RotateGameplayGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RotateGameplayGameObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x3b9090
     * @note[short] Android
     */
    static RotateGameplayGameObject* create();
    
private:
    [[deprecated("RotateGameplayGameObject::updateGameplayRotation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGameplayRotation();
public:

    /**
     * @note[short] Windows: 0x3b9130
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("RotateGameplayGameObject::updateStartValues not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateStartValues();
public:
    
private:
    [[deprecated("RotateGameplayGameObject::customObjectSetup not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("RotateGameplayGameObject::getSaveString not implemented")]]
    /**
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
