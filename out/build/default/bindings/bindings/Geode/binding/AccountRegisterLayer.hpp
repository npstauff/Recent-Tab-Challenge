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
#include "GJAccountRegisterDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class AccountRegisterLayer : public FLAlertLayer, public TextInputDelegate, public GJAccountRegisterDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "AccountRegisterLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AccountRegisterLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x53b90
     * @note[short] Android
     */
    static AccountRegisterLayer* create();
    
private:
    [[deprecated("AccountRegisterLayer::createTextBackground not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createTextBackground(cocos2d::CCPoint p0, cocos2d::CCSize p1);
public:
    
private:
    [[deprecated("AccountRegisterLayer::createTextInput not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createTextInput(cocos2d::CCPoint p0, cocos2d::CCSize p1, gd::string p2, int p3);
public:
    
private:
    [[deprecated("AccountRegisterLayer::createTextLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createTextLabel(cocos2d::CCPoint p0, gd::string p1, cocos2d::CCSize p2);
public:
    
private:
    [[deprecated("AccountRegisterLayer::disableNodes not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn disableNodes();
public:
    
private:
    [[deprecated("AccountRegisterLayer::hideLoadingUI not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hideLoadingUI();
public:
    
private:
    [[deprecated("AccountRegisterLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("AccountRegisterLayer::onSubmit not implemented")]]
    /**
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("AccountRegisterLayer::resetLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetLabel(int p0);
public:
    
private:
    [[deprecated("AccountRegisterLayer::resetLabels not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetLabels();
public:
    
private:
    [[deprecated("AccountRegisterLayer::showLoadingUI not implemented")]]
    /**
     * @note[short] Android
     */
    void showLoadingUI();
public:
    
private:
    [[deprecated("AccountRegisterLayer::toggleUI not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleUI(bool p0);
public:
    
private:
    [[deprecated("AccountRegisterLayer::updateLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLabel(AccountError p0);
public:
    
private:
    [[deprecated("AccountRegisterLayer::validEmail not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn validEmail(gd::string p0);
public:
    
private:
    [[deprecated("AccountRegisterLayer::validPassword not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn validPassword(gd::string p0);
public:
    
private:
    [[deprecated("AccountRegisterLayer::validUser not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn validUser(gd::string p0);
public:

    /**
     * @note[short] Windows: 0x53c30
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("AccountRegisterLayer::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:

    /**
     * @note[short] Windows: 0x553d0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x54ef0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Out of line
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x554e0
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] Out of line
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x559e0
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);

    /**
     * @note[short] Windows: 0x55a40
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x55a90
     * @note[short] Android
     */
    virtual bool allowTextInput(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x549c0
     * @note[short] Android
     */
    virtual TodoReturn registerAccountFinished();

    /**
     * @note[short] Windows: 0x54b20
     * @note[short] Android
     */
    virtual TodoReturn registerAccountFailed(AccountError p0);
};
