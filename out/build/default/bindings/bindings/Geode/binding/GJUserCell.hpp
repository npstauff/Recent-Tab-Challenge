#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TableViewCell.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "UploadPopupDelegate.hpp"
#include "UploadActionDelegate.hpp"

class GJUserCell : public TableViewCell, public FLAlertLayerProtocol, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "GJUserCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJUserCell, TableViewCell)

    /**
     * @note[short] Windows: 0x88750
     * @note[short] Android
     */
    void loadFromScore(GJUserScore* p0);
    
private:
    [[deprecated("GJUserCell::onCancelFriendRequest not implemented")]]
    /**
     * @note[short] Android
     */
    void onCancelFriendRequest(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJUserCell::onRemoveFriend not implemented")]]
    /**
     * @note[short] Android
     */
    void onRemoveFriend(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJUserCell::onSendMessage not implemented")]]
    /**
     * @note[short] Android
     */
    void onSendMessage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJUserCell::onUnblockUser not implemented")]]
    /**
     * @note[short] Android
     */
    void onUnblockUser(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJUserCell::onViewFriendRequest not implemented")]]
    /**
     * @note[short] Android
     */
    void onViewFriendRequest(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJUserCell::onViewProfile not implemented")]]
    /**
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJUserCell::updateBGColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateBGColor(int p0);
public:

    /**
     * @note[short] Windows: 0x88730
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("GJUserCell::draw not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void draw();
public:

    /**
     * @note[short] Windows: 0x891b0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0x89350
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] Windows: 0x89460
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] Windows: 0x894b0
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);
};
