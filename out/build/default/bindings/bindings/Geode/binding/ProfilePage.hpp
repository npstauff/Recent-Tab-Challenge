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
#include "FLAlertLayerProtocol.hpp"
#include "LevelCommentDelegate.hpp"
#include "CommentUploadDelegate.hpp"
#include "UserInfoDelegate.hpp"
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "LeaderboardManagerDelegate.hpp"

class ProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public LevelCommentDelegate, public CommentUploadDelegate, public UserInfoDelegate, public UploadActionDelegate, public UploadPopupDelegate, public LeaderboardManagerDelegate {
public:
    static constexpr auto CLASS_NAME = "ProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ProfilePage, FLAlertLayer)

    /**
     * @note[short] Windows: 0x2ecfd0
     * @note[short] Android
     */
    static ProfilePage* create(int accountID, bool ownProfile);
    
private:
    [[deprecated("ProfilePage::blockUser not implemented")]]
    /**
     * @note[short] Android
     */
    void blockUser();
public:

    /**
     * @note[short] Windows: 0x2ed080
     * @note[short] Android
     */
    bool init(int accountID, bool ownProfile);

    /**
     * @note[short] Windows: 0x2f1ef0
     * @note[short] Android
     */
    bool isCorrect(char const* key);
    
private:
    [[deprecated("ProfilePage::isOnWatchlist not implemented")]]
    /**
     * @note[short] Android
     */
    bool isOnWatchlist(int p0);
public:

    /**
     * @note[short] Windows: 0x2f1fc0
     * @note[short] Android
     */
    void loadPage(int p0);

    /**
     * @note[short] Windows: 0x2edda0
     * @note[short] Android
     */
    void loadPageFromUserInfo(GJUserScore* p0);

    /**
     * @note[short] Windows: 0x2f0c90
     * @note[short] Android
     */
    void onBlockUser(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f15e0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f09a0
     * @note[short] Android
     */
    void onComment(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f0930
     * @note[short] Android
     */
    void onCommentHistory(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f0e70
     * @note[short] Android
     */
    void onFollow(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f0ab0
     * @note[short] Android
     */
    void onFriend(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f1d70
     * @note[short] Android
     */
    void onFriends(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f1d50
     * @note[short] Android
     */
    void onMessages(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f0680
     * @note[short] Android
     */
    void onMyLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f07e0
     * @note[short] Android
     */
    void onMyLists(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f24c0
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f24d0
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f1d90
     * @note[short] Android
     */
    void onRequests(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f0960
     * @note[short] Android
     */
    void onSendMessage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f1d30
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f1bd0
     * @note[short] Android
     */
    void onTwitch(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f1a70
     * @note[short] Android
     */
    void onTwitter(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2edb10
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f1910
     * @note[short] Android
     */
    void onYouTube(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f1170
     * @note[short] Android
     */
    TodoReturn setupComments();

    /**
     * @note[short] Windows: 0x2f2160
     * @note[short] Android
     */
    void setupCommentsBrowser(cocos2d::CCArray* p0);

    /**
     * @note[short] Windows: 0x2f1650
     * @note[short] Android
     */
    void showNoAccountError();
    
private:
    [[deprecated("ProfilePage::toggleMainPageVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleMainPageVisibility(bool p0);
public:
    
private:
    [[deprecated("ProfilePage::updateLevelsLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLevelsLabel();
public:
    
private:
    [[deprecated("ProfilePage::updatePageArrows not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePageArrows();
public:

    /**
     * @note[short] Windows: 0x22fc0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Windows: 0x2f1640
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x2f17f0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] Windows: 0x2f1340
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0x2f1740
     * @note[short] Android
     */
    virtual void updateUserScoreFinished();

    /**
     * @note[short] Windows: 0x2f17b0
     * @note[short] Android
     */
    virtual void updateUserScoreFailed();

    /**
     * @note[short] Windows: 0x2f1db0
     * @note[short] Android
     */
    virtual void getUserInfoFinished(GJUserScore* p0);

    /**
     * @note[short] Windows: 0x2f1e40
     * @note[short] Android
     */
    virtual void getUserInfoFailed(int p0);

    /**
     * @note[short] Windows: 0x2f1e90
     * @note[short] Android
     */
    virtual void userInfoChanged(GJUserScore* p0);

    /**
     * @note[short] Windows: 0x2f2290
     * @note[short] Android
     */
    virtual void loadCommentsFinished(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] Windows: 0x2f22f0
     * @note[short] Android
     */
    virtual void loadCommentsFailed(char const* p0);

    /**
     * @note[short] Windows: 0x2f2350
     * @note[short] Android
     */
    virtual void setupPageInfo(gd::string p0, char const* p1);

    /**
     * @note[short] Windows: 0x2f24e0
     * @note[short] Android
     */
    virtual void commentUploadFinished(int p0);

    /**
     * @note[short] Windows: 0x2f2520
     * @note[short] Android
     */
    virtual void commentUploadFailed(int p0, CommentError p1);

    /**
     * @note[short] Windows: 0x2f2570
     * @note[short] Android
     */
    virtual void commentDeleteFailed(int p0, int p1);

    /**
     * @note[short] Windows: 0x2f1480
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] Windows: 0x2f14c0
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] Windows: 0x2f15b0
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);
    GJUserScore* m_score;
    int m_accountID;
    bool m_ownProfile;
    gd::string m_profileKey;
    cocos2d::CCLabelBMFont* m_somethingWentWrong;
    cocos2d::CCLabelBMFont* m_usernameLabel;
    GJCommentListLayer* m_list;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_followBtn;
    void* m_unk;
    cocos2d::CCArray* m_buttons;
    cocos2d::CCArray* m_arrayWithUsernameLabel;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    int m_page;
    LoadingCircle* m_circle;
    void* m_popupDelegate;
    CCMenuItemSpriteExtra* m_refreshBtn;
};
