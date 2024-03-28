#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TableViewCell.hpp"
#include "LikeItemDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class CommentCell : public TableViewCell, public LikeItemDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "CommentCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CommentCell, TableViewCell)
    
private:
    [[deprecated("CommentCell::incrementDislikes not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn incrementDislikes();
public:
    
private:
    [[deprecated("CommentCell::incrementLikes not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn incrementLikes();
public:

    /**
     * @note[short] Windows: 0x84490
     * @note[short] Android
     */
    void loadFromComment(GJComment* p0);

    /**
     * @note[short] Windows: 0x862c0
     * @note[short] Android
     */
    void onConfirmDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x86360
     * @note[short] Android
     */
    TodoReturn onDelete();
    
private:
    [[deprecated("CommentCell::onGoToLevel not implemented")]]
    /**
     * @note[short] Android
     */
    void onGoToLevel(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x86110
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);
    
private:
    [[deprecated("CommentCell::onUndelete not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn onUndelete();
public:
    
private:
    [[deprecated("CommentCell::onUnhide not implemented")]]
    /**
     * @note[short] Android
     */
    void onUnhide(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CommentCell::onViewProfile not implemented")]]
    /**
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x86090
     * @note[short] Android
     */
    TodoReturn updateBGColor(int p0);

    /**
     * @note[short] Windows: 0x86240
     * @note[short] Android
     */
    TodoReturn updateLabelValues();

    /**
     * @note[short] Windows: 0x84460
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x7d5b0
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] Windows: 0x861f0
     * @note[short] Android
     */
    virtual TodoReturn likedItem(LikeItemType p0, int p1, bool p2);

    /**
     * @note[short] Windows: 0x863d0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    cocos2d::CCSprite* m_iconSprite;
    cocos2d::CCLabelBMFont* m_likeLabel;
    GJComment* m_comment;
    bool m_accountComment;
};
