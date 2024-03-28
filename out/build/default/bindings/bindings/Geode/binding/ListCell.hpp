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

class ListCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "ListCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ListCell, TableViewCell)
    
private:
    [[deprecated("ListCell::loadFromObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadFromObject(cocos2d::CCObject* p0, int p1, int p2, int p3);
public:
    
private:
    [[deprecated("ListCell::updateBGColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateBGColor(int p0);
public:
    
private:
    [[deprecated("ListCell::init not implemented")]]
    /**
     * @note[short] Android
     */
    virtual bool init();
public:

    /**
     * @note[short] Windows: 0x1d890
     * @note[short] Android
     */
    virtual void draw();
};
