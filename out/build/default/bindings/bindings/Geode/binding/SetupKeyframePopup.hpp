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

class SetupKeyframePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupKeyframePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupKeyframePopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x332830
     * @note[short] Android
     */
    static SetupKeyframePopup* create(KeyframeGameObject* p0, cocos2d::CCArray* p1, LevelEditorLayer* p2);

    /**
     * @note[short] Windows: 0x3328e0
     * @note[short] Android
     */
    bool init(KeyframeGameObject* p0, cocos2d::CCArray* p1, LevelEditorLayer* p2);
    
private:
    [[deprecated("SetupKeyframePopup::onTimeMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onTimeMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupKeyframePopup::refreshPreviewArt not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn refreshPreviewArt();
public:
    
private:
    [[deprecated("SetupKeyframePopup::updateTimeModeButtons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTimeModeButtons();
public:

    /**
     * @note[short] Windows: 0x333c10
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x333660
     * @note[short] Android
     */
    virtual void onCustomButton(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x333590
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] Windows: 0x3335c0
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
};
