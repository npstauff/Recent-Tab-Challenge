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
    void loadPage(int p0);
    
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
    void setupCommentsBrowser(cocos2d::CCArray* p0);

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

    /**
     * @note[short] Windows: 0x27e0e0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x27df30
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    
private:
    [[deprecated("MessagesProfilePage::onClosePopup not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);
public:

    /**
     * @note[short] Windows: 0x27df60
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);
    
private:
    [[deprecated("MessagesProfilePage::uploadActionFailed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);
public:

    /**
     * @note[short] Windows: 0x27e500
     * @note[short] Android
     */
    virtual void loadMessagesFinished(cocos2d::CCArray* p0, char const* p1);
    
private:
    [[deprecated("MessagesProfilePage::loadMessagesFailed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void loadMessagesFailed(char const* p0, GJErrorCode p1);
public:

    /**
     * @note[short] Windows: 0x27e5e0
     * @note[short] Android
     */
    virtual void forceReloadMessages(bool p0);

    /**
     * @note[short] Windows: 0x27e610
     * @note[short] Android
     */
    virtual void setupPageInfo(gd::string p0, char const* p1);
};
