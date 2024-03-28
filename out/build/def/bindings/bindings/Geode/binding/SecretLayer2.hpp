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

class SecretLayer2 : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretLayer2";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer2, cocos2d::CCLayer)
    
private:
    [[deprecated("SecretLayer2::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SecretLayer2* create();
public:

    /**
     * @note[short] Windows: 0x309030
     * @note[short] Android
     */
    gd::string getBasicMessage();
    
private:
    [[deprecated("SecretLayer2::getErrorMessage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getErrorMessage();
public:
    
private:
    [[deprecated("SecretLayer2::getMessage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMessage();
public:
    
private:
    [[deprecated("SecretLayer2::getThreadMessage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getThreadMessage();
public:
    
private:
    [[deprecated("SecretLayer2::nodeWithTag not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn nodeWithTag(int p0);
public:
    
private:
    [[deprecated("SecretLayer2::onBack not implemented")]]
    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretLayer2::onDoor not implemented")]]
    /**
     * @note[short] Android
     */
    void onDoor(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x306c30
     * @note[short] Android
     */
    void onSecretLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3071c0
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SecretLayer2::playCoinEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playCoinEffect();
public:
    
private:
    [[deprecated("SecretLayer2::scene not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scene();
public:
    
private:
    [[deprecated("SecretLayer2::selectAThread not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn selectAThread();
public:
    
private:
    [[deprecated("SecretLayer2::showCompletedLevel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn showCompletedLevel();
public:
    
private:
    [[deprecated("SecretLayer2::showSecretLevel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn showSecretLevel();
public:

    /**
     * @note[short] Windows: 0x308770
     * @note[short] Android
     */
    void updateMessageLabel(gd::string p0);

    /**
     * @note[short] Windows: 0x3084b0
     * @note[short] Android
     */
    void updateSearchLabel(char const* p0);

    /**
     * @note[short] Windows: 0x3056d0
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("SecretLayer2::onExit not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void onExit();
public:
    
private:
    [[deprecated("SecretLayer2::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("SecretLayer2::textInputOpened not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn textInputOpened(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("SecretLayer2::textInputClosed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn textInputClosed(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("SecretLayer2::textChanged not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn textChanged(CCTextInputNode* p0);
public:
    
private:
    [[deprecated("SecretLayer2::FLAlert_Clicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("SecretLayer2::dialogClosed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn dialogClosed(DialogLayer* p0);
public:
};
