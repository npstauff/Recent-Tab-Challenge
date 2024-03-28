#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"

class SetupSpawnPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupSpawnPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSpawnPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x35e2d0
     * @note[short] Android
     */
    static SetupSpawnPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x35e380
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupSpawnPopup::onAddRemap not implemented")]]
    /**
     * @note[short] Android
     */
    void onAddRemap(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSpawnPopup::onDeleteRemap not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeleteRemap(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSpawnPopup::onSelectRemap not implemented")]]
    /**
     * @note[short] Android
     */
    void onSelectRemap(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSpawnPopup::queueUpdateButtons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn queueUpdateButtons();
public:
    
private:
    [[deprecated("SetupSpawnPopup::updateRemapButtons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateRemapButtons(float p0);
public:
    
private:
    [[deprecated("SetupSpawnPopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
};
