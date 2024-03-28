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
    
private:
    [[deprecated("CCBlockLayer::ccTouchMoved not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("CCBlockLayer::ccTouchEnded not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("CCBlockLayer::ccTouchCancelled not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("CCBlockLayer::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("CCBlockLayer::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("CCBlockLayer::customSetup not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void customSetup();
public:
    
private:
    [[deprecated("CCBlockLayer::enterLayer not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn enterLayer();
public:
    
private:
    [[deprecated("CCBlockLayer::exitLayer not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn exitLayer();
public:
    
private:
    [[deprecated("CCBlockLayer::showLayer not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn showLayer(bool p0);
public:
    
private:
    [[deprecated("CCBlockLayer::hideLayer not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn hideLayer(bool p0);
public:
    
private:
    [[deprecated("CCBlockLayer::layerVisible not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn layerVisible();
public:
    
private:
    [[deprecated("CCBlockLayer::layerHidden not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn layerHidden();
public:
    
private:
    [[deprecated("CCBlockLayer::enterAnimFinished not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn enterAnimFinished();
public:
    
private:
    [[deprecated("CCBlockLayer::disableUI not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn disableUI();
public:
    
private:
    [[deprecated("CCBlockLayer::enableUI not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn enableUI();
public:
    void* m_unknown;
};
