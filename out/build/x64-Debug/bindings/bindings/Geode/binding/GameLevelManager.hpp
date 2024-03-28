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
    TodoReturn acceptFriendRequest(int p0, int p1);
    
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
    TodoReturn areGauntletsLoaded();
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
    TodoReturn blockUser(int p0);

    /**
     * @note[short] Windows: 0xf96a0
     * @note[short] Android
     */
    TodoReturn cleanupDailyLevels();
    
private:
    [[deprecated("GameLevelManager::createAndGetAccountComments not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createAndGetAccountComments(gd::string p0, int p1);
public:
    
private:
    [[deprecated("GameLevelManager::createAndGetCommentsFull not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createAndGetCommentsFull(gd::string p0, int p1, bool p2);
public:
    
private:
    [[deprecated("GameLevelManager::createAndGetLevelComments not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createAndGetLevelComments(gd::string p0, int p1);
public:
    
private:
    [[deprecated("GameLevelManager::createAndGetLevelLists not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createAndGetLevelLists(gd::string p0);
public:
    
private:
    [[deprecated("GameLevelManager::createAndGetLevels not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createAndGetLevels(gd::string p0);
public:

    /**
     * @note[short] Windows: 0xf6e60
     * @note[short] Android
     */
    TodoReturn createAndGetMapPacks(gd::string p0);
    
private:
    [[deprecated("GameLevelManager::createAndGetScores not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createAndGetScores(gd::string p0, GJScoreType p1);
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
    TodoReturn createNewLevelList();

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
    TodoReturn createSmartTemplate();
public:
    
private:
    [[deprecated("GameLevelManager::dataLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GameLevelManager::deleteAccountComment not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deleteAccountComment(int p0, int p1);
public:

    /**
     * @note[short] Windows: 0x10a920
     * @note[short] Android
     */
    TodoReturn deleteComment(int p0, CommentType p1, int p2);

    /**
     * @note[short] Windows: 0x10b8c0
     * @note[short] Android
     */
    TodoReturn deleteFriendRequests(int p0, cocos2d::CCArray* p1, bool p2);

    /**
     * @note[short] Windows: 0xf58b0
     * @note[short] Android
     */
    TodoReturn deleteLevel(GJGameLevel* p0);
    
private:
    [[deprecated("GameLevelManager::deleteLevelComment not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deleteLevelComment(int p0, int p1);
public:
    
private:
    [[deprecated("GameLevelManager::deleteLevelList not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deleteLevelList(GJLevelList* p0);
public:
    
private:
    [[deprecated("GameLevelManager::deleteSentFriendRequest not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deleteSentFriendRequest(int p0);
public:

    /**
     * @note[short] Windows: 0x102990
     * @note[short] Android
     */
    TodoReturn deleteServerLevel(int p0);

    /**
     * @note[short] Windows: 0xff440
     * @note[short] Android
     */
    TodoReturn deleteServerLevelList(int p0);
    
private:
    [[deprecated("GameLevelManager::deleteSmartTemplate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deleteSmartTemplate(GJSmartTemplate* p0);
public:

    /**
     * @note[short] Windows: 0x107880
     * @note[short] Android
     */
    TodoReturn deleteUserMessages(GJUserMessage* message, cocos2d::CCArray* messages, bool isSender);

    /**
     * @note[short] Windows: 0x100c20
     * @note[short] Android
     */
    TodoReturn downloadLevel(int p0, bool p1);

    /**
     * @note[short] Windows: 0x107070
     * @note[short] Android
     */
    TodoReturn downloadUserMessage(int p0, bool p1);

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
    TodoReturn followUser(int p0);
    
private:
    [[deprecated("GameLevelManager::friendRequestFromAccountID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn friendRequestFromAccountID(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::friendRequestWasRemoved not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn friendRequestWasRemoved(int p0, bool p1);
public:
    
private:
    [[deprecated("GameLevelManager::getAccountCommentKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAccountCommentKey(int p0, int p1);
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
    TodoReturn getActiveDailyID(GJTimedLevelType p0);
public:
    
private:
    [[deprecated("GameLevelManager::getActiveSmartTemplate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getActiveSmartTemplate();
public:
    
private:
    [[deprecated("GameLevelManager::getAllSmartTemplates not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAllSmartTemplates();
public:
    
private:
    [[deprecated("GameLevelManager::getAllUsedSongIDs not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAllUsedSongIDs();
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
    TodoReturn getDailyID(GJTimedLevelType p0);
public:
    
private:
    [[deprecated("GameLevelManager::getDailyTimer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getDailyTimer(GJTimedLevelType p0);
public:
    
private:
    [[deprecated("GameLevelManager::getDeleteCommentKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getDeleteCommentKey(int p0, int p1, int p2);
public:
    
private:
    [[deprecated("GameLevelManager::getDeleteMessageKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getDeleteMessageKey(int p0, bool p1);
public:
    
private:
    [[deprecated("GameLevelManager::getDescKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getDescKey(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getDifficultyStr not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getDifficultyStr(bool p0, bool p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7);
public:
    
private:
    [[deprecated("GameLevelManager::getDiffKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getDiffKey(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getDiffVal not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getDiffVal(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getFolderName not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getFolderName(int p0, bool p1);
public:
    
private:
    [[deprecated("GameLevelManager::getFriendRequestKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getFriendRequestKey(bool p0, int p1);
public:

    /**
     * @note[short] Windows: 0x10ae30
     * @note[short] Android
     */
    TodoReturn getFriendRequests(bool p0, int p1, int p2);
    
private:
    [[deprecated("GameLevelManager::getGauntletKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getGauntletKey(int p0);
public:

    /**
     * @note[short] Windows: 0x100860
     * @note[short] Android
     */
    TodoReturn getGauntletLevels(int p0);

    /**
     * @note[short] Windows: 0x100100
     * @note[short] Android
     */
    TodoReturn getGauntlets();

    /**
     * @note[short] Windows: 0x100080
     * @note[short] Android
     */
    TodoReturn getGauntletSearchKey(int p0);

    /**
     * @note[short] Windows: 0x10fd60
     * @note[short] Android
     */
    TodoReturn getGJChallenges();

    /**
     * @note[short] Windows: 0x110670
     * @note[short] Android
     */
    TodoReturn getGJDailyLevelState(GJTimedLevelType p0);

    /**
     * @note[short] Windows: 0x10f140
     * @note[short] Android
     */
    void getGJRewards(int p0);

    /**
     * @note[short] Windows: 0x106790
     * @note[short] Android
     */
    TodoReturn getGJUserInfo(int p0);

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
    TodoReturn getIntForKey(char const* p0);
public:

    /**
     * @note[short] Windows: 0x104c40
     * @note[short] Android
     */
    TodoReturn getLeaderboardScores(char const* p0);
    
private:
    [[deprecated("GameLevelManager::getLengthStr not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getLengthStr(bool p0, bool p1, bool p2, bool p3, bool p4, bool p5);
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
    TodoReturn getLenVal(int p0);
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
    TodoReturn getLevelLeaderboardKey(int p0, LevelLeaderboardType p1, LevelLeaderboardMode p2);
public:
    
private:
    [[deprecated("GameLevelManager::getLevelListKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getLevelListKey(int p0);
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
    TodoReturn getLevelSaveData();
    
private:
    [[deprecated("GameLevelManager::getLikeAccountItemKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getLikeAccountItemKey(LikeItemType p0, int p1, bool p2, int p3);
public:
    
private:
    [[deprecated("GameLevelManager::getLikeItemKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getLikeItemKey(LikeItemType p0, int p1, bool p2, int p3);
public:
    
private:
    [[deprecated("GameLevelManager::getLocalLevel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getLocalLevel(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getLocalLevelByName not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getLocalLevelByName(gd::string p0);
public:
    
private:
    [[deprecated("GameLevelManager::getLocalLevelList not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getLocalLevelList(int p0);
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
    TodoReturn getMapPacks(GJSearchObject* p0);
    
private:
    [[deprecated("GameLevelManager::getMessageKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMessageKey(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getMessagesKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMessagesKey(bool p0, int p1);
public:
    
private:
    [[deprecated("GameLevelManager::getNews not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getNews();
public:

    /**
     * @note[short] Windows: 0xf9e00
     * @note[short] Android
     */
    TodoReturn getNextFreeTemplateID();
    
private:
    [[deprecated("GameLevelManager::getNextLevelName not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getNextLevelName(gd::string p0);
public:

    /**
     * @note[short] Windows: 0xfccb0
     * @note[short] Android
     */
    TodoReturn getOnlineLevels(GJSearchObject* p0);

    /**
     * @note[short] Windows: 0xf89e0
     * @note[short] Android
     */
    TodoReturn getPageInfo(char const* p0);
    
private:
    [[deprecated("GameLevelManager::getPostCommentKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPostCommentKey(int p0);
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
    TodoReturn getReportKey(int p0);
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
    TodoReturn getSavedLevelList(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getSavedLevelLists not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSavedLevelLists(int p0);
public:

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
    TodoReturn getSearchScene(char const* p0);
public:

    /**
     * @note[short] Windows: 0x109250
     * @note[short] Android
     */
    TodoReturn getSplitIntFromKey(char const* p0, int p1);

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
    TodoReturn getStoredUserList(UserListType p0);
    
private:
    [[deprecated("GameLevelManager::getStoredUserMessage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getStoredUserMessage(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getStoredUserMessageReply not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getStoredUserMessageReply(int p0);
public:

    /**
     * @note[short] Windows: 0xf8fc0
     * @note[short] Android
     */
    TodoReturn getTimeLeft(char const* p0, float p1);

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
    TodoReturn getUploadMessageKey(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getUserInfoKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getUserInfoKey(int p0);
public:

    /**
     * @note[short] Windows: 0x10d2a0
     * @note[short] Android
     */
    TodoReturn getUserList(UserListType p0);

    /**
     * @note[short] Windows: 0x106ad0
     * @note[short] Android
     */
    TodoReturn getUserMessages(bool p0, int p1, int p2);

    /**
     * @note[short] Windows: 0x106320
     * @note[short] Android
     */
    TodoReturn getUsers(GJSearchObject* p0);
    
private:
    [[deprecated("GameLevelManager::gotoLevelPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn gotoLevelPage(GJGameLevel* p0);
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
    TodoReturn handleItDelayed(bool p0, gd::string p1, gd::string p2, GJHttpType p3);
public:
    
private:
    [[deprecated("GameLevelManager::handleItND not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn handleItND(cocos2d::CCNode* p0, void* p1);
public:
    
private:
    [[deprecated("GameLevelManager::hasDailyStateBeenLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hasDailyStateBeenLoaded(GJTimedLevelType p0);
public:
    
private:
    [[deprecated("GameLevelManager::hasDownloadedLevel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hasDownloadedLevel(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::hasDownloadedList not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hasDownloadedList(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::hasLikedAccountItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hasLikedAccountItem(LikeItemType p0, int p1, bool p2, int p3);
public:

    /**
     * @note[short] Windows: 0x10ed90
     * @note[short] Android
     */
    TodoReturn hasLikedItem(LikeItemType p0, int p1, bool p2, int p3);

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
    TodoReturn hasRatedDemon(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::hasRatedLevelStars not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hasRatedLevelStars(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::hasReportedLevel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hasReportedLevel(int p0);
public:

    /**
     * @note[short] Windows: 0x107ff0
     * @note[short] Android
     */
    TodoReturn invalidateMessages(bool p0, bool p1);

    /**
     * @note[short] Windows: 0x10db50
     * @note[short] Android
     */
    TodoReturn invalidateRequests(bool p0, bool p1);
    
private:
    [[deprecated("GameLevelManager::invalidateUserList not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn invalidateUserList(UserListType p0, bool p1);
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
    TodoReturn itemIDFromLikeKey(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::keyHasTimer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn keyHasTimer(char const* p0);
public:

    /**
     * @note[short] Windows: 0x109430
     * @note[short] Android
     */
    TodoReturn levelIDFromCommentKey(char const* p0);
    
private:
    [[deprecated("GameLevelManager::levelIDFromPostCommentKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn levelIDFromPostCommentKey(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::likeFromLikeKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn likeFromLikeKey(char const* p0);
public:

    /**
     * @note[short] Windows: 0x10e100
     * @note[short] Android
     */
    TodoReturn likeItem(LikeItemType p0, int p1, bool p2, int p3);

    /**
     * @note[short] Windows: 0xf9210
     * @note[short] Android
     */
    TodoReturn limitSavedLevels();

    /**
     * @note[short] Windows: 0xf8d70
     * @note[short] Android
     */
    TodoReturn makeTimeStamp(char const* p0);

    /**
     * @note[short] Windows: 0x10eba0
     * @note[short] Android
     */
    TodoReturn markItemAsLiked(LikeItemType p0, int p1, bool p2, int p3);
    
private:
    [[deprecated("GameLevelManager::markLevelAsDownloaded not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn markLevelAsDownloaded(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::markLevelAsRatedDemon not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn markLevelAsRatedDemon(int p0);
public:

    /**
     * @note[short] Windows: 0x102590
     * @note[short] Android
     */
    TodoReturn markLevelAsRatedStars(int p0);
    
private:
    [[deprecated("GameLevelManager::markLevelAsReported not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn markLevelAsReported(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::markListAsDownloaded not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn markListAsDownloaded(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::messageWasRemoved not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn messageWasRemoved(int p0, bool p1);
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
    TodoReturn pageFromCommentKey(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::parseRestoreData not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn parseRestoreData(gd::string p0);
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
    TodoReturn purgeUnusedLevels();
public:

    /**
     * @note[short] Windows: 0x103330
     * @note[short] Android
     */
    TodoReturn rateDemon(int p0, int p1, bool p2);

    /**
     * @note[short] Windows: 0x101f90
     * @note[short] Android
     */
    TodoReturn rateStars(int p0, int p1);

    /**
     * @note[short] Windows: 0x10c2a0
     * @note[short] Android
     */
    TodoReturn readFriendRequest(int p0);
    
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
    TodoReturn removeDLFromActive(char const* p0);

    /**
     * @note[short] Windows: 0x10c590
     * @note[short] Android
     */
    TodoReturn removeFriend(int p0);
    
private:
    [[deprecated("GameLevelManager::removeLevelDownloadedKeysFromDict not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeLevelDownloadedKeysFromDict(cocos2d::CCDictionary* p0);
public:
    
private:
    [[deprecated("GameLevelManager::removeUserFromList not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeUserFromList(int p0, UserListType p1);
public:

    /**
     * @note[short] Windows: 0x111310
     * @note[short] Android
     */
    TodoReturn reportLevel(int p0);

    /**
     * @note[short] Windows: 0x10e7c0
     * @note[short] Android
     */
    TodoReturn requestUserAccess();

    /**
     * @note[short] Windows: 0x109030
     * @note[short] Android
     */
    TodoReturn resetAccountComments(int p0);
    
private:
    [[deprecated("GameLevelManager::resetAllTimers not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetAllTimers();
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
    cocos2d::CCDictionary* responseToDict(gd::string p0, bool p1);
    
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
    TodoReturn specialFromLikeKey(char const* p0);
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
    TodoReturn submitUserInfo();

    /**
     * @note[short] Windows: 0x102ec0
     * @note[short] Android
     */
    TodoReturn suggestLevelStars(int p0, int p1, int p2);

    /**
     * @note[short] Windows: 0xf6370
     * @note[short] Android
     */
    TodoReturn tryGetUsername(int p0);
    
private:
    [[deprecated("GameLevelManager::typeFromCommentKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn typeFromCommentKey(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::typeFromLikeKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn typeFromLikeKey(char const* p0);
public:

    /**
     * @note[short] Windows: 0x10ce50
     * @note[short] Android
     */
    TodoReturn unblockUser(int p0);

    /**
     * @note[short] Windows: 0xf9b10
     * @note[short] Android
     */
    TodoReturn unfollowUser(int p0);

    /**
     * @note[short] Windows: 0x10dc80
     * @note[short] Android
     */
    TodoReturn updateDescription(int p0, gd::string p1);

    /**
     * @note[short] Windows: 0x101d40
     * @note[short] Android
     */
    TodoReturn updateLevel(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0xf75f0
     * @note[short] Android
     */
    TodoReturn updateLevelOrders();

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
    TodoReturn updateSavedLevelList(GJLevelList* p0);
public:
    
private:
    [[deprecated("GameLevelManager::updateUsernames not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateUsernames();
public:

    /**
     * @note[short] Windows: 0x103ab0
     * @note[short] Android
     */
    TodoReturn updateUserScore();

    /**
     * @note[short] Windows: 0x1099d0
     * @note[short] Android
     */
    TodoReturn uploadAccountComment(gd::string p0);

    /**
     * @note[short] Windows: 0x109a70
     * @note[short] Android
     */
    TodoReturn uploadComment(gd::string p0, CommentType p1, int p2, int p3);

    /**
     * @note[short] Windows: 0x10b440
     * @note[short] Android
     */
    TodoReturn uploadFriendRequest(int p0, gd::string p1);

    /**
     * @note[short] Windows: 0xfb760
     * @note[short] Android
     */
    TodoReturn uploadLevel(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x109940
     * @note[short] Android
     */
    TodoReturn uploadLevelComment(int p0, gd::string p1, int p2);

    /**
     * @note[short] Windows: 0xfeac0
     * @note[short] Android
     */
    TodoReturn uploadLevelList(GJLevelList* p0);

    /**
     * @note[short] Windows: 0x107370
     * @note[short] Android
     */
    TodoReturn uploadUserMessage(int p0, gd::string p1, gd::string p2);
    
private:
    [[deprecated("GameLevelManager::userIDForAccountID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn userIDForAccountID(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::userInfoForAccountID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn userInfoForAccountID(int p0);
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
    
private:
    [[deprecated("GameLevelManager::writeSpecialFilters not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn writeSpecialFilters(GJSearchObject* p0);
public:

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
