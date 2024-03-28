#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "BrowseSmartTemplateLayer.hpp"

class BrowseSmartKeyLayer : public BrowseSmartTemplateLayer {
public:
    static constexpr auto CLASS_NAME = "BrowseSmartKeyLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(BrowseSmartKeyLayer, BrowseSmartTemplateLayer)

    /**
     * @note[short] Windows: 0x35c240
     * @note[short] Android
     */
    static BrowseSmartKeyLayer* create(GJSmartTemplate* p0, gd::string p1);
    
private:
    [[deprecated("BrowseSmartKeyLayer::addChanceToSelected not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addChanceToSelected(int p0, bool p1);
public:
    
private:
    [[deprecated("BrowseSmartKeyLayer::createTemplateObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createTemplateObjects();
public:
    
private:
    [[deprecated("BrowseSmartKeyLayer::deletedSelectedItems not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deletedSelectedItems();
public:
    
private:
    [[deprecated("BrowseSmartKeyLayer::getAllSelectedBlocks not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAllSelectedBlocks();
public:

    /**
     * @note[short] Windows: 0x35c310
     * @note[short] Android
     */
    bool init(GJSmartTemplate* p0, gd::string p1);
    
private:
    [[deprecated("BrowseSmartKeyLayer::onButton not implemented")]]
    /**
     * @note[short] Android
     */
    void onButton(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("BrowseSmartKeyLayer::onPrefabObject not implemented")]]
    /**
     * @note[short] Android
     */
    void onPrefabObject(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("BrowseSmartKeyLayer::updateChanceValues not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateChanceValues();
public:
    
private:
    [[deprecated("BrowseSmartKeyLayer::onBack not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void onBack(cocos2d::CCObject* sender);
public:
};
