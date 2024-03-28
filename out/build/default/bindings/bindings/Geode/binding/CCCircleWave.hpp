#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCCircleWave : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CCCircleWave";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCCircleWave, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x23220
     * @note[short] Android
     */
    static CCCircleWave* create(float startRadius, float endRadius, float duration, bool fadeIn, bool easeOut);
    
private:
    [[deprecated("CCCircleWave::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CCCircleWave* create(float p0, float p1, float p2, bool p3);
public:
    
private:
    [[deprecated("CCCircleWave::baseSetup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn baseSetup(float p0);
public:

    /**
     * @note[short] Windows: 0x23540
     * @note[short] Android
     */
    TodoReturn followObject(cocos2d::CCNode* p0, bool p1);

    /**
     * @note[short] Windows: 0x232f0
     * @note[short] Android
     */
    bool init(float startRadius, float endRadius, float duration, bool fadeIn, bool easeOut);
    
private:
    [[deprecated("CCCircleWave::updatePosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePosition(float p0);
public:

    /**
     * @note[short] Windows: 0x234f0
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);

    /**
     * @note[short] Windows: 0x239a0
     * @note[short] Android
     */
    virtual void removeMeAndCleanup();

    /**
     * @note[short] Windows: 0x23840
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] Windows: 0x235b0
     * @note[short] Android
     */
    virtual void updateTweenAction(float p0, char const* p1);
    GEODE_PAD(17);
    cocos2d::ccColor3B m_color;
};
