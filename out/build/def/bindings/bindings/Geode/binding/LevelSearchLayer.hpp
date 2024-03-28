#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TextInputDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "DemonFilterDelegate.hpp"

class LevelSearchLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public DemonFilterDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelSearchLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelSearchLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x260e70
     * @note[short] Android
     */
    static LevelSearchLayer* create(int p0);
    
private:
    [[deprecated("LevelSearchLayer::checkDiff not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkDiff(int p0);
public:
    
private:
    [[deprecated("LevelSearchLayer::checkTime not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkTime(int p0);
public:
    
private:
    [[deprecated("LevelSearchLayer::clearFilters not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn clearFilters();
public:
    
private:
    [[deprecated("LevelSearchLayer::confirmClearFilters not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn confirmClearFilters(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("LevelSearchLayer::getDiffKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getDiffKey(int p0);
public:
    
private:
    [[deprecated("LevelSearchLayer::getLevelLenKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getLevelLenKey();
public:
    
private:
    [[deprecated("LevelSearchLayer::getSearchDiffKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSearchDiffKey();
public:

    /**
     * @note[short] Windows: 0x263ba0
     * @note[short] Android
     */
    GJSearchObject* getSearchObject(SearchType p0, gd::string p1);
    
private:
    [[deprecated("LevelSearchLayer::getTimeKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTimeKey(int p0);
public:

    /**
     * @note[short] Windows: 0x260f10
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] Windows: 0x2646e0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2646a0
     * @note[short] Android
     */
    void onClearFreeSearch(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelSearchLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSearchLayer::onFollowed not implemented")]]
    /**
     * @note[short] Android
     */
    void onFollowed(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSearchLayer::onFriends not implemented")]]
    /**
     * @note[short] Android
     */
    void onFriends(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSearchLayer::onLatestStars not implemented")]]
    /**
     * @note[short] Android
     */
    void onLatestStars(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSearchLayer::onMagic not implemented")]]
    /**
     * @note[short] Android
     */
    void onMagic(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2629d0
     * @note[short] Android
     */
    void onMoreOptions(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelSearchLayer::onMostDownloaded not implemented")]]
    /**
     * @note[short] Android
     */
    void onMostDownloaded(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x263e40
     * @note[short] Android
     */
    void onMostLikes(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelSearchLayer::onMostRecent not implemented")]]
    /**
     * @note[short] Android
     */
    void onMostRecent(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x264340
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelSearchLayer::onSearchMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onSearchMode(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2644f0
     * @note[short] Android
     */
    void onSearchUser(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelSearchLayer::onSpecialDemon not implemented")]]
    /**
     * @note[short] Android
     */
    void onSpecialDemon(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSearchLayer::onStarAward not implemented")]]
    /**
     * @note[short] Android
     */
    void onStarAward(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSearchLayer::onSuggested not implemented")]]
    /**
     * @note[short] Android
     */
    void onSuggested(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSearchLayer::onTrending not implemented")]]
    /**
     * @note[short] Android
     */
    void onTrending(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSearchLayer::scene not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scene(int p0);
public:
    
private:
    [[deprecated("LevelSearchLayer::toggleDifficulty not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleDifficulty(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("LevelSearchLayer::toggleDifficultyNum not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleDifficultyNum(int p0, bool p1);
public:
    
private:
    [[deprecated("LevelSearchLayer::toggleStar not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleStar(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("LevelSearchLayer::toggleTime not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleTime(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("LevelSearchLayer::toggleTimeNum not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleTimeNum(int p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x2638d0
     * @note[short] Android
     */
    TodoReturn updateSearchLabel(char const* p0);
    
private:
    [[deprecated("LevelSearchLayer::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("LevelSearchLayer::textInputOpened not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn textInputOpened(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("LevelSearchLayer::textInputClosed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn textInputClosed(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("LevelSearchLayer::textChanged not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("LevelSearchLayer::FLAlert_Clicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("LevelSearchLayer::demonFilterSelectClosed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn demonFilterSelectClosed(int p0);
public:
    int m_type;
    CCTextInputNode* m_searchInput;
    cocos2d::CCSprite* m_starsSprite;
    cocos2d::CCArray* m_difficultySprites;
    cocos2d::CCArray* m_lengthSprites;
    cocos2d::CCDictionary* m_difficultyDict;
    cocos2d::CCSprite* m_lastDifficultySprite;
    CCMenuItemSpriteExtra* m_demonTypeButton;
};
