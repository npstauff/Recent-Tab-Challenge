#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "DialogDelegate.hpp"

class LevelAreaInnerLayer : public cocos2d::CCLayer, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelAreaInnerLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelAreaInnerLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x231140
     * @note[short] Android
     */
    static LevelAreaInnerLayer* create(bool p0);

    /**
     * @note[short] Windows: 0x2311e0
     * @note[short] Android
     */
    bool init(bool p0);

    /**
     * @note[short] Windows: 0x232940
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x232720
     * @note[short] Android
     */
    void onDoor(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x232c30
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x231ef0
     * @note[short] Android
     */
    void onNextFloor(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x232850
     * @note[short] Android
     */
    bool playStep1();
    
private:
    [[deprecated("LevelAreaInnerLayer::scene not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scene(bool p0);
public:

    /**
     * @note[short] Windows: 0x231f40
     * @note[short] Android
     */
    cocos2d::CCAction* showFloor1CompleteDialog();

    /**
     * @note[short] Windows: 0x2326a0
     * @note[short] Android
     */
    TodoReturn tryResumeTowerMusic();

    /**
     * @note[short] Windows: 0x2329a0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x232350
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);
};
