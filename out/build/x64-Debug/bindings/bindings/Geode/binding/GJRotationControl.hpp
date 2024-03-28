#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJRotationControl : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJRotationControl";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJRotationControl, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0xddc40
     * @note[short] Android
     */
    static GJRotationControl* create();

    /**
     * @note[short] Windows: 0xddf70
     * @note[short] Android
     */
    TodoReturn finishTouch();
    
private:
    [[deprecated("GJRotationControl::setAngle not implemented")]]
    /**
     * @note[short] Android
     */
    void setAngle(float p0);
public:
    
private:
    [[deprecated("GJRotationControl::updateSliderPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSliderPosition(cocos2d::CCPoint p0);
public:

    /**
     * @note[short] Windows: 0xddce0
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("GJRotationControl::draw not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void draw();
public:
    
private:
    [[deprecated("GJRotationControl::ccTouchBegan not implemented")]]
    /**
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("GJRotationControl::ccTouchMoved not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("GJRotationControl::ccTouchEnded not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("GJRotationControl::ccTouchCancelled not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
};
