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
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "MessageListDelegate.hpp"

class MessagesProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public MessageListDelegate {
public:
    static constexpr auto CLASS_NAME = "MessagesProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MessagesProfilePage, FLAlertLayer)

    /**
     * @note[short] Windows: 0x27d110
     * @note[short] Android
     */
    static MessagesProfilePage* create(bool p0);
    
private:
    [[deprecated("MessagesProfilePage::deleteSelected not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deleteSelected();
public:

    /**
     * @note[short] Windows: 0x27d1c0
     * @note[short] Android
     */
    bool init(bool p0);
    
private:
    [[deprecated("MessagesProfilePage::isCorrect not implemented")]]
    /**
     * @note[short] Android
     */
    bool isCorrect(char const* p0);
public:

    /**
     * @note[short] Windows: 0x27e140
     * @note[short] Android
     */
    TodoReturn loadPage(int p0);
    
private:
    [[deprecated("MessagesProfilePage::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MessagesProfilePage::onDeleteSelected not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MessagesProfilePage::onNextPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MessagesProfilePage::onPrevPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MessagesProfilePage::onSentMessages not implemented")]]
    /**
     * @note[short] Android
     */
    void onSentMessages(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MessagesProfilePage::onToggleAllObjects not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleAllObjects(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MessagesProfilePage::onUpdate not implemented")]]
    /**
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x27e390
     * @note[short] Android
     */
    TodoReturn setupCommentsBrowser(cocos2d::CCArray* p0);

    /**
     * @note[short] Windows: 0x27e0f0
     * @note[short] Android
     */
    TodoReturn untoggleAll();
    
private:
    [[deprecated("MessagesProfilePage::updateLevelsLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLevelsLabel();
public:
    
private:
    [[deprecated("MessagesProfilePage::updatePageArrows not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePageArrows();
public:
    
private:
    [[deprecated("MessagesProfilePage::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("MessagesProfilePage::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("MessagesProfilePage::FLAlert_Clicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("MessagesProfilePage::onClosePopup not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn onClosePopup(UploadActionPopup* p0);
public:
    
private:
    [[deprecated("MessagesProfilePage::uploadActionFinished not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn uploadActionFinished(int p0, int p1);
public:
    
private:
    [[deprecated("MessagesProfilePage::uploadActionFailed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn uploadActionFailed(int p0, int p1);
public:
    
private:
    [[deprecated("MessagesProfilePage::loadMessagesFinished not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn loadMessagesFinished(cocos2d::CCArray* p0, char const* p1);
public:
    
private:
    [[deprecated("MessagesProfilePage::loadMessagesFailed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn loadMessagesFailed(char const* p0, GJErrorCode p1);
public:
    
private:
    [[deprecated("MessagesProfilePage::forceReloadMessages not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn forceReloadMessages(bool p0);
public:
    
private:
    [[deprecated("MessagesProfilePage::setupPageInfo not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn setupPageInfo(gd::string p0, char const* p1);
public:
};
