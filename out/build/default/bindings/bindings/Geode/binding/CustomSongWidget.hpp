#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJAssetDownloadAction.hpp"
#include "MusicDownloadDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class CustomSongWidget : public cocos2d::CCNode, public MusicDownloadDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "CustomSongWidget";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CustomSongWidget, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x92b60
     * @note[short] Android
     */
    static CustomSongWidget* create(SongInfoObject* songInfo, CustomSongDelegate* songDelegate, bool showSongSelect, bool showPlayMusic, bool showDownload, bool isRobtopSong, bool unkBool, bool isMusicLibrary);

    /**
     * @note[short] Windows: 0x93c60
     * @note[short] Android
     */
    void deleteSong();
    
private:
    [[deprecated("CustomSongWidget::downloadAssetFailed not implemented")]]
    /**
     * @note[short] Android
     */
    void downloadAssetFailed(int p0, GJAssetType p1, GJSongError p2);
public:
    
private:
    [[deprecated("CustomSongWidget::downloadAssetFinished not implemented")]]
    /**
     * @note[short] Android
     */
    void downloadAssetFinished(int p0, GJAssetType p1);
public:
    
private:
    [[deprecated("CustomSongWidget::downloadFailed not implemented")]]
    /**
     * @note[short] Android
     */
    void downloadFailed();
public:
    
private:
    [[deprecated("CustomSongWidget::getSongInfoIfUnloaded not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSongInfoIfUnloaded();
public:

    /**
     * @note[short] Windows: 0x92c20
     * @note[short] Android
     */
    bool init(SongInfoObject* songInfo, CustomSongDelegate* songDelegate, bool showSongSelect, bool showPlayMusic, bool showDownload, bool isRobtopSong, bool unkBool, bool isMusicLibrary);
    
private:
    [[deprecated("CustomSongWidget::onCancelDownload not implemented")]]
    /**
     * @note[short] Android
     */
    void onCancelDownload(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongWidget::onDelete not implemented")]]
    /**
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x94510
     * @note[short] Android
     */
    void onDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x94450
     * @note[short] Android
     */
    void onGetSongInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x93e10
     * @note[short] Android
     */
    void onMore(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x94790
     * @note[short] Android
     */
    void onPlayback(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x94740
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x965f0
     * @note[short] Android
     */
    TodoReturn processNextMultiAsset();

    /**
     * @note[short] Windows: 0x96a70
     * @note[short] Android
     */
    void showError(bool p0);

    /**
     * @note[short] Windows: 0x94660
     * @note[short] Android
     */
    void startDownload();

    /**
     * @note[short] Windows: 0x94690
     * @note[short] Android
     */
    TodoReturn startMonitorDownload();

    /**
     * @note[short] Windows: 0x96490
     * @note[short] Android
     */
    TodoReturn startMultiAssetDownload();

    /**
     * @note[short] Windows: 0x944c0
     * @note[short] Android
     */
    TodoReturn toggleUpdateButton(bool p0);
    
private:
    [[deprecated("CustomSongWidget::updateDownloadProgress not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDownloadProgress(float p0);
public:
    
private:
    [[deprecated("CustomSongWidget::updateError not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateError(GJSongError p0);
public:
    
private:
    [[deprecated("CustomSongWidget::updateLengthMod not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLengthMod(float p0);
public:

    /**
     * @note[short] Windows: 0x95a60
     * @note[short] Android
     */
    void updateMultiAssetInfo(bool p0);

    /**
     * @note[short] Windows: 0x94970
     * @note[short] Android
     */
    TodoReturn updatePlaybackBtn();
    
private:
    [[deprecated("CustomSongWidget::updateProgressBar not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateProgressBar(int p0);
public:

    /**
     * @note[short] Windows: 0x94b80
     * @note[short] Android
     */
    void updateSongInfo();

    /**
     * @note[short] Windows: 0x94280
     * @note[short] Android
     */
    void updateSongObject(SongInfoObject* p0);

    /**
     * @note[short] Windows: 0x956f0
     * @note[short] Android
     */
    void updateWithMultiAssets(gd::string p0, gd::string p1, int p2);
    
private:
    [[deprecated("CustomSongWidget::verifySongID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn verifySongID(int p0);
public:

    /**
     * @note[short] Windows: 0x96210
     * @note[short] Android
     */
    virtual void loadSongInfoFinished(SongInfoObject* p0);

    /**
     * @note[short] Windows: 0x962d0
     * @note[short] Android
     */
    virtual void loadSongInfoFailed(int p0, GJSongError p1);

    /**
     * @note[short] Windows: 0x96340
     * @note[short] Android
     */
    virtual void downloadSongFinished(int p0);

    /**
     * @note[short] Windows: 0x963e0
     * @note[short] Android
     */
    virtual void downloadSongFailed(int p0, GJSongError p1);

    /**
     * @note[short] Windows: 0x96450
     * @note[short] Android
     */
    virtual void downloadSFXFinished(int p0);

    /**
     * @note[short] Windows: 0x96470
     * @note[short] Android
     */
    virtual void downloadSFXFailed(int p0, GJSongError p1);

    /**
     * @note[short] Windows: 0x968b0
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction p0);

    /**
     * @note[short] Windows: 0x968e0
     * @note[short] Android
     */
    virtual void musicActionFailed(GJMusicAction p0);

    /**
     * @note[short] Windows: 0x94b60
     * @note[short] Android
     */
    virtual void songStateChanged();

    /**
     * @note[short] Windows: 0x96ca0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    SongInfoObject* m_songInfoObject;
    cocos2d::CCMenu* m_buttonMenu;
    cocos2d::CCLabelBMFont* m_songLabel;
    cocos2d::CCLabelBMFont* m_artistLabel;
    cocos2d::CCLabelBMFont* m_songIDLabel;
    cocos2d::CCLabelBMFont* m_errorLabel;
    CCMenuItemSpriteExtra* m_downloadBtn;
    CCMenuItemSpriteExtra* m_cancelDownloadBtn;
    CCMenuItemSpriteExtra* m_selectSongBtn;
    CCMenuItemSpriteExtra* m_getSongInfoBtn;
    CCMenuItemSpriteExtra* m_playbackBtn;
    CCMenuItemSpriteExtra* m_moreBtn;
    CCMenuItemSpriteExtra* m_deleteBtn;
    cocos2d::CCSprite* m_sliderGroove;
    cocos2d::CCSprite* m_sliderBar;
    cocos2d::CCSprite* m_bgSpr;
    CustomSongDelegate* m_songDelegate;
    bool m_showSelectSongBtn;
    bool m_showPlayMusicBtn;
    bool m_showDownloadBtn;
    bool m_isNotDownloading;
    bool m_isRobtopSong;
    bool m_isMusicLibrary;
    int m_customSongID;
    float m_unkFloat;
    bool m_unkBool1;
    void* m_unkPtr;
    bool m_hasLibrarySongs;
    bool m_hasSFX;
    bool m_unkBool2;
    gd::map<int, bool> m_songs;
    gd::map<int, bool> m_sfx;
    gd::vector<CCObject*> m_undownloadedAssets;
    int m_unkInt;
    InfoAlertButton* m_assetInfoBtn;
};
