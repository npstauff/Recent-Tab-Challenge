#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class TableViewCellDelegate {
public:
    static constexpr auto CLASS_NAME = "TableViewCellDelegate";

    /**
     * @note[short] Windows: 0x224d20
     * @note[short] Android
     */
    virtual TodoReturn cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);
    
private:
    [[deprecated("TableViewCellDelegate::getSelectedCellIdx not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn getSelectedCellIdx();
public:

    /**
     * @note[short] Windows: 0x1d800
     * @note[short] Android
     */
    virtual TodoReturn shouldSnapToSelected();
};
