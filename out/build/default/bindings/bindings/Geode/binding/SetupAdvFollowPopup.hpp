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
#include "SelectPremadeDelegate.hpp"

class SetupAdvFollowPopup : public SetupTriggerPopup, public SelectPremadeDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupAdvFollowPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAdvFollowPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x3184c0
     * @note[short] Android
     */
    static SetupAdvFollowPopup* create(AdvancedFollowTriggerObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x318570
     * @note[short] Android
     */
    bool init(AdvancedFollowTriggerObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x31aa70
     * @note[short] Android
     */
    void onMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x31ab60
     * @note[short] Android
     */
    void onPremade(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x31aaf0
     * @note[short] Android
     */
    void updateMode(int p0);
    
private:
    [[deprecated("SetupAdvFollowPopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x31a670
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] Windows: 0x31a760
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] Windows: 0x31a9d0
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x31aba0
     * @note[short] Android
     */
    virtual void selectPremadeClosed(SelectPremadeLayer* p0, int p1);
};
