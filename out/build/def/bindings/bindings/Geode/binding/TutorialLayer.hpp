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

class TutorialLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "TutorialLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TutorialLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x3be0a0
     * @note[short] Android
     */
    static TutorialLayer* create();
    
private:
    [[deprecated("TutorialLayer::loadPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadPage(int p0);
public:
    
private:
    [[deprecated("TutorialLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("TutorialLayer::onNext not implemented")]]
    /**
     * @note[short] Android
     */
    void onNext(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("TutorialLayer::removeTutorialTexture not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeTutorialTexture();
public:

    /**
     * @note[short] Windows: 0x3be140
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("TutorialLayer::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
};
