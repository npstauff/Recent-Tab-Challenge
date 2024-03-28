#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ScrollingLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "ScrollingLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ScrollingLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] Windows: 0x4c290
     * @note[short] Android
     */
    static ScrollingLayer* create(cocos2d::CCSize p0, cocos2d::CCPoint p1, float p2);
    
private:
    [[deprecated("ScrollingLayer::getViewRect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getViewRect();
public:

    /**
     * @note[short] Windows: 0x4c360
     * @note[short] Android
     */
    bool init(cocos2d::CCSize p0, cocos2d::CCPoint p1, float p2);
    
private:
    [[deprecated("ScrollingLayer::setStartOffset not implemented")]]
    /**
     * @note[short] Android
     */
    void setStartOffset(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("ScrollingLayer::draw not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void draw();
public:
    
private:
    [[deprecated("ScrollingLayer::visit not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void visit();
public:
    
private:
    [[deprecated("ScrollingLayer::ccTouchBegan not implemented")]]
    /**
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("ScrollingLayer::ccTouchMoved not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("ScrollingLayer::ccTouchEnded not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("ScrollingLayer::ccTouchCancelled not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
};
