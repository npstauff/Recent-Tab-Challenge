#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJAccountManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJAccountManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJAccountManager, cocos2d::CCNode)

    /**
     * @note[short] Out of line
     */
    static GJAccountManager* get();

    /**
     * @note[short] Windows: 0x18a510
     * @note[short] Android
     */
    static GJAccountManager* sharedState();

    /**
     * @note[short] Windows: 0x18aba0
     * @note[short] Android
     */
    void addDLToActive(char const* tag, cocos2d::CCObject* p1);
    
private:
    [[deprecated("GJAccountManager::addDLToActive not implemented")]]
    /**
     * @note[short] Android
     */
    void addDLToActive(char const* tag);
public:
    
private:
    [[deprecated("GJAccountManager::backupAccount not implemented")]]
    /**
     * @note[short] Android
     */
    bool backupAccount(gd::string p0);
public:
    
private:
    [[deprecated("GJAccountManager::dataLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GJAccountManager::encodeDataTo not implemented")]]
    /**
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GJAccountManager::firstSetup not implemented")]]
    /**
     * @note[short] Android
     */
    void firstSetup();
public:

    /**
     * @note[short] Windows: 0x18b530
     * @note[short] Android
     */
    void getAccountBackupURL();

    /**
     * @note[short] Windows: 0x18bdc0
     * @note[short] Android
     */
    void getAccountSyncURL();
    
private:
    [[deprecated("GJAccountManager::getDLObject not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCObject* getDLObject(char const* p0);
public:
    
private:
    [[deprecated("GJAccountManager::getShaPassword not implemented")]]
    /**
     * @note[short] Android
     */
    gd::string getShaPassword(gd::string p0);
public:

    /**
     * @note[short] Windows: 0x18a830
     * @note[short] Android
     */
    void handleIt(bool p0, gd::string p1, gd::string p2, GJHttpType p3);
    
private:
    [[deprecated("GJAccountManager::handleItDelayed not implemented")]]
    /**
     * @note[short] Android
     */
    void handleItDelayed(bool p0, gd::string p1, gd::string p2, GJHttpType p3);
public:
    
private:
    [[deprecated("GJAccountManager::handleItND not implemented")]]
    /**
     * @note[short] Android
     */
    void handleItND(cocos2d::CCNode* p0, void* p1);
public:
    
private:
    [[deprecated("GJAccountManager::isDLActive not implemented")]]
    /**
     * @note[short] Android
     */
    bool isDLActive(char const* tag);
public:
    
private:
    [[deprecated("GJAccountManager::linkToAccount not implemented")]]
    /**
     * @note[short] Android
     */
    void linkToAccount(gd::string p0, gd::string p1, int p2, int p3);
public:

    /**
     * @note[short] Windows: 0x18afe0
     * @note[short] Android
     */
    void loginAccount(gd::string p0, gd::string p1);

    /**
     * @note[short] Windows: 0x18bb20
     * @note[short] Android
     */
    void onBackupAccountCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Windows: 0x18b660
     * @note[short] Android
     */
    void onGetAccountBackupURLCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Windows: 0x18bef0
     * @note[short] Android
     */
    void onGetAccountSyncURLCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Windows: 0x18b260
     * @note[short] Android
     */
    void onLoginAccountCompleted(gd::string p0, gd::string p1);
    
private:
    [[deprecated("GJAccountManager::onProcessHttpRequestCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
public:

    /**
     * @note[short] Windows: 0x18ae80
     * @note[short] Android
     */
    void onRegisterAccountCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Windows: 0x18c230
     * @note[short] Android
     */
    void onSyncAccountCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Windows: 0x18ce40
     * @note[short] Android
     */
    void onUpdateAccountSettingsCompleted(gd::string p0, gd::string p1);
    
private:
    [[deprecated("GJAccountManager::ProcessHttpRequest not implemented")]]
    /**
     * @note[short] Android
     */
    void ProcessHttpRequest(gd::string p0, gd::string p1, gd::string p2, GJHttpType p3);
public:

    /**
     * @note[short] Windows: 0x18ad00
     * @note[short] Android
     */
    void registerAccount(gd::string p0, gd::string p1, gd::string p2);

    /**
     * @note[short] Windows: 0x18ac50
     * @note[short] Android
     */
    void removeDLFromActive(char const* p0);
    
private:
    [[deprecated("GJAccountManager::syncAccount not implemented")]]
    /**
     * @note[short] Android
     */
    bool syncAccount(gd::string p0);
public:
    
private:
    [[deprecated("GJAccountManager::unlinkFromAccount not implemented")]]
    /**
     * @note[short] Android
     */
    void unlinkFromAccount();
public:

    /**
     * @note[short] Windows: 0x18cc30
     * @note[short] Android
     */
    void updateAccountSettings(int p0, int p1, int p2, gd::string p3, gd::string p4, gd::string p5);

    /**
     * @note[short] Windows: 0x18ab70
     * @note[short] Android
     */
    virtual bool init();
    cocos2d::CCDictionary* m_activeDownloads;
    gd::string m_username;
    int m_accountID;
    int m_unkInt1;
    int m_unkInt2;
    gd::string m_GJP2;
    GJAccountRegisterDelegate* m_accountRegisterDelegate;
    GJAccountLoginDelegate* m_accountLoginDelegate;
    GJAccountDelegate* m_accountDelegate;
    GJAccountBackupDelegate* m_backupDelegate;
    GJAccountSyncDelegate* m_syncDelegate;
    GJAccountSettingsDelegate* m_accountSettingsDelegate;
    int m_gameManagerSize;
    int m_localLevelsSize;
    gd::string m_password;
};
