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
#include "DialogDelegate.hpp"

class SecretLayer4 : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretLayer4";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer4, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x30e500
     * @note[short] Android
     */
    static SecretLayer4* create();

    /**
     * @note[short] Windows: 0x310480
     * @note[short] Android
     */
    TodoReturn getBasicMessage();
    
private:
    [[deprecated("SecretLayer4::getErrorMessage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getErrorMessage();
public:

    /**
     * @note[short] Windows: 0x30fd10
     * @note[short] Android
     */
    TodoReturn getMessage();

    /**
     * @note[short] Windows: 0x30fdb0
     * @note[short] Android
     */
    TodoReturn getThreadMessage();
    
private:
    [[deprecated("SecretLayer4::nodeWithTag not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn nodeWithTag(int p0);
public:
    
private:
    [[deprecated("SecretLayer4::onBack not implemented")]]
    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretLayer4::onChest01 not implemented")]]
    /**
     * @note[short] Android
     */
    void onChest01(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretLayer4::onSubmit not implemented")]]
    /**
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretLayer4::playCoinEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playCoinEffect();
public:
    
private:
    [[deprecated("SecretLayer4::scene not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scene();
public:

    /**
     * @note[short] Windows: 0x3088b0
     * @note[short] Android
     */
    TodoReturn selectAThread();
    
private:
    [[deprecated("SecretLayer4::showDialog not implemented")]]
    /**
     * @note[short] Android
     */
    void showDialog(int p0);
public:
    
private:
    [[deprecated("SecretLayer4::showFirstDialog not implemented")]]
    /**
     * @note[short] Android
     */
    void showFirstDialog();
public:

    /**
     * @note[short] Windows: 0x308770
     * @note[short] Android
     */
    TodoReturn updateMessageLabel(gd::string p0);

    /**
     * @note[short] Windows: 0x3084b0
     * @note[short] Android
     */
    void updateSearchLabel(char const* p0);

    /**
     * @note[short] Windows: 0x30e5a0
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("SecretLayer4::onExit not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void onExit();
public:

    /**
     * @note[short] Windows: 0x310870
     * @note[short] Android
     */
    virtual void keyBackClicked();
    
private:
    [[deprecated("SecretLayer4::textInputOpened not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("SecretLayer4::textInputClosed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("SecretLayer4::textChanged not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
public:

    /**
     * @note[short] Out of line
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Out of line
     */
    virtual void dialogClosed(DialogLayer* p0);
};
