#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCSpriteWithHue : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCSpriteWithHue";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCSpriteWithHue, cocos2d::CCSprite)
    
private:
    [[deprecated("CCSpriteWithHue::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CCSpriteWithHue* create(gd::string const& p0, cocos2d::CCRect const& p1);
public:
    
private:
    [[deprecated("CCSpriteWithHue::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CCSpriteWithHue* create(gd::string const& p0);
public:
    
private:
    [[deprecated("CCSpriteWithHue::createWithSpriteFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createWithSpriteFrame(cocos2d::CCSpriteFrame* p0);
public:
    
private:
    [[deprecated("CCSpriteWithHue::createWithSpriteFrameName not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createWithSpriteFrameName(gd::string const& p0);
public:
    
private:
    [[deprecated("CCSpriteWithHue::createWithTexture not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createWithTexture(cocos2d::CCTexture2D* p0, cocos2d::CCRect const& p1, bool p2);
public:
    
private:
    [[deprecated("CCSpriteWithHue::createWithTexture not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createWithTexture(cocos2d::CCTexture2D* p0);
public:
    
private:
    [[deprecated("CCSpriteWithHue::getAlpha not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAlpha();
public:
    
private:
    [[deprecated("CCSpriteWithHue::getHue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getHue();
public:
    
private:
    [[deprecated("CCSpriteWithHue::getUniformLocations not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getUniformLocations();
public:
    
private:
    [[deprecated("CCSpriteWithHue::initShader not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn initShader();
public:
    
private:
    [[deprecated("CCSpriteWithHue::setCustomLuminance not implemented")]]
    /**
     * @note[short] Android
     */
    void setCustomLuminance(float p0, float p1, float p2);
public:
    
private:
    [[deprecated("CCSpriteWithHue::setEvenLuminance not implemented")]]
    /**
     * @note[short] Android
     */
    void setEvenLuminance(float p0);
public:
    
private:
    [[deprecated("CCSpriteWithHue::setHue not implemented")]]
    /**
     * @note[short] Android
     */
    void setHue(float p0);
public:
    
private:
    [[deprecated("CCSpriteWithHue::setHueDegrees not implemented")]]
    /**
     * @note[short] Android
     */
    void setHueDegrees(float p0);
public:
    
private:
    [[deprecated("CCSpriteWithHue::setLuminance not implemented")]]
    /**
     * @note[short] Android
     */
    void setLuminance(float p0);
public:
    
private:
    [[deprecated("CCSpriteWithHue::setupDefaultSettings not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupDefaultSettings();
public:
    
private:
    [[deprecated("CCSpriteWithHue::updateColorMatrix not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateColorMatrix();
public:
    
private:
    [[deprecated("CCSpriteWithHue::updateHue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateHue(float p0);
public:
    
private:
    [[deprecated("CCSpriteWithHue::draw not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void draw();
public:
    
private:
    [[deprecated("CCSpriteWithHue::initWithTexture not implemented")]]
    /**
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* p0);
public:
    
private:
    [[deprecated("CCSpriteWithHue::initWithTexture not implemented")]]
    /**
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* p0, cocos2d::CCRect const& p1);
public:
    
private:
    [[deprecated("CCSpriteWithHue::initWithTexture not implemented")]]
    /**
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* p0, cocos2d::CCRect const& p1, bool p2);
public:
    
private:
    [[deprecated("CCSpriteWithHue::initWithSpriteFrame not implemented")]]
    /**
     * @note[short] Android
     */
    virtual bool initWithSpriteFrame(cocos2d::CCSpriteFrame* p0);
public:
    
private:
    [[deprecated("CCSpriteWithHue::getShaderName not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn getShaderName();
public:
    
private:
    [[deprecated("CCSpriteWithHue::shaderBody not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn shaderBody();
public:
    
private:
    [[deprecated("CCSpriteWithHue::updateColor not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void updateColor();
public:
};
