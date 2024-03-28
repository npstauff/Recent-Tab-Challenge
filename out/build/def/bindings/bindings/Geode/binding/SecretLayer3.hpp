#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "DialogDelegate.hpp"

class SecretLayer3 : public cocos2d::CCLayer, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretLayer3";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer3, cocos2d::CCLayer)
    
private:
    [[deprecated("SecretLayer3::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SecretLayer3* create();
public:
    
private:
    [[deprecated("SecretLayer3::animateEyes not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn animateEyes();
public:
    
private:
    [[deprecated("SecretLayer3::firstInteractionStep1 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn firstInteractionStep1();
public:
    
private:
    [[deprecated("SecretLayer3::firstInteractionStep2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn firstInteractionStep2();
public:
    
private:
    [[deprecated("SecretLayer3::firstInteractionStep3 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn firstInteractionStep3();
public:
    
private:
    [[deprecated("SecretLayer3::firstInteractionStep4 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn firstInteractionStep4();
public:
    
private:
    [[deprecated("SecretLayer3::onBack not implemented")]]
    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretLayer3::onChest01 not implemented")]]
    /**
     * @note[short] Android
     */
    void onChest01(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretLayer3::onChest02 not implemented")]]
    /**
     * @note[short] Android
     */
    void onChest02(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretLayer3::onClick not implemented")]]
    /**
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretLayer3::revealStep1 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn revealStep1();
public:
    
private:
    [[deprecated("SecretLayer3::revealStep2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn revealStep2();
public:
    
private:
    [[deprecated("SecretLayer3::revealStep3 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn revealStep3();
public:
    
private:
    [[deprecated("SecretLayer3::revealStep4 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn revealStep4();
public:
    
private:
    [[deprecated("SecretLayer3::revealStep5 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn revealStep5();
public:
    
private:
    [[deprecated("SecretLayer3::scene not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scene();
public:
    
private:
    [[deprecated("SecretLayer3::showUnlockDialog not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn showUnlockDialog();
public:

    /**
     * @note[short] Windows: 0x30a320
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("SecretLayer3::onExit not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void onExit();
public:
    
private:
    [[deprecated("SecretLayer3::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("SecretLayer3::dialogClosed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn dialogClosed(DialogLayer* p0);
public:
};
