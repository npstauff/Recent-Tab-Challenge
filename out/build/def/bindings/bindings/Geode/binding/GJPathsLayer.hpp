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
#include "FLAlertLayerProtocol.hpp"

class GJPathsLayer : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJPathsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPathsLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x1fcb20
     * @note[short] Android
     */
    static GJPathsLayer* create();
    
private:
    [[deprecated("GJPathsLayer::darkenButtons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn darkenButtons(bool p0);
public:

    /**
     * @note[short] Windows: 0x1fc9a0
     * @note[short] Android
     */
    static gd::string nameForPath(int p0);
    
private:
    [[deprecated("GJPathsLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x1fd0a0
     * @note[short] Android
     */
    void onPath(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1fcbc0
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("GJPathsLayer::onExit not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void onExit();
public:
    
private:
    [[deprecated("GJPathsLayer::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("GJPathsLayer::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:

    /**
     * @note[short] Windows: 0x5d6d0
     * @note[short] Android
     */
    virtual void show();
};
