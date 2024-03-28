#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class BoomScrollLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "BoomScrollLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BoomScrollLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("BoomScrollLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static BoomScrollLayer* create(cocos2d::CCArray* p0, int p1, bool p2, cocos2d::CCArray* p3, DynamicScrollDelegate* p4);
public:
    
private:
    [[deprecated("BoomScrollLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static BoomScrollLayer* create(cocos2d::CCArray* p0, int p1, bool p2);
public:
    
private:
    [[deprecated("BoomScrollLayer::addPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addPage(cocos2d::CCLayer* p0, int p1);
public:
    
private:
    [[deprecated("BoomScrollLayer::addPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addPage(cocos2d::CCLayer* p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::cancelAndStoleTouch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn cancelAndStoleTouch(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("BoomScrollLayer::claimTouch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn claimTouch(cocos2d::CCTouch* p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::getPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPage(int p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::getRelativePageForNum not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRelativePageForNum(int p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::getRelativePosForPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRelativePosForPage(int p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::getTotalPages not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTotalPages();
public:
    
private:
    [[deprecated("BoomScrollLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* p0, int p1, bool p2, cocos2d::CCArray* p3, DynamicScrollDelegate* p4);
public:
    
private:
    [[deprecated("BoomScrollLayer::instantMoveToPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn instantMoveToPage(int p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::moveToPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn moveToPage(int p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::moveToPageEnded not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn moveToPageEnded();
public:
    
private:
    [[deprecated("BoomScrollLayer::pageNumberForPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pageNumberForPosition(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::positionForPageWithNumber not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn positionForPageWithNumber(int p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::quickUpdate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn quickUpdate();
public:
    
private:
    [[deprecated("BoomScrollLayer::removePage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removePage(cocos2d::CCLayer* p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::removePageWithNumber not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removePageWithNumber(int p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::repositionPagesLooped not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn repositionPagesLooped();
public:
    
private:
    [[deprecated("BoomScrollLayer::selectPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn selectPage(int p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::setDotScale not implemented")]]
    /**
     * @note[short] Android
     */
    void setDotScale(float p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::setPagesIndicatorPosition not implemented")]]
    /**
     * @note[short] Android
     */
    void setPagesIndicatorPosition(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::setupDynamicScrolling not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupDynamicScrolling(cocos2d::CCArray* p0, DynamicScrollDelegate* p1);
public:
    
private:
    [[deprecated("BoomScrollLayer::togglePageIndicators not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn togglePageIndicators(bool p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::updateDots not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDots(float p0);
public:
    
private:
    [[deprecated("BoomScrollLayer::updatePages not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePages();
public:

    /**
     * @note[short] Windows: 0x1ea10
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] Windows: 0x1f420
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x1f510
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x1f760
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x1f3f0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x1f270
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
};
