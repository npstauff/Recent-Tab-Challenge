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
    
private:
    [[deprecated("UploadPopup::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("UploadPopup::show not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void show();
public:
    
private:
    [[deprecated("UploadPopup::levelUploadFinished not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn levelUploadFinished(GJGameLevel* p0);
public:
    
private:
    [[deprecated("UploadPopup::levelUploadFailed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn levelUploadFailed(GJGameLevel* p0);
public:
};
