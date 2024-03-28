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

    /**
     * @note[short] Windows: 0x4c510
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] Windows: 0x4c5f0
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] Windows: 0x4c640
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x4c710
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x4c810
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    
private:
    [[deprecated("ScrollingLayer::ccTouchCancelled not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
};
