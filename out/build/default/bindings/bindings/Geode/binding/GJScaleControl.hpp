#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJScaleControl : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJScaleControl";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJScaleControl, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0xde1c0
     * @note[short] Android
     */
    static GJScaleControl* create();
    
private:
    [[deprecated("GJScaleControl::finishTouch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn finishTouch();
public:

    /**
     * @note[short] Windows: 0xde650
     * @note[short] Android
     */
    TodoReturn loadValues(GameObject* p0, cocos2d::CCArray* p1, gd::unordered_map<int, GameObjectEditorState>& p2);
    
private:
    [[deprecated("GJScaleControl::scaleFromValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scaleFromValue(float p0);
public:
    
private:
    [[deprecated("GJScaleControl::skewFromValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn skewFromValue(float p0);
public:
    
private:
    [[deprecated("GJScaleControl::sliderChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("GJScaleControl::updateLabelX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLabelX(float p0);
public:
    
private:
    [[deprecated("GJScaleControl::updateLabelXY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLabelXY(float p0);
public:
    
private:
    [[deprecated("GJScaleControl::updateLabelY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLabelY(float p0);
public:
    
private:
    [[deprecated("GJScaleControl::valueFromScale not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn valueFromScale(float p0);
public:
    
private:
    [[deprecated("GJScaleControl::valueFromSkew not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn valueFromSkew(float p0);
public:

    /**
     * @note[short] Windows: 0xde260
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0xdedc0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0xdef50
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0xdf410
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    
private:
    [[deprecated("GJScaleControl::ccTouchCancelled not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
};
