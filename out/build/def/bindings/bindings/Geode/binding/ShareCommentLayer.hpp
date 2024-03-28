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
#include "TextInputDelegate.hpp"
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"

class ShareCommentLayer : public FLAlertLayer, public TextInputDelegate, public UploadActionDelegate, public UploadPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "ShareCommentLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShareCommentLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x386370
     * @note[short] Android
     */
    static ShareCommentLayer* create(gd::string p0, int p1, CommentType p2, int p3, gd::string p4);

    /**
     * @note[short] Windows: 0x386490
     * @note[short] Android
     */
    bool init(gd::string p0, int p1, CommentType p2, int p3, gd::string p4);

    /**
     * @note[short] Windows: 0x387320
     * @note[short] Android
     */
    void onClear(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x387750
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    
private:
    [[deprecated("ShareCommentLayer::onPercent not implemented")]]
    /**
     * @note[short] Android
     */
    void onPercent(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x3874c0
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3879e0
     * @note[short] Android
     */
    void updateCharCountLabel();
    
private:
    [[deprecated("ShareCommentLayer::updateDescText not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDescText(gd::string p0);
public:

    /**
     * @note[short] Windows: 0x387410
     * @note[short] Android
     */
    void updatePercentLabel();
    
private:
    [[deprecated("ShareCommentLayer::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:

    /**
     * @note[short] Windows: 0x387780
     * @note[short] Android
     */
    virtual void keyBackClicked();
    
private:
    [[deprecated("ShareCommentLayer::textInputOpened not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);
public:

    /**
     * @note[short] Windows: 0x3877c0
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x3878e0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x387aa0
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] Windows: 0x387ae0
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] Windows: 0x387b10
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);
};
