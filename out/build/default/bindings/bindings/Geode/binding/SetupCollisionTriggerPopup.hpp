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

class SetupCollisionTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCollisionTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCollisionTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x328a90
     * @note[short] Android
     */
    static SetupCollisionTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x328b40
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("SetupCollisionTriggerPopup::onActivateOnExit not implemented")]]
    /**
     * @note[short] Android
     */
    void onActivateOnExit(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCollisionTriggerPopup::onEnableGroup not implemented")]]
    /**
     * @note[short] Android
     */
    void onEnableGroup(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCollisionTriggerPopup::onItemID2Arrow not implemented")]]
    /**
     * @note[short] Android
     */
    void onItemID2Arrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCollisionTriggerPopup::onItemIDArrow not implemented")]]
    /**
     * @note[short] Android
     */
    void onItemIDArrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCollisionTriggerPopup::onTargetIDArrow not implemented")]]
    /**
     * @note[short] Android
     */
    void onTargetIDArrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCollisionTriggerPopup::onTargetP1 not implemented")]]
    /**
     * @note[short] Android
     */
    void onTargetP1(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCollisionTriggerPopup::onTargetP2 not implemented")]]
    /**
     * @note[short] Android
     */
    void onTargetP2(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCollisionTriggerPopup::onTargetPP not implemented")]]
    /**
     * @note[short] Android
     */
    void onTargetPP(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupCollisionTriggerPopup::updateItemID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateItemID();
public:
    
private:
    [[deprecated("SetupCollisionTriggerPopup::updateItemID2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateItemID2();
public:
    
private:
    [[deprecated("SetupCollisionTriggerPopup::updateItemID2InputLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateItemID2InputLabel();
public:
    
private:
    [[deprecated("SetupCollisionTriggerPopup::updateItemIDInputLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateItemIDInputLabel();
public:
    
private:
    [[deprecated("SetupCollisionTriggerPopup::updateTargetID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTargetID();
public:
    
private:
    [[deprecated("SetupCollisionTriggerPopup::updateTargetIDInputLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTargetIDInputLabel();
public:

    /**
     * @note[short] Windows: 0x329650
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();

    /**
     * @note[short] Windows: 0x32a1f0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x329d30
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
};
