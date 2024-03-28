#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LoadingCircle : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "LoadingCircle";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LoadingCircle, cocos2d::CCLayerColor)

    /**
     * @note[short] Windows: 0x483d0
     * @note[short] Android
     */
    static LoadingCircle* create();

    /**
     * @note[short] Windows: 0x48670
     * @note[short] Android
     */
    TodoReturn fadeAndRemove();

    /**
     * @note[short] Windows: 0x48590
     * @note[short] Android
     */
    TodoReturn show();

    /**
     * @note[short] Out of line
     */
    void setFade(bool fade);

    /**
     * @note[short] Windows: 0x484d0
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("LoadingCircle::draw not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void draw();
public:
    
private:
    [[deprecated("LoadingCircle::ccTouchBegan not implemented")]]
    /**
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("LoadingCircle::ccTouchMoved not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("LoadingCircle::ccTouchEnded not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("LoadingCircle::ccTouchCancelled not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("LoadingCircle::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:
	inline void setParentLayer(cocos2d::CCLayer* layer) {
        m_parentLayer = layer;
    }
    cocos2d::CCSprite* m_sprite;
    cocos2d::CCLayer* m_parentLayer;
    bool m_fade;
};
