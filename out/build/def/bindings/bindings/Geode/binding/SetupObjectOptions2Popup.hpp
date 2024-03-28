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

class SetupObjectOptions2Popup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupObjectOptions2Popup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupObjectOptions2Popup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x316fe0
     * @note[short] Android
     */
    static SetupObjectOptions2Popup* create(GameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x317090
     * @note[short] Android
     */
    bool init(GameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupObjectOptions2Popup::onPlusButton not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);
public:
};
