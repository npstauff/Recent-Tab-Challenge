#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCIndexPath.hpp"
#include "CCScrollLayerExt.hpp"
#include "CCScrollLayerExtDelegate.hpp"

class TableView : public CCScrollLayerExt, public CCScrollLayerExtDelegate {
public:
    static constexpr auto CLASS_NAME = "TableView";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TableView, CCScrollLayerExt)

    /**
     * @note[short] Windows: 0x4fe90
     * @note[short] Android
     */
    static TableView* create(TableViewDelegate* p0, TableViewDataSource* p1, TableViewCellDelegate* p2, cocos2d::CCRect p3);
    
private:
    [[deprecated("TableView::cancelAndStoleTouch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn cancelAndStoleTouch(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("TableView::cellForRowAtIndexPath not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn cellForRowAtIndexPath(CCIndexPath& p0);
public:
    
private:
    [[deprecated("TableView::cellForTouch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn cellForTouch(cocos2d::CCTouch* p0);
public:
    
private:
    [[deprecated("TableView::checkBoundaryOfCell not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkBoundaryOfCell(cocos2d::CCPoint& p0, float p1);
public:
    
private:
    [[deprecated("TableView::checkBoundaryOfCell not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkBoundaryOfCell(TableViewCell* p0);
public:
    
private:
    [[deprecated("TableView::checkBoundaryOfContent not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkBoundaryOfContent(float p0);
public:
    
private:
    [[deprecated("TableView::checkFirstCell not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkFirstCell(TableViewCell* p0);
public:
    
private:
    [[deprecated("TableView::checkLastCell not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkLastCell(TableViewCell* p0);
public:
    
private:
    [[deprecated("TableView::claimTouch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn claimTouch(cocos2d::CCTouch* p0);
public:

    /**
     * @note[short] Windows: 0x50550
     * @note[short] Android
     */
    TodoReturn deleteTableViewCell(TableViewCell* p0);
    
private:
    [[deprecated("TableView::dequeueReusableCellWithIdentifier not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn dequeueReusableCellWithIdentifier(char const* p0);
public:
    
private:
    [[deprecated("TableView::initTableViewCells not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn initTableViewCells();
public:
    
private:
    [[deprecated("TableView::isDuplicateIndexPath not implemented")]]
    /**
     * @note[short] Android
     */
    bool isDuplicateIndexPath(CCIndexPath& p0);
public:
    
private:
    [[deprecated("TableView::isDuplicateInVisibleCellArray not implemented")]]
    /**
     * @note[short] Android
     */
    bool isDuplicateInVisibleCellArray(CCIndexPath* p0);
public:

    /**
     * @note[short] Windows: 0x50770
     * @note[short] Android
     */
    void reloadData();
    
private:
    [[deprecated("TableView::removeIndexPathFromPathAddedArray not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeIndexPathFromPathAddedArray(CCIndexPath& p0);
public:
    
private:
    [[deprecated("TableView::scrollToIndexPath not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scrollToIndexPath(CCIndexPath& p0);
public:
    
private:
    [[deprecated("TableView::touchFinish not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn touchFinish(cocos2d::CCTouch* p0);
public:
    
private:
    [[deprecated("TableView::onEnter not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void onEnter();
public:
    
private:
    [[deprecated("TableView::onExit not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void onExit();
public:

    /**
     * @note[short] Windows: 0x50d00
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x50e50
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x50da0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x50df0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    
private:
    [[deprecated("TableView::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:

    /**
     * @note[short] Windows: 0x50fd0
     * @note[short] Android
     */
    virtual void scrollWheel(float p0, float p1);

    /**
     * @note[short] Out of line
     */
    virtual void scrllViewWillBeginDecelerating(CCScrollLayerExt* p0);

    /**
     * @note[short] Out of line
     */
    virtual void scrollViewDidEndDecelerating(CCScrollLayerExt* p0);

    /**
     * @note[short] Out of line
     */
    virtual void scrollViewTouchMoving(CCScrollLayerExt* p0);

    /**
     * @note[short] Out of line
     */
    virtual void scrollViewDidEndMoving(CCScrollLayerExt* p0);
    bool m_touchOutOfBoundary;
    cocos2d::CCTouch* m_touchStart;
    cocos2d::CCPoint m_touchStartPosition2;
    cocos2d::CCPoint m_unknown2;
    cocos2d::CCPoint m_touchPosition2;
    void* m_idk;
    bool m_touchMoved;
    cocos2d::CCArray* m_cellArray;
    cocos2d::CCArray* m_array2;
    cocos2d::CCArray* m_array3;
    TableViewDelegate* m_tableDelegate;
    TableViewDataSource* m_dataSource;
    TableViewCellDelegate* m_cellDelegate;
    int m_unused2;
    void* m_unused3;
    int m_unused4;
    float m_touchLastY;
    bool m_cancellingTouches;
};
