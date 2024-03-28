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

class CheckpointGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "CheckpointGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CheckpointGameObject, EffectGameObject)
    
private:
    [[deprecated("CheckpointGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CheckpointGameObject* create();
public:
    
private:
    [[deprecated("CheckpointGameObject::resetCheckpoint not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetCheckpoint();
public:
    
private:
    [[deprecated("CheckpointGameObject::updateCheckpointSpriteVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCheckpointSpriteVisibility();
public:
    
private:
    [[deprecated("CheckpointGameObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    virtual bool init();
public:
    
private:
    [[deprecated("CheckpointGameObject::setupCustomSprites not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setupCustomSprites(gd::string p0);
public:
    
private:
    [[deprecated("CheckpointGameObject::resetObject not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void resetObject();
public:
    
private:
    [[deprecated("CheckpointGameObject::triggerObject not implemented")]]
    /**
     * @note[short] Android
     */
    virtual bool triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);
public:
    
private:
    [[deprecated("CheckpointGameObject::customObjectSetup not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("CheckpointGameObject::getSaveString not implemented")]]
    /**
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
    
private:
    [[deprecated("CheckpointGameObject::triggerActivated not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn triggerActivated(float p0);
public:
    
private:
    [[deprecated("CheckpointGameObject::restoreObject not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn restoreObject();
public:
    
private:
    [[deprecated("CheckpointGameObject::updateSyncedAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateSyncedAnimation(float p0, int p1);
public:
};
