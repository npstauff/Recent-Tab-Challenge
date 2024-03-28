#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CreateGuidelinesLayer.hpp"

class FindBPMLayer : public CreateGuidelinesLayer {
public:
    static constexpr auto CLASS_NAME = "FindBPMLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FindBPMLayer, CreateGuidelinesLayer)

    /**
     * @note[short] Windows: 0x6eee0
     * @note[short] Android
     */
    static FindBPMLayer* create(int p0);
    
private:
    [[deprecated("FindBPMLayer::calculateBPM not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn calculateBPM();
public:

    /**
     * @note[short] Windows: 0x6ef80
     * @note[short] Android
     */
    bool init(int p0);
    
private:
    [[deprecated("FindBPMLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FindBPMLayer::playMusic not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn playMusic();
public:
    
private:
    [[deprecated("FindBPMLayer::registerTouch not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn registerTouch();
public:
    
private:
    [[deprecated("FindBPMLayer::onInfo not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FindBPMLayer::onRecord not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void onRecord(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FindBPMLayer::recordingDidStop not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn recordingDidStop();
public:
};
