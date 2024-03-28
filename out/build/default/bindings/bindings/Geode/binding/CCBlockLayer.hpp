#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCBlockLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "CCBlockLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCBlockLayer, cocos2d::CCLayerColor)
    
private:
    [[deprecated("CCBlockLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CCBlockLayer* create();
public:
    
private:
    [[deprecated("CCBlockLayer::decrementForcePrio not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn decrementForcePrio();
public:
    
private:
    [[deprecated("CCBlockLayer::incrementForcePrio not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn incrementForcePrio();
public:

    /**
     * @note[short] Windows: 0x22f00
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x230a0
     * @note[short] Android
     */
    virtual void draw();
    
private:
    [[deprecated("CCBlockLayer::ccTouchBegan not implemented")]]
    /**
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:

    /**
     * @note[short] Out of line
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Out of line
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Out of line
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    
private:
    [[deprecated("CCBlockLayer::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:

    /**
     * @note[short] Windows: 0x22ff0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Out of line
     */
    virtual void customSetup();
    
private:
    [[deprecated("CCBlockLayer::enterLayer not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn enterLayer();
public:

    /**
     * @note[short] Windows: 0x23010
     * @note[short] Android
     */
    virtual TodoReturn exitLayer();

    /**
     * @note[short] Windows: 0x23040
     * @note[short] Android
     */
    virtual void showLayer(bool p0);

    /**
     * @note[short] Windows: 0x23050
     * @note[short] Android
     */
    virtual TodoReturn hideLayer(bool p0);
    
private:
    [[deprecated("CCBlockLayer::layerVisible not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn layerVisible();
public:

    /**
     * @note[short] Windows: 0x23070
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] Out of line
     */
    virtual void enterAnimFinished();

    /**
     * @note[short] Out of line
     */
    virtual void disableUI();

    /**
     * @note[short] Out of line
     */
    virtual void enableUI();
    void* m_unknown;
};
