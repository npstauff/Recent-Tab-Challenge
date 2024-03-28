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

    /**
     * @note[short] Windows: 0x6f2f0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x6f150
     * @note[short] Android
     */
    virtual TodoReturn playMusic();

    /**
     * @note[short] Windows: 0x6f1e0
     * @note[short] Android
     */
    virtual TodoReturn registerTouch();

    /**
     * @note[short] Out of line
     */
    virtual void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x6f0b0
     * @note[short] Android
     */
    virtual void onRecord(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x6f0f0
     * @note[short] Android
     */
    virtual TodoReturn recordingDidStop();
};
