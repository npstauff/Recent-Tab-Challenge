#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCLightFlash : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CCLightFlash";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCLightFlash, cocos2d::CCNode)
    
private:
    [[deprecated("CCLightFlash::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CCLightFlash* create();
public:
    
private:
    [[deprecated("CCLightFlash::cleanupFlash not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn cleanupFlash();
public:
    
private:
    [[deprecated("CCLightFlash::fadeAndRemove not implemented")]]
    /**
     * @note[short] Android
     */
    void fadeAndRemove();
public:
    
private:
    [[deprecated("CCLightFlash::playEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playEffect(cocos2d::CCPoint p0, cocos2d::ccColor3B p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, float p15, int p16, bool p17, bool p18, float p19);
public:
    
private:
    [[deprecated("CCLightFlash::removeLights not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeLights();
public:
    
private:
    [[deprecated("CCLightFlash::showFlash not implemented")]]
    /**
     * @note[short] Android
     */
    void showFlash();
public:
    
private:
    [[deprecated("CCLightFlash::init not implemented")]]
    /**
     * @note[short] Android
     */
    virtual bool init();
public:
};
