#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LevelDownloadDelegate.hpp"
#include "LevelUpdateDelegate.hpp"
#include "RateLevelDelegate.hpp"
#include "LikeItemDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "LevelDeleteDelegate.hpp"
#include "NumberInputDelegate.hpp"
#include "SetIDPopupDelegate.hpp"
#include "TableViewCellDelegate.hpp"

class LevelInfoLayer : public cocos2d::CCLayer, public LevelDownloadDelegate, public LevelUpdateDelegate, public RateLevelDelegate, public LikeItemDelegate, public FLAlertLayerProtocol, public LevelDeleteDelegate, public NumberInputDelegate, public SetIDPopupDelegate, public TableViewCellDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelInfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelInfoLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x2515f0
     * @note[short] Android
     */
    static LevelInfoLayer* create(GJGameLevel* p0, bool p1);

    /**
     * @note[short] Windows: 0x2560f0
     * @note[short] Android
     */
    TodoReturn confirmClone(cocos2d::CCObject* p0);
    
private:
    [[deprecated("LevelInfoLayer::confirmDelete not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn confirmDelete(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] Windows: 0x256cb0
     * @note[short] Android
     */
    TodoReturn confirmMoveToBottom(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x256c40
     * @note[short] Android
     */
    TodoReturn confirmMoveToTop(cocos2d::CCObject* p0);
    
private:
    [[deprecated("LevelInfoLayer::confirmOwnerDelete not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn confirmOwnerDelete(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] Windows: 0x2539a0
     * @note[short] Android
     */
    void downloadLevel();
    
private:
    [[deprecated("LevelInfoLayer::incrementDislikes not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn incrementDislikes();
public:
    
private:
    [[deprecated("LevelInfoLayer::incrementLikes not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn incrementLikes();
public:

    /**
     * @note[short] Windows: 0x2516a0
     * @note[short] Android
     */
    bool init(GJGameLevel* p0, bool p1);
    
private:
    [[deprecated("LevelInfoLayer::loadLevelStep not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadLevelStep();
public:

    /**
     * @note[short] Windows: 0x253540
     * @note[short] Android
     */
    void onAddToList(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x257c80
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelInfoLayer::onClone not implemented")]]
    /**
     * @note[short] Android
     */
    void onClone(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2562c0
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x253760
     * @note[short] Android
     */
    void onFavorite(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelInfoLayer::onFeatured not implemented")]]
    /**
     * @note[short] Android
     */
    void onFeatured(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x253830
     * @note[short] Android
     */
    void onGarage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x255ee0
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x256a70
     * @note[short] Android
     */
    void onLevelInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2537d0
     * @note[short] Android
     */
    void onLevelLeaderboard(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x256660
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelInfoLayer::onLowDetailMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onLowDetailMode(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x256370
     * @note[short] Android
     */
    void onOwnerDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2555b0
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelInfoLayer::onPlayReplay not implemented")]]
    /**
     * @note[short] Android
     */
    void onPlayReplay(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelInfoLayer::onRate not implemented")]]
    /**
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x256620
     * @note[short] Android
     */
    void onRateDemon(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2564f0
     * @note[short] Android
     */
    void onRateStars(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2565d0
     * @note[short] Android
     */
    void onRateStarsMod(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x253680
     * @note[short] Android
     */
    void onSetFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2568b0
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x256a10
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelInfoLayer::playStep2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playStep2();
public:
    
private:
    [[deprecated("LevelInfoLayer::playStep3 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playStep3();
public:
    
private:
    [[deprecated("LevelInfoLayer::playStep4 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playStep4();
public:

    /**
     * @note[short] Windows: 0x2515b0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJGameLevel* p0, bool p1);

    /**
     * @note[short] Windows: 0x2544a0
     * @note[short] Android
     */
    TodoReturn setupLevelInfo();

    /**
     * @note[short] Windows: 0x253a90
     * @note[short] Android
     */
    TodoReturn setupPlatformerStats();

    /**
     * @note[short] Windows: 0x253e20
     * @note[short] Android
     */
    TodoReturn setupProgressBars();

    /**
     * @note[short] Windows: 0x253890
     * @note[short] Android
     */
    bool shouldDownloadLevel();

    /**
     * @note[short] Windows: 0x255510
     * @note[short] Android
     */
    void showSongWarning();

    /**
     * @note[short] Windows: 0x255280
     * @note[short] Android
     */
    void showUpdateAlert(UpdateResponse p0);

    /**
     * @note[short] Windows: 0x255f10
     * @note[short] Android
     */
    void tryCloneLevel(cocos2d::CCObject* p0);
    
private:
    [[deprecated("LevelInfoLayer::tryShowAd not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryShowAd();
public:

    /**
     * @note[short] Windows: 0x256d20
     * @note[short] Android
     */
    void updateLabelValues();
    
private:
    [[deprecated("LevelInfoLayer::updateSideButtons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSideButtons();
public:

    /**
     * @note[short] Windows: 0x257d50
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x257d60
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] Windows: 0x255fc0
     * @note[short] Android
     */
    virtual void numberInputClosed(NumberInputLayer* p0);

    /**
     * @note[short] Windows: 0x253590
     * @note[short] Android
     */
    virtual TodoReturn cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);

    /**
     * @note[short] Windows: 0x254f00
     * @note[short] Android
     */
    virtual void levelDownloadFinished(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x255120
     * @note[short] Android
     */
    virtual void levelDownloadFailed(int p0);

    /**
     * @note[short] Windows: 0x255230
     * @note[short] Android
     */
    virtual void levelUpdateFinished(GJGameLevel* p0, UpdateResponse p1);

    /**
     * @note[short] Windows: 0x255320
     * @note[short] Android
     */
    virtual void levelUpdateFailed(int p0);

    /**
     * @note[short] Windows: 0x255430
     * @note[short] Android
     */
    virtual void levelDeleteFinished(int p0);

    /**
     * @note[short] Windows: 0x2554a0
     * @note[short] Android
     */
    virtual void levelDeleteFailed(int p0);

    /**
     * @note[short] Windows: 0x256610
     * @note[short] Android
     */
    virtual void rateLevelClosed();

    /**
     * @note[short] Windows: 0x2566d0
     * @note[short] Android
     */
    virtual void likedItem(LikeItemType p0, int p1, bool p2);

    /**
     * @note[short] Windows: 0x257b00
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0x2536e0
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);
    void* m_unk0;
    cocos2d::CCMenu* m_playBtnMenu;
    GJGameLevel* m_level;
    cocos2d::CCArray* m_coins;
    CCMenuItemSpriteExtra* m_likeBtn;
    CCMenuItemSpriteExtra* m_starRateBtn;
    CCMenuItemSpriteExtra* m_demonRateBtn;
    void* m_unk2;
    cocos2d::CCLabelBMFont* m_lengthLabel;
    cocos2d::CCLabelBMFont* m_downloadsLabel;
    cocos2d::CCLabelBMFont* m_likesLabel;
    cocos2d::CCLabelBMFont* m_orbsLabel;
    cocos2d::CCLabelBMFont* m_folderLabel;
    CCMenuItemSpriteExtra* m_cloneBtn;
    void* m_unk3;
    cocos2d::CCSprite* m_likesIcon;
    cocos2d::CCSprite* m_orbsIcon;
    int m_unk6;
    int m_unk7;
    LoadingCircle* m_circle;
    GJDifficultySprite* m_difficultySprite;
    cocos2d::CCSprite* m_starsIcon;
    cocos2d::CCLabelBMFont* m_starsLabel;
    cocos2d::CCArray* m_icons;
    GEODE_PAD(16);
    bool m_challenge;
    GEODE_PAD(4);
    cocos2d::CCSprite* m_playSprite;
    void* m_unk11;
    CustomSongWidget* m_songWidget;
};
