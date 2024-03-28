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

class MoreSearchLayer : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "MoreSearchLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MoreSearchLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x265610
     * @note[short] Android
     */
    static MoreSearchLayer* create();
    
private:
    [[deprecated("MoreSearchLayer::audioNext not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn audioNext(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("MoreSearchLayer::audioPrevious not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn audioPrevious(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("MoreSearchLayer::createToggleButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
public:

    /**
     * @note[short] Windows: 0x2671b0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MoreSearchLayer::onCoins not implemented")]]
    /**
     * @note[short] Android
     */
    void onCoins(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreSearchLayer::onCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onCompleted(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreSearchLayer::onEpic not implemented")]]
    /**
     * @note[short] Android
     */
    void onEpic(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreSearchLayer::onFeatured not implemented")]]
    /**
     * @note[short] Android
     */
    void onFeatured(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreSearchLayer::onFollowed not implemented")]]
    /**
     * @note[short] Android
     */
    void onFollowed(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreSearchLayer::onFriends not implemented")]]
    /**
     * @note[short] Android
     */
    void onFriends(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreSearchLayer::onInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreSearchLayer::onLegendary not implemented")]]
    /**
     * @note[short] Android
     */
    void onLegendary(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreSearchLayer::onMythic not implemented")]]
    /**
     * @note[short] Android
     */
    void onMythic(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreSearchLayer::onNoStar not implemented")]]
    /**
     * @note[short] Android
     */
    void onNoStar(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreSearchLayer::onOriginal not implemented")]]
    /**
     * @note[short] Android
     */
    void onOriginal(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2669e0
     * @note[short] Android
     */
    void onSongFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x266c90
     * @note[short] Android
     */
    void onSongMode(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MoreSearchLayer::onTwoPlayer not implemented")]]
    /**
     * @note[short] Android
     */
    void onTwoPlayer(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreSearchLayer::onUncompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onUncompleted(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreSearchLayer::selectSong not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn selectSong(int p0);
public:
    
private:
    [[deprecated("MoreSearchLayer::toggleSongNodes not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleSongNodes(bool p0, bool p1);
public:
    
private:
    [[deprecated("MoreSearchLayer::updateAudioLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateAudioLabel();
public:

    /**
     * @note[short] Windows: 0x2656b0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x267280
     * @note[short] Android
     */
    virtual void keyBackClicked();
    
private:
    [[deprecated("MoreSearchLayer::textInputShouldOffset not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);
public:
    
private:
    [[deprecated("MoreSearchLayer::textInputReturn not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* p0);
public:
    cocos2d::CCLabelBMFont* m_audioTrackName;
    CCMenuItemSpriteExtra* m_songLeftBtn;
    CCMenuItemSpriteExtra* m_songRightBtn;
    CCMenuItemSpriteExtra* m_normalBtn;
    CCMenuItemSpriteExtra* m_customBtn;
    CCTextInputNode* m_enterSongID;
};
