#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class ExtendedLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "ExtendedLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ExtendedLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x1f930
     * @note[short] Android
     */
    static ExtendedLayer* create();

    /**
     * @note[short] Windows: 0x1f9d0
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("ExtendedLayer::setPosition not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);
public:
};
