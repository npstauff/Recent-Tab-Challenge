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
#include "ConfigureValuePopupDelegate.hpp"
#include "SliderDelegate.hpp"

class SetupTriggerPopup : public FLAlertLayer, public TextInputDelegate, public ConfigureValuePopupDelegate, public SliderDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTriggerPopup, FLAlertLayer)
    
private:
    [[deprecated("SetupTriggerPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1, float p2, float p3, int p4);
public:
    
private:
    [[deprecated("SetupTriggerPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupTriggerPopup* create(float p0, float p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::addCloseButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addCloseButton(gd::string p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::addHelpButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addHelpButton(gd::string p0, gd::string p1, float p2);
public:
    
private:
    [[deprecated("SetupTriggerPopup::addInfoLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addInfoLabel(gd::string p0, float p1, cocos2d::CCPoint p2, int p3, int p4);
public:
    
private:
    [[deprecated("SetupTriggerPopup::addObjectsToGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addObjectsToGroup(cocos2d::CCArray* p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::addObjectsToPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addObjectsToPage(cocos2d::CCArray* p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::addObjectToGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addObjectToGroup(cocos2d::CCObject* p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::addObjectToPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addObjectToPage(cocos2d::CCObject* p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::addTitle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addTitle(gd::string p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::closeInputNodes not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn closeInputNodes();
public:
    
private:
    [[deprecated("SetupTriggerPopup::createCustomButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createCustomButton(int p0, gd::string p1, gd::string p2, cocos2d::CCPoint p3, float p4, float p5, bool p6, int p7, int p8);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createCustomEasingControls not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createCustomEasingControls(gd::string p0, cocos2d::CCPoint p1, float p2, int p3, int p4, int p5, int p6);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createCustomToggleValueControl not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createCustomToggleValueControl(int p0, bool p1, bool p2, gd::string p3, cocos2d::CCPoint p4, bool p5, int p6, int p7);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createEasingControls not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createEasingControls(cocos2d::CCPoint p0, float p1, int p2, int p3);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createMultiTriggerItems not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createMultiTriggerItems(cocos2d::CCPoint p0, cocos2d::CCPoint p1, cocos2d::CCPoint p2);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createMultiTriggerItemsCorner not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createMultiTriggerItemsCorner();
public:
    
private:
    [[deprecated("SetupTriggerPopup::createMultiTriggerItemsDefault not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createMultiTriggerItemsDefault();
public:
    
private:
    [[deprecated("SetupTriggerPopup::createMultiTriggerItemsDefaultHorizontal not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createMultiTriggerItemsDefaultHorizontal();
public:
    
private:
    [[deprecated("SetupTriggerPopup::createMultiTriggerItemsDefaultVertical not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createMultiTriggerItemsDefaultVertical();
public:
    
private:
    [[deprecated("SetupTriggerPopup::createPageButtons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createPageButtons(float p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createPlusButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createPlusButton(int p0, cocos2d::CCPoint p1, float p2, gd::string p3, int p4, int p5);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createToggleButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCPoint p3);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createToggleValueControl not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createToggleValueControl(int p0, gd::string p1, cocos2d::CCPoint p2, bool p3, int p4, int p5, float p6);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createToggleValueControlAdvanced not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createToggleValueControlAdvanced(int p0, gd::string p1, cocos2d::CCPoint p2, bool p3, int p4, int p5, float p6, float p7, float p8, cocos2d::CCPoint p9);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createValueControl not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createValueControl(int p0, gd::string p1, cocos2d::CCPoint p2, float p3, float p4, float p5);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createValueControlAdvanced not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createValueControlAdvanced(int p0, gd::string p1, cocos2d::CCPoint p2, float p3, bool p4, InputValueType p5, int p6, bool p7, float p8, float p9, int p10, int p11, GJInputStyle p12, int p13, bool p14);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createValueControlWArrows not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createValueControlWArrows(int p0, gd::string p1, cocos2d::CCPoint p2, float p3);
public:
    
private:
    [[deprecated("SetupTriggerPopup::getGroupContainer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getGroupContainer(int p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::getMaxSliderValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMaxSliderValue(int p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::getMinSliderValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMinSliderValue(int p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::getObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getObjects();
public:
    
private:
    [[deprecated("SetupTriggerPopup::getPageContainer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPageContainer(int p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::getTriggerValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTriggerValue(int p0, GameObject* p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::getTruncatedValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTruncatedValue(float p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::getTruncatedValueByTag not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTruncatedValueByTag(int p0, float p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::goToPage not implemented")]]
    /**
     * @note[short] Android
     */
    void goToPage(int p0, bool p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::hideAll not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hideAll();
public:

    /**
     * @note[short] Windows: 0x36e210
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1, float p2, float p3, int p4);
    
private:
    [[deprecated("SetupTriggerPopup::onCustomEaseArrow not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn onCustomEaseArrow(int p0, bool p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onCustomEaseArrowDown not implemented")]]
    /**
     * @note[short] Android
     */
    void onCustomEaseArrowDown(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onCustomEaseArrowUp not implemented")]]
    /**
     * @note[short] Android
     */
    void onCustomEaseArrowUp(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onCustomEaseRate not implemented")]]
    /**
     * @note[short] Android
     */
    void onCustomEaseRate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onDisableValue not implemented")]]
    /**
     * @note[short] Android
     */
    void onDisableValue(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onEase not implemented")]]
    /**
     * @note[short] Android
     */
    void onEase(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onEaseRate not implemented")]]
    /**
     * @note[short] Android
     */
    void onEaseRate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onMultiTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    void onMultiTrigger(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onSpawnedByTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    void onSpawnedByTrigger(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onToggleTriggerValue not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleTriggerValue(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onTouchTriggered not implemented")]]
    /**
     * @note[short] Android
     */
    void onTouchTriggered(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::postSetup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn postSetup();
public:
    
private:
    [[deprecated("SetupTriggerPopup::preSetup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preSetup();
public:
    
private:
    [[deprecated("SetupTriggerPopup::refreshGroupVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn refreshGroupVisibility();
public:
    
private:
    [[deprecated("SetupTriggerPopup::removeObjectFromGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeObjectFromGroup(cocos2d::CCObject* p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::removeObjectFromPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeObjectFromPage(cocos2d::CCObject* p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::resetDisabledValues not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetDisabledValues();
public:
    
private:
    [[deprecated("SetupTriggerPopup::setMaxSliderValue not implemented")]]
    /**
     * @note[short] Android
     */
    void setMaxSliderValue(float p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::setMinSliderValue not implemented")]]
    /**
     * @note[short] Android
     */
    void setMinSliderValue(float p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::shouldLimitValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shouldLimitValue(int p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::toggleBG not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleBG(bool p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::toggleCustomEaseRateVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleCustomEaseRateVisibility(int p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::toggleDisableButtons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleDisableButtons(bool p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::toggleEaseRateVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleEaseRateVisibility();
public:
    
private:
    [[deprecated("SetupTriggerPopup::toggleLimitValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleLimitValue(int p0, bool p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::togglePageArrows not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn togglePageArrows(bool p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::triggerArrowChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerArrowChanged(int p0, bool p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::triggerArrowLeft not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerArrowLeft(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::triggerArrowRight not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerArrowRight(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::triggerSliderChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerSliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateCustomEaseLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCustomEaseLabel(int p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateCustomEaseRateLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCustomEaseRateLabel(int p0, float p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateCustomToggleTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCustomToggleTrigger(int p0, bool p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateEaseLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEaseLabel();
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateEaseRateLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEaseRateLabel();
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateEditorLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEditorLabel();
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateInputNodeLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateInputNodeLabel(int p0, gd::string p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLabel(int p0, gd::string p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateMultiTriggerBtn not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMultiTriggerBtn();
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateSlider not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSlider(int p0, float p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateSlider not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSlider(int p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateSpawnedByTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSpawnedByTrigger();
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateTouchTriggered not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTouchTriggered();
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateValue(int p0, float p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateValueControls not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateValueControls(int p0, float p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::valueChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn valueChanged(int p0, float p1);
public:

    /**
     * @note[short] Windows: 0x377930
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x365a00
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x61860
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] Out of line
     */
    virtual void pageChanged();

    /**
     * @note[short] Windows: 0x36ea50
     * @note[short] Android
     */
    virtual TodoReturn toggleGroup(int p0, bool p1);

    /**
     * @note[short] Windows: 0x36f5d0
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();

    /**
     * @note[short] Windows: 0x205870
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SetupTriggerPopup::textInputClosed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);
public:

    /**
     * @note[short] Windows: 0x36fa30
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
    
private:
    [[deprecated("SetupTriggerPopup::textInputShouldOffset not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::textInputReturn not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* p0);
public:

    /**
     * @note[short] Out of line
     */
    virtual void updateInputValue(int p0, float& p1);

    /**
     * @note[short] Windows: 0x36fc20
     * @note[short] Android
     */
    virtual void sliderBegan(Slider* p0);

    /**
     * @note[short] Windows: 0x36fcc0
     * @note[short] Android
     */
    virtual TodoReturn sliderEnded(Slider* p0);

    /**
     * @note[short] Out of line
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);

    /**
     * @note[short] Out of line
     */
    virtual void onCustomButton(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x371500
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] Windows: 0x3719c0
     * @note[short] Android
     */
    virtual TodoReturn updateInputNode(int p0, float p1);

    /**
     * @note[short] Windows: 0x371bd0
     * @note[short] Android
     */
    virtual TodoReturn updateToggleItem(int p0, bool p1);
    
private:
    [[deprecated("SetupTriggerPopup::valueDidChange not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);
public:

    /**
     * @note[short] Windows: 0x371c30
     * @note[short] Android
     */
    virtual TodoReturn getValue(int p0);

    /**
     * @note[short] Windows: 0x376120
     * @note[short] Android
     */
    virtual TodoReturn triggerValueFromSliderValue(int p0, float p1);

    /**
     * @note[short] Windows: 0x376190
     * @note[short] Android
     */
    virtual TodoReturn triggerSliderValueFromValue(int p0, float p1);

    /**
     * @note[short] Out of line
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x376cb0
     * @note[short] Android
     */
    virtual TodoReturn valuePopupClosed(ConfigureValuePopup* p0, float p1);
};
