#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class HardStreak : public cocos2d::CCDrawNode {
public:
    static constexpr auto CLASS_NAME = "HardStreak";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(HardStreak, cocos2d::CCDrawNode)

    /**
     * @note[short] Windows: 0x2267c0
     * @note[short] Android
     */
    static HardStreak* create();

    /**
     * @note[short] Windows: 0x227250
     * @note[short] Android
     */
    void addPoint(cocos2d::CCPoint p0);
    
private:
    [[deprecated("HardStreak::clearAboveXPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn clearAboveXPos(float p0);
public:
    
private:
    [[deprecated("HardStreak::clearBehindXPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn clearBehindXPos(float p0);
public:
    
private:
    [[deprecated("HardStreak::createDuplicate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createDuplicate();
public:

    /**
     * @note[short] Windows: 0x2268c0
     * @note[short] Android
     */
    void firstSetup();
    
private:
    [[deprecated("HardStreak::normalizeAngle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn normalizeAngle(double p0);
public:
    
private:
    [[deprecated("HardStreak::quadCornerOffset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn quadCornerOffset(cocos2d::CCPoint p0, cocos2d::CCPoint p1, float p2);
public:
	inline void reset() {
		this->clear();
		m_pointArray->removeAllObjects();
	}
    
private:
    [[deprecated("HardStreak::resumeStroke not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resumeStroke();
public:
    
private:
    [[deprecated("HardStreak::scheduleAutoUpdate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scheduleAutoUpdate();
public:
    
private:
    [[deprecated("HardStreak::stopStroke not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopStroke();
public:

    /**
     * @note[short] Windows: 0x226960
     * @note[short] Android
     */
    void updateStroke(float p0);

    /**
     * @note[short] Windows: 0x226860
     * @note[short] Android
     */
    virtual bool init();
    GEODE_PAD(32);
    cocos2d::CCArray* m_pointArray;
    cocos2d::CCPoint m_currentPoint;
    float m_waveSize;
    float m_pulseSize;
};
