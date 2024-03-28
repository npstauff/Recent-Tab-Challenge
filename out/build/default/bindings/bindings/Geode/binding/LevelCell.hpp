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

class LevelCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "LevelCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelCell, TableViewCell)

    /**
     * @note[short] Windows: 0x7d7b0
     * @note[short] Android
     */
     LevelCell(char const* p0, float p1, float p2);

    /**
     * @note[short] Windows: 0x7d6f0
     * @note[short] Android
     */
    static LevelCell* create(float p0, float p1);

    /**
     * @note[short] Windows: 0x7da60
     * @note[short] Android
     */
    void loadCustomLevelCell();

    /**
     * @note[short] Windows: 0x7d8b0
     * @note[short] Android
     */
    void loadFromLevel(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x804d0
     * @note[short] Android
     */
    void loadLocalLevelCell();

    /**
     * @note[short] Windows: 0x80e80
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x7da40
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x80f70
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelCell::updateBGColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateBGColor(int p0);
public:

    /**
     * @note[short] Windows: 0x80d80
     * @note[short] Android
     */
    TodoReturn updateCellMode(int p0);
    
private:
    [[deprecated("LevelCell::updateToggle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateToggle();
public:

    /**
     * @note[short] Windows: 0x7d880
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x80fb0
     * @note[short] Android
     */
    virtual void draw();
    CCMenuItemSpriteExtra* m_button;
    GJGameLevel* m_level;
    bool m_cellDrawn;
    CCMenuItemToggler* m_toggler;
    cocos2d::CCPoint m_point;
    cocos2d::CCMenu* m_mainMenu;
    bool m_compactView;
    int m_cellMode;
};
