#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TableViewCell.hpp"

class StatsCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "StatsCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(StatsCell, TableViewCell)
    
private:
    [[deprecated("StatsCell::getTitleFromKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTitleFromKey(char const* p0);
public:

    /**
     * @note[short] Windows: 0x82230
     * @note[short] Android
     */
    TodoReturn loadFromObject(StatsObject* p0);

    /**
     * @note[short] Windows: 0x7d560
     * @note[short] Android
     */
    TodoReturn updateBGColor(int p0);
    
private:
    [[deprecated("StatsCell::init not implemented")]]
    /**
     * @note[short] Android
     */
    virtual bool init();
public:

    /**
     * @note[short] Windows: 0x7d5b0
     * @note[short] Android
     */
    virtual void draw();
};
