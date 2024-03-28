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

class SpawnParticleGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "SpawnParticleGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SpawnParticleGameObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x3b8660
     * @note[short] Android
     */
    static SpawnParticleGameObject* create();

    /**
     * @note[short] Windows: 0x3b8700
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("SpawnParticleGameObject::customObjectSetup not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("SpawnParticleGameObject::getSaveString not implemented")]]
    /**
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
