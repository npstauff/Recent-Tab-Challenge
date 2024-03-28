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
#include "LevelCommentDelegate.hpp"
#include "CommentUploadDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class InfoLayer : public FLAlertLayer, public LevelCommentDelegate, public CommentUploadDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "InfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(InfoLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x228730
     * @note[short] Android
     */
    static InfoLayer* create(GJGameLevel* p0, GJUserScore* p1, GJLevelList* p2);
    
private:
    [[deprecated("InfoLayer::confirmReport not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn confirmReport(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("InfoLayer::getAccountID not implemented")]]
    /**
     * @note[short] Android
     */
    int getAccountID();
public:

    /**
     * @note[short] Out of line
     */
    int getID();
    
private:
    [[deprecated("InfoLayer::getRealID not implemented")]]
    /**
     * @note[short] Android
     */
    int getRealID();
public:

    /**
     * @note[short] Windows: 0x22a410
     * @note[short] Android
     */
    TodoReturn getSpriteButton(char const* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, cocos2d::CCPoint p4);

    /**
     * @note[short] Windows: 0x228810
     * @note[short] Android
     */
    bool init(GJGameLevel* p0, GJUserScore* p1, GJLevelList* p2);
    
private:
    [[deprecated("InfoLayer::isCorrect not implemented")]]
    /**
     * @note[short] Android
     */
    bool isCorrect(char const* p0);
public:

    /**
     * @note[short] Windows: 0x22b340
     * @note[short] Android
     */
    void loadPage(int p0, bool p1);

    /**
     * @note[short] Windows: 0x22b200
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x22aba0
     * @note[short] Android
     */
    void onComment(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x22a8f0
     * @note[short] Android
     */
    void onCopyLevelID(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x22ad90
     * @note[short] Android
     */
    void onGetComments(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x22ada0
     * @note[short] Android
     */
    void onLevelInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x22aaa0
     * @note[short] Android
     */
    void onMore(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x22bac0
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x22aae0
     * @note[short] Android
     */
    void onOriginal(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x22bae0
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x22a680
     * @note[short] Android
     */
    void onRefreshComments(cocos2d::CCObject* sender);
    
private:
    [[deprecated("InfoLayer::onSimilar not implemented")]]
    /**
     * @note[short] Android
     */
    void onSimilar(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x22bd00
     * @note[short] Android
     */
    TodoReturn reloadWindow();

    /**
     * @note[short] Windows: 0x22b670
     * @note[short] Android
     */
    TodoReturn setupCommentsBrowser(cocos2d::CCArray* p0);
    
private:
    [[deprecated("InfoLayer::setupLevelInfo not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupLevelInfo();
public:
    
private:
    [[deprecated("InfoLayer::toggleCommentMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleCommentMode(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("InfoLayer::toggleExtendedMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleExtendedMode(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] Windows: 0x22bc10
     * @note[short] Android
     */
    TodoReturn toggleSmallCommentMode(cocos2d::CCObject* p0);
    
private:
    [[deprecated("InfoLayer::updateCommentModeButtons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCommentModeButtons();
public:
    
private:
    [[deprecated("InfoLayer::updateLevelsLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLevelsLabel();
public:
    
private:
    [[deprecated("InfoLayer::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("InfoLayer::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:

    /**
     * @note[short] Windows: 0x8fff0
     * @note[short] Android
     */
    virtual void show();
    
private:
    [[deprecated("InfoLayer::loadCommentsFinished not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn loadCommentsFinished(cocos2d::CCArray* p0, char const* p1);
public:
    
private:
    [[deprecated("InfoLayer::loadCommentsFailed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn loadCommentsFailed(char const* p0);
public:
    
private:
    [[deprecated("InfoLayer::setupPageInfo not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn setupPageInfo(gd::string p0, char const* p1);
public:
    
private:
    [[deprecated("InfoLayer::commentUploadFinished not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn commentUploadFinished(int p0);
public:
    
private:
    [[deprecated("InfoLayer::commentUploadFailed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn commentUploadFailed(int p0, CommentError p1);
public:
    
private:
    [[deprecated("InfoLayer::updateUserScoreFinished not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateUserScoreFinished();
public:
    
private:
    [[deprecated("InfoLayer::FLAlert_Clicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    GJGameLevel* m_level;
    GJUserScore* m_score;
    GJLevelList* m_levelList;
    gd::string m_commentKey;
    LoadingCircle* m_loadingCircle;
    cocos2d::CCLabelBMFont* m_pageLabel;
    cocos2d::CCLabelBMFont* m_noComments;
    GJCommentListLayer* m_list;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_likeBtn;
    CCMenuItemSpriteExtra* m_timeBtn;
    CCMenuItemSpriteExtra* m_reportBtn;
    CCMenuItemSpriteExtra* m_commentsBtn;
    CCMenuItemSpriteExtra* m_refreshCommentsBtn;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    int m_page;
    bool m_canUpdateUserScore;
    CommentKeyType m_mode;
};
