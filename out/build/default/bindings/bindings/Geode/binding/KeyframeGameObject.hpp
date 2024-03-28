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

class KeyframeGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "KeyframeGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(KeyframeGameObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x3aaf20
     * @note[short] Android
     */
    static KeyframeGameObject* create();
    
private:
    [[deprecated("KeyframeGameObject::updateShadowObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateShadowObjects(GJBaseGameLayer* p0, EditorUI* p1);
public:

    /**
     * @note[short] Windows: 0x3aafc0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x3ab230
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);
    
private:
    [[deprecated("KeyframeGameObject::customObjectSetup not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("KeyframeGameObject::getSaveString not implemented")]]
    /**
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
};
