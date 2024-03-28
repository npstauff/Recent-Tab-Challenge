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

class SelectSettingLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectSettingLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectSettingLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x270c10
     * @note[short] Android
     */
    static SelectSettingLayer* create(SelectSettingType p0, int p1);

    /**
     * @note[short] Windows: 0x271380
     * @note[short] Android
     */
    TodoReturn frameForItem(SelectSettingType p0, int p1);
    
private:
    [[deprecated("SelectSettingLayer::frameForValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn frameForValue(SelectSettingType p0, int p1);
public:
    
private:
    [[deprecated("SelectSettingLayer::getSelectedFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSelectedFrame();
public:
    
private:
    [[deprecated("SelectSettingLayer::getSelectedValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSelectedValue();
public:
    
private:
    [[deprecated("SelectSettingLayer::idxToValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn idxToValue(SelectSettingType p0, int p1);
public:

    /**
     * @note[short] Windows: 0x270cc0
     * @note[short] Android
     */
    bool init(SelectSettingType p0, int p1);
    
private:
    [[deprecated("SelectSettingLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2715d0
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SelectSettingLayer::valueToIdx not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn valueToIdx(SelectSettingType p0, int p1);
public:
    
private:
    [[deprecated("SelectSettingLayer::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
    GEODE_PAD(4);
    int m_settingID;
};
