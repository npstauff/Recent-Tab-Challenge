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

class SetupReverbPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupReverbPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupReverbPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x34d9f0
     * @note[short] Android
     */
    static SetupReverbPopup* create(SFXTriggerGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x34daa0
     * @note[short] Android
     */
    bool init(SFXTriggerGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupReverbPopup::onPlay not implemented")]]
    /**
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupReverbPopup::onReverb not implemented")]]
    /**
     * @note[short] Android
     */
    void onReverb(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupReverbPopup::updateReverbLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateReverbLabel();
public:
    
private:
    [[deprecated("SetupReverbPopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
};
