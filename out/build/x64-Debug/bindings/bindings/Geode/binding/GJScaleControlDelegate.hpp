#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJScaleControlDelegate {
public:
    static constexpr auto CLASS_NAME = "GJScaleControlDelegate";
    
private:
    [[deprecated("GJScaleControlDelegate::scaleXChanged not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn scaleXChanged(float p0);
public:
    
private:
    [[deprecated("GJScaleControlDelegate::scaleYChanged not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn scaleYChanged(float p0);
public:
    
private:
    [[deprecated("GJScaleControlDelegate::scaleXYChanged not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn scaleXYChanged(float p0, float p1);
public:
    
private:
    [[deprecated("GJScaleControlDelegate::scaleChangeBegin not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn scaleChangeBegin();
public:
    
private:
    [[deprecated("GJScaleControlDelegate::scaleChangeEnded not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn scaleChangeEnded();
public:
    
private:
    [[deprecated("GJScaleControlDelegate::updateScaleControl not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateScaleControl();
public:
    
private:
    [[deprecated("GJScaleControlDelegate::anchorPointMoved not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn anchorPointMoved(cocos2d::CCPoint p0);
public:
};
