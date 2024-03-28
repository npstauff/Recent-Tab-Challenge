#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EnhancedGameObject.hpp"
#include "AnimatedSpriteDelegate.hpp"
#include "SpritePartDelegate.hpp"

class AnimatedGameObject : public EnhancedGameObject, public AnimatedSpriteDelegate, public SpritePartDelegate {
public:
    static constexpr auto CLASS_NAME = "AnimatedGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AnimatedGameObject, EnhancedGameObject)

    /**
     * @note[short] Windows: 0x39ab70
     * @note[short] Android
     */
    static AnimatedGameObject* create(int p0);
    
private:
    [[deprecated("AnimatedGameObject::animationForID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn animationForID(int p0, int p1);
public:
    
private:
    [[deprecated("AnimatedGameObject::getTweenTime not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTweenTime(int p0, int p1);
public:

    /**
     * @note[short] Windows: 0x39ac10
     * @note[short] Android
     */
    bool init(int p0);
    
private:
    [[deprecated("AnimatedGameObject::playAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playAnimation(int p0);
public:
    
private:
    [[deprecated("AnimatedGameObject::setupAnimatedSize not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupAnimatedSize(int p0);
public:
    
private:
    [[deprecated("AnimatedGameObject::setupChildSprites not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupChildSprites();
public:
    
private:
    [[deprecated("AnimatedGameObject::updateChildSpriteColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateChildSpriteColor(cocos2d::ccColor3B p0);
public:
    
private:
    [[deprecated("AnimatedGameObject::updateObjectAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateObjectAnimation();
public:
    
private:
    [[deprecated("AnimatedGameObject::setOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);
public:
    
private:
    [[deprecated("AnimatedGameObject::setChildColor not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setChildColor(cocos2d::ccColor3B const& p0);
public:
    
private:
    [[deprecated("AnimatedGameObject::resetObject not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn resetObject();
public:
    
private:
    [[deprecated("AnimatedGameObject::activateObject not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn activateObject();
public:
    
private:
    [[deprecated("AnimatedGameObject::deactivateObject not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void deactivateObject(bool p0);
public:
    
private:
    [[deprecated("AnimatedGameObject::setObjectColor not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& p0);
public:
    
private:
    [[deprecated("AnimatedGameObject::animationFinished not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn animationFinished(char const* p0);
public:
    
private:
    [[deprecated("AnimatedGameObject::displayFrameChanged not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn displayFrameChanged(cocos2d::CCObject* p0, gd::string p1);
public:
};
