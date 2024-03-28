#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TextInputDelegate.hpp"

class ConfigureHSVWidget : public cocos2d::CCNode, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "ConfigureHSVWidget";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ConfigureHSVWidget, cocos2d::CCNode)
    
private:
    [[deprecated("ConfigureHSVWidget::create not implemented")]]
    /**
     * @note[short] Android
     */
    static ConfigureHSVWidget* create(cocos2d::ccHSVValue p0, bool p1, bool p2);
public:
    
private:
    [[deprecated("ConfigureHSVWidget::createTextInputNode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createTextInputNode(cocos2d::CCPoint p0, int p1);
public:

    /**
     * @note[short] Windows: 0x6c320
     * @note[short] Android
     */
    TodoReturn getHSV(GameObject* p0, cocos2d::CCArray* p1, int p2);
    
private:
    [[deprecated("ConfigureHSVWidget::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(cocos2d::ccHSVValue p0, bool p1, bool p2);
public:
    
private:
    [[deprecated("ConfigureHSVWidget::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn onClose();
public:
    
private:
    [[deprecated("ConfigureHSVWidget::onResetHSV not implemented")]]
    /**
     * @note[short] Android
     */
    void onResetHSV(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ConfigureHSVWidget::onToggleSConst not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleSConst(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ConfigureHSVWidget::onToggleVConst not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleVConst(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ConfigureHSVWidget::sliderChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("ConfigureHSVWidget::updateLabels not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLabels();
public:
    
private:
    [[deprecated("ConfigureHSVWidget::updateSliders not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSliders();
public:

    /**
     * @note[short] Out of line
     */
    virtual void textInputOpened(CCTextInputNode* p0);
    
private:
    [[deprecated("ConfigureHSVWidget::textInputClosed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);
public:

    /**
     * @note[short] Windows: 0x6b860
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
};
