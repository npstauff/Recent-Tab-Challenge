#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class MenuGameLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "MenuGameLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MenuGameLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x2791a0
     * @note[short] Android
     */
    static MenuGameLayer* create();

    /**
     * @note[short] Windows: 0x27ae40
     * @note[short] Android
     */
    void destroyPlayer();
    
private:
    [[deprecated("MenuGameLayer::getBGColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getBGColor(int p0);
public:

    /**
     * @note[short] Windows: 0x279fd0
     * @note[short] Android
     */
    TodoReturn resetPlayer();
    
private:
    [[deprecated("MenuGameLayer::tryJump not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryJump(float p0);
public:

    /**
     * @note[short] Windows: 0x2796d0
     * @note[short] Android
     */
    TodoReturn updateColor(float p0);
    
private:
    [[deprecated("MenuGameLayer::updateColors not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateColors();
public:

    /**
     * @note[short] Windows: 0x279c60
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] Windows: 0x279240
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x27b020
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Out of line
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Out of line
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    
private:
    [[deprecated("MenuGameLayer::ccTouchCancelled not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:

    /**
     * @note[short] Windows: 0x27b130
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
    bool m_unkBool1;
    float m_deltaCount;
    bool m_isDestroyingPlayer;
    int m_initCount;
    cocos2d::CCPoint* m_unused1;
    int m_unused2;
    PlayerObject* m_playerObject;
    cocos2d::CCSprite* m_backgroundSprite;
    GJGroundLayer* m_groundLayer;
    float m_backgroundSpeed;
};
