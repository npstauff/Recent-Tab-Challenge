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
#include "HSVWidgetDelegate.hpp"
#include "ColorSelectDelegate.hpp"
#include "ColorSetupDelegate.hpp"

class CustomizeObjectLayer : public FLAlertLayer, public TextInputDelegate, public HSVWidgetDelegate, public ColorSelectDelegate, public ColorSetupDelegate {
public:
    static constexpr auto CLASS_NAME = "CustomizeObjectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomizeObjectLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x763f0
     * @note[short] Android
     */
    static CustomizeObjectLayer* create(GameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("CustomizeObjectLayer::createToggleButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
public:

    /**
     * @note[short] Windows: 0x78e70
     * @note[short] Android
     */
    TodoReturn determineStartValues();

    /**
     * @note[short] Windows: 0x79a00
     * @note[short] Android
     */
    int getActiveMode(bool p0);
    
private:
    [[deprecated("CustomizeObjectLayer::getButtonByTag not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getButtonByTag(int p0);
public:
    
private:
    [[deprecated("CustomizeObjectLayer::getHSV not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getHSV();
public:

    /**
     * @note[short] Windows: 0x7a1b0
     * @note[short] Android
     */
    void highlightSelected(ButtonSprite* p0);

    /**
     * @note[short] Windows: 0x764a0
     * @note[short] Android
     */
    bool init(GameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x79e90
     * @note[short] Android
     */
    void onBreakApart(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x78b50
     * @note[short] Android
     */
    void onBrowse(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x79e30
     * @note[short] Android
     */
    void onClear(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x7a2a0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x78a30
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x78ce0
     * @note[short] Android
     */
    void onEditColor(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x79210
     * @note[short] Android
     */
    void onHSV(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x789f0
     * @note[short] Android
     */
    void onLiveEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x79490
     * @note[short] Android
     */
    void onNextColorChannel(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x78a50
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x79fa0
     * @note[short] Android
     */
    void onSelectColor(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x79550
     * @note[short] Android
     */
    void onSelectMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x78b20
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x79af0
     * @note[short] Android
     */
    void onUpdateCustomColor(cocos2d::CCObject* sender);
    
private:
    [[deprecated("CustomizeObjectLayer::recreateLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn recreateLayer();
public:

    /**
     * @note[short] Windows: 0x78930
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x79780
     * @note[short] Android
     */
    void toggleVisible();

    /**
     * @note[short] Windows: 0x79720
     * @note[short] Android
     */
    void updateChannelLabel(int p0);

    /**
     * @note[short] Windows: 0x78d40
     * @note[short] Android
     */
    void updateColorSprite();
    
private:
    [[deprecated("CustomizeObjectLayer::updateCurrentSelection not implemented")]]
    /**
     * @note[short] Android
     */
    void updateCurrentSelection();
public:

    /**
     * @note[short] Windows: 0x79ec0
     * @note[short] Android
     */
    void updateCustomColorLabels();

    /**
     * @note[short] Windows: 0x79050
     * @note[short] Android
     */
    void updateHSVButtons();

    /**
     * @note[short] Windows: 0x787e0
     * @note[short] Android
     */
    void updateKerningLabel();

    /**
     * @note[short] Windows: 0x7a040
     * @note[short] Android
     */
    void updateSelected(int p0);
    
private:
    [[deprecated("CustomizeObjectLayer::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("CustomizeObjectLayer::textInputOpened not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn textInputOpened(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("CustomizeObjectLayer::textInputClosed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn textInputClosed(CCTextInputNode* p0);
public:

    /**
     * @note[short] Windows: 0x79cf0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
    
private:
    [[deprecated("CustomizeObjectLayer::hsvPopupClosed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn hsvPopupClosed(HSVWidgetPopup* p0, cocos2d::ccHSVValue p1);
public:

    /**
     * @note[short] Windows: 0x78e60
     * @note[short] Android
     */
    virtual void colorSelectClosed(cocos2d::CCNode* p0);

    /**
     * @note[short] Windows: 0x78c30
     * @note[short] Android
     */
    virtual void colorSetupClosed(int p0);
    GameObject* m_targetObject;
    cocos2d::CCArray* m_targetObjects;
    cocos2d::CCArray* m_colorButtons;
    cocos2d::CCArray* m_colorTabNodes;
    cocos2d::CCArray* m_textTabNodes;
    cocos2d::CCArray* m_unkArray;
    cocos2d::CCArray* m_detailTabNodes;
    int m_selectedMode;
    int m_customColorChannel;
    bool m_unk0x200;
    bool m_unk0x201;
    bool m_glowDisabled;
    CCMenuItemSpriteExtra* m_baseButton;
    CCMenuItemSpriteExtra* m_detailButton;
    CCMenuItemSpriteExtra* m_textButton;
    CCMenuItemSpriteExtra* m_baseColorHSV;
    CCMenuItemSpriteExtra* m_detailColorHSV;
    cocos2d::CCLabelBMFont* m_titleLabel;
    cocos2d::CCLabelBMFont* m_selectedColorLabel;
    CCTextInputNode* m_customColorInput;
    CCTextInputNode* m_textInput;
    int m_kerningAmount;
    cocos2d::CCLabelBMFont* m_kerningLabel;
    Slider* m_kerningSlider;
    ButtonSprite* m_customColorButtonSprite;
    CCMenuItemSpriteExtra* m_customColorButton;
    CCMenuItemSpriteExtra* m_arrowDown;
    CCMenuItemSpriteExtra* m_arrowUp;
    cocos2d::extension::CCScale9Sprite* m_customColorInputBG;
    ColorChannelSprite* m_colorSprite;
    CCMenuItemSpriteExtra* m_colorSpriteButton;
    CCMenuItemSpriteExtra* m_liveSelectButton;
    bool m_showTextInput;
    bool m_customColorSelected;
};
