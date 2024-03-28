#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "TextInputDelegate.hpp"

class CollisionBlockPopup : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "CollisionBlockPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CollisionBlockPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x60ab0
     * @note[short] Android
     */
    static CollisionBlockPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("CollisionBlockPopup::createToggleButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
public:
    
private:
    [[deprecated("CollisionBlockPopup::determineStartValues not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn determineStartValues();
public:

    /**
     * @note[short] Windows: 0x60b60
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("CollisionBlockPopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CollisionBlockPopup::onDynamicBlock not implemented")]]
    /**
     * @note[short] Android
     */
    void onDynamicBlock(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CollisionBlockPopup::onItemIDArrow not implemented")]]
    /**
     * @note[short] Android
     */
    void onItemIDArrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CollisionBlockPopup::onNextItemID not implemented")]]
    /**
     * @note[short] Android
     */
    void onNextItemID(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CollisionBlockPopup::updateEditorLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEditorLabel();
public:
    
private:
    [[deprecated("CollisionBlockPopup::updateItemID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateItemID();
public:
    
private:
    [[deprecated("CollisionBlockPopup::updateTextInputLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTextInputLabel();
public:

    /**
     * @note[short] Windows: 0x61900
     * @note[short] Android
     */
    virtual void keyBackClicked();
    
private:
    [[deprecated("CollisionBlockPopup::show not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void show();
public:

    /**
     * @note[short] Windows: 0x61660
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x61670
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
    
private:
    [[deprecated("CollisionBlockPopup::textInputShouldOffset not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);
public:
    
private:
    [[deprecated("CollisionBlockPopup::textInputReturn not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* p0);
public:
};
