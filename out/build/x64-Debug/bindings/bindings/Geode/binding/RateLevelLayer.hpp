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

class RateLevelLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "RateLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RateLevelLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x2f3fd0
     * @note[short] Android
     */
    static RateLevelLayer* create(int p0);

    /**
     * @note[short] Windows: 0x2f4070
     * @note[short] Android
     */
    bool init(int p0);
    
private:
    [[deprecated("RateLevelLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("RateLevelLayer::onRate not implemented")]]
    /**
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("RateLevelLayer::selectRating not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn selectRating(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("RateLevelLayer::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
};
