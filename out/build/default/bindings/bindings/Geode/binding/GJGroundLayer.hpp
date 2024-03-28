#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJGroundLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJGroundLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJGroundLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x1f73f0
     * @note[short] Android
     */
    static GJGroundLayer* create(int p0, int p1);

    /**
     * @note[short] Windows: 0x1f7b70
     * @note[short] Android
     */
    TodoReturn createLine(int p0);
    
private:
    [[deprecated("GJGroundLayer::deactivateGround not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deactivateGround();
public:
    
private:
    [[deprecated("GJGroundLayer::fadeInFinished not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn fadeInFinished();
public:
    
private:
    [[deprecated("GJGroundLayer::getGroundY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getGroundY();
public:
    
private:
    [[deprecated("GJGroundLayer::hideShadows not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hideShadows();
public:

    /**
     * @note[short] Windows: 0x1f74a0
     * @note[short] Android
     */
    bool init(int p0, int p1);

    /**
     * @note[short] Windows: 0x1f7900
     * @note[short] Android
     */
    TodoReturn loadGroundSprites(int p0, bool p1);
    
private:
    [[deprecated("GJGroundLayer::positionGround not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn positionGround(float p0);
public:
    
private:
    [[deprecated("GJGroundLayer::scaleGround not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scaleGround(float p0);
public:
    
private:
    [[deprecated("GJGroundLayer::toggleVisible01 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleVisible01(bool p0);
public:
    
private:
    [[deprecated("GJGroundLayer::toggleVisible02 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleVisible02(bool p0);
public:

    /**
     * @note[short] Windows: 0x1f7ab0
     * @note[short] Android
     */
    TodoReturn updateGround01Color(cocos2d::ccColor3B p0);

    /**
     * @note[short] Windows: 0x1f7b10
     * @note[short] Android
     */
    TodoReturn updateGround02Color(cocos2d::ccColor3B p0);
    
private:
    [[deprecated("GJGroundLayer::updateGroundPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGroundPos(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("GJGroundLayer::updateGroundWidth not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGroundWidth(bool p0);
public:
    
private:
    [[deprecated("GJGroundLayer::updateLineBlend not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLineBlend(bool p0);
public:
    
private:
    [[deprecated("GJGroundLayer::updateShadows not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateShadows();
public:
    
private:
    [[deprecated("GJGroundLayer::updateShadowXPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateShadowXPos(float p0, float p1);
public:

    /**
     * @note[short] Out of line
     */
    virtual void draw();

    /**
     * @note[short] Windows: 0x1f7e80
     * @note[short] Android
     */
    virtual void showGround();

    /**
     * @note[short] Windows: 0x1f7e90
     * @note[short] Android
     */
    virtual TodoReturn fadeInGround(float p0);

    /**
     * @note[short] Windows: 0x1f8020
     * @note[short] Android
     */
    virtual TodoReturn fadeOutGround(float p0);
};
