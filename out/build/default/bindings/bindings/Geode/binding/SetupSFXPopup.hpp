#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupAudioTriggerPopup.hpp"
#include "CustomSFXDelegate.hpp"
#include "SFXBrowserDelegate.hpp"

class SetupSFXPopup : public SetupAudioTriggerPopup, public CustomSFXDelegate, public SFXBrowserDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupSFXPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSFXPopup, SetupAudioTriggerPopup)

    /**
     * @note[short] Windows: 0x34e1b0
     * @note[short] Android
     */
    static SetupSFXPopup* create(SFXTriggerGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupSFXPopup::createSFXWidget not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createSFXWidget();
public:

    /**
     * @note[short] Windows: 0x34e260
     * @note[short] Android
     */
    bool init(SFXTriggerGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupSFXPopup::onBrowseSFX not implemented")]]
    /**
     * @note[short] Android
     */
    void onBrowseSFX(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupSFXPopup::updateLength not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLength();
public:

    /**
     * @note[short] Windows: 0x34eb60
     * @note[short] Android
     */
    virtual void pageChanged();

    /**
     * @note[short] Windows: 0x34eba0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x34f3b0
     * @note[short] Android
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x34f2b0
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] Out of line
     */
    virtual void sfxObjectSelected(SFXInfoObject* p0);
    
private:
    [[deprecated("SetupSFXPopup::getActiveSFXID not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn getActiveSFXID();
public:

    /**
     * @note[short] Windows: 0x34f270
     * @note[short] Android
     */
    virtual TodoReturn overridePlaySFX(SFXInfoObject* p0);

    /**
     * @note[short] Windows: 0x34f490
     * @note[short] Android
     */
    virtual TodoReturn sfxBrowserClosed(SFXBrowser* p0);
};
