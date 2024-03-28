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
#include "SelectSettingDelegate.hpp"

class SetupAudioLineGuidePopup : public SetupTriggerPopup, public SelectSettingDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupAudioLineGuidePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAudioLineGuidePopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x36ba20
     * @note[short] Android
     */
    static SetupAudioLineGuidePopup* create(AudioLineGuideGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x36bad0
     * @note[short] Android
     */
    bool init(AudioLineGuideGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupAudioLineGuidePopup::onSpeed not implemented")]]
    /**
     * @note[short] Android
     */
    void onSpeed(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupAudioLineGuidePopup::selectSettingClosed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn selectSettingClosed(SelectSettingLayer* p0);
public:
};