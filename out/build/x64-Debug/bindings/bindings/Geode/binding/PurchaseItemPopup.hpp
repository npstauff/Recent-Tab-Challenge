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

class PurchaseItemPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "PurchaseItemPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PurchaseItemPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x21cd00
     * @note[short] Android
     */
    static PurchaseItemPopup* create(GJStoreItem* p0);

    /**
     * @note[short] Windows: 0x21cda0
     * @note[short] Android
     */
    bool init(GJStoreItem* p0);

    /**
     * @note[short] Windows: 0x6a750
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x21d820
     * @note[short] Android
     */
    void onPurchase(cocos2d::CCObject* sender);
    
private:
    [[deprecated("PurchaseItemPopup::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
};
