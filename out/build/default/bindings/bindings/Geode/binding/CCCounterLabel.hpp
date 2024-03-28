#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCCounterLabel : public cocos2d::CCLabelBMFont {
public:
    static constexpr auto CLASS_NAME = "CCCounterLabel";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCCounterLabel, cocos2d::CCLabelBMFont)

    /**
     * @note[short] Windows: 0x23d00
     * @note[short] Android
     */
    static CCCounterLabel* create(int p0, char const* p1, FormatterType p2);
    
private:
    [[deprecated("CCCounterLabel::calculateStepSize not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn calculateStepSize(int p0);
public:
    
private:
    [[deprecated("CCCounterLabel::disableCounter not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn disableCounter();
public:
    
private:
    [[deprecated("CCCounterLabel::enableCounter not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn enableCounter();
public:
    
private:
    [[deprecated("CCCounterLabel::fastUpdateCounter not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn fastUpdateCounter();
public:
    
private:
    [[deprecated("CCCounterLabel::getTargetCount not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTargetCount();
public:

    /**
     * @note[short] Windows: 0x23db0
     * @note[short] Android
     */
    bool init(int p0, char const* p1, FormatterType p2);

    /**
     * @note[short] Windows: 0x23e20
     * @note[short] Android
     */
    void setTargetCount(int p0);
    
private:
    [[deprecated("CCCounterLabel::updateCounter not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCounter(float p0);
public:
    
private:
    [[deprecated("CCCounterLabel::updateString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateString();
public:
};
