#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "TableViewCellDelegate.hpp"

class GJSongBrowser : public GJDropDownLayer, public FLAlertLayerProtocol, public TableViewCellDelegate {
public:
    static constexpr auto CLASS_NAME = "GJSongBrowser";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJSongBrowser, GJDropDownLayer)

    /**
     * @note[short] Windows: 0x224e80
     * @note[short] Android
     */
    static GJSongBrowser* create();

    /**
     * @note[short] Windows: 0x2253c0
     * @note[short] Android
     */
    void loadPage(int p0);
    
private:
    [[deprecated("GJSongBrowser::onDeleteAll not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeleteAll(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJSongBrowser::onNextPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJSongBrowser::onPrevPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJSongBrowser::setupPageInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void setupPageInfo(int p0, int p1, int p2);
public:
    
private:
    [[deprecated("GJSongBrowser::setupSongBrowser not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupSongBrowser(cocos2d::CCArray* p0);
public:

    /**
     * @note[short] Windows: 0x224fe0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x225080
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] Windows: 0x225010
     * @note[short] Android
     */
    virtual TodoReturn exitLayer(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x2257d0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0x225990
     * @note[short] Android
     */
    virtual TodoReturn cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);

    /**
     * @note[short] Windows: 0x2259d0
     * @note[short] Android
     */
    virtual TodoReturn getSelectedCellIdx();
    int m_page;
    int m_songID;
    bool m_selected;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    cocos2d::CCLabelBMFont* m_countText;
private:
    cocos2d::CCArray* m_downloadedSongs;
public:
private:
    CustomListView* m_listView;
public:
};
