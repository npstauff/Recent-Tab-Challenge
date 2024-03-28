#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetIDPopup.hpp"

class SetLevelOrderPopup : public SetIDPopup {
public:
    static constexpr auto CLASS_NAME = "SetLevelOrderPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetLevelOrderPopup, SetIDPopup)

    /**
     * @note[short] Windows: 0x25e270
     * @note[short] Android
     */
    static SetLevelOrderPopup* create(int p0, int p1, int p2);

    /**
     * @note[short] Windows: 0x25e320
     * @note[short] Android
     */
    bool init(int p0, int p1, int p2);
    
private:
    [[deprecated("SetLevelOrderPopup::onOrderButton not implemented")]]
    /**
     * @note[short] Android
     */
    void onOrderButton(cocos2d::CCObject* sender);
public:
};
