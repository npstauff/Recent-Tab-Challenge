#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayerProtocol.hpp"
#include "CustomSongLayerDelegate.hpp"
#include "CustomSongDelegate.hpp"

class SongSelectNode : public cocos2d::CCNode, public FLAlertLayerProtocol, public CustomSongLayerDelegate, public CustomSongDelegate {
public:
    static constexpr auto CLASS_NAME = "SongSelectNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SongSelectNode, cocos2d::CCNode)
    
private:
    [[deprecated("SongSelectNode::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SongSelectNode* create(int p0, bool p1, LevelSettingsObject* p2, SongSelectType p3, cocos2d::CCPoint p4, cocos2d::CCNode* p5, cocos2d::CCMenu* p6, bool p7);
public:

    /**
     * @note[short] Windows: 0x92270
     * @note[short] Android
     */
    void audioNext(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x922b0
     * @note[short] Android
     */
    void audioPrevious(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x91a70
     * @note[short] Android
     */
    bool init(int p0, bool p1, LevelSettingsObject* p2, SongSelectType p3, cocos2d::CCPoint p4, cocos2d::CCNode* p5, cocos2d::CCMenu* p6, bool p7);

    /**
     * @note[short] Windows: 0x92500
     * @note[short] Android
     */
    void onOpenCustomSong(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x922f0
     * @note[short] Android
     */
    void onSongMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x92310
     * @note[short] Android
     */
    void onSongMode(int p0);
    
private:
    [[deprecated("SongSelectNode::selectSong not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn selectSong(int p0);
public:
    
private:
    [[deprecated("SongSelectNode::showCustomSongSelect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn showCustomSongSelect();
public:

    /**
     * @note[short] Windows: 0x92160
     * @note[short] Android
     */
    void updateAudioLabel();
    
private:
    [[deprecated("SongSelectNode::updateWidgetVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateWidgetVisibility();
public:
    
private:
    [[deprecated("SongSelectNode::FLAlert_Clicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("SongSelectNode::customSongLayerClosed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn customSongLayerClosed();
public:
    
private:
    [[deprecated("SongSelectNode::songIDChanged not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn songIDChanged(int p0);
public:
    
private:
    [[deprecated("SongSelectNode::getActiveSongID not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn getActiveSongID();
public:

    /**
     * @note[short] Windows: 0x92660
     * @note[short] Android
     */
    virtual TodoReturn getSongFileName();
    
private:
    [[deprecated("SongSelectNode::getLevelSettings not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn getLevelSettings();
public:
};
