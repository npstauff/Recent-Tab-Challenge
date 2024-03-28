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
#include "CustomSongDelegate.hpp"

class CustomSongCell : public TableViewCell, public CustomSongDelegate {
public:
    static constexpr auto CLASS_NAME = "CustomSongCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomSongCell, TableViewCell)

    /**
     * @note[short] Windows: 0x831a0
     * @note[short] Android
     */
    TodoReturn loadFromObject(SongInfoObject* p0);

    /**
     * @note[short] Windows: 0x83410
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);
    
private:
    [[deprecated("CustomSongCell::shouldReload not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shouldReload();
public:

    /**
     * @note[short] Windows: 0x833a0
     * @note[short] Android
     */
    TodoReturn updateBGColor(int p0);
    
private:
    [[deprecated("CustomSongCell::init not implemented")]]
    /**
     * @note[short] Android
     */
    virtual bool init();
public:
    
private:
    [[deprecated("CustomSongCell::draw not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void draw();
public:

    /**
     * @note[short] Windows: 0x83310
     * @note[short] Android
     */
    virtual TodoReturn songIDChanged(int p0);
    
private:
    [[deprecated("CustomSongCell::getActiveSongID not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn getActiveSongID();
public:

    /**
     * @note[short] Windows: 0x83360
     * @note[short] Android
     */
    virtual TodoReturn getSongFileName();
    
private:
    [[deprecated("CustomSongCell::getLevelSettings not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn getLevelSettings();
public:
    SongInfoObject* m_songInfoObject;
    bool m_unkBool;
};
