#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CurrencyRewardDelegate {
public:
    static constexpr auto CLASS_NAME = "CurrencyRewardDelegate";

    /**
     * @note[short] Out of line
     */
    virtual void currencyWillExit(CurrencyRewardLayer* p0);
};
