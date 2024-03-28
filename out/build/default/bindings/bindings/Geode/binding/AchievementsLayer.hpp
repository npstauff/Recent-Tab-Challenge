#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"

class AchievementsLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "AchievementsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AchievementsLayer, GJDropDownLayer)

    /**
     * @note[short] Windows: 0x5a9a0
     * @note[short] Android
     */
    static AchievementsLayer* create();

    /**
     * @note[short] Windows: 0x5adc0
     * @note[short] Android
     */
    void loadPage(int p0);

    /**
     * @note[short] Windows: 0x5b040
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x5b050
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);
    
private:
    [[deprecated("AchievementsLayer::setupLevelBrowser not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupLevelBrowser(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("AchievementsLayer::setupPageInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void setupPageInfo(int p0, int p1, int p2);
public:

    /**
     * @note[short] Windows: 0x5ad30
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] Windows: 0x5aab0
     * @note[short] Android
     */
    virtual void customSetup();
};
