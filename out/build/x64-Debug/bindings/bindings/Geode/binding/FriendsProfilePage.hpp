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
#include "FLAlertLayerProtocol.hpp"
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "UserListDelegate.hpp"

class FriendsProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public UserListDelegate {
public:
    static constexpr auto CLASS_NAME = "FriendsProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FriendsProfilePage, FLAlertLayer)

    /**
     * @note[short] Windows: 0xf0960
     * @note[short] Android
     */
    static FriendsProfilePage* create(UserListType p0);

    /**
     * @note[short] Windows: 0xf0a10
     * @note[short] Android
     */
    bool init(UserListType p0);

    /**
     * @note[short] Windows: 0xf1630
     * @note[short] Android
     */
    void onBlocked(cocos2d::CCObject* sender);
    
private:
    [[deprecated("FriendsProfilePage::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FriendsProfilePage::onUpdate not implemented")]]
    /**
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xf1090
     * @note[short] Android
     */
    TodoReturn setupUsersBrowser(cocos2d::CCArray* p0, UserListType p1);
    
private:
    [[deprecated("FriendsProfilePage::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("FriendsProfilePage::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("FriendsProfilePage::getUserListFinished not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn getUserListFinished(cocos2d::CCArray* p0, UserListType p1);
public:
    
private:
    [[deprecated("FriendsProfilePage::getUserListFailed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn getUserListFailed(UserListType p0, GJErrorCode p1);
public:
    
private:
    [[deprecated("FriendsProfilePage::userListChanged not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn userListChanged(cocos2d::CCArray* p0, UserListType p1);
public:
    
private:
    [[deprecated("FriendsProfilePage::forceReloadList not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn forceReloadList(UserListType p0);
public:
};
