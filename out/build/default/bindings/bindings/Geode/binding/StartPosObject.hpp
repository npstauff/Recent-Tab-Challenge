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

class StartPosObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "StartPosObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(StartPosObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x3a7850
     * @note[short] Android
     */
    static StartPosObject* create();
    
private:
    [[deprecated("StartPosObject::loadSettingsFromString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadSettingsFromString(gd::string p0);
public:
    
private:
    [[deprecated("StartPosObject::setSettings not implemented")]]
    /**
     * @note[short] Android
     */
    void setSettings(LevelSettingsObject* p0);
public:

    /**
     * @note[short] Windows: 0x3a7910
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("StartPosObject::customObjectSetup not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("StartPosObject::getSaveString not implemented")]]
    /**
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
    int m_unknown;
};
