#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TextAreaDelegate.hpp"

class DialogLayer : public cocos2d::CCLayerColor, public TextAreaDelegate {
public:
    static constexpr auto CLASS_NAME = "DialogLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DialogLayer, cocos2d::CCLayerColor)
    
private:
    [[deprecated("DialogLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static DialogLayer* create(DialogObject* p0, int p1);
public:
    
private:
    [[deprecated("DialogLayer::addToMainScene not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToMainScene();
public:

    /**
     * @note[short] Windows: 0x9b4c0
     * @note[short] Android
     */
    TodoReturn animateIn(DialogAnimationType p0);
    
private:
    [[deprecated("DialogLayer::animateInDialog not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn animateInDialog();
public:

    /**
     * @note[short] Windows: 0x9b460
     * @note[short] Android
     */
    TodoReturn animateInRandomSide();

    /**
     * @note[short] Windows: 0x9a850
     * @note[short] Android
     */
    static DialogLayer* createDialogLayer(DialogObject* p0, cocos2d::CCArray* p1, int p2);
    
private:
    [[deprecated("DialogLayer::createWithObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createWithObjects(cocos2d::CCArray* p0, int p1);
public:
    
private:
    [[deprecated("DialogLayer::displayDialogObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn displayDialogObject(DialogObject* p0);
public:
    
private:
    [[deprecated("DialogLayer::displayNextObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn displayNextObject();
public:
    
private:
    [[deprecated("DialogLayer::finishCurrentAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn finishCurrentAnimation();
public:
    
private:
    [[deprecated("DialogLayer::handleDialogTap not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn handleDialogTap();
public:

    /**
     * @note[short] Windows: 0x9a900
     * @note[short] Android
     */
    bool init(DialogObject* p0, cocos2d::CCArray* p1, int p2);
    
private:
    [[deprecated("DialogLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn onClose();
public:
    
private:
    [[deprecated("DialogLayer::updateChatPlacement not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateChatPlacement(DialogChatPlacement p0);
public:
    
private:
    [[deprecated("DialogLayer::updateNavButtonFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateNavButtonFrame();
public:
    
private:
    [[deprecated("DialogLayer::onEnter not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void onEnter();
public:

    /**
     * @note[short] Windows: 0x9b390
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Out of line
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x9b3c0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x9b3e0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    
private:
    [[deprecated("DialogLayer::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:

    /**
     * @note[short] Windows: 0x9b320
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x9b700
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] Windows: 0x9b400
     * @note[short] Android
     */
    virtual TodoReturn fadeInTextFinished(TextArea* p0);
};
