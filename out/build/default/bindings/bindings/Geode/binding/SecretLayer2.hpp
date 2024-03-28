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

    /**
     * @note[short] Windows: 0x305630
     * @note[short] Android
     */
    static SecretLayer2* create();

    /**
     * @note[short] Windows: 0x309030
     * @note[short] Android
     */
    gd::string getBasicMessage();

    /**
     * @note[short] Windows: 0x3093c0
     * @note[short] Android
     */
    gd::string getErrorMessage();

    /**
     * @note[short] Windows: 0x308810
     * @note[short] Android
     */
    gd::string getMessage();

    /**
     * @note[short] Windows: 0x308a70
     * @note[short] Android
     */
    gd::string getThreadMessage();
    
private:
    [[deprecated("SecretLayer2::nodeWithTag not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn nodeWithTag(int p0);
public:

    /**
     * @note[short] Windows: 0x309ce0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x306e30
     * @note[short] Android
     */
    void onDoor(cocos2d::CCObject* sender);

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

    /**
     * @note[short] Windows: 0x309890
     * @note[short] Android
     */
    void playCoinEffect();
    
private:
    [[deprecated("SecretLayer2::scene not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scene();
public:

    /**
     * @note[short] Windows: 0x3088b0
     * @note[short] Android
     */
    void selectAThread();

    /**
     * @note[short] Windows: 0x306460
     * @note[short] Android
     */
    void showCompletedLevel();

    /**
     * @note[short] Windows: 0x306370
     * @note[short] Android
     */
    void showSecretLevel();

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

    /**
     * @note[short] Windows: 0x309d50
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] Windows: 0x309d40
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x308240
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x308370
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x308410
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Out of line
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0x306be0
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);
};
