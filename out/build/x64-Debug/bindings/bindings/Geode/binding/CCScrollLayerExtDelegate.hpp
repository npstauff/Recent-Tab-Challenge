#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCScrollLayerExtDelegate {
public:
    static constexpr auto CLASS_NAME = "CCScrollLayerExtDelegate";
    
private:
    [[deprecated("CCScrollLayerExtDelegate::scrllViewWillBeginDecelerating not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn scrllViewWillBeginDecelerating(CCScrollLayerExt* p0);
public:
    
private:
    [[deprecated("CCScrollLayerExtDelegate::scrollViewDidEndDecelerating not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn scrollViewDidEndDecelerating(CCScrollLayerExt* p0);
public:
    
private:
    [[deprecated("CCScrollLayerExtDelegate::scrollViewTouchMoving not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn scrollViewTouchMoving(CCScrollLayerExt* p0);
public:
    
private:
    [[deprecated("CCScrollLayerExtDelegate::scrollViewDidEndMoving not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn scrollViewDidEndMoving(CCScrollLayerExt* p0);
public:
    
private:
    [[deprecated("CCScrollLayerExtDelegate::scrollViewTouchBegin not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn scrollViewTouchBegin(CCScrollLayerExt* p0);
public:
    
private:
    [[deprecated("CCScrollLayerExtDelegate::scrollViewTouchEnd not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn scrollViewTouchEnd(CCScrollLayerExt* p0);
public:
};
