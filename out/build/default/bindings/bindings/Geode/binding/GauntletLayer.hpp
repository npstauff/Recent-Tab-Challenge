#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LevelManagerDelegate.hpp"

class GauntletLayer : public cocos2d::CCLayer, public LevelManagerDelegate {
public:
    static constexpr auto CLASS_NAME = "GauntletLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x1845f0
     * @note[short] Android
     */
    static GauntletLayer* create(GauntletType p0);

    /**
     * @note[short] Windows: 0x184970
     * @note[short] Android
     */
    bool init(GauntletType p0);
    
private:
    [[deprecated("GauntletLayer::onBack not implemented")]]
    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GauntletLayer::onLevel not implemented")]]
    /**
     * @note[short] Android
     */
    void onLevel(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GauntletLayer::scene not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scene(GauntletType p0);
public:

    /**
     * @note[short] Windows: 0x1851d0
     * @note[short] Android
     */
    TodoReturn setupGauntlet(cocos2d::CCArray* p0);
    
private:
    [[deprecated("GauntletLayer::unlockActiveItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unlockActiveItem();
public:

    /**
     * @note[short] Windows: 0x186450
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x184f30
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2);

    /**
     * @note[short] Windows: 0x185080
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* p0, int p1);
};
