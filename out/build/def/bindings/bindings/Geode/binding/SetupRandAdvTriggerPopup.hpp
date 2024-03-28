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

class SetupRandAdvTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupRandAdvTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupRandAdvTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x346250
     * @note[short] Android
     */
    static SetupRandAdvTriggerPopup* create(RandTriggerGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x346ce0
     * @note[short] Android
     */
    void addChance(int p0, int p1);

    /**
     * @note[short] Windows: 0x346d70
     * @note[short] Android
     */
    void addChanceToObject(RandTriggerGameObject* p0, int p1, int p2);
    
private:
    [[deprecated("SetupRandAdvTriggerPopup::callRemoveFromGroup not implemented")]]
    /**
     * @note[short] Android
     */
    void callRemoveFromGroup(float p0);
public:

    /**
     * @note[short] Windows: 0x346300
     * @note[short] Android
     */
    bool init(RandTriggerGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x347ad0
     * @note[short] Android
     */
    void onAddChance(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x347a20
     * @note[short] Android
     */
    void onRemoveFromGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x346de0
     * @note[short] Android
     */
    void removeGroupID(int p0);

    /**
     * @note[short] Windows: 0x346ee0
     * @note[short] Android
     */
    void removeGroupIDFromObject(RandTriggerGameObject* p0, int p1);

    /**
     * @note[short] Windows: 0x346f60
     * @note[short] Android
     */
    void updateGroupIDButtons();
    
private:
    [[deprecated("SetupRandAdvTriggerPopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupRandAdvTriggerPopup::textChanged not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
};
