#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "RingObject.hpp"

class TeleportPortalObject : public RingObject {
public:
    static constexpr auto CLASS_NAME = "TeleportPortalObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TeleportPortalObject, RingObject)

    /**
     * @note[short] Windows: 0x3a7a50
     * @note[short] Android
     */
    static TeleportPortalObject* create(char const* p0, bool p1);

    /**
     * @note[short] Windows: 0x3a7c50
     * @note[short] Android
     */
    TodoReturn getTeleportXOff(cocos2d::CCNode* p0);
    
private:
    [[deprecated("TeleportPortalObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(char const* p0, bool p1);
public:
    
private:
    [[deprecated("TeleportPortalObject::setPositionOverride not implemented")]]
    /**
     * @note[short] Android
     */
    void setPositionOverride(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("TeleportPortalObject::setStartPosOverride not implemented")]]
    /**
     * @note[short] Android
     */
    void setStartPosOverride(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("TeleportPortalObject::setPosition not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);
public:
    
private:
    [[deprecated("TeleportPortalObject::setRotation not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setRotation(float p0);
public:
    
private:
    [[deprecated("TeleportPortalObject::setStartPos not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setStartPos(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("TeleportPortalObject::customObjectSetup not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("TeleportPortalObject::getSaveString not implemented")]]
    /**
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
    
private:
    [[deprecated("TeleportPortalObject::addToGroup not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn addToGroup(int p0);
public:
    
private:
    [[deprecated("TeleportPortalObject::removeFromGroup not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn removeFromGroup(int p0);
public:
    
private:
    [[deprecated("TeleportPortalObject::setRotation2 not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setRotation2(float p0);
public:
    
private:
    [[deprecated("TeleportPortalObject::addToGroup2 not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn addToGroup2(int p0);
public:
    
private:
    [[deprecated("TeleportPortalObject::removeFromGroup2 not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn removeFromGroup2(int p0);
public:
    void* m_unknown;
    TeleportPortalObject* m_orangePortal;
    bool m_isYellowPortal;
    float m_teleportYOffset;
    bool m_teleportEase;
    bool m_staticForceEnabled;
    int m_staticForce;
    bool m_redirectForceEnabled;
    float m_redirectForceMod;
    float m_redirectForceMin;
    float m_redirectForceMax;
    bool m_saveOffset;
    bool m_ignoreX;
    bool m_ignoreY;
    int m_gravityMode;
    bool m_property443;
    bool m_property464;
    bool m_property510;
    bool m_property591;
};
