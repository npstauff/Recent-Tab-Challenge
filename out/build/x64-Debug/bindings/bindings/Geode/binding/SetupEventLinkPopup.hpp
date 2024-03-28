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

class SetupEventLinkPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupEventLinkPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupEventLinkPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x3647c0
     * @note[short] Android
     */
    static SetupEventLinkPopup* create(EventLinkTrigger* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x364870
     * @note[short] Android
     */
    bool init(EventLinkTrigger* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupEventLinkPopup::onSelectEvent not implemented")]]
    /**
     * @note[short] Android
     */
    void onSelectEvent(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupEventLinkPopup::updateEventIDs not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEventIDs(gd::set<int>& p0);
public:
};
