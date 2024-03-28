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

class SetupRotateGameplayPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupRotateGameplayPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupRotateGameplayPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x349c10
     * @note[short] Android
     */
    static SetupRotateGameplayPopup* create(RotateGameplayGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x349cc0
     * @note[short] Android
     */
    bool init(RotateGameplayGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x34a300
     * @note[short] Android
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x34a330
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);
};
