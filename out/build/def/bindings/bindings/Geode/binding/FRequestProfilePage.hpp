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
#include "FriendRequestDelegate.hpp"

class FRequestProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public FriendRequestDelegate {
public:
    static constexpr auto CLASS_NAME = "FRequestProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FRequestProfilePage, FLAlertLayer)

    /**
     * @note[short] Windows: 0xeeee0
     * @note[short] Android
     */
    static FRequestProfilePage* create(bool p0);

    /**
     * @note[short] Windows: 0xefb90
     * @note[short] Android
     */
    TodoReturn deleteSelected();

    /**
     * @note[short] Windows: 0xeef90
     * @note[short] Android
     */
    bool init(bool p0);
    
private:
    [[deprecated("FRequestProfilePage::isCorrect not implemented")]]
    /**
     * @note[short] Android
     */
    bool isCorrect(char const* p0);
public:

    /**
     * @note[short] Windows: 0xf00d0
     * @note[short] Android
     */
    TodoReturn loadPage(int p0);
    
private:
    [[deprecated("FRequestProfilePage::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FRequestProfilePage::onDeleteSelected not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FRequestProfilePage::onNextPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FRequestProfilePage::onPrevPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FRequestProfilePage::onSentRequests not implemented")]]
    /**
     * @note[short] Android
     */
    void onSentRequests(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FRequestProfilePage::onToggleAllObjects not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleAllObjects(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FRequestProfilePage::onUpdate not implemented")]]
    /**
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xf0320
     * @note[short] Android
     */
    TodoReturn setupCommentsBrowser(cocos2d::CCArray* p0);

    /**
     * @note[short] Windows: 0xefe50
     * @note[short] Android
     */
    TodoReturn untoggleAll();
    
private:
    [[deprecated("FRequestProfilePage::updateLevelsLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLevelsLabel();
public:
    
private:
    [[deprecated("FRequestProfilePage::updatePageArrows not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePageArrows();
public:
    
private:
    [[deprecated("FRequestProfilePage::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("FRequestProfilePage::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("FRequestProfilePage::FLAlert_Clicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("FRequestProfilePage::onClosePopup not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn onClosePopup(UploadActionPopup* p0);
public:
    
private:
    [[deprecated("FRequestProfilePage::uploadActionFinished not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn uploadActionFinished(int p0, int p1);
public:
    
private:
    [[deprecated("FRequestProfilePage::uploadActionFailed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn uploadActionFailed(int p0, int p1);
public:
    
private:
    [[deprecated("FRequestProfilePage::loadFRequestsFinished not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn loadFRequestsFinished(cocos2d::CCArray* p0, char const* p1);
public:
    
private:
    [[deprecated("FRequestProfilePage::loadFRequestsFailed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn loadFRequestsFailed(char const* p0, GJErrorCode p1);
public:
    
private:
    [[deprecated("FRequestProfilePage::setupPageInfo not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn setupPageInfo(gd::string p0, char const* p1);
public:
    
private:
    [[deprecated("FRequestProfilePage::forceReloadRequests not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn forceReloadRequests(bool p0);
public:
};
