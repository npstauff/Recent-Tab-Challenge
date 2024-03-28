#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJPurchaseDelegate.hpp"
#include "DialogDelegate.hpp"
#include "RewardedVideoDelegate.hpp"

class GJShopLayer : public cocos2d::CCLayer, public GJPurchaseDelegate, public DialogDelegate, public RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "GJShopLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJShopLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x219ad0
     * @note[short] Android
     */
    static GJShopLayer* create(ShopType p0);
    
private:
    [[deprecated("GJShopLayer::exitVideoAdItems not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn exitVideoAdItems();
public:

    /**
     * @note[short] Windows: 0x219b70
     * @note[short] Android
     */
    bool init(ShopType p0);
    
private:
    [[deprecated("GJShopLayer::onBack not implemented")]]
    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJShopLayer::onCommunityCredits not implemented")]]
    /**
     * @note[short] Android
     */
    void onCommunityCredits(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJShopLayer::onPlushies not implemented")]]
    /**
     * @note[short] Android
     */
    void onPlushies(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x21b2c0
     * @note[short] Android
     */
    void onSelectItem(cocos2d::CCObject* sender);
    
private:
    [[deprecated("GJShopLayer::onVideoAd not implemented")]]
    /**
     * @note[short] Android
     */
    void onVideoAd(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x219a90
     * @note[short] Android
     */
    TodoReturn scene(ShopType p0);
    
private:
    [[deprecated("GJShopLayer::showCantAffordMessage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn showCantAffordMessage(GJStoreItem* p0);
public:

    /**
     * @note[short] Windows: 0x21be50
     * @note[short] Android
     */
    TodoReturn showReactMessage();
    
private:
    [[deprecated("GJShopLayer::updateCurrencyCounter not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCurrencyCounter();
public:
    
private:
    [[deprecated("GJShopLayer::onExit not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void onExit();
public:
    
private:
    [[deprecated("GJShopLayer::ccTouchBegan not implemented")]]
    /**
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("GJShopLayer::ccTouchMoved not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("GJShopLayer::ccTouchEnded not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("GJShopLayer::ccTouchCancelled not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("GJShopLayer::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("GJShopLayer::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("GJShopLayer::didPurchaseItem not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn didPurchaseItem(GJStoreItem* p0);
public:
    
private:
    [[deprecated("GJShopLayer::rewardedVideoFinished not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn rewardedVideoFinished();
public:
    
private:
    [[deprecated("GJShopLayer::dialogClosed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn dialogClosed(DialogLayer* p0);
public:
};
