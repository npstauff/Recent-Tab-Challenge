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

class DemonFilterSelectLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "DemonFilterSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DemonFilterSelectLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x267340
     * @note[short] Android
     */
    static DemonFilterSelectLayer* create();
    
private:
    [[deprecated("DemonFilterSelectLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("DemonFilterSelectLayer::selectRating not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn selectRating(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] Windows: 0x2673e0
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("DemonFilterSelectLayer::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
};
