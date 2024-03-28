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

class BrowseSmartTemplateLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "BrowseSmartTemplateLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(BrowseSmartTemplateLayer, FLAlertLayer)
    
private:
    [[deprecated("BrowseSmartTemplateLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static BrowseSmartTemplateLayer* create(GJSmartTemplate* p0, SmartBrowseFilter p1);
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::addObjectToPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addObjectToPage(cocos2d::CCObject* p0, int p1);
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::addPrefabMenuItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addPrefabMenuItem(SmartPrefabResult p0, int p1);
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::baseSetup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn baseSetup();
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::createDots not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createDots();
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::createPrefab not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createPrefab(gd::string p0, int p1);
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::goToPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn goToPage(int p0);
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(GJSmartTemplate* p0, SmartBrowseFilter p1);
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::onClick not implemented")]]
    /**
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::onTemplateObject not implemented")]]
    /**
     * @note[short] Android
     */
    void onTemplateObject(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::updateDots not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDots();
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("BrowseSmartTemplateLayer::onBack not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void onBack(cocos2d::CCObject* sender);
public:
};
