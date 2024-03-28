#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class Slider : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "Slider";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(Slider, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x4d130
     * @note[short] Android
     */
    static Slider* create(cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, char const* p2, char const* p3, char const* p4, char const* p5, float p6);

    /**
     * @note[short] Out of line
     */
    static Slider* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler handler);

    /**
     * @note[short] Out of line
     */
    static Slider* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler handler, float idk);
    
private:
    [[deprecated("Slider::disableSlider not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn disableSlider();
public:
    
private:
    [[deprecated("Slider::disableTouch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn disableTouch();
public:
    
private:
    [[deprecated("Slider::enableSlider not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn enableSlider();
public:
    
private:
    [[deprecated("Slider::getLiveDragging not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getLiveDragging();
public:

    /**
     * @note[short] Out of line
     */
    SliderThumb* getThumb();

    /**
     * @note[short] Windows: 0x4d4f0
     * @note[short] Android
     */
    float getValue();
    
private:
    [[deprecated("Slider::hideGroove not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hideGroove(bool p0);
public:

    /**
     * @note[short] Windows: 0x4d1f0
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, char const* p2, char const* p3, char const* p4, char const* p5, float p6);
    
private:
    [[deprecated("Slider::setBarVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    void setBarVisibility(bool p0);
public:
    
private:
    [[deprecated("Slider::setLiveDragging not implemented")]]
    /**
     * @note[short] Android
     */
    void setLiveDragging(bool p0);
public:
    
private:
    [[deprecated("Slider::setMaxOffset not implemented")]]
    /**
     * @note[short] Android
     */
    void setMaxOffset(float p0);
public:
    
private:
    [[deprecated("Slider::setRotated not implemented")]]
    /**
     * @note[short] Android
     */
    void setRotated(bool p0);
public:

    /**
     * @note[short] Out of line
     */
    void setValue(float val);
    
private:
    [[deprecated("Slider::sliderBegan not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderBegan();
public:
    
private:
    [[deprecated("Slider::sliderEnded not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderEnded();
public:

    /**
     * @note[short] Windows: 0x4d590
     * @note[short] Android
     */
    void updateBar();

    /**
     * @note[short] Windows: 0x4d670
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x4d6b0
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x4d690
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    SliderTouchLogic* m_touchLogic;
    cocos2d::CCSprite* m_sliderBar;
    cocos2d::CCSprite* m_groove;
    float m_width;
    float m_height;
    void* m_unknown;
    void* m_unknown2;
};
