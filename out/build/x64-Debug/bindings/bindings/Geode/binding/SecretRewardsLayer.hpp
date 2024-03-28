#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "DialogDelegate.hpp"
#include "BoomScrollLayerDelegate.hpp"

class SecretRewardsLayer : public cocos2d::CCLayer, public DialogDelegate, public BoomScrollLayerDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretRewardsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretRewardsLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x2fb610
     * @note[short] Android
     */
    static SecretRewardsLayer* create(bool p0);

    /**
     * @note[short] Windows: 0x2fd430
     * @note[short] Android
     */
    TodoReturn createSecondaryLayer(int p0);

    /**
     * @note[short] Windows: 0x2fd8a0
     * @note[short] Android
     */
    TodoReturn generateChestItems(int p0);
    
private:
    [[deprecated("SecretRewardsLayer::getPageColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPageColor(int p0);
public:
    
private:
    [[deprecated("SecretRewardsLayer::goToPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn goToPage(int p0);
public:

    /**
     * @note[short] Windows: 0x2fb6b0
     * @note[short] Android
     */
    bool init(bool p0);
    
private:
    [[deprecated("SecretRewardsLayer::moveToMainLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn moveToMainLayer(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SecretRewardsLayer::moveToSecondaryLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn moveToSecondaryLayer(int p0);
public:
    
private:
    [[deprecated("SecretRewardsLayer::onBack not implemented")]]
    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretRewardsLayer::onChestType not implemented")]]
    /**
     * @note[short] Android
     */
    void onChestType(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2fe220
     * @note[short] Android
     */
    void onSelectItem(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2fe580
     * @note[short] Android
     */
    void onShop(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2fe830
     * @note[short] Android
     */
    void onSpecialItem(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SecretRewardsLayer::onSwitchPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onSwitchPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretRewardsLayer::scene not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scene(bool p0);
public:

    /**
     * @note[short] Windows: 0x2fee50
     * @note[short] Android
     */
    TodoReturn showDialog01();

    /**
     * @note[short] Windows: 0x2ffb50
     * @note[short] Android
     */
    TodoReturn showDialog03();

    /**
     * @note[short] Windows: 0x300f10
     * @note[short] Android
     */
    TodoReturn showDialogDiamond();

    /**
     * @note[short] Windows: 0x300560
     * @note[short] Android
     */
    TodoReturn showDialogMechanic();
    
private:
    [[deprecated("SecretRewardsLayer::showLockedChest not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn showLockedChest();
public:
    
private:
    [[deprecated("SecretRewardsLayer::showShop not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn showShop(int p0);
public:

    /**
     * @note[short] Windows: 0x2feb00
     * @note[short] Android
     */
    TodoReturn switchToOpenedState(CCMenuItemSpriteExtra* p0);
    
private:
    [[deprecated("SecretRewardsLayer::updateBackButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateBackButton();
public:

    /**
     * @note[short] Windows: 0x2febb0
     * @note[short] Android
     */
    TodoReturn updateUnlockedLabel();
    
private:
    [[deprecated("SecretRewardsLayer::onExit not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void onExit();
public:
    
private:
    [[deprecated("SecretRewardsLayer::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("SecretRewardsLayer::dialogClosed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn dialogClosed(DialogLayer* p0);
public:
    
private:
    [[deprecated("SecretRewardsLayer::scrollLayerMoved not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn scrollLayerMoved(cocos2d::CCPoint p0);
public:
};
