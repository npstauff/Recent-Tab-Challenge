#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LevelManagerDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "SetIDPopupDelegate.hpp"
#include "SetTextPopupDelegate.hpp"
#include "TableViewCellDelegate.hpp"
#include "ShareCommentDelegate.hpp"

class LevelBrowserLayer : public cocos2d::CCLayerColor, public LevelManagerDelegate, public FLAlertLayerProtocol, public SetIDPopupDelegate, public SetTextPopupDelegate, public TableViewCellDelegate, public ShareCommentDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelBrowserLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelBrowserLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] Windows: 0x232c10
     * @note[short] Android
     */
     ~LevelBrowserLayer();

    /**
     * @note[short] Windows: 0x232db0
     * @note[short] Android
     */
    static LevelBrowserLayer* create(GJSearchObject* p0);

    /**
     * @note[short] Windows: 0x236600
     * @note[short] Android
     */
    TodoReturn createNewLevel(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x236690
     * @note[short] Android
     */
    TodoReturn createNewList(cocos2d::CCObject* p0);
    
private:
    [[deprecated("LevelBrowserLayer::createNewSmartTemplate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createNewSmartTemplate(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] Windows: 0x237600
     * @note[short] Android
     */
    TodoReturn deleteSelected();
    
private:
    [[deprecated("LevelBrowserLayer::exitLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn exitLayer(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] Windows: 0x2371f0
     * @note[short] Android
     */
    TodoReturn getItemsMatchingSearch(cocos2d::CCArray* p0, gd::string p1, GJSearchObject* p2);

    /**
     * @note[short] Windows: 0x235390
     * @note[short] Android
     */
    gd::string getSearchTitle();

    /**
     * @note[short] Windows: 0x232e60
     * @note[short] Android
     */
    bool init(GJSearchObject* p0);

    /**
     * @note[short] Windows: 0x2343a0
     * @note[short] Android
     */
    bool isCorrect(char const* p0);

    /**
     * @note[short] Windows: 0x2344e0
     * @note[short] Android
     */
    void loadPage(GJSearchObject* p0);

    /**
     * @note[short] Windows: 0x236e90
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x236c30
     * @note[short] Android
     */
    void onDeleteAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x237460
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x236a10
     * @note[short] Android
     */
    void onFavorites(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x235d10
     * @note[short] Android
     */
    void onGoToFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x235c10
     * @note[short] Android
     */
    void onGoToLastPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x235c40
     * @note[short] Android
     */
    void onGoToPage(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelBrowserLayer::onHelp not implemented")]]
    /**
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x236140
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x236500
     * @note[short] Android
     */
    void onLocalMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x236860
     * @note[short] Android
     */
    void onMyOnlineLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x236440
     * @note[short] Android
     */
    void onNew(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x235f90
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x235fd0
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x236dc0
     * @note[short] Android
     */
    void onRefresh(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelBrowserLayer::onRemoveAllFavorites not implemented")]]
    /**
     * @note[short] Android
     */
    void onRemoveAllFavorites(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x236b20
     * @note[short] Android
     */
    void onSaved(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x236470
     * @note[short] Android
     */
    void onSavedMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x236f60
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2376e0
     * @note[short] Android
     */
    void onToggleAllObjects(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelBrowserLayer::reloadAllObjects not implemented")]]
    /**
     * @note[short] Android
     */
    void reloadAllObjects();
public:

    /**
     * @note[short] Windows: 0x232d70
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJSearchObject* search);
    
private:
    [[deprecated("LevelBrowserLayer::setSearchObject not implemented")]]
    /**
     * @note[short] Android
     */
    void setSearchObject(GJSearchObject* p0);
public:

    /**
     * @note[short] Windows: 0x235080
     * @note[short] Android
     */
    void setupLevelBrowser(cocos2d::CCArray* p0);

    /**
     * @note[short] Windows: 0x237c60
     * @note[short] Android
     */
    void show();

    /**
     * @note[short] Windows: 0x235b90
     * @note[short] Android
     */
    void updateLevelsLabel();

    /**
     * @note[short] Windows: 0x235e80
     * @note[short] Android
     */
    void updatePageLabel();

    /**
     * @note[short] Windows: 0x237ae0
     * @note[short] Android
     */
    virtual void onEnter();
    
private:
    [[deprecated("LevelBrowserLayer::onEnterTransitionDidFinish not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void onEnterTransitionDidFinish();
public:
    
private:
    [[deprecated("LevelBrowserLayer::ccTouchBegan not implemented")]]
    /**
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:

    /**
     * @note[short] Out of line
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Out of line
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Out of line
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x237c20
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Windows: 0x236090
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x2360b0
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] Windows: 0x2358a0
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2);

    /**
     * @note[short] Windows: 0x2359a0
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* p0, int p1);

    /**
     * @note[short] Windows: 0x2359e0
     * @note[short] Android
     */
    virtual void setupPageInfo(gd::string p0, char const* p1);

    /**
     * @note[short] Windows: 0x236010
     * @note[short] Android
     */
    virtual void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2367c0
     * @note[short] Android
     */
    virtual void shareCommentClosed(gd::string p0, ShareCommentLayer* p1);

    /**
     * @note[short] Windows: 0x237120
     * @note[short] Android
     */
    virtual void setTextPopupClosed(SetTextPopup* p0, gd::string p1);

    /**
     * @note[short] Windows: 0x237760
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0x235d80
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);

    /**
     * @note[short] Windows: 0x232bd0
     * @note[short] Android
     */
    virtual TodoReturn updateResultArray(cocos2d::CCArray* p0);

    /**
     * @note[short] Windows: 0x237b80
     * @note[short] Android
     */
    virtual TodoReturn cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);
    bool m_unk;
    bool m_allSelected;
    TextArea* m_noInternet;
    GJListLayer* m_list;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_lastBtn;
    CCMenuItemSpriteExtra* m_cancelSearchBtn;
    CCMenuItemSpriteExtra* m_refreshBtn;
    cocos2d::CCArray* m_selected;
    GJSearchObject* m_searchObject;
    cocos2d::CCLabelBMFont* m_countText;
    cocos2d::CCLabelBMFont* m_pageText;
    CCMenuItemSpriteExtra* m_pageBtn;
    cocos2d::CCLabelBMFont* m_folderText;
    CCMenuItemSpriteExtra* m_folderBtn;
    CCMenuItemToggler* m_allObjectsToggler;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    LoadingCircle* m_circle;
    int m_lastPage;
    bool m_isOverlay;
    GEODE_PAD(4);
    int m_zOffset;
    bool m_unk2;
    int m_listHeight;
    GEODE_PAD(22);
};
