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

    /**
     * @note[short] Out of line
     */
    virtual void scrllViewWillBeginDecelerating(CCScrollLayerExt* p0);

    /**
     * @note[short] Out of line
     */
    virtual void scrollViewDidEndDecelerating(CCScrollLayerExt* p0);

    /**
     * @note[short] Out of line
     */
    virtual void scrollViewTouchMoving(CCScrollLayerExt* p0);

    /**
     * @note[short] Out of line
     */
    virtual void scrollViewDidEndMoving(CCScrollLayerExt* p0);

    /**
     * @note[short] Out of line
     */
    virtual void scrollViewTouchBegin(CCScrollLayerExt* p0);

    /**
     * @note[short] Out of line
     */
    virtual void scrollViewTouchEnd(CCScrollLayerExt* p0);
};
