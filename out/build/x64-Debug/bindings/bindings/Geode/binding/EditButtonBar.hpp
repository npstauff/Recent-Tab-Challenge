#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class EditButtonBar : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "EditButtonBar";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(EditButtonBar, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x9b7e0
     * @note[short] Android
     */
    static EditButtonBar* create(cocos2d::CCArray* objects, cocos2d::CCPoint size, int unk, bool unkBool, int columns, int rows);
    
private:
    [[deprecated("EditButtonBar::getPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPage();
public:
    
private:
    [[deprecated("EditButtonBar::goToPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn goToPage(int p0);
public:

    /**
     * @note[short] Windows: 0x9b8e0
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* objects, cocos2d::CCPoint size, int unk, bool unkBool, int columns, int rows);

    /**
     * @note[short] Windows: 0x9b970
     * @note[short] Android
     */
    void loadFromItems(cocos2d::CCArray* p0, int p1, int p2, bool p3);
    
private:
    [[deprecated("EditButtonBar::onLeft not implemented")]]
    /**
     * @note[short] Android
     */
    void onLeft(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditButtonBar::onRight not implemented")]]
    /**
     * @note[short] Android
     */
    void onRight(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Out of line
     */
    void reloadItems(int rowCount, int columnCount);
    cocos2d::CCPoint m_position;
    int m_unknown;
    bool m_unknownBool;
    cocos2d::CCArray* m_buttonArray;
    BoomScrollLayer* m_scrollLayer;
    cocos2d::CCArray* m_pagesArray;
};
