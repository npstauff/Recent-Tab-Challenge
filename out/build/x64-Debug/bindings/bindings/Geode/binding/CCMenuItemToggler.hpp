#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCMenuItemToggler : public cocos2d::CCMenuItem {
public:
    static constexpr auto CLASS_NAME = "CCMenuItemToggler";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCMenuItemToggler, cocos2d::CCMenuItem)

    /**
     * @note[short] Out of line
     */
     CCMenuItemToggler();

    /**
     * @note[short] Windows: 0x25e50
     * @note[short] Android
     */
    static CCMenuItemToggler* create(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3);

    /**
     * @note[short] Out of line
     */
    static CCMenuItemToggler* createWithSize(const char* spr1, const char* spr2, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback, float scale);

    /**
     * @note[short] Out of line
     */
    static CCMenuItemToggler* createWithStandardSprites(cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback, float scale);
    
private:
    [[deprecated("CCMenuItemToggler::activeItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activeItem();
public:

    /**
     * @note[short] Windows: 0x25f30
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3);
    
private:
    [[deprecated("CCMenuItemToggler::normalTouch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn normalTouch(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("CCMenuItemToggler::selectedTouch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn selectedTouch(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] Out of line
     */
    void setSizeMult(float mult);

    /**
     * @note[short] Windows: 0x261e0
     * @note[short] Android
     */
    void toggle(bool p0);

    /**
     * @note[short] Out of line
     */
    bool isToggled();

    /**
     * @note[short] Out of line
     */
    bool isOn();

    /**
     * @note[short] Out of line
     */
    void setClickable(bool on);

    /**
     * @note[short] Out of line
     */
    void toggleWithCallback(bool on);

    /**
     * @note[short] Windows: 0x26100
     * @note[short] Android
     */
    virtual void activate();

    /**
     * @note[short] Windows: 0x260d0
     * @note[short] Android
     */
    virtual void selected();

    /**
     * @note[short] Windows: 0x26130
     * @note[short] Android
     */
    virtual void unselected();

    /**
     * @note[short] Windows: 0x26160
     * @note[short] Android
     */
    virtual void setEnabled(bool p0);
    CCMenuItemSpriteExtra* m_offButton;
    CCMenuItemSpriteExtra* m_onButton;
    bool m_toggled;
    bool m_notClickable;
};
