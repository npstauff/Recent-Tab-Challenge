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

class GJLocalLevelScoreCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "GJLocalLevelScoreCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJLocalLevelScoreCell, TableViewCell)

    /**
     * @note[short] Windows: 0x878f0
     * @note[short] Android
     */
    TodoReturn loadFromScore(GJLocalScore* p0);

    /**
     * @note[short] Windows: 0x87b80
     * @note[short] Android
     */
    TodoReturn updateBGColor(int p0);
    
private:
    [[deprecated("GJLocalLevelScoreCell::init not implemented")]]
    /**
     * @note[short] Android
     */
    virtual bool init();
public:
    
private:
    [[deprecated("GJLocalLevelScoreCell::draw not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void draw();
public:
};
