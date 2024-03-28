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
#include "TextInputDelegate.hpp"
#include "GooglePlayDelegate.hpp"
#include "GJDropDownLayerDelegate.hpp"

class MoreOptionsLayer : public FLAlertLayer, public TextInputDelegate, public GooglePlayDelegate, public GJDropDownLayerDelegate {
public:
    static constexpr auto CLASS_NAME = "MoreOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MoreOptionsLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x2b1590
     * @note[short] Android
     */
    static MoreOptionsLayer* create();

    /**
     * @note[short] Windows: 0x2b25f0
     * @note[short] Android
     */
    TodoReturn addToggle(char const* p0, char const* p1, char const* p2);

    /**
     * @note[short] Windows: 0x2b2b90
     * @note[short] Android
     */
    TodoReturn countForPage(int p0);

    /**
     * @note[short] Windows: 0x2b2fd0
     * @note[short] Android
     */
    TodoReturn goToPage(int p0);

    /**
     * @note[short] Windows: 0x2b2c60
     * @note[short] Android
     */
    TodoReturn incrementCountForPage(int p0);
    
private:
    [[deprecated("MoreOptionsLayer::infoKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn infoKey(int p0);
public:

    /**
     * @note[short] Windows: 0x2b2e70
     * @note[short] Android
     */
    TodoReturn layerForPage(int p0);
    
private:
    [[deprecated("MoreOptionsLayer::layerKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn layerKey(int p0);
public:

    /**
     * @note[short] Windows: 0x2b2a50
     * @note[short] Android
     */
    TodoReturn nextPosition(int p0);
    
private:
    [[deprecated("MoreOptionsLayer::objectKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn objectKey(int p0);
public:

    /**
     * @note[short] Windows: 0x2b2d40
     * @note[short] Android
     */
    TodoReturn objectsForPage(int p0);
    
private:
    [[deprecated("MoreOptionsLayer::offsetToNextPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn offsetToNextPage();
public:

    /**
     * @note[short] Windows: 0x2b3c60
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MoreOptionsLayer::onFMODDebug not implemented")]]
    /**
     * @note[short] Android
     */
    void onFMODDebug(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreOptionsLayer::onGPSignIn not implemented")]]
    /**
     * @note[short] Android
     */
    void onGPSignIn(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreOptionsLayer::onGPSignOut not implemented")]]
    /**
     * @note[short] Android
     */
    void onGPSignOut(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreOptionsLayer::onInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xa21a0
     * @note[short] Android
     */
    void onKeybindings(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MoreOptionsLayer::onNextPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreOptionsLayer::onParental not implemented")]]
    /**
     * @note[short] Android
     */
    void onParental(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreOptionsLayer::onPrevPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2b3890
     * @note[short] Android
     */
    void onSongBrowser(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MoreOptionsLayer::onToggle not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreOptionsLayer::pageKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pageKey(int p0);
public:
    
private:
    [[deprecated("MoreOptionsLayer::toggleGP not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleGP();
public:

    /**
     * @note[short] Windows: 0x2b1630
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("MoreOptionsLayer::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("MoreOptionsLayer::textInputShouldOffset not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn textInputShouldOffset(CCTextInputNode* p0, float p1);
public:
    
private:
    [[deprecated("MoreOptionsLayer::textInputReturn not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn textInputReturn(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("MoreOptionsLayer::googlePlaySignedIn not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn googlePlaySignedIn();
public:
    
private:
    [[deprecated("MoreOptionsLayer::dropDownLayerWillClose not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn dropDownLayerWillClose(GJDropDownLayer* p0);
public:
};
