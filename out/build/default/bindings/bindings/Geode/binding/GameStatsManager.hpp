#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GameStatsManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GameStatsManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GameStatsManager, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x167d90
     * @note[short] Android
     */
    static GameStatsManager* sharedState();

    /**
     * @note[short] Windows: 0x15e7c0
     * @note[short] Android
     */
    int accountIDForIcon(int p0, UnlockType p1);

    /**
     * @note[short] Windows: 0x179bd0
     * @note[short] Android
     */
    TodoReturn addSimpleSpecialChestReward(gd::string p0, UnlockType p1, int p2, bool p3);

    /**
     * @note[short] Windows: 0x179e00
     * @note[short] Android
     */
    TodoReturn addSpecialRewardDescription(gd::string p0, gd::string p1);

    /**
     * @note[short] Windows: 0x169f40
     * @note[short] Android
     */
    TodoReturn addStoreItem(int p0, int p1, int p2, int p3, ShopType p4);
    
private:
    [[deprecated("GameStatsManager::areChallengesLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn areChallengesLoaded();
public:
    
private:
    [[deprecated("GameStatsManager::areRewardsLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn areRewardsLoaded();
public:

    /**
     * @note[short] Windows: 0x172080
     * @note[short] Android
     */
    void awardCurrencyForLevel(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x1725a0
     * @note[short] Android
     */
    TodoReturn awardDiamondsForLevel(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x180040
     * @note[short] Android
     */
    TodoReturn awardSecretKey();

    /**
     * @note[short] Windows: 0x16b0b0
     * @note[short] Android
     */
    TodoReturn checkAchievement(char const* p0);
    
private:
    [[deprecated("GameStatsManager::checkCoinAchievement not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkCoinAchievement(GJGameLevel* p0);
public:

    /**
     * @note[short] Windows: 0x1713c0
     * @note[short] Android
     */
    void checkCoinsForLevel(GJGameLevel* p0);
    
private:
    [[deprecated("GameStatsManager::claimListReward not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn claimListReward(GJLevelList* p0);
public:
    
private:
    [[deprecated("GameStatsManager::collectReward not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn collectReward(GJRewardType p0, GJRewardItem* p1);
public:
    
private:
    [[deprecated("GameStatsManager::collectVideoReward not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn collectVideoReward(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::completedChallenge not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn completedChallenge(GJChallengeItem* p0);
public:
    
private:
    [[deprecated("GameStatsManager::completedDailyLevel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn completedDailyLevel(GJGameLevel* p0);
public:

    /**
     * @note[short] Windows: 0x1700b0
     * @note[short] Android
     */
    void completedDemonLevel(GJGameLevel* p0);
    
private:
    [[deprecated("GameStatsManager::completedLevel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn completedLevel(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameStatsManager::completedMapPack not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn completedMapPack(GJMapPack* p0);
public:

    /**
     * @note[short] Windows: 0x1701a0
     * @note[short] Android
     */
    void completedStarLevel(GJGameLevel* p0);
    
private:
    [[deprecated("GameStatsManager::countSecretChests not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn countSecretChests(GJRewardType p0);
public:
    
private:
    [[deprecated("GameStatsManager::countUnlockedSecretChests not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn countUnlockedSecretChests(GJRewardType p0);
public:

    /**
     * @note[short] Windows: 0x17a620
     * @note[short] Android
     */
    TodoReturn createSecretChestItems();

    /**
     * @note[short] Windows: 0x17aab0
     * @note[short] Android
     */
    TodoReturn createSecretChestRewards();

    /**
     * @note[short] Windows: 0x176940
     * @note[short] Android
     */
    TodoReturn createSpecialChestItems();

    /**
     * @note[short] Windows: 0x168680
     * @note[short] Android
     */
    TodoReturn createStoreItems();

    /**
     * @note[short] Windows: 0x180820
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* p0);

    /**
     * @note[short] Windows: 0x180630
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* p0);
    
private:
    [[deprecated("GameStatsManager::firstSetup not implemented")]]
    /**
     * @note[short] Android
     */
    void firstSetup();
public:

    /**
     * @note[short] Windows: 0x1680a0
     * @note[short] Android
     */
    TodoReturn generateItemUnlockableData();

    /**
     * @note[short] Windows: 0x171eb0
     * @note[short] Android
     */
    int getAwardedCurrencyForLevel(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x1723f0
     * @note[short] Android
     */
    TodoReturn getAwardedDiamondsForLevel(GJGameLevel* p0);
    
private:
    [[deprecated("GameStatsManager::getBaseCurrency not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getBaseCurrency(int p0, bool p1, int p2);
public:

    /**
     * @note[short] Windows: 0x171d90
     * @note[short] Android
     */
    int getBaseCurrencyForLevel(GJGameLevel* p0);
    
private:
    [[deprecated("GameStatsManager::getBaseDiamonds not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getBaseDiamonds(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::getBonusDiamonds not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getBonusDiamonds(int p0);
public:

    /**
     * @note[short] Windows: 0x173400
     * @note[short] Android
     */
    GJChallengeItem* getChallenge(int p0);

    /**
     * @note[short] Windows: 0x1738f0
     * @note[short] Android
     */
    TodoReturn getChallengeKey(GJChallengeItem* p0);

    /**
     * @note[short] Windows: 0x16fa70
     * @note[short] Android
     */
    int getCollectedCoinsForLevel(GJGameLevel* p0);
    
private:
    [[deprecated("GameStatsManager::getCompletedMapPacks not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCompletedMapPacks();
public:

    /**
     * @note[short] Windows: 0x171c70
     * @note[short] Android
     */
    TodoReturn getCurrencyKey(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x173d60
     * @note[short] Android
     */
    TodoReturn getDailyLevelKey(int p0);

    /**
     * @note[short] Windows: 0x16fcb0
     * @note[short] Android
     */
    TodoReturn getDemonLevelKey(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x179d00
     * @note[short] Android
     */
    gd::string getGauntletRewardKey(int p0);

    /**
     * @note[short] Windows: 0x1729f0
     * @note[short] Android
     */
    TodoReturn getItemKey(int p0, int p1);

    /**
     * @note[short] Windows: 0x176730
     * @note[short] Android
     */
    int getItemUnlockState(int p0, UnlockType p1);
    
private:
    [[deprecated("GameStatsManager::getItemUnlockStateLite not implemented")]]
    /**
     * @note[short] Android
     */
    int getItemUnlockStateLite(int p0, UnlockType p1);
public:

    /**
     * @note[short] Windows: 0x16fb10
     * @note[short] Android
     */
    gd::string getLevelKey(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x16fb80
     * @note[short] Android
     */
    gd::string getLevelKey(int p0, bool p1, bool p2, bool p3);

    /**
     * @note[short] Windows: 0x173b70
     * @note[short] Android
     */
    TodoReturn getListRewardKey(GJLevelList* p0);
    
private:
    [[deprecated("GameStatsManager::getMapPackKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getMapPackKey(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::getNextVideoAdReward not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getNextVideoAdReward();
public:

    /**
     * @note[short] Windows: 0x17a3d0
     * @note[short] Android
     */
    TodoReturn getPathRewardKey(int p0);

    /**
     * @note[short] Windows: 0x1734d0
     * @note[short] Android
     */
    GJChallengeItem* getQueuedChallenge(int p0);
    
private:
    [[deprecated("GameStatsManager::getRewardForSecretChest not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRewardForSecretChest(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::getRewardForSpecialChest not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRewardForSpecialChest(gd::string p0);
public:
    
private:
    [[deprecated("GameStatsManager::getRewardItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRewardItem(GJRewardType p0);
public:
    
private:
    [[deprecated("GameStatsManager::getRewardKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRewardKey(GJRewardType p0, int p1);
public:

    /**
     * @note[short] Windows: 0x1735a0
     * @note[short] Android
     */
    GJChallengeItem* getSecondaryQueuedChallenge(int p0);
    
private:
    [[deprecated("GameStatsManager::getSecretChestForItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSecretChestForItem(int p0, UnlockType p1);
public:
    
private:
    [[deprecated("GameStatsManager::getSecretCoinKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSecretCoinKey(char const* p0);
public:

    /**
     * @note[short] Windows: 0x179c70
     * @note[short] Android
     */
    TodoReturn getSpecialChestKeyForItem(int p0, UnlockType p1);
    
private:
    [[deprecated("GameStatsManager::getSpecialRewardDescription not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSpecialRewardDescription(gd::string p0, bool p1);
public:
    
private:
    [[deprecated("GameStatsManager::getSpecialUnlockDescription not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSpecialUnlockDescription(int p0, UnlockType p1, bool p2);
public:

    /**
     * @note[short] Windows: 0x16fd10
     * @note[short] Android
     */
    TodoReturn getStarLevelKey(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x16adc0
     * @note[short] Android
     */
    int getStat(char const* p0);
    
private:
    [[deprecated("GameStatsManager::getStatFromKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getStatFromKey(StatKey p0);
public:
    
private:
    [[deprecated("GameStatsManager::getStoreItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getStoreItem(int p0, int p1);
public:
    
private:
    [[deprecated("GameStatsManager::getStoreItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getStoreItem(int p0);
public:

    /**
     * @note[short] Windows: 0x1740d0
     * @note[short] Android
     */
    int getTotalCollectedCurrency();
    
private:
    [[deprecated("GameStatsManager::getTotalCollectedDiamonds not implemented")]]
    /**
     * @note[short] Android
     */
    int getTotalCollectedDiamonds();
public:

    /**
     * @note[short] Windows: 0x173bf0
     * @note[short] Android
     */
    bool hasClaimedListReward(GJLevelList* p0);

    /**
     * @note[short] Windows: 0x173970
     * @note[short] Android
     */
    bool hasCompletedChallenge(GJChallengeItem* p0);

    /**
     * @note[short] Windows: 0x173de0
     * @note[short] Android
     */
    bool hasCompletedDailyLevel(int p0);

    /**
     * @note[short] Windows: 0x16fe00
     * @note[short] Android
     */
    bool hasCompletedDemonLevel(GJGameLevel* p0);
    
private:
    [[deprecated("GameStatsManager::hasCompletedGauntletLevel not implemented")]]
    /**
     * @note[short] Android
     */
    bool hasCompletedGauntletLevel(int p0);
public:

    /**
     * @note[short] Out of line
     */
    bool hasCompletedLevel(GJGameLevel* level);

    /**
     * @note[short] Out of line
     */
    bool hasCompletedMainLevel(int levelID);
    
private:
    [[deprecated("GameStatsManager::hasCompletedMapPack not implemented")]]
    /**
     * @note[short] Android
     */
    bool hasCompletedMapPack(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::hasCompletedOnlineLevel not implemented")]]
    /**
     * @note[short] Android
     */
    bool hasCompletedOnlineLevel(int p0);
public:

    /**
     * @note[short] Windows: 0x16fec0
     * @note[short] Android
     */
    bool hasCompletedStarLevel(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x171670
     * @note[short] Android
     */
    bool hasPendingUserCoin(char const* p0);
    
private:
    [[deprecated("GameStatsManager::hasRewardBeenCollected not implemented")]]
    /**
     * @note[short] Android
     */
    bool hasRewardBeenCollected(GJRewardType p0, int p1);
public:

    /**
     * @note[short] Windows: 0x1717e0
     * @note[short] Android
     */
    bool hasSecretCoin(char const* p0);

    /**
     * @note[short] Windows: 0x171500
     * @note[short] Android
     */
    bool hasUserCoin(char const* p0);

    /**
     * @note[short] Windows: 0x16a4f0
     * @note[short] Android
     */
    TodoReturn incrementActivePath(int p0);

    /**
     * @note[short] Windows: 0x173670
     * @note[short] Android
     */
    TodoReturn incrementChallenge(GJChallengeType p0, int p1);

    /**
     * @note[short] Windows: 0x16a250
     * @note[short] Android
     */
    TodoReturn incrementStat(char const* p0, int p1);
    
private:
    [[deprecated("GameStatsManager::incrementStat not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn incrementStat(char const* p0);
public:
    
private:
    [[deprecated("GameStatsManager::isGauntletChestUnlocked not implemented")]]
    /**
     * @note[short] Android
     */
    bool isGauntletChestUnlocked(int p0);
public:

    /**
     * @note[short] Windows: 0x1767f0
     * @note[short] Android
     */
    bool isItemEnabled(UnlockType p0, int p1);

    /**
     * @note[short] Windows: 0x176570
     * @note[short] Android
     */
    bool isItemUnlocked(UnlockType p0, int p1);

    /**
     * @note[short] Windows: 0x17a4d0
     * @note[short] Android
     */
    bool isPathChestUnlocked(int p0);
    
private:
    [[deprecated("GameStatsManager::isPathUnlocked not implemented")]]
    /**
     * @note[short] Android
     */
    bool isPathUnlocked(StatKey p0);
public:

    /**
     * @note[short] Windows: 0x17a7c0
     * @note[short] Android
     */
    bool isSecretChestUnlocked(int p0);
    
private:
    [[deprecated("GameStatsManager::isSecretCoin not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSecretCoin(gd::string p0);
public:
    
private:
    [[deprecated("GameStatsManager::isSecretCoinValid not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSecretCoinValid(gd::string p0);
public:
    
private:
    [[deprecated("GameStatsManager::isSpecialChestLiteUnlockable not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSpecialChestLiteUnlockable(gd::string p0);
public:

    /**
     * @note[short] Windows: 0x17a050
     * @note[short] Android
     */
    bool isSpecialChestUnlocked(gd::string p0);

    /**
     * @note[short] Windows: 0x16a010
     * @note[short] Android
     */
    bool isStoreItemUnlocked(int p0);

    /**
     * @note[short] Windows: 0x17a9b0
     * @note[short] Android
     */
    TodoReturn keyCostForSecretChest(int p0);
    
private:
    [[deprecated("GameStatsManager::logCoins not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn logCoins();
public:
    
private:
    [[deprecated("GameStatsManager::markLevelAsCompletedAndClaimed not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn markLevelAsCompletedAndClaimed(GJGameLevel* p0);
public:

    /**
     * @note[short] Windows: 0x181810
     * @note[short] Android
     */
    TodoReturn postLoadGameStats();

    /**
     * @note[short] Windows: 0x172c80
     * @note[short] Android
     */
    TodoReturn preProcessReward(GJRewardItem* p0);

    /**
     * @note[short] Windows: 0x1819d0
     * @note[short] Android
     */
    TodoReturn preSaveGameStats();

    /**
     * @note[short] Windows: 0x173b10
     * @note[short] Android
     */
    TodoReturn processChallengeQueue(int p0);

    /**
     * @note[short] Windows: 0x16a0f0
     * @note[short] Android
     */
    TodoReturn purchaseItem(int p0);

    /**
     * @note[short] Windows: 0x174ec0
     * @note[short] Android
     */
    TodoReturn recountSpecialStats();
    
private:
    [[deprecated("GameStatsManager::recountUserCoins not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn recountUserCoins(bool p0);
public:

    /**
     * @note[short] Windows: 0x17fee0
     * @note[short] Android
     */
    TodoReturn registerRewardsFromItem(GJRewardItem* p0);

    /**
     * @note[short] Windows: 0x172ff0
     * @note[short] Android
     */
    TodoReturn removeChallenge(int p0);
    
private:
    [[deprecated("GameStatsManager::removeErrorFromSpecialChests not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeErrorFromSpecialChests();
public:

    /**
     * @note[short] Windows: 0x173190
     * @note[short] Android
     */
    TodoReturn removeQueuedChallenge(int p0);

    /**
     * @note[short] Windows: 0x173330
     * @note[short] Android
     */
    TodoReturn removeQueuedSecondaryChallenge(int p0);
    
private:
    [[deprecated("GameStatsManager::resetChallengeTimer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetChallengeTimer();
public:
    
private:
    [[deprecated("GameStatsManager::resetPreSync not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetPreSync();
public:
    
private:
    [[deprecated("GameStatsManager::resetSpecialStatAchievements not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetSpecialStatAchievements();
public:
    
private:
    [[deprecated("GameStatsManager::resetUserCoins not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetUserCoins();
public:
    
private:
    [[deprecated("GameStatsManager::restorePostSync not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn restorePostSync();
public:
    
private:
    [[deprecated("GameStatsManager::setAwardedBonusKeys not implemented")]]
    /**
     * @note[short] Android
     */
    void setAwardedBonusKeys(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::setStarsForMapPack not implemented")]]
    /**
     * @note[short] Android
     */
    void setStarsForMapPack(int p0, int p1);
public:

    /**
     * @note[short] Windows: 0x16af10
     * @note[short] Android
     */
    void setStat(char const* p0, int p1);
    
private:
    [[deprecated("GameStatsManager::setStatIfHigher not implemented")]]
    /**
     * @note[short] Android
     */
    void setStatIfHigher(char const* p0, int p1);
public:

    /**
     * @note[short] Windows: 0x15e8d0
     * @note[short] Android
     */
    TodoReturn setupIconCredits();
    
private:
    [[deprecated("GameStatsManager::shopTypeForItemID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shopTypeForItemID(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::shouldAwardSecretKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shouldAwardSecretKey();
public:
    
private:
    [[deprecated("GameStatsManager::starsForMapPack not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn starsForMapPack(int p0);
public:

    /**
     * @note[short] Windows: 0x172f20
     * @note[short] Android
     */
    TodoReturn storeChallenge(int p0, GJChallengeItem* p1);

    /**
     * @note[short] Windows: 0x172ea0
     * @note[short] Android
     */
    TodoReturn storeChallengeTime(int p0);
    
private:
    [[deprecated("GameStatsManager::storePendingUserCoin not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn storePendingUserCoin(char const* p0);
public:

    /**
     * @note[short] Windows: 0x1730c0
     * @note[short] Android
     */
    TodoReturn storeQueuedChallenge(int p0, GJChallengeItem* p1);

    /**
     * @note[short] Windows: 0x1728f0
     * @note[short] Android
     */
    TodoReturn storeRewardState(GJRewardType p0, int p1, int p2, gd::string p3);

    /**
     * @note[short] Windows: 0x173260
     * @note[short] Android
     */
    TodoReturn storeSecondaryQueuedChallenge(int p0, GJChallengeItem* p1);
    
private:
    [[deprecated("GameStatsManager::storeSecretCoin not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn storeSecretCoin(char const* p0);
public:

    /**
     * @note[short] Windows: 0x1715c0
     * @note[short] Android
     */
    void storeUserCoin(char const* p0);
    
private:
    [[deprecated("GameStatsManager::tempClear not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tempClear();
public:

    /**
     * @note[short] Windows: 0x176890
     * @note[short] Android
     */
    TodoReturn toggleEnableItem(UnlockType p0, int p1, bool p2);

    /**
     * @note[short] Windows: 0x16a350
     * @note[short] Android
     */
    TodoReturn trySelectActivePath();
    
private:
    [[deprecated("GameStatsManager::uncompleteLevel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn uncompleteLevel(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameStatsManager::unlockGauntletChest not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unlockGauntletChest(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::unlockPathChest not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unlockPathChest(int p0);
public:

    /**
     * @note[short] Windows: 0x17a8a0
     * @note[short] Android
     */
    TodoReturn unlockSecretChest(int p0);

    /**
     * @note[short] Windows: 0x17a130
     * @note[short] Android
     */
    TodoReturn unlockSpecialChest(gd::string p0);
    
private:
    [[deprecated("GameStatsManager::updateActivePath not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateActivePath(StatKey p0);
public:

    /**
     * @note[short] Windows: 0x15e830
     * @note[short] Android
     */
    gd::string usernameForAccountID(int p0);
    
private:
    [[deprecated("GameStatsManager::verifyUserCoins not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn verifyUserCoins();
public:

    /**
     * @note[short] Windows: 0x168000
     * @note[short] Android
     */
    virtual bool init();
    bool m_usePlayerStatsCCDictionary;
    cocos2d::CCString* m_trueString;
    cocos2d::CCDictionary* m_allStoreItems;
    cocos2d::CCDictionary* m_storeItems;
    cocos2d::CCDictionary* m_allTreasureRoomChests;
    cocos2d::CCDictionary* m_allTreasureRoomChestItems;
    cocos2d::CCDictionary* m_allSpecialChests;
    cocos2d::CCDictionary* m_allSpecialChestItems;
    gd::unordered_map<int, gd::string> m_specialRewardDescriptions;
    gd::unordered_map<int, gd::string> m_createSpecialChestItemsMap;
    cocos2d::CCDictionary* m_specialChestsLite;
    cocos2d::CCArray* m_storeItemArray;
    cocos2d::CCDictionary* m_rewardItems;
    cocos2d::CCDictionary* m_dailyChests;
    cocos2d::CCDictionary* m_worldAdvertChests;
    cocos2d::CCDictionary* m_activeChallenges;
    cocos2d::CCDictionary* m_upcomingChallenges;
    double m_challengeTime;
    cocos2d::CCDictionary* m_playerStats;
    gd::unordered_map<int, int> m_playerStatsRandMap;
    gd::unordered_map<int, int> m_playerStatsSeedMap;
    cocos2d::CCDictionary* m_completedLevels;
    cocos2d::CCDictionary* m_verifiedUserCoins;
    cocos2d::CCDictionary* m_pendingUserCoins;
    cocos2d::CCDictionary* m_purchasedItems;
    cocos2d::CCDictionary* m_onlineCurrencyScores;
    cocos2d::CCDictionary* m_mainCurrencyScores;
    cocos2d::CCDictionary* m_gauntletCurrencyScores;
    cocos2d::CCDictionary* m_timelyCurrencyScores;
    cocos2d::CCDictionary* m_onlineStars;
    cocos2d::CCDictionary* m_timelyStars;
    cocos2d::CCDictionary* m_gauntletDiamondScores;
    cocos2d::CCDictionary* m_timelyDiamondScores;
    cocos2d::CCDictionary* m_unusedCurrencyAwardDict;
    cocos2d::CCDictionary* m_challengeDiamonds;
    cocos2d::CCDictionary* m_completedMappacks;
    cocos2d::CCDictionary* m_completedLists;
    cocos2d::CCDictionary* m_weeklyChest;
    cocos2d::CCDictionary* m_treasureRoomChests;
    geode::SeedValueSRV m_bonusKey;
    cocos2d::CCDictionary* m_miscChests;
    cocos2d::CCDictionary* m_enabledItems;
    bool m_unkBoolIncrementStat;
    cocos2d::CCDictionary* m_unkDict;
    cocos2d::CCDictionary* m_unlockedItems;
    gd::map<int, UnlockType> m_accountIDForIcon;
    gd::map<int, gd::string> m_usernameForAccountID;
    bool m_GS29;
    int m_activePath;
};
