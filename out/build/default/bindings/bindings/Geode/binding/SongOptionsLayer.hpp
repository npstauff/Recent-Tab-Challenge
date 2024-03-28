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

class SongOptionsLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SongOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SongOptionsLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x90140
     * @note[short] Android
     */
    static SongOptionsLayer* create(CustomSongDelegate* p0);

    /**
     * @note[short] Windows: 0x901e0
     * @note[short] Android
     */
    bool init(CustomSongDelegate* p0);
    
private:
    [[deprecated("SongOptionsLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SongOptionsLayer::onFadeIn not implemented")]]
    /**
     * @note[short] Android
     */
    void onFadeIn(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SongOptionsLayer::onFadeOut not implemented")]]
    /**
     * @note[short] Android
     */
    void onFadeOut(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SongOptionsLayer::onInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SongOptionsLayer::onPlayback not implemented")]]
    /**
     * @note[short] Android
     */
    void onPlayback(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SongOptionsLayer::updatePlaybackBtn not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePlaybackBtn();
public:

    /**
     * @note[short] Windows: 0x90e80
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
