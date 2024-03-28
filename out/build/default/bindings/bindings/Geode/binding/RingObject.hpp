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

class RingObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "RingObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RingObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x399e70
     * @note[short] Android
     */
    static RingObject* create(char const* p0);
    
private:
    [[deprecated("RingObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("RingObject::spawnCircle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnCircle();
public:
    
private:
    [[deprecated("RingObject::setScale not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setScale(float p0);
public:
    
private:
    [[deprecated("RingObject::setRotation not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setRotation(float p0);
public:
    
private:
    [[deprecated("RingObject::resetObject not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void resetObject();
public:
    
private:
    [[deprecated("RingObject::customObjectSetup not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("RingObject::getSaveString not implemented")]]
    /**
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
    
private:
    [[deprecated("RingObject::setRScale not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setRScale(float p0);
public:
    
private:
    [[deprecated("RingObject::triggerActivated not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn triggerActivated(float p0);
public:
    
private:
    [[deprecated("RingObject::shouldDrawEditorHitbox not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn shouldDrawEditorHitbox();
public:
    
private:
    [[deprecated("RingObject::powerOnObject not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn powerOnObject(int p0);
public:
    bool m_claimTouch;
    bool m_isSpawnOnly;
};
