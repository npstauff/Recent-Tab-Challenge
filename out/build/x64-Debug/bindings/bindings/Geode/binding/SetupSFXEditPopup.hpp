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

class SetupSFXEditPopup : public SetupAudioTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupSFXEditPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSFXEditPopup, SetupAudioTriggerPopup)

    /**
     * @note[short] Windows: 0x34f530
     * @note[short] Android
     */
    static SetupSFXEditPopup* create(SFXTriggerGameObject* p0, cocos2d::CCArray* p1, bool p2);

    /**
     * @note[short] Windows: 0x34f5e0
     * @note[short] Android
     */
    bool init(SFXTriggerGameObject* p0, cocos2d::CCArray* p1, bool p2);
};
