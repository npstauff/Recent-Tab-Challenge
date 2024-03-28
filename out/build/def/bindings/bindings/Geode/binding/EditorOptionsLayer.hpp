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

class EditorOptionsLayer : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "EditorOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorOptionsLayer, GJOptionsLayer)

    /**
     * @note[short] Windows: 0x207350
     * @note[short] Android
     */
    static EditorOptionsLayer* create();
    
private:
    [[deprecated("EditorOptionsLayer::onButtonRows not implemented")]]
    /**
     * @note[short] Android
     */
    void onButtonRows(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorOptionsLayer::onButtonsPerRow not implemented")]]
    /**
     * @note[short] Android
     */
    void onButtonsPerRow(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2073f0
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("EditorOptionsLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorOptionsLayer::setupOptions not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn setupOptions();
public:
};
