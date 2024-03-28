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
#include "LevelUploadDelegate.hpp"

class UploadPopup : public FLAlertLayer, public LevelUploadDelegate {
public:
    static constexpr auto CLASS_NAME = "UploadPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UploadPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x3890f0
     * @note[short] Android
     */
    static UploadPopup* create(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x389190
     * @note[short] Android
     */
    bool init(GJGameLevel* p0);
    
private:
    [[deprecated("UploadPopup::onBack not implemented")]]
    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("UploadPopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("UploadPopup::onReturnToLevel not implemented")]]
    /**
     * @note[short] Android
     */
    void onReturnToLevel(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Out of line
     */
    virtual void keyBackClicked();
    
private:
    [[deprecated("UploadPopup::show not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void show();
public:

    /**
     * @note[short] Windows: 0x389670
     * @note[short] Android
     */
    virtual void levelUploadFinished(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x3897d0
     * @note[short] Android
     */
    virtual void levelUploadFailed(GJGameLevel* p0);
};
