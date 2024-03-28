#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GameLevelManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GameLevelManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GameLevelManager, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0xf3a00
     * @note[short] Android
     */
    static GameLevelManager* sharedState();

    /**
     * @note[short] Out of line
     */
    static GameLevelManager* get();

    /**
     * @note[short] Windows: 0x10be70
     * @note[short] Android
     */
    void acceptFriendRequest(int p0, int p1);
    
private:
    [[deprecated("GameLevelManager::accountIDForUserID not implemented")]]
    /**
     * @note[short] Android
     */
    int accountIDForUserID(int userID);
public:

    /**
     * @note[short] Windows: 0xf8c10
     * @note[short] Android
     */
    void addDLToActive(char const* p0);
    
private:
    [[deprecated("GameLevelManager::areGauntletsLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    bool areGauntletsLoaded();
public:
    
private:
    [[deprecated("GameLevelManager::banUser not implemented")]]
    /**
     * @note[short] Android
     */
    void banUser(int p0);
public:

    /**
     * @note[short] Windows: 0x10ca10
     * @note[short] Android
     */
    void blockUser(int p0);

    /**
     * @note[short] Windows: 0xf96a0
     * @note[short] Android
     */
    void cleanupDailyLevels();
    
private:
    [[deprecated("GameLevelManager::createAndGetAccountComments not implemented")]]
    /**
     * @note[short] Android
     */
    bool createAndGetAccountComments(gd::string p0, int p1);
public:
    
private:
    [[deprecated("GameLevelManager::createAndGetCommentsFull not implemented")]]
    /**
     * @note[short] Android
     */
    bool createAndGetCommentsFull(gd::string p0, int p1, bool p2);
public:
    
private:
    [[deprecated("GameLevelManager::createAndGetLevelComments not implemented")]]
    /**
     * @note[short] Android
     */
    bool createAndGetLevelComments(gd::string p0, int p1);
public:
    
private:
    [[deprecated("GameLevelManager::createAndGetLevelLists not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCArray* createAndGetLevelLists(gd::string p0);
public:
    
private:
    [[deprecated("GameLevelManager::createAndGetLevels not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCArray* createAndGetLevels(gd::string p0);
public:

    /**
     * @note[short] Windows: 0xf6e60
     * @note[short] Android
     */
    cocos2d::CCArray* createAndGetMapPacks(gd::string p0);
    
private:
    [[deprecated("GameLevelManager::createAndGetScores not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCArray* createAndGetScores(gd::string p0, GJScoreType p1);
public:

    /**
     * @note[short] Windows: 0xf5130
     * @note[short] Android
     */
    GJGameLevel* createNewLevel();

    /**
     * @note[short] Windows: 0xf5ac0
     * @note[short] Android
     */
    GJLevelList* createNewLevelList();

    /**
     * @note[short] Windows: 0xf8ac0
     * @note[short] Android
     */
    TodoReturn createPageInfo(int p0, int p1, int p2);
    
private:
    [[deprecated("GameLevelManager::createSmartTemplate not implemented")]]
    /**
     * @note[short] Android
     */
    GJSmartTemplate* createSmartTemplate();
public:

    /**
     * @note[short] Windows: 0xfa620
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* p0);
    
private:
    [[deprecated("GameLevelManager::deleteAccountComment not implemented")]]
    /**
     * @note[short] Android
     */
    void deleteAccountComment(int p0, int p1);
public:

    /**
     * @note[short] Windows: 0x10a920
     * @note[short] Android
     */
    void deleteComment(int p0, CommentType p1, int p2);

    /**
     * @note[short] Windows: 0x10b8c0
     * @note[short] Android
     */
    void deleteFriendRequests(int p0, cocos2d::CCArray* p1, bool p2);

    /**
     * @note[short] Windows: 0xf58b0
     * @note[short] Android
     */
    void deleteLevel(GJGameLevel* p0);
    
private:
    [[deprecated("GameLevelManager::deleteLevelComment not implemented")]]
    /**
     * @note[short] Android
     */
    void deleteLevelComment(int p0, int p1);
public:

    /**
     * @note[short] Windows: 0xf5e00
     * @note[short] Android
     */
    void deleteLevelList(GJLevelList* p0);
    
private:
    [[deprecated("GameLevelManager::deleteSentFriendRequest not implemented")]]
    /**
     * @note[short] Android
     */
    void deleteSentFriendRequest(int p0);
public:

    /**
     * @note[short] Windows: 0x102990
     * @note[short] Android
     */
    void deleteServerLevel(int p0);

    /**
     * @note[short] Windows: 0xff440
     * @note[short] Android
     */
    void deleteServerLevelList(int p0);
    
private:
    [[deprecated("GameLevelManager::deleteSmartTemplate not implemented")]]
    /**
     * @note[short] Android
     */
    void deleteSmartTemplate(GJSmartTemplate* p0);
public:

    /**
     * @note[short] Windows: 0x107880
     * @note[short] Android
     */
    void deleteUserMessages(GJUserMessage* message, cocos2d::CCArray* messages, bool isSender);

    /**
     * @note[short] Windows: 0x100c20
     * @note[short] Android
     */
    void downloadLevel(int p0, bool p1);

    /**
     * @note[short] Windows: 0x107070
     * @note[short] Android
     */
    void downloadUserMessage(int p0, bool p1);

    /**
     * @note[short] Windows: 0xfa200
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* p0);

    /**
     * @note[short] Windows: 0x39e930
     * @note[short] Android
     */
    void firstSetup();

    /**
     * @note[short] Windows: 0xf99f0
     * @note[short] Android
     */
    void followUser(int p0);
    
private:
    [[deprecated("GameLevelManager::friendRequestFromAccountID not implemented")]]
    /**
     * @note[short] Android
     */
    GJFriendRequest* friendRequestFromAccountID(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::friendRequestWasRemoved not implemented")]]
    /**
     * @note[short] Android
     */
    void friendRequestWasRemoved(int p0, bool p1);
public:
    
private:
    [[deprecated("GameLevelManager::getAccountCommentKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getAccountCommentKey(int p0, int p1);
public:

    /**
     * @note[short] Windows: 0x108720
     * @note[short] Android
     */
    void getAccountComments(int accountID, int page, int total);
    
private:
    [[deprecated("GameLevelManager::getActiveDailyID not implemented")]]
    /**
     * @note[short] Android
     */
    int getActiveDailyID(GJTimedLevelType p0);
public:
    
private:
    [[deprecated("GameLevelManager::getActiveSmartTemplate not implemented")]]
    /**
     * @note[short] Android
     */
    GJSmartTemplate* getActiveSmartTemplate();
public:
    
private:
    [[deprecated("GameLevelManager::getAllSmartTemplates not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCArray* getAllSmartTemplates();
public:
    
private:
    [[deprecated("GameLevelManager::getAllUsedSongIDs not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCDictionary* getAllUsedSongIDs();
public:

    /**
     * @note[short] Windows: 0xfb5b0
     * @note[short] Android
     */
    gd::string getBasePostString();

    /**
     * @note[short] Windows: 0x111d40
     * @note[short] Android
     */
    bool getBoolForKey(char const* p0);

    /**
     * @note[short] Windows: 0x1091d0
     * @note[short] Android
     */
    gd::string getCommentKey(int ID, int page, int mode, CommentKeyType keytype);

    /**
     * @note[short] Windows: 0xf7790
     * @note[short] Android
     */
    cocos2d::CCArray* getCompletedLevels(bool p0);
    
private:
    [[deprecated("GameLevelManager::getDailyID not implemented")]]
    /**
     * @note[short] Android
     */
    int getDailyID(GJTimedLevelType p0);
public:
    
private:
    [[deprecated("GameLevelManager::getDailyTimer not implemented")]]
    /**
     * @note[short] Android
     */
    double getDailyTimer(GJTimedLevelType p0);
public:
    
private:
    [[deprecated("GameLevelManager::getDeleteCommentKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getDeleteCommentKey(int p0, int p1, int p2);
public:
    
private:
    [[deprecated("GameLevelManager::getDeleteMessageKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getDeleteMessageKey(int p0, bool p1);
public:
    
private:
    [[deprecated("GameLevelManager::getDescKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getDescKey(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getActiveDailyID not implemented")]]
    /**
     * @note[short] Android
     */
    gd::string getActiveDailyID(bool p0, bool p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7);
public:
    
private:
    [[deprecated("GameLevelManager::getDiffKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getDiffKey(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getDiffVal not implemented")]]
    /**
     * @note[short] Android
     */
    bool getDiffVal(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getFolderName not implemented")]]
    /**
     * @note[short] Android
     */
    gd::string getFolderName(int p0, bool p1);
public:
    
private:
    [[deprecated("GameLevelManager::getFriendRequestKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getFriendRequestKey(bool p0, int p1);
public:

    /**
     * @note[short] Windows: 0x10ae30
     * @note[short] Android
     */
    void getFriendRequests(bool p0, int p1, int p2);
    
private:
    [[deprecated("GameLevelManager::getGauntletKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getGauntletKey(int p0);
public:

    /**
     * @note[short] Windows: 0x100860
     * @note[short] Android
     */
    void getGauntletLevels(int p0);

    /**
     * @note[short] Windows: 0x100100
     * @note[short] Android
     */
    void getGauntlets();

    /**
     * @note[short] Windows: 0x100080
     * @note[short] Android
     */
    void getGauntletsearchKey(int p0);

    /**
     * @note[short] Windows: 0x10fd60
     * @note[short] Android
     */
    void getGJChallenges();

    /**
     * @note[short] Windows: 0x110670
     * @note[short] Android
     */
    void getGJDailyLevelState(GJTimedLevelType p0);

    /**
     * @note[short] Windows: 0x10f140
     * @note[short] Android
     */
    void getGJRewards(int p0);

    /**
     * @note[short] Windows: 0x106790
     * @note[short] Android
     */
    void getGJUserInfo(int p0);

    /**
     * @note[short] Windows: 0xf7550
     * @note[short] Android
     */
    int getHighestLevelOrder();
    
private:
    [[deprecated("GameLevelManager::getIntForKey not implemented")]]
    /**
     * @note[short] Android
     */
    int getIntForKey(char const* p0);
public:

    /**
     * @note[short] Windows: 0x104c40
     * @note[short] Android
     */
    void getLeaderboardScores(char const* p0);
    
private:
    [[deprecated("GameLevelManager::getLengthStr not implemented")]]
    /**
     * @note[short] Android
     */
    gd::string getLengthStr(bool p0, bool p1, bool p2, bool p3, bool p4, bool p5);
public:
    
private:
    [[deprecated("GameLevelManager::getLenKey not implemented")]]
    /**
     * @note[short] Android
     */
    const char * getLenKey(int len);
public:
    
private:
    [[deprecated("GameLevelManager::getLenVal not implemented")]]
    /**
     * @note[short] Android
     */
    bool getLenVal(int p0);
public:

    /**
     * @note[short] Windows: 0x108160
     * @note[short] Android
     */
    void getLevelComments(int ID, int page, int total, int mode, CommentKeyType keytype);

    /**
     * @note[short] Out of line
     */
    const char* getLevelDownloadKey(int levelID, bool isGauntlet);
    
private:
    [[deprecated("GameLevelManager::getLevelKey not implemented")]]
    /**
     * @note[short] Android
     */
    const char* getLevelKey(int levelID);
public:

    /**
     * @note[short] Windows: 0x1053a0
     * @note[short] Android
     */
    void getLevelLeaderboard(GJGameLevel* p0, LevelLeaderboardType p1, LevelLeaderboardMode p2);
    
private:
    [[deprecated("GameLevelManager::getLevelLeaderboardKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getLevelLeaderboardKey(int p0, LevelLeaderboardType p1, LevelLeaderboardMode p2);
public:
    
private:
    [[deprecated("GameLevelManager::getLevelListKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getLevelListKey(int p0);
public:

    /**
     * @note[short] Windows: 0xff800
     * @note[short] Android
     */
    void getLevelLists(GJSearchObject* p0);

    /**
     * @note[short] Windows: 0xfdd10
     * @note[short] Android
     */
    void getLevelSaveData();
    
private:
    [[deprecated("GameLevelManager::getLikeAccountItemKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getLikeAccountItemKey(LikeItemType p0, int p1, bool p2, int p3);
public:
    
private:
    [[deprecated("GameLevelManager::getLikeItemKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getLikeItemKey(LikeItemType p0, int p1, bool p2, int p3);
public:
    
private:
    [[deprecated("GameLevelManager::getLocalLevel not implemented")]]
    /**
     * @note[short] Android
     */
    GJGameLevel* getLocalLevel(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getLocalLevelByName not implemented")]]
    /**
     * @note[short] Android
     */
    GJGameLevel* getLocalLevelByName(gd::string p0);
public:
    
private:
    [[deprecated("GameLevelManager::getAllUsedSongIDs not implemented")]]
    /**
     * @note[short] Android
     */
    GJLevelList* getAllUsedSongIDs(int p0);
public:

    /**
     * @note[short] Windows: 0xf75a0
     * @note[short] Android
     */
    int getLowestLevelOrder();

    /**
     * @note[short] Windows: 0xf4d50
     * @note[short] Android
     */
    GJGameLevel* getMainLevel(int p0, bool p1);
    
private:
    [[deprecated("GameLevelManager::getMapPackKey not implemented")]]
    /**
     * @note[short] Android
     */
    const char* getMapPackKey(int pack);
public:

    /**
     * @note[short] Windows: 0xfe120
     * @note[short] Android
     */
    void getMapPacks(GJSearchObject* p0);
    
private:
    [[deprecated("GameLevelManager::getMessageKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getMessageKey(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getMessagesKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getMessagesKey(bool p0, int p1);
public:
    
private:
    [[deprecated("GameLevelManager::getNews not implemented")]]
    /**
     * @note[short] Android
     */
    void getNews();
public:

    /**
     * @note[short] Windows: 0xf9e00
     * @note[short] Android
     */
    int getNextFreeTemplateID();
    
private:
    [[deprecated("GameLevelManager::getNextLevelName not implemented")]]
    /**
     * @note[short] Android
     */
    gd::string getNextLevelName(gd::string p0);
public:

    /**
     * @note[short] Windows: 0xfccb0
     * @note[short] Android
     */
    void getOnlineLevels(GJSearchObject* p0);

    /**
     * @note[short] Windows: 0xf89e0
     * @note[short] Android
     */
    char const* getPageInfo(char const* p0);
    
private:
    [[deprecated("GameLevelManager::getPostCommentKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getPostCommentKey(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getRateStarsKey not implemented")]]
    /**
     * @note[short] Android
     */
    const char * getRateStarsKey(int key);
public:
    
private:
    [[deprecated("GameLevelManager::getReportKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getReportKey(int p0);
public:

    /**
     * @note[short] Windows: 0xf7f20
     * @note[short] Android
     */
    GJGameLevel* getSavedDailyLevel(int p0);
    
private:
    [[deprecated("GameLevelManager::getSavedDailyLevelFromLevelID not implemented")]]
    /**
     * @note[short] Android
     */
    GJGameLevel* getSavedDailyLevelFromLevelID(int p0);
public:

    /**
     * @note[short] Windows: 0x100a40
     * @note[short] Android
     */
    GJGameLevel* getSavedGauntlet(int p0);

    /**
     * @note[short] Windows: 0xf8060
     * @note[short] Android
     */
    GJGameLevel* getSavedGauntletLevel(int p0);

    /**
     * @note[short] Windows: 0xf7df0
     * @note[short] Android
     */
    GJGameLevel* getSavedLevel(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0xf7e50
     * @note[short] Android
     */
    GJGameLevel* getSavedLevel(int p0);
    
private:
    [[deprecated("GameLevelManager::getSavedLevelList not implemented")]]
    /**
     * @note[short] Android
     */
    GJLevelList* getSavedLevelList(int p0);
public:

    /**
     * @note[short] Windows: 0xf74c0
     * @note[short] Android
     */
    cocos2d::CCArray* getSavedLevelLists(int p0);

    /**
     * @note[short] Windows: 0xf7340
     * @note[short] Android
     */
    cocos2d::CCArray* getSavedLevels(bool p0, int p1);
    
private:
    [[deprecated("GameLevelManager::getSavedMapPack not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSavedMapPack(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getSearchScene not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCScene* getSearchScene(char const* p0);
public:

    /**
     * @note[short] Windows: 0x109250
     * @note[short] Android
     */
    int getSplitIntFromKey(char const* p0, int p1);

    /**
     * @note[short] Windows: 0x1098a0
     * @note[short] Android
     */
    TodoReturn getStoredLevelComments(char const* p0);

    /**
     * @note[short] Windows: 0xf8930
     * @note[short] Android
     */
    cocos2d::CCArray* getStoredOnlineLevels(char const* p0);

    /**
     * @note[short] Windows: 0x10d820
     * @note[short] Android
     */
    cocos2d::CCArray* getStoredUserList(UserListType p0);
    
private:
    [[deprecated("GameLevelManager::getStoredUserMessage not implemented")]]
    /**
     * @note[short] Android
     */
    GJUserMessage* getStoredUserMessage(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getStoredUserMessageReply not implemented")]]
    /**
     * @note[short] Android
     */
    GJUserMessage* getStoredUserMessageReply(int p0);
public:

    /**
     * @note[short] Windows: 0xf8fc0
     * @note[short] Android
     */
    double getTimeLeft(char const* p0, float p1);

    /**
     * @note[short] Windows: 0x105d80
     * @note[short] Android
     */
    void getTopArtists(int page, int total);

    /**
     * @note[short] Out of line
     */
    const char* getTopArtistsKey(int page);
    
private:
    [[deprecated("GameLevelManager::getUploadMessageKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getUploadMessageKey(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getUserInfoKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getUserInfoKey(int p0);
public:

    /**
     * @note[short] Windows: 0x10d2a0
     * @note[short] Android
     */
    void getUserList(UserListType p0);

    /**
     * @note[short] Windows: 0x106ad0
     * @note[short] Android
     */
    void getUserMessages(bool p0, int p1, int p2);

    /**
     * @note[short] Windows: 0x106320
     * @note[short] Android
     */
    void getUsers(GJSearchObject* p0);
    
private:
    [[deprecated("GameLevelManager::gotoLevelPage not implemented")]]
    /**
     * @note[short] Android
     */
    void gotoLevelPage(GJGameLevel* p0);
public:

    /**
     * @note[short] Windows: 0xf3e90
     * @note[short] Android
     */
    void handleIt(bool p0, gd::string p1, gd::string p2, GJHttpType p3);
    
private:
    [[deprecated("GameLevelManager::handleItDelayed not implemented")]]
    /**
     * @note[short] Android
     */
    void handleItDelayed(bool p0, gd::string p1, gd::string p2, GJHttpType p3);
public:
    
private:
    [[deprecated("GameLevelManager::handleItND not implemented")]]
    /**
     * @note[short] Android
     */
    void handleItND(cocos2d::CCNode* p0, void* p1);
public:
    
private:
    [[deprecated("GameLevelManager::hasDailyStateBeenLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    bool hasDailyStateBeenLoaded(GJTimedLevelType p0);
public:
    
private:
    [[deprecated("GameLevelManager::hasDownloadedLevel not implemented")]]
    /**
     * @note[short] Android
     */
    bool hasDownloadedLevel(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::hasDownloadedList not implemented")]]
    /**
     * @note[short] Android
     */
    bool hasDownloadedList(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::hasLikedAccountItem not implemented")]]
    /**
     * @note[short] Android
     */
    bool hasLikedAccountItem(LikeItemType p0, int p1, bool p2, int p3);
public:

    /**
     * @note[short] Windows: 0x10ed90
     * @note[short] Android
     */
    bool hasLikedItem(LikeItemType p0, int p1, bool p2, int p3);

    /**
     * @note[short] Windows: 0x10ed10
     * @note[short] Android
     */
    bool hasLikedItemFullCheck(LikeItemType p0, int p1, int p2);
    
private:
    [[deprecated("GameLevelManager::hasRatedDemon not implemented")]]
    /**
     * @note[short] Android
     */
    bool hasRatedDemon(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::hasRatedLevelStars not implemented")]]
    /**
     * @note[short] Android
     */
    bool hasRatedLevelStars(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::hasReportedLevel not implemented")]]
    /**
     * @note[short] Android
     */
    bool hasReportedLevel(int p0);
public:

    /**
     * @note[short] Windows: 0x107ff0
     * @note[short] Android
     */
    void invalidateMessages(bool p0, bool p1);

    /**
     * @note[short] Windows: 0x10db50
     * @note[short] Android
     */
    void invalidateRequests(bool p0, bool p1);
    
private:
    [[deprecated("GameLevelManager::invalidateUserList not implemented")]]
    /**
     * @note[short] Android
     */
    void invalidateUserList(UserListType p0, bool p1);
public:

    /**
     * @note[short] Windows: 0xf8b50
     * @note[short] Android
     */
    bool isDLActive(char const* tag);

    /**
     * @note[short] Windows: 0xf9910
     * @note[short] Android
     */
    bool isFollowingUser(int p0);

    /**
     * @note[short] Windows: 0xf8e90
     * @note[short] Android
     */
    bool isTimeValid(char const* p0, float p1);
    
private:
    [[deprecated("GameLevelManager::isUpdateValid not implemented")]]
    /**
     * @note[short] Android
     */
    bool isUpdateValid(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::itemIDFromLikeKey not implemented")]]
    /**
     * @note[short] Android
     */
    int itemIDFromLikeKey(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::keyHasTimer not implemented")]]
    /**
     * @note[short] Android
     */
    bool keyHasTimer(char const* p0);
public:

    /**
     * @note[short] Windows: 0x109430
     * @note[short] Android
     */
    int levelIDFromCommentKey(char const* p0);
    
private:
    [[deprecated("GameLevelManager::levelIDFromPostCommentKey not implemented")]]
    /**
     * @note[short] Android
     */
    int levelIDFromPostCommentKey(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::likeFromLikeKey not implemented")]]
    /**
     * @note[short] Android
     */
    int likeFromLikeKey(char const* p0);
public:

    /**
     * @note[short] Windows: 0x10e100
     * @note[short] Android
     */
    void likeItem(LikeItemType p0, int p1, bool p2, int p3);

    /**
     * @note[short] Windows: 0xf9210
     * @note[short] Android
     */
    void limitSavedLevels();

    /**
     * @note[short] Windows: 0xf8d70
     * @note[short] Android
     */
    void makeTimeStamp(char const* p0);

    /**
     * @note[short] Windows: 0x10eba0
     * @note[short] Android
     */
    void markItemAsLiked(LikeItemType p0, int p1, bool p2, int p3);

    /**
     * @note[short] Windows: 0x101b40
     * @note[short] Android
     */
    void markLevelAsDownloaded(int p0);
    
private:
    [[deprecated("GameLevelManager::markLevelAsRatedDemon not implemented")]]
    /**
     * @note[short] Android
     */
    void markLevelAsRatedDemon(int p0);
public:

    /**
     * @note[short] Windows: 0x102590
     * @note[short] Android
     */
    void markLevelAsRatedStars(int p0);
    
private:
    [[deprecated("GameLevelManager::markLevelAsReported not implemented")]]
    /**
     * @note[short] Android
     */
    void markLevelAsReported(int p0);
public:

    /**
     * @note[short] Out of line
     */
    void markListAsDownloaded(int id);
    
private:
    [[deprecated("GameLevelManager::messageWasRemoved not implemented")]]
    /**
     * @note[short] Android
     */
    void messageWasRemoved(int p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x10c080
     * @note[short] Android
     */
    void onAcceptFriendRequestCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x102db0
     * @note[short] Android
     */
    void onBanUserCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x10cc20
     * @note[short] Android
     */
    void onBlockUserCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x10ac70
     * @note[short] Android
     */
    void onDeleteCommentCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x10bc60
     * @note[short] Android
     */
    void onDeleteFriendRequestCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x102c10
     * @note[short] Android
     */
    void onDeleteServerLevelCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0xff690
     * @note[short] Android
     */
    void onDeleteServerLevelListCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x107c80
     * @note[short] Android
     */
    void onDeleteUserMessagesCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x101090
     * @note[short] Android
     */
    void onDownloadLevelCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x1071e0
     * @note[short] Android
     */
    void onDownloadUserMessageCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x108890
     * @note[short] Android
     */
    void onGetAccountCommentsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x10afb0
     * @note[short] Android
     */
    void onGetFriendRequestsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x100260
     * @note[short] Android
     */
    void onGetGauntletsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x10ffc0
     * @note[short] Android
     */
    void onGetGJChallengesCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x110870
     * @note[short] Android
     */
    void onGetGJDailyLevelStateCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x10f6d0
     * @note[short] Android
     */
    void onGetGJRewardsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x1068f0
     * @note[short] Android
     */
    void onGetGJUserInfoCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x105050
     * @note[short] Android
     */
    void onGetLeaderboardScoresCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x108440
     * @note[short] Android
     */
    void onGetLevelCommentsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x105bf0
     * @note[short] Android
     */
    void onGetLevelLeaderboardCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0xff9f0
     * @note[short] Android
     */
    void onGetLevelListsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0xfde50
     * @note[short] Android
     */
    void onGetLevelSaveDataCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0xfe280
     * @note[short] Android
     */
    void onGetMapPacksCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x108120
     * @note[short] Android
     */
    void onGetNewsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0xfd470
     * @note[short] Android
     */
    void onGetOnlineLevelsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x105f70
     * @note[short] Android
     */
    void onGetTopArtistsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x10d3f0
     * @note[short] Android
     */
    void onGetUserListCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x106c50
     * @note[short] Android
     */
    void onGetUserMessagesCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x1064b0
     * @note[short] Android
     */
    void onGetUsersCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x10e610
     * @note[short] Android
     */
    void onLikeItemCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0xf3d70
     * @note[short] Android
     */
    void onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);

    /**
     * @note[short] Windows: 0x1035a0
     * @note[short] Android
     */
    void onRateDemonCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x102410
     * @note[short] Android
     */
    void onRateStarsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x10c4a0
     * @note[short] Android
     */
    void onReadFriendRequestCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x10c7a0
     * @note[short] Android
     */
    void onRemoveFriendCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x111410
     * @note[short] Android
     */
    void onReportLevelCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x10e9c0
     * @note[short] Android
     */
    void onRequestUserAccessCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x110d90
     * @note[short] Android
     */
    void onRestoreItemsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x103a00
     * @note[short] Android
     */
    void onSetLevelFeaturedCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x103860
     * @note[short] Android
     */
    void onSetLevelStarsCompleted(gd::string response, gd::string tag);
    
private:
    [[deprecated("GameLevelManager::onSubmitUserInfoCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onSubmitUserInfoCompleted(gd::string response, gd::string tag);
public:

    /**
     * @note[short] Windows: 0x1030d0
     * @note[short] Android
     */
    void onSuggestLevelStarsCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x10d060
     * @note[short] Android
     */
    void onUnblockUserCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x10ded0
     * @note[short] Android
     */
    void onUpdateDescriptionCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x101eb0
     * @note[short] Android
     */
    void onUpdateLevelCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x104a00
     * @note[short] Android
     */
    void onUpdateUserScoreCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x10a160
     * @note[short] Android
     */
    void onUploadCommentCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x10b6e0
     * @note[short] Android
     */
    void onUploadFriendRequestCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0xfc3b0
     * @note[short] Android
     */
    void onUploadLevelCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0xff320
     * @note[short] Android
     */
    void onUploadLevelListCompleted(gd::string response, gd::string tag);

    /**
     * @note[short] Windows: 0x1076a0
     * @note[short] Android
     */
    void onUploadUserMessageCompleted(gd::string response, gd::string tag);
    
private:
    [[deprecated("GameLevelManager::pageFromCommentKey not implemented")]]
    /**
     * @note[short] Android
     */
    int pageFromCommentKey(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::parseRestoreData not implemented")]]
    /**
     * @note[short] Android
     */
    void parseRestoreData(gd::string p0);
public:

    /**
     * @note[short] Windows: 0xf3a80
     * @note[short] Android
     */
    void performNetworkTest();

    /**
     * @note[short] Windows: 0xf3bf0
     * @note[short] Android
     */
    void ProcessHttpRequest(gd::string endpoint, gd::string params, gd::string tag, GJHttpType httpType);

    /**
     * @note[short] Windows: 0x101160
     * @note[short] Android
     */
    void processOnDownloadLevelCompleted(gd::string p0, gd::string p1, bool p2);
    
private:
    [[deprecated("GameLevelManager::purgeUnusedLevels not implemented")]]
    /**
     * @note[short] Android
     */
    void purgeUnusedLevels();
public:

    /**
     * @note[short] Windows: 0x103330
     * @note[short] Android
     */
    void rateDemon(int p0, int p1, bool p2);

    /**
     * @note[short] Windows: 0x101f90
     * @note[short] Android
     */
    void rateStars(int p0, int p1);

    /**
     * @note[short] Windows: 0x10c2a0
     * @note[short] Android
     */
    void readFriendRequest(int p0);
    
private:
    [[deprecated("GameLevelManager::removeDelimiterChars not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeDelimiterChars(gd::string p0, bool p1);
public:

    /**
     * @note[short] Windows: 0xf8cc0
     * @note[short] Android
     */
    void removeDLFromActive(char const* p0);

    /**
     * @note[short] Windows: 0x10c590
     * @note[short] Android
     */
    void removeFriend(int p0);
    
private:
    [[deprecated("GameLevelManager::removeLevelDownloadedKeysFromDict not implemented")]]
    /**
     * @note[short] Android
     */
    void removeLevelDownloadedKeysFromDict(cocos2d::CCDictionary* p0);
public:
    
private:
    [[deprecated("GameLevelManager::removeUserFromList not implemented")]]
    /**
     * @note[short] Android
     */
    void removeUserFromList(int p0, UserListType p1);
public:

    /**
     * @note[short] Windows: 0x111310
     * @note[short] Android
     */
    void reportLevel(int p0);

    /**
     * @note[short] Windows: 0x10e7c0
     * @note[short] Android
     */
    void requestUserAccess();

    /**
     * @note[short] Windows: 0x109030
     * @note[short] Android
     */
    void resetAccountComments(int p0);
    
private:
    [[deprecated("GameLevelManager::resetAllTimers not implemented")]]
    /**
     * @note[short] Android
     */
    void resetAllTimers();
public:

    /**
     * @note[short] Windows: 0x10a6e0
     * @note[short] Android
     */
    void resetCommentTimersForLevelID(int p0, CommentKeyType p1);

    /**
     * @note[short] Windows: 0x110d30
     * @note[short] Android
     */
    void resetDailyLevelState(GJTimedLevelType p0);
    
private:
    [[deprecated("GameLevelManager::resetGauntlets not implemented")]]
    /**
     * @note[short] Android
     */
    void resetGauntlets();
public:
	inline void resetStoredUserInfo(int id) {
        m_storedUserInfo->removeObjectForKey(id);
    }
    
private:
    [[deprecated("GameLevelManager::resetStoredUserList not implemented")]]
    /**
     * @note[short] Android
     */
    void resetStoredUserList(UserListType p0);
public:

    /**
     * @note[short] Windows: 0xf9130
     * @note[short] Android
     */
    void resetTimerForKey(char const* p0);

    /**
     * @note[short] Windows: 0x111fa0
     * @note[short] Android
     */
    static cocos2d::CCDictionary* responseToDict(gd::string p0, bool p1);
    
private:
    [[deprecated("GameLevelManager::restoreItems not implemented")]]
    /**
     * @note[short] Android
     */
    void restoreItems();
public:
    
private:
    [[deprecated("GameLevelManager::saveFetchedLevelLists not implemented")]]
    /**
     * @note[short] Android
     */
    void saveFetchedLevelLists(cocos2d::CCArray* p0);
public:

    /**
     * @note[short] Windows: 0xf69d0
     * @note[short] Android
     */
    void saveFetchedLevels(cocos2d::CCArray* p0);
    
private:
    [[deprecated("GameLevelManager::saveFetchedMapPacks not implemented")]]
    /**
     * @note[short] Android
     */
    void saveFetchedMapPacks(cocos2d::CCArray* p0);
public:

    /**
     * @note[short] Windows: 0x100b20
     * @note[short] Android
     */
    void saveGauntlet(GJMapPack* p0);

    /**
     * @note[short] Windows: 0xf8130
     * @note[short] Android
     */
    void saveLevel(GJGameLevel* p0);
    
private:
    [[deprecated("GameLevelManager::saveLevelList not implemented")]]
    /**
     * @note[short] Android
     */
    void saveLevelList(GJLevelList* p0);
public:
    
private:
    [[deprecated("GameLevelManager::saveLocalScore not implemented")]]
    /**
     * @note[short] Android
     */
    void saveLocalScore(int p0, int p1, int p2);
public:
    
private:
    [[deprecated("GameLevelManager::saveMapPack not implemented")]]
    /**
     * @note[short] Android
     */
    void saveMapPack(GJMapPack* p0);
public:
    
private:
    [[deprecated("GameLevelManager::setActiveSmartTemplate not implemented")]]
    /**
     * @note[short] Android
     */
    void setActiveSmartTemplate(GJSmartTemplate* p0);
public:
    
private:
    [[deprecated("GameLevelManager::setBoolForKey not implemented")]]
    /**
     * @note[short] Android
     */
    void setBoolForKey(bool p0, char const* p1);
public:
    
private:
    [[deprecated("GameLevelManager::setDiffVal not implemented")]]
    /**
     * @note[short] Android
     */
    void setDiffVal(int p0, bool p1);
public:
    
private:
    [[deprecated("GameLevelManager::setFolderName not implemented")]]
    /**
     * @note[short] Android
     */
    void setFolderName(int p0, gd::string p1, bool p2);
public:
    
private:
    [[deprecated("GameLevelManager::setIntForKey not implemented")]]
    /**
     * @note[short] Android
     */
    void setIntForKey(int p0, char const* p1);
public:
    
private:
    [[deprecated("GameLevelManager::setLenVal not implemented")]]
    /**
     * @note[short] Android
     */
    void setLenVal(int p0, bool p1);
public:
    
private:
    [[deprecated("GameLevelManager::setLevelFeatured not implemented")]]
    /**
     * @note[short] Android
     */
    void setLevelFeatured(int p0, int p1, bool p2);
public:
    
private:
    [[deprecated("GameLevelManager::setLevelStars not implemented")]]
    /**
     * @note[short] Android
     */
    void setLevelStars(int p0, int p1, bool p2);
public:
    
private:
    [[deprecated("GameLevelManager::specialFromLikeKey not implemented")]]
    /**
     * @note[short] Android
     */
    int specialFromLikeKey(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::storeCommentsResult not implemented")]]
    /**
     * @note[short] Android
     */
    void storeCommentsResult(cocos2d::CCArray* p0, gd::string p1, char const* p2);
public:

    /**
     * @note[short] Windows: 0x110bc0
     * @note[short] Android
     */
    void storeDailyLevelState(int p0, int p1, GJTimedLevelType p2);
    
private:
    [[deprecated("GameLevelManager::storeFriendRequest not implemented")]]
    /**
     * @note[short] Android
     */
    void storeFriendRequest(GJFriendRequest* p0);
public:

    /**
     * @note[short] Windows: 0xf8810
     * @note[short] Android
     */
    void storeSearchResult(cocos2d::CCArray* levels, gd::string pageInfo, char const* searchKey);
    
private:
    [[deprecated("GameLevelManager::storeUserInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void storeUserInfo(GJUserScore* p0);
public:
    
private:
    [[deprecated("GameLevelManager::storeUserMessage not implemented")]]
    /**
     * @note[short] Android
     */
    void storeUserMessage(GJUserMessage* p0);
public:
    
private:
    [[deprecated("GameLevelManager::storeUserMessageReply not implemented")]]
    /**
     * @note[short] Android
     */
    void storeUserMessageReply(int p0, GJUserMessage* p1);
public:

    /**
     * @note[short] Windows: 0xf6140
     * @note[short] Android
     */
    void storeUserName(int userID, int accountID, gd::string userName);
    
private:
    [[deprecated("GameLevelManager::storeUserNames not implemented")]]
    /**
     * @note[short] Android
     */
    void storeUserNames(gd::string usernameString);
public:

    /**
     * @note[short] Windows: 0x110f40
     * @note[short] Android
     */
    void submitUserInfo();

    /**
     * @note[short] Windows: 0x102ec0
     * @note[short] Android
     */
    void suggestLevelStars(int p0, int p1, int p2);

    /**
     * @note[short] Windows: 0xf6370
     * @note[short] Android
     */
    gd::string tryGetUsername(int p0);
    
private:
    [[deprecated("GameLevelManager::typeFromCommentKey not implemented")]]
    /**
     * @note[short] Android
     */
    CommentType typeFromCommentKey(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::typeFromLikeKey not implemented")]]
    /**
     * @note[short] Android
     */
    LikeItemType typeFromLikeKey(char const* p0);
public:

    /**
     * @note[short] Windows: 0x10ce50
     * @note[short] Android
     */
    void unblockUser(int p0);

    /**
     * @note[short] Windows: 0xf9b10
     * @note[short] Android
     */
    void unfollowUser(int p0);

    /**
     * @note[short] Windows: 0x10dc80
     * @note[short] Android
     */
    void updateDescription(int p0, gd::string p1);

    /**
     * @note[short] Windows: 0x101d40
     * @note[short] Android
     */
    void updateLevel(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0xf75f0
     * @note[short] Android
     */
    void updateLevelOrders();

    /**
     * @note[short] Windows: 0xf66c0
     * @note[short] Android
     */
    void updateLevelRewards(GJGameLevel* p0);
    
private:
    [[deprecated("GameLevelManager::updateSavedLevelList not implemented")]]
    /**
     * @note[short] Android
     */
    void updateSavedLevelList(GJLevelList* p0);
public:
    
private:
    [[deprecated("GameLevelManager::updateUsernames not implemented")]]
    /**
     * @note[short] Android
     */
    void updateUsernames();
public:

    /**
     * @note[short] Windows: 0x103ab0
     * @note[short] Android
     */
    void updateUserScore();

    /**
     * @note[short] Windows: 0x1099d0
     * @note[short] Android
     */
    void uploadAccountComment(gd::string p0);

    /**
     * @note[short] Windows: 0x109a70
     * @note[short] Android
     */
    void uploadComment(gd::string p0, CommentType p1, int p2, int p3);

    /**
     * @note[short] Windows: 0x10b440
     * @note[short] Android
     */
    void uploadFriendRequest(int p0, gd::string p1);

    /**
     * @note[short] Windows: 0xfb760
     * @note[short] Android
     */
    void uploadLevel(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x109940
     * @note[short] Android
     */
    void uploadLevelComment(int p0, gd::string p1, int p2);

    /**
     * @note[short] Windows: 0xfeac0
     * @note[short] Android
     */
    void uploadLevelList(GJLevelList* p0);

    /**
     * @note[short] Windows: 0x107370
     * @note[short] Android
     */
    void uploadUserMessage(int p0, gd::string p1, gd::string p2);
    
private:
    [[deprecated("GameLevelManager::userIDForAccountID not implemented")]]
    /**
     * @note[short] Android
     */
    int userIDForAccountID(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::userInfoForAccountID not implemented")]]
    /**
     * @note[short] Android
     */
    GJUserScore* userInfoForAccountID(int p0);
public:

    /**
     * @note[short] Windows: 0xf6290
     * @note[short] Android
     */
    gd::string userNameForUserID(int p0);

    /**
     * @note[short] Windows: 0xf6510
     * @note[short] Android
     */
    void verifyLevelState(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0xfca10
     * @note[short] Android
     */
    gd::string writeSpecialFilters(GJSearchObject* p0);

    /**
     * @note[short] Windows: 0xf4c40
     * @note[short] Android
     */
    virtual bool init();
    GEODE_PAD(8);
    cocos2d::CCDictionary* m_mainLevels;
    cocos2d::CCDictionary* m_searchFilters;
    cocos2d::CCDictionary* m_onlineLevels;
    cocos2d::CCDictionary* m_unkDict;
    cocos2d::CCDictionary* m_followedCreators;
    cocos2d::CCDictionary* m_GLM21;
    cocos2d::CCDictionary* m_downloadedLevels;
    cocos2d::CCDictionary* m_likedLevels;
    cocos2d::CCDictionary* m_ratedLevels;
    cocos2d::CCDictionary* m_ratedDemons;
    cocos2d::CCDictionary* m_reportedLevels;
    cocos2d::CCDictionary* m_onlineFolders;
    cocos2d::CCDictionary* m_localLevelsFolders;
    cocos2d::CCDictionary* m_dailyLevels;
    int m_dailyTimeLeft;
    int m_dailyID;
    int m_dailyIDUnk;
    int m_weeklyTimeLeft;
    int m_weeklyID;
    int m_weeklyIDUnk;
    int m_eventTimeLeft;
    int m_eventID;
    int m_eventIDUnk;
    cocos2d::CCDictionary* m_gauntletLevels;
    gd::map<gd::string, bool> m_availableFilters;
    cocos2d::CCDictionary* m_timerDict;
    cocos2d::CCDictionary* m_knownUsers;
    cocos2d::CCDictionary* m_accountIDtoUserIDDict;
    cocos2d::CCDictionary* m_userIDtoAccountIDDict;
    cocos2d::CCDictionary* m_storedLevels;
    cocos2d::CCDictionary* m_pageInfo;
    cocos2d::CCDictionary* m_unkDict20;
    cocos2d::CCDictionary* m_savedPacks;
    cocos2d::CCDictionary* m_savedGauntlets;
    cocos2d::CCDictionary* m_downloadObjects;
    cocos2d::CCDictionary* m_unkDict24;
    cocos2d::CCDictionary* m_storedUserInfo;
    cocos2d::CCDictionary* m_friendRequests;
    cocos2d::CCDictionary* m_userMessages;
    cocos2d::CCDictionary* m_userReplies;
    gd::string m_unkStr1;
    gd::string m_unkStr2;
    LeaderboardState m_leaderboardState;
    bool m_unkEditLevelLayerOnBack;
    LevelManagerDelegate* m_levelManagerDelegate;
    LevelDownloadDelegate* m_levelDownloadDelegate;
    LevelCommentDelegate* m_levelCommentDelegate;
    CommentUploadDelegate* m_commentUploadDelegate;
    LevelUploadDelegate* m_levelUploadDelegate;
    ListUploadDelegate* m_listUploadDelegate;
    LevelUpdateDelegate* m_levelUpdateDelegate;
    LeaderboardManagerDelegate* m_leaderboardManagerDelegate;
    LevelDeleteDelegate* m_levelDeleteDelegate;
    LevelListDeleteDelegate* m_levelListDeleteDelegate;
    UserInfoDelegate* m_userInfoDelegate;
    void* m_unkDelegate;
    UserListDelegate* m_userListDelegate;
    FriendRequestDelegate* m_friendRequestDelegate;
    MessageListDelegate* m_messageListDelegate;
    DownloadMessageDelegate* m_downloadMessageDelegate;
    UploadMessageDelegate* m_uploadMessageDelegate;
    GJRewardDelegate* m_GJRewardDelegate;
    GJChallengeDelegate* m_GJChallengeDelegate;
    GJDailyLevelDelegate* m_GJDailyLevelDelegate;
    OnlineListDelegate* m_onlineListDelegate;
    int m_unkDownload;
    GEODE_PAD(4);
    gd::string m_unkStr3;
    cocos2d::CCString* m_unkStr4;
};
