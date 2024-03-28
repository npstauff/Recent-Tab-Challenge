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

class SetupSequenceTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupSequenceTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSequenceTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x34b450
     * @note[short] Android
     */
    static SetupSequenceTriggerPopup* create(SequenceTriggerGameObject* p0);

    /**
     * @note[short] Windows: 0x34b4f0
     * @note[short] Android
     */
    bool init(SequenceTriggerGameObject* p0);

    /**
     * @note[short] Windows: 0x34c5e0
     * @note[short] Android
     */
    void onAddChance(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x34c670
     * @note[short] Android
     */
    void onChangeOrder(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x34c6e0
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x34c570
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x34c110
     * @note[short] Android
     */
    void updateGroupIDButtons();

    /**
     * @note[short] Windows: 0x34c040
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
};
