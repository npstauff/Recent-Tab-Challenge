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

class MapPackCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "MapPackCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MapPackCell, TableViewCell)

    /**
     * @note[short] Windows: 0x812a0
     * @note[short] Android
     */
    TodoReturn loadFromMapPack(GJMapPack* p0);
    
private:
    [[deprecated("MapPackCell::onClaimReward not implemented")]]
    /**
     * @note[short] Android
     */
    void onClaimReward(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x81cf0
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MapPackCell::playCompleteEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playCompleteEffect();
public:
    
private:
    [[deprecated("MapPackCell::reloadCell not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reloadCell();
public:
    
private:
    [[deprecated("MapPackCell::updateBGColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateBGColor(int p0);
public:

    /**
     * @note[short] Windows: 0x81250
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("MapPackCell::draw not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void draw();
public:
};
