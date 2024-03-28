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
#include "CustomSFXDelegate.hpp"

class CustomSFXCell : public TableViewCell, public CustomSFXDelegate {
public:
    static constexpr auto CLASS_NAME = "CustomSFXCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomSFXCell, TableViewCell)

    /**
     * @note[short] Windows: 0x83670
     * @note[short] Android
     */
    TodoReturn loadFromObject(SFXInfoObject* p0);
    
private:
    [[deprecated("CustomSFXCell::shouldReload not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shouldReload();
public:

    /**
     * @note[short] Windows: 0x83760
     * @note[short] Android
     */
    TodoReturn updateBGColor(int p0);

    /**
     * @note[short] Windows: 0x83650
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("CustomSFXCell::draw not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void draw();
public:
    
private:
    [[deprecated("CustomSFXCell::sfxObjectSelected not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn sfxObjectSelected(SFXInfoObject* p0);
public:
    
private:
    [[deprecated("CustomSFXCell::getActiveSFXID not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn getActiveSFXID();
public:
};
