#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class UILayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "UILayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(UILayer, cocos2d::CCLayerColor)
    
private:
    [[deprecated("UILayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static UILayer* create(GJBaseGameLayer* p0);
public:
    
private:
    [[deprecated("UILayer::disableMenu not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn disableMenu();
public:
    
private:
    [[deprecated("UILayer::editorPlaytest not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn editorPlaytest(bool p0);
public:

    /**
     * @note[short] Windows: 0x3bf420
     * @note[short] Android
     */
    TodoReturn enableEditorMode();
    
private:
    [[deprecated("UILayer::enableMenu not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn enableMenu();
public:

    /**
     * @note[short] Windows: 0x3bf480
     * @note[short] Android
     */
    TodoReturn handleKeypress(cocos2d::enumKeyCodes p0, bool p1);

    /**
     * @note[short] Windows: 0x3bec10
     * @note[short] Android
     */
    bool init(GJBaseGameLayer* p0);
    
private:
    [[deprecated("UILayer::isJumpButtonPressed not implemented")]]
    /**
     * @note[short] Android
     */
    bool isJumpButtonPressed(bool p0);
public:

    /**
     * @note[short] Windows: 0x3bfa10
     * @note[short] Android
     */
    void onCheck(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3bfa50
     * @note[short] Android
     */
    void onDeleteCheck(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3bf9a0
     * @note[short] Android
     */
    void onPause(cocos2d::CCObject* sender);
    
private:
    [[deprecated("UILayer::processUINodesTouch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processUINodesTouch(GJUITouchEvent p0, cocos2d::CCTouch* p1);
public:
    
private:
    [[deprecated("UILayer::processUINodeTouch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processUINodeTouch(GJUITouchEvent p0, int p1, cocos2d::CCPoint p2, GJUINode* p3);
public:
    
private:
    [[deprecated("UILayer::refreshDpad not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn refreshDpad();
public:

    /**
     * @note[short] Windows: 0x3bfad0
     * @note[short] Android
     */
    TodoReturn resetAllButtons();

    /**
     * @note[short] Windows: 0x3bf390
     * @note[short] Android
     */
    TodoReturn resetUINodeState();
    
private:
    [[deprecated("UILayer::toggleCheckpointsMenu not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleCheckpointsMenu(bool p0);
public:

    /**
     * @note[short] Windows: 0x3bfa80
     * @note[short] Android
     */
    TodoReturn toggleMenuVisibility(bool p0);
    
private:
    [[deprecated("UILayer::togglePlatformerMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn togglePlatformerMode(bool p0);
public:
    
private:
    [[deprecated("UILayer::updateDualMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDualMode(bool p0);
public:
    
private:
    [[deprecated("UILayer::updateUINodeVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateUINodeVisibility(bool p0);
public:

    /**
     * @note[short] Out of line
     */
    virtual void draw();

    /**
     * @note[short] Windows: 0x3bfb30
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x3bfc60
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x3bfc80
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    
private:
    [[deprecated("UILayer::ccTouchCancelled not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("UILayer::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:

    /**
     * @note[short] Windows: 0x3bf970
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x3bf930
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] Windows: 0x3bf950
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);
    void* m_stupidDelegate;
};
