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
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "DownloadMessageDelegate.hpp"

class GJMessagePopup : public FLAlertLayer, public UploadActionDelegate, public UploadPopupDelegate, public FLAlertLayerProtocol, public DownloadMessageDelegate {
public:
    static constexpr auto CLASS_NAME = "GJMessagePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJMessagePopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x20c7d0
     * @note[short] Android
     */
    static GJMessagePopup* create(GJUserMessage* p0);
    
private:
    [[deprecated("GJMessagePopup::blockUser not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn blockUser();
public:

    /**
     * @note[short] Windows: 0x20c870
     * @note[short] Android
     */
    bool init(GJUserMessage* p0);
    
private:
    [[deprecated("GJMessagePopup::loadFromGJMessage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadFromGJMessage(GJUserMessage* p0);
public:
    
private:
    [[deprecated("GJMessagePopup::onBlock not implemented")]]
    /**
     * @note[short] Android
     */
    void onBlock(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJMessagePopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJMessagePopup::onRemove not implemented")]]
    /**
     * @note[short] Android
     */
    void onRemove(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJMessagePopup::onReply not implemented")]]
    /**
     * @note[short] Android
     */
    void onReply(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJMessagePopup::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("GJMessagePopup::downloadMessageFinished not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn downloadMessageFinished(GJUserMessage* p0);
public:
    
private:
    [[deprecated("GJMessagePopup::downloadMessageFailed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn downloadMessageFailed(int p0);
public:
    
private:
    [[deprecated("GJMessagePopup::uploadActionFinished not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn uploadActionFinished(int p0, int p1);
public:
    
private:
    [[deprecated("GJMessagePopup::uploadActionFailed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn uploadActionFailed(int p0, int p1);
public:
    
private:
    [[deprecated("GJMessagePopup::onClosePopup not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn onClosePopup(UploadActionPopup* p0);
public:
    
private:
    [[deprecated("GJMessagePopup::FLAlert_Clicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
};
