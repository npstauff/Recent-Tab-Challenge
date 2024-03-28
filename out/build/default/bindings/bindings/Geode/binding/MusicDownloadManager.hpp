#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "PlatformDownloadDelegate.hpp"

class MusicDownloadManager : public cocos2d::CCNode, public PlatformDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "MusicDownloadManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MusicDownloadManager, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x2821e0
     * @note[short] Android
     */
    static MusicDownloadManager* sharedState();

    /**
     * @note[short] Windows: 0x283b30
     * @note[short] Android
     */
    void addDLToActive(char const* tag, cocos2d::CCObject* obj);
    
private:
    [[deprecated("MusicDownloadManager::addDLToActive not implemented")]]
    /**
     * @note[short] Android
     */
    void addDLToActive(char const* tag);
public:

    /**
     * @note[short] Windows: 0x2828d0
     * @note[short] Android
     */
    TodoReturn addMusicDownloadDelegate(MusicDownloadDelegate* p0);

    /**
     * @note[short] Windows: 0x282f20
     * @note[short] Android
     */
    TodoReturn addSongObjectFromString(gd::string p0);
    
private:
    [[deprecated("MusicDownloadManager::clearSong not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn clearSong(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::clearUnusedSongs not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn clearUnusedSongs();
public:

    /**
     * @note[short] Windows: 0x283080
     * @note[short] Android
     */
    void createSongsInfo(gd::string p0);

    /**
     * @note[short] Windows: 0x284530
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* p0);
    
private:
    [[deprecated("MusicDownloadManager::deleteSFX not implemented")]]
    /**
     * @note[short] Android
     */
    void deleteSFX(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::deleteSong not implemented")]]
    /**
     * @note[short] Android
     */
    void deleteSong(int p0);
public:

    /**
     * @note[short] Windows: 0x284bc0
     * @note[short] Android
     */
    void downloadCustomSong(int p0);

    /**
     * @note[short] Windows: 0x284fd0
     * @note[short] Android
     */
    void downloadMusicLibrary();

    /**
     * @note[short] Windows: 0x2863f0
     * @note[short] Android
     */
    void downloadSFX(int p0);
    
private:
    [[deprecated("MusicDownloadManager::downloadSFXFailed not implemented")]]
    /**
     * @note[short] Android
     */
    void downloadSFXFailed(int p0, GJSongError p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::downloadSFXFinished not implemented")]]
    /**
     * @note[short] Android
     */
    void downloadSFXFinished(int p0);
public:

    /**
     * @note[short] Windows: 0x286940
     * @note[short] Android
     */
    void downloadSFXLibrary();

    /**
     * @note[short] Windows: 0x283780
     * @note[short] Android
     */
    void downloadSong(int p0);

    /**
     * @note[short] Windows: 0x287be0
     * @note[short] Android
     */
    void downloadSongFailed(int p0, GJSongError p1);

    /**
     * @note[short] Windows: 0x287b90
     * @note[short] Android
     */
    void downloadSongFinished(int p0);
    
private:
    [[deprecated("MusicDownloadManager::encodeDataTo not implemented")]]
    /**
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::filterMusicByArtistID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn filterMusicByArtistID(int p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::filterMusicByTag not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn filterMusicByTag(int p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::firstSetup not implemented")]]
    /**
     * @note[short] Android
     */
    void firstSetup();
public:

    /**
     * @note[short] Windows: 0x287540
     * @note[short] Android
     */
    TodoReturn generateCustomContentURL(gd::string p0);

    /**
     * @note[short] Windows: 0x28a5a0
     * @note[short] Android
     */
    TodoReturn generateResourceAssetList();
    
private:
    [[deprecated("MusicDownloadManager::getAllMusicArtists not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAllMusicArtists(OptionsObjectDelegate* p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getAllMusicObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAllMusicObjects();
public:
    
private:
    [[deprecated("MusicDownloadManager::getAllMusicTags not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAllMusicTags(OptionsObjectDelegate* p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getAllSFXObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAllSFXObjects(bool p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getAllSongs not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAllSongs();
public:

    /**
     * @note[short] Windows: 0x2849c0
     * @note[short] Android
     */
    void getCustomContentURL();
    
private:
    [[deprecated("MusicDownloadManager::getDLObject not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCObject* getDLObject(char const* p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getDownloadedSongs not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getDownloadedSongs();
public:
    
private:
    [[deprecated("MusicDownloadManager::getDownloadProgress not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getDownloadProgress(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getMusicArtistForID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMusicArtistForID(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getMusicObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMusicObject(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getSFXDownloadKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSFXDownloadKey(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getSFXDownloadProgress not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSFXDownloadProgress(int p0);
public:

    /**
     * @note[short] Windows: 0x2872b0
     * @note[short] Android
     */
    TodoReturn getSFXFolderObjectForID(int p0);
    
private:
    [[deprecated("MusicDownloadManager::getSFXFolderPathForID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSFXFolderPathForID(int p0, bool p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::getSFXObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSFXObject(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::getSongDownloadKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSongDownloadKey(int p0);
public:

    /**
     * @note[short] Windows: 0x282ae0
     * @note[short] Android
     */
    void getSongInfo(int p0, bool p1);
    
private:
    [[deprecated("MusicDownloadManager::getSongInfoKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSongInfoKey(int p0);
public:

    /**
     * @note[short] Windows: 0x283cb0
     * @note[short] Android
     */
    SongInfoObject* getSongInfoObject(int p0);
    
private:
    [[deprecated("MusicDownloadManager::getSongPriority not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSongPriority();
public:

    /**
     * @note[short] Windows: 0x282600
     * @note[short] Android
     */
    void handleIt(bool p0, gd::string p1, gd::string p2, GJHttpType p3);
    
private:
    [[deprecated("MusicDownloadManager::handleItDelayed not implemented")]]
    /**
     * @note[short] Android
     */
    void handleItDelayed(bool p0, gd::string p1, gd::string p2, GJHttpType p3);
public:
    
private:
    [[deprecated("MusicDownloadManager::handleItND not implemented")]]
    /**
     * @note[short] Android
     */
    void handleItND(cocos2d::CCNode* p0, void* p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::incrementPriorityForSong not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn incrementPriorityForSong(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::isDLActive not implemented")]]
    /**
     * @note[short] Android
     */
    bool isDLActive(char const* tag);
public:
    
private:
    [[deprecated("MusicDownloadManager::isMusicLibraryLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    bool isMusicLibraryLoaded();
public:
    
private:
    [[deprecated("MusicDownloadManager::isResourceSFX not implemented")]]
    /**
     * @note[short] Android
     */
    bool isResourceSFX(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::isResourceSong not implemented")]]
    /**
     * @note[short] Android
     */
    bool isResourceSong(int p0);
public:

    /**
     * @note[short] Windows: 0x282a30
     * @note[short] Android
     */
    bool isRunningActionForSongID(int p0);

    /**
     * @note[short] Windows: 0x284140
     * @note[short] Android
     */
    bool isSFXDownloaded(int p0);
    
private:
    [[deprecated("MusicDownloadManager::isSFXLibraryLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSFXLibraryLoaded();
public:

    /**
     * @note[short] Windows: 0x283dd0
     * @note[short] Android
     */
    bool isSongDownloaded(int p0);

    /**
     * @note[short] Windows: 0x283550
     * @note[short] Android
     */
    void limitDownloadedSongs();

    /**
     * @note[short] Windows: 0x287b30
     * @note[short] Android
     */
    void loadSongInfoFailed(int p0, GJSongError p1);

    /**
     * @note[short] Windows: 0x287ae0
     * @note[short] Android
     */
    void loadSongInfoFinished(SongInfoObject* p0);

    /**
     * @note[short] Windows: 0x287d40
     * @note[short] Android
     */
    void musicActionFailed(GJMusicAction p0);

    /**
     * @note[short] Windows: 0x287cf0
     * @note[short] Android
     */
    void musicActionFinished(GJMusicAction p0);
    
private:
    [[deprecated("MusicDownloadManager::nameForTagID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn nameForTagID(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::onDownloadMusicLibraryCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onDownloadMusicLibraryCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::onDownloadSFXCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onDownloadSFXCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::onDownloadSFXLibraryCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onDownloadSFXLibraryCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
public:

    /**
     * @note[short] Windows: 0x2839b0
     * @note[short] Android
     */
    void onDownloadSongCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);

    /**
     * @note[short] Windows: 0x284a70
     * @note[short] Android
     */
    void onGetCustomContentURLCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Windows: 0x282d00
     * @note[short] Android
     */
    void onGetSongInfoCompleted(gd::string p0, gd::string p1);

    /**
     * @note[short] Windows: 0x2824e0
     * @note[short] Android
     */
    void onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
    
private:
    [[deprecated("MusicDownloadManager::onTryUpdateMusicLibraryCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onTryUpdateMusicLibraryCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
public:
    
private:
    [[deprecated("MusicDownloadManager::onTryUpdateSFXLibraryCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onTryUpdateSFXLibraryCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
public:

    /**
     * @note[short] Windows: 0x285270
     * @note[short] Android
     */
    void parseMusicLibrary();

    /**
     * @note[short] Windows: 0x286bd0
     * @note[short] Android
     */
    void parseSFXLibrary();

    /**
     * @note[short] Windows: 0x2843e0
     * @note[short] Android
     */
    gd::string pathForSFX(int p0);

    /**
     * @note[short] Windows: 0x284240
     * @note[short] Android
     */
    TodoReturn pathForSFXFolder(int p0);

    /**
     * @note[short] Windows: 0x284070
     * @note[short] Android
     */
    gd::string pathForSong(int p0);

    /**
     * @note[short] Windows: 0x283ed0
     * @note[short] Android
     */
    TodoReturn pathForSongFolder(int p0);

    /**
     * @note[short] Windows: 0x2823c0
     * @note[short] Android
     */
    void ProcessHttpGetRequest(gd::string p0, gd::string p1, cocos2d::extension::SEL_HttpResponse p2, int p3, int p4);

    /**
     * @note[short] Windows: 0x282260
     * @note[short] Android
     */
    void ProcessHttpRequest(gd::string p0, gd::string p1, gd::string p2, GJHttpType p3);

    /**
     * @note[short] Windows: 0x283c00
     * @note[short] Android
     */
    void removeDLFromActive(char const* p0);

    /**
     * @note[short] Windows: 0x2829d0
     * @note[short] Android
     */
    TodoReturn removeMusicDownloadDelegate(MusicDownloadDelegate* p0);

    /**
     * @note[short] Windows: 0x283260
     * @note[short] Android
     */
    static cocos2d::CCDictionary* responseToDict(gd::string p0, char const* p1);

    /**
     * @note[short] Windows: 0x2844b0
     * @note[short] Android
     */
    void showTOS(FLAlertLayerProtocol* p0);

    /**
     * @note[short] Windows: 0x282a90
     * @note[short] Android
     */
    void songStateChanged();
    
private:
    [[deprecated("MusicDownloadManager::stopDownload not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopDownload(int p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::storeMusicObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn storeMusicObject(SongInfoObject* p0);
public:
    
private:
    [[deprecated("MusicDownloadManager::storeSFXInfoObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn storeSFXInfoObject(SFXInfoObject* p0);
public:

    /**
     * @note[short] Windows: 0x287210
     * @note[short] Android
     */
    TodoReturn tryLoadLibraries();
    
private:
    [[deprecated("MusicDownloadManager::tryUpdateMusicLibrary not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryUpdateMusicLibrary();
public:

    /**
     * @note[short] Windows: 0x2866f0
     * @note[short] Android
     */
    TodoReturn tryUpdateSFXLibrary();

    /**
     * @note[short] Windows: 0x282880
     * @note[short] Android
     */
    virtual bool init();
    cocos2d::CCDictionary* m_activeDownloads;
    cocos2d::CCArray* m_musicDownloadDelegates;
    cocos2d::CCDictionary* m_songObjects;
    cocos2d::CCDictionary* m_MDLM003;
    int m_songPriority;
    gd::string m_customContentURL;
    cocos2d::CCDictionary* m_sfxObjects;
    cocos2d::CCArray* m_sfxArtists;
    int m_sfxLibraryVersion;
    int m_sfxObjectCount;
    bool m_requestedSfxLibraryDownloaded;
    cocos2d::CCDictionary* m_musicObjects;
    cocos2d::CCDictionary* m_musicArtists;
    gd::map<int, gd::string> m_musicTags;
    int m_musicLibraryVersion;
    int m_musicObjectCount;
    bool m_requestedMusicLibraryDownloaded;
    bool m_triedToLoadLibraries;
    bool m_unkBool;
    gd::unordered_set<int> m_resourceSfxUnorderedSet;
    gd::unordered_set<int> m_resourceSongUnorderedSet;
};
