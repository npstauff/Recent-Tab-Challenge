#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "MusicDownloadDelegate.hpp"
#include "TableViewCellDelegate.hpp"
#include "SetTextPopupDelegate.hpp"
#include "SelectSFXSortDelegate.hpp"

class SFXBrowser : public FLAlertLayer, public MusicDownloadDelegate, public TableViewCellDelegate, public SetTextPopupDelegate, public SelectSFXSortDelegate {
public:
    static constexpr auto CLASS_NAME = "SFXBrowser";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SFXBrowser, FLAlertLayer)

    /**
     * @note[short] Windows: 0x378110
     * @note[short] Android
     */
    static SFXBrowser* create(int p0);

    /**
     * @note[short] Windows: 0x3781b0
     * @note[short] Android
     */
    bool init(int p0);
    
private:
    [[deprecated("SFXBrowser::onClearSearch not implemented")]]
    /**
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SFXBrowser::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SFXBrowser::onCredits not implemented")]]
    /**
     * @note[short] Android
     */
    void onCredits(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SFXBrowser::onExitFolder not implemented")]]
    /**
     * @note[short] Android
     */
    void onExitFolder(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SFXBrowser::onPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SFXBrowser::onSearch not implemented")]]
    /**
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SFXBrowser::onSorting not implemented")]]
    /**
     * @note[short] Android
     */
    void onSorting(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SFXBrowser::onToggleCompactMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleCompactMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SFXBrowser::onUpdateLibrary not implemented")]]
    /**
     * @note[short] Android
     */
    void onUpdateLibrary(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x379250
     * @note[short] Android
     */
    void setupList(SFXSearchResult* p0);

    /**
     * @note[short] Windows: 0x379010
     * @note[short] Android
     */
    TodoReturn trySetupSFXBrowser();

    /**
     * @note[short] Windows: 0x379ea0
     * @note[short] Android
     */
    TodoReturn updatePageLabel();
    
private:
    [[deprecated("SFXBrowser::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:

    /**
     * @note[short] Windows: 0x37a100
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x379120
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction p0);

    /**
     * @note[short] Windows: 0x379180
     * @note[short] Android
     */
    virtual void musicActionFailed(GJMusicAction p0);

    /**
     * @note[short] Windows: 0x379ae0
     * @note[short] Android
     */
    virtual TodoReturn sortSelectClosed(SelectSFXSortLayer* p0);

    /**
     * @note[short] Windows: 0x379c80
     * @note[short] Android
     */
    virtual void setTextPopupClosed(SetTextPopup* p0, gd::string p1);

    /**
     * @note[short] Windows: 0x379d10
     * @note[short] Android
     */
    virtual TodoReturn cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);

    /**
     * @note[short] Windows: 0x379da0
     * @note[short] Android
     */
    virtual TodoReturn getSelectedCellIdx();

    /**
     * @note[short] Windows: 0x379db0
     * @note[short] Android
     */
    virtual TodoReturn shouldSnapToSelected();
};
