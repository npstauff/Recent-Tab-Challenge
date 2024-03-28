#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJOptionsLayer.hpp"

class LevelOptionsLayer : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "LevelOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelOptionsLayer, GJOptionsLayer)
    
private:
    [[deprecated("LevelOptionsLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static LevelOptionsLayer* create(LevelSettingsObject* p0);
public:
    
private:
    [[deprecated("LevelOptionsLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(LevelSettingsObject* p0);
public:
    
private:
    [[deprecated("LevelOptionsLayer::onSettings not implemented")]]
    /**
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelOptionsLayer::valueDidChange not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
public:
    
private:
    [[deprecated("LevelOptionsLayer::getValue not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn getValue(int p0);
public:
    
private:
    [[deprecated("LevelOptionsLayer::setupOptions not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn setupOptions();
public:
    
private:
    [[deprecated("LevelOptionsLayer::didToggle not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn didToggle(int p0);
public:
};
