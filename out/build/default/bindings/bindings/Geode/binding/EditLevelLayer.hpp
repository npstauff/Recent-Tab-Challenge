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
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "SetIDPopupDelegate.hpp"

class EditLevelLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public SetIDPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "EditLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(EditLevelLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x9c840
     * @note[short] Android
     */
    static EditLevelLayer* create(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x9e520
     * @note[short] Android
     */
    TodoReturn closeTextInputs();

    /**
     * @note[short] Windows: 0x9f560
     * @note[short] Android
     */
    void confirmClone(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x9f0e0
     * @note[short] Android
     */
    void confirmDelete(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x9f5e0
     * @note[short] Android
     */
    void confirmMoveToTop(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x9c8e0
     * @note[short] Android
     */
    bool init(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x9f7a0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x9f440
     * @note[short] Android
     */
    void onClone();
    
private:
    [[deprecated("EditLevelLayer::onDelete not implemented")]]
    /**
     * @note[short] Android
     */
    void onDelete();
public:

    /**
     * @note[short] Windows: 0x9ed00
     * @note[short] Android
     */
    void onEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x9da70
     * @note[short] Android
     */
    void onGuidelines(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x9f3c0
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x9db40
     * @note[short] Android
     */
    void onLevelInfo(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditLevelLayer::onLevelLeaderboard not implemented")]]
    /**
     * @note[short] Android
     */
    void onLevelLeaderboard(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditLevelLayer::onLowDetailMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onLowDetailMode(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x9f740
     * @note[short] Android
     */
    void onMoveToTop();

    /**
     * @note[short] Windows: 0x9ea10
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x9f660
     * @note[short] Android
     */
    void onSetFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x9ee00
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditLevelLayer::onTest not implemented")]]
    /**
     * @note[short] Android
     */
    void onTest(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x9ec80
     * @note[short] Android
     */
    void onUpdateDescription(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditLevelLayer::playStep2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playStep2();
public:
    
private:
    [[deprecated("EditLevelLayer::playStep3 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playStep3();
public:
    
private:
    [[deprecated("EditLevelLayer::scene not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scene(GJGameLevel* p0);
public:
    
private:
    [[deprecated("EditLevelLayer::setupLevelInfo not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupLevelInfo();
public:
    
private:
    [[deprecated("EditLevelLayer::updateDescText not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDescText(char const* p0);
public:

    /**
     * @note[short] Windows: 0x9f8f0
     * @note[short] Android
     */
    TodoReturn verifyLevelName();

    /**
     * @note[short] Windows: 0x9fb90
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x9fba0
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] Windows: 0x9f6c0
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);

    /**
     * @note[short] Windows: 0x9f160
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0x9e7c0
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x9e570
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x9e900
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x9fc00
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] Windows: 0x9fce0
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] Windows: 0x9fbd0
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);
    cocos2d::CCMenu* m_buttonMenu;
    GJGameLevel* m_level;
    TextArea* m_descriptionInput;
    cocos2d::CCArray* m_someArray;
    cocos2d::CCLabelBMFont* m_folderLabel;
    bool m_unk;
    bool m_lowDetailModeTriggered;
    GJLevelType m_levelType;
};
