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
#include "GJDropDownLayerDelegate.hpp"
#include "MusicBrowserDelegate.hpp"

class CustomSongLayer : public FLAlertLayer, public TextInputDelegate, public GJDropDownLayerDelegate, public MusicBrowserDelegate {
public:
    static constexpr auto CLASS_NAME = "CustomSongLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomSongLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x8ef70
     * @note[short] Android
     */
    static CustomSongLayer* create(CustomSongDelegate* p0);

    /**
     * @note[short] Windows: 0x8f010
     * @note[short] Android
     */
    bool init(CustomSongDelegate* p0);
    
private:
    [[deprecated("CustomSongLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongLayer::onCreateLines not implemented")]]
    /**
     * @note[short] Android
     */
    void onCreateLines(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongLayer::onMusicBrowser not implemented")]]
    /**
     * @note[short] Android
     */
    void onMusicBrowser(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongLayer::onNewgroundsBrowser not implemented")]]
    /**
     * @note[short] Android
     */
    void onNewgroundsBrowser(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongLayer::onOptions not implemented")]]
    /**
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongLayer::onSearch not implemented")]]
    /**
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongLayer::onSongBrowser not implemented")]]
    /**
     * @note[short] Android
     */
    void onSongBrowser(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongLayer::showNewgroundsMessage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn showNewgroundsMessage();
public:
    
private:
    [[deprecated("CustomSongLayer::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("CustomSongLayer::show not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void show();
public:
    
private:
    [[deprecated("CustomSongLayer::textChanged not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("CustomSongLayer::textInputOpened not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn textInputOpened(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("CustomSongLayer::textInputClosed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn textInputClosed(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("CustomSongLayer::textInputShouldOffset not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn textInputShouldOffset(CCTextInputNode* p0, float p1);
public:
    
private:
    [[deprecated("CustomSongLayer::textInputReturn not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn textInputReturn(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("CustomSongLayer::dropDownLayerWillClose not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn dropDownLayerWillClose(GJDropDownLayer* p0);
public:
    
private:
    [[deprecated("CustomSongLayer::musicBrowserClosed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn musicBrowserClosed(MusicBrowser* p0);
public:
};
