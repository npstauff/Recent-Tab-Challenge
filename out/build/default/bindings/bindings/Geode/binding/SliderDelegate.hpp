#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SliderDelegate {
public:
    static constexpr auto CLASS_NAME = "SliderDelegate";

    /**
     * @note[short] Out of line
     */
    virtual void sliderBegan(Slider* p0);
    
private:
    [[deprecated("SliderDelegate::sliderEnded not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn sliderEnded(Slider* p0);
public:
};