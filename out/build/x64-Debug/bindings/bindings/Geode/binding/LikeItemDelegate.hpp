#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LikeItemDelegate {
public:
    static constexpr auto CLASS_NAME = "LikeItemDelegate";

    /**
     * @note[short] Out of line
     */
    virtual void likedItem(LikeItemType p0, int p1, bool p2);
};
