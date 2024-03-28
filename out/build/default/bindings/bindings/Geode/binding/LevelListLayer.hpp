#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LevelBrowserLayer.hpp"
#include "TextInputDelegate.hpp"
#include "SelectListIconDelegate.hpp"
#include "LikeItemDelegate.hpp"
#include "LevelListDeleteDelegate.hpp"

class LevelListLayer : public LevelBrowserLayer, public TextInputDelegate, public SelectListIconDelegate, public LikeItemDelegate, public LevelListDeleteDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelListLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelListLayer, LevelBrowserLayer)

    /**
     * @note[short] Windows: 0x25a1e0
     * @note[short] Android
     */
    static LevelListLayer* create(GJLevelList* p0);

    /**
     * @note[short] Windows: 0x25da00
     * @note[short] Android
     */
    void cloneList();
    
private:
    [[deprecated("LevelListLayer::confirmClone not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn confirmClone(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("LevelListLayer::confirmDelete not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn confirmDelete(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("LevelListLayer::confirmOwnerDelete not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn confirmOwnerDelete(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] Windows: 0x25a280
     * @note[short] Android
     */
    bool init(GJLevelList* p0);
    
private:
    [[deprecated("LevelListLayer::onClaimReward not implemented")]]
    /**
     * @note[short] Android
     */
    void onClaimReward(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x25dc30
     * @note[short] Android
     */
    void onDelete();
    
private:
    [[deprecated("LevelListLayer::onDescription not implemented")]]
    /**
     * @note[short] Android
     */
    void onDescription(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onFavorite not implemented")]]
    /**
     * @note[short] Android
     */
    void onFavorite(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onLike not implemented")]]
    /**
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onListInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void onListInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onRefreshLevelList not implemented")]]
    /**
     * @note[short] Android
     */
    void onRefreshLevelList(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onSelectIcon not implemented")]]
    /**
     * @note[short] Android
     */
    void onSelectIcon(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onShare not implemented")]]
    /**
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onToggleEditMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleEditMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onViewProfile not implemented")]]
    /**
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x25dce0
     * @note[short] Android
     */
    void ownerDelete();
    
private:
    [[deprecated("LevelListLayer::scene not implemented")]]
    /**
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJLevelList* p0);
public:

    /**
     * @note[short] Windows: 0x25d960
     * @note[short] Android
     */
    TodoReturn updateEditMode();

    /**
     * @note[short] Windows: 0x25d770
     * @note[short] Android
     */
    TodoReturn updateSideButtons();

    /**
     * @note[short] Windows: 0x25bab0
     * @note[short] Android
     */
    TodoReturn updateStatsArt();

    /**
     * @note[short] Windows: 0x25e150
     * @note[short] Android
     */
    TodoReturn verifyListName();

    /**
     * @note[short] Windows: 0x25ba70
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] Windows: 0x25ba90
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] Windows: 0x25ce60
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2);
    
private:
    [[deprecated("LevelListLayer::loadLevelsFailed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* p0, int p1);
public:

    /**
     * @note[short] Windows: 0x25d190
     * @note[short] Android
     */
    virtual void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x25d5c0
     * @note[short] Android
     */
    virtual void shareCommentClosed(gd::string p0, ShareCommentLayer* p1);

    /**
     * @note[short] Windows: 0x25d3b0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0x25d110
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);

    /**
     * @note[short] Windows: 0x25d180
     * @note[short] Android
     */
    virtual TodoReturn updateResultArray(cocos2d::CCArray* p0);

    /**
     * @note[short] Windows: 0x25cf90
     * @note[short] Android
     */
    virtual TodoReturn cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);

    /**
     * @note[short] Windows: 0x25d720
     * @note[short] Android
     */
    virtual void likedItem(LikeItemType p0, int p1, bool p2);

    /**
     * @note[short] Windows: 0x25d850
     * @note[short] Android
     */
    virtual TodoReturn iconSelectClosed(SelectListIconLayer* p0);

    /**
     * @note[short] Windows: 0x25dd30
     * @note[short] Android
     */
    virtual void levelListDeleteFinished(int p0);

    /**
     * @note[short] Windows: 0x25dda0
     * @note[short] Android
     */
    virtual void levelListDeleteFailed(int p0);

    /**
     * @note[short] Windows: 0x25df40
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x25de10
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x25e080
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
};
