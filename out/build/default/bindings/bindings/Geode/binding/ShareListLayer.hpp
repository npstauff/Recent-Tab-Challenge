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

class ShareListLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ShareListLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShareListLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x25ee50
     * @note[short] Android
     */
    static ShareListLayer* create(GJLevelList* p0);

    /**
     * @note[short] Windows: 0x25ef00
     * @note[short] Android
     */
    bool init(GJLevelList* p0);
    
private:
    [[deprecated("ShareListLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShareListLayer::onInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShareListLayer::onShare not implemented")]]
    /**
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShareListLayer::onUnlisted not implemented")]]
    /**
     * @note[short] Android
     */
    void onUnlisted(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShareListLayer::updateUnlistedF not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateUnlistedF();
public:
    
private:
    [[deprecated("ShareListLayer::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
};
