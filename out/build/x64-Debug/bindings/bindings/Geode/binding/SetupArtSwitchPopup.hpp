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
#include "SelectArtDelegate.hpp"

class SetupArtSwitchPopup : public SetupTriggerPopup, public SelectArtDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupArtSwitchPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupArtSwitchPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x36caa0
     * @note[short] Android
     */
    static SetupArtSwitchPopup* create(ArtTriggerGameObject* p0, cocos2d::CCArray* p1, int p2);

    /**
     * @note[short] Windows: 0x36cbf0
     * @note[short] Android
     */
    bool init(ArtTriggerGameObject* p0, cocos2d::CCArray* p1, int p2);
    
private:
    [[deprecated("SetupArtSwitchPopup::onArt not implemented")]]
    /**
     * @note[short] Android
     */
    void onArt(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupArtSwitchPopup::selectArtClosed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn selectArtClosed(SelectArtLayer* p0);
public:
};
