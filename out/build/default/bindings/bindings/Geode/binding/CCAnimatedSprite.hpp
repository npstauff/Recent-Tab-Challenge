#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCAnimatedSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCAnimatedSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCAnimatedSprite, cocos2d::CCSprite)

    /**
     * @note[short] Windows: 0x21440
     * @note[short] Android
     */
    TodoReturn cleanupSprite();

    /**
     * @note[short] Windows: 0x20c80
     * @note[short] Android
     */
    TodoReturn createWithType(char const* p0, cocos2d::CCTexture2D* p1, bool p2);

    /**
     * @note[short] Windows: 0x20d20
     * @note[short] Android
     */
    bool initWithType(char const* p0, cocos2d::CCTexture2D* p1, bool p2);

    /**
     * @note[short] Windows: 0x20ec0
     * @note[short] Android
     */
    TodoReturn loadType(char const* p0, cocos2d::CCTexture2D* p1, bool p2);

    /**
     * @note[short] Windows: 0x21640
     * @note[short] Android
     */
    TodoReturn runAnimation(gd::string p0);

    /**
     * @note[short] Windows: 0x216c0
     * @note[short] Android
     */
    TodoReturn runAnimationForced(gd::string p0);
    
private:
    [[deprecated("CCAnimatedSprite::stopTween not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopTween();
public:

    /**
     * @note[short] Windows: 0x214f0
     * @note[short] Android
     */
    TodoReturn switchToMode(spriteMode p0);

    /**
     * @note[short] Windows: 0x21750
     * @note[short] Android
     */
    void tweenToAnimation(gd::string p0, float p1);

    /**
     * @note[short] Windows: 0x219c0
     * @note[short] Android
     */
    void tweenToAnimationFinished();
    
private:
    [[deprecated("CCAnimatedSprite::willPlayAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn willPlayAnimation();
public:

    /**
     * @note[short] Windows: 0x21ae0
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] Windows: 0x21b30
     * @note[short] Android
     */
    virtual void setColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] Windows: 0x21ac0
     * @note[short] Android
     */
    virtual TodoReturn animationFinished(char const* p0);

    /**
     * @note[short] Windows: 0x21a90
     * @note[short] Android
     */
    virtual TodoReturn animationFinishedO(cocos2d::CCObject* p0);
};
