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

class SetTextPopup : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "SetTextPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetTextPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x211180
     * @note[short] Android
     */
    static SetTextPopup* create(gd::string value, gd::string placeholder, int maxLength, gd::string title, gd::string okBtnText, bool showResetBtn, float p6);

    /**
     * @note[short] Windows: 0x211340
     * @note[short] Android
     */
    bool init(gd::string p0, gd::string p1, int p2, gd::string p3, gd::string p4, bool p5, float p6);
    
private:
    [[deprecated("SetTextPopup::onCancel not implemented")]]
    /**
     * @note[short] Android
     */
    void onCancel(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetTextPopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetTextPopup::onResetValue not implemented")]]
    /**
     * @note[short] Android
     */
    void onResetValue(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetTextPopup::updateTextInputLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTextInputLabel();
public:

    /**
     * @note[short] Windows: 0x211c80
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x61860
     * @note[short] Android
     */
    virtual void show();
    
private:
    [[deprecated("SetTextPopup::textInputClosed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);
public:

    /**
     * @note[short] Windows: 0x211b20
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
    CCTextInputNode* m_input;
    bool m_disableDelegate;
    gd::string m_value;
    SetTextPopupDelegate* m_delegate;
};
