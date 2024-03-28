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

class SetupCoinLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCoinLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCoinLayer, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x36b340
     * @note[short] Android
     */
    static SetupCoinLayer* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x36b3f0
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
};
