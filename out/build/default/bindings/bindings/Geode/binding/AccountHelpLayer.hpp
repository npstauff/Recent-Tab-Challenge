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
#include "FLAlertLayerProtocol.hpp"

class AccountHelpLayer : public GJDropDownLayer, public GJAccountDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "AccountHelpLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AccountHelpLayer, GJDropDownLayer)

    /**
     * @note[short] Windows: 0x58a10
     * @note[short] Android
     */
    static AccountHelpLayer* create();
    
private:
    [[deprecated("AccountHelpLayer::doUnlink not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn doUnlink();
public:
    
private:
    [[deprecated("AccountHelpLayer::exitLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn exitLayer();
public:
    
private:
    [[deprecated("AccountHelpLayer::onAccountManagement not implemented")]]
    /**
     * @note[short] Android
     */
    void onAccountManagement(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("AccountHelpLayer::onReLogin not implemented")]]
    /**
     * @note[short] Android
     */
    void onReLogin(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("AccountHelpLayer::onUnlink not implemented")]]
    /**
     * @note[short] Android
     */
    void onUnlink(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("AccountHelpLayer::updatePage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePage();
public:
    
private:
    [[deprecated("AccountHelpLayer::verifyUnlink not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn verifyUnlink();
public:

    /**
     * @note[short] Windows: 0x58b90
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] Windows: 0x594f0
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] Windows: 0x59220
     * @note[short] Android
     */
    virtual TodoReturn accountStatusChanged();

    /**
     * @note[short] Windows: 0x59480
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
