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
#include "ListUploadDelegate.hpp"

class UploadListPopup : public FLAlertLayer, public ListUploadDelegate {
public:
    static constexpr auto CLASS_NAME = "UploadListPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UploadListPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x2600f0
     * @note[short] Android
     */
    static UploadListPopup* create(GJLevelList* p0);

    /**
     * @note[short] Windows: 0x260190
     * @note[short] Android
     */
    bool init(GJLevelList* p0);
    
private:
    [[deprecated("UploadListPopup::onBack not implemented")]]
    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("UploadListPopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("UploadListPopup::onReturnToList not implemented")]]
    /**
     * @note[short] Android
     */
    void onReturnToList(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Out of line
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x260a30
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] Windows: 0x260630
     * @note[short] Android
     */
    virtual TodoReturn listUploadFinished(GJLevelList* p0);

    /**
     * @note[short] Windows: 0x260790
     * @note[short] Android
     */
    virtual TodoReturn listUploadFailed(GJLevelList* p0, int p1);
};
