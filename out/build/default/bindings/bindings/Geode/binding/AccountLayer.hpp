#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"
#include "GJAccountDelegate.hpp"
#include "GJAccountBackupDelegate.hpp"
#include "GJAccountSyncDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class AccountLayer : public GJDropDownLayer, public GJAccountDelegate, public GJAccountBackupDelegate, public GJAccountSyncDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "AccountLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AccountLayer, GJDropDownLayer)

    /**
     * @note[short] Windows: 0x573e0
     * @note[short] Android
     */
    static AccountLayer* create();
    
private:
    [[deprecated("AccountLayer::createToggleButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
public:

    /**
     * @note[short] Windows: 0x57dc0
     * @note[short] Android
     */
    TodoReturn doBackup();

    /**
     * @note[short] Windows: 0x57f20
     * @note[short] Android
     */
    TodoReturn doSync();
    
private:
    [[deprecated("AccountLayer::exitLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn exitLayer();
public:
    
private:
    [[deprecated("AccountLayer::hideLoadingUI not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hideLoadingUI();
public:

    /**
     * @note[short] Windows: 0x57c70
     * @note[short] Android
     */
    void onBackup(cocos2d::CCObject* sender);
    
private:
    [[deprecated("AccountLayer::onHelp not implemented")]]
    /**
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x57c20
     * @note[short] Android
     */
    void onLogin(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x58010
     * @note[short] Android
     */
    void onMore(cocos2d::CCObject* sender);
    
private:
    [[deprecated("AccountLayer::onRegister not implemented")]]
    /**
     * @note[short] Android
     */
    void onRegister(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x57e30
     * @note[short] Android
     */
    void onSync(cocos2d::CCObject* sender);
    
private:
    [[deprecated("AccountLayer::showLoadingUI not implemented")]]
    /**
     * @note[short] Android
     */
    void showLoadingUI();
public:
    
private:
    [[deprecated("AccountLayer::toggleUI not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleUI(bool p0);
public:

    /**
     * @note[short] Windows: 0x58060
     * @note[short] Android
     */
    TodoReturn updatePage(bool p0);

    /**
     * @note[short] Windows: 0x575c0
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] Windows: 0x589b0
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] Windows: 0x583a0
     * @note[short] Android
     */
    virtual TodoReturn backupAccountFinished();

    /**
     * @note[short] Windows: 0x58500
     * @note[short] Android
     */
    virtual TodoReturn backupAccountFailed(BackupAccountError p0, int p1);

    /**
     * @note[short] Windows: 0x58730
     * @note[short] Android
     */
    virtual TodoReturn syncAccountFinished();

    /**
     * @note[short] Windows: 0x58890
     * @note[short] Android
     */
    virtual TodoReturn syncAccountFailed(BackupAccountError p0, int p1);

    /**
     * @note[short] Windows: 0x58050
     * @note[short] Android
     */
    virtual TodoReturn accountStatusChanged();

    /**
     * @note[short] Windows: 0x58940
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
