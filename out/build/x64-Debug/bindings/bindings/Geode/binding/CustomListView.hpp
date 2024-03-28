#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "BoomListView.hpp"

class CustomListView : public BoomListView {
public:
    static constexpr auto CLASS_NAME = "CustomListView";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomListView, BoomListView)
	inline CustomListView() {}

    /**
     * @note[short] Out of line
     */
     ~CustomListView();

    /**
     * @note[short] Windows: 0x7ad30
     * @note[short] Android
     */
    static CustomListView* create(cocos2d::CCArray* p0, TableViewCellDelegate* p1, float p2, float p3, int p4, BoomListType p5, float p6);

    /**
     * @note[short] Out of line
     */
    static CustomListView* create(cocos2d::CCArray* entries, BoomListType type, float width, float height);
    
private:
    [[deprecated("CustomListView::getCellHeight not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCellHeight(BoomListType p0);
public:

    /**
     * @note[short] Windows: 0x7c300
     * @note[short] Android
     */
    TodoReturn reloadAll();

    /**
     * @note[short] Windows: 0x7bbc0
     * @note[short] Android
     */
    virtual TodoReturn setupList(float p0);

    /**
     * @note[short] Windows: 0x7ae00
     * @note[short] Android
     */
    virtual TableViewCell* getListCell(char const* p0);

    /**
     * @note[short] Windows: 0x7b780
     * @note[short] Android
     */
    virtual TodoReturn loadCell(TableViewCell* p0, int p1);
    int m_unknown;
};
