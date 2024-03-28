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

class LevelAreaLayer : public cocos2d::CCLayer, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelAreaLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelAreaLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x22f560
     * @note[short] Android
     */
    static LevelAreaLayer* create();

    /**
     * @note[short] Windows: 0x230d50
     * @note[short] Android
     */
    cocos2d::CCAction* addGodRay(float p0, float p1, float p2, float p3, float p4, cocos2d::CCPoint p5);

    /**
     * @note[short] Windows: 0x230800
     * @note[short] Android
     */
    void addTorch(cocos2d::CCNode* p0, cocos2d::CCPoint p1, int p2, float p3, int p4, bool p5);

    /**
     * @note[short] Windows: 0x2306c0
     * @note[short] Android
     */
    cocos2d::CCAction* fadeInsideTower();

    /**
     * @note[short] Windows: 0x231080
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x230580
     * @note[short] Android
     */
    void onClickDoor(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x230750
     * @note[short] Android
     */
    bool onEnterTower();
    
private:
    [[deprecated("LevelAreaLayer::scene not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scene();
public:

    /**
     * @note[short] Windows: 0x230300
     * @note[short] Android
     */
    cocos2d::CCAction* showDialog();

    /**
     * @note[short] Windows: 0x22f610
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x2310f0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x230570
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);
};
