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

class GJPathRewardPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "GJPathRewardPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPathRewardPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x200930
     * @note[short] Android
     */
    static GJPathRewardPopup* create(int p0);
    
private:
    [[deprecated("GJPathRewardPopup::closePopup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn closePopup();
public:

    /**
     * @note[short] Windows: 0x2009d0
     * @note[short] Android
     */
    bool init(int p0);
    
private:
    [[deprecated("GJPathRewardPopup::onClaim not implemented")]]
    /**
     * @note[short] Android
     */
    void onClaim(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJPathRewardPopup::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
};
