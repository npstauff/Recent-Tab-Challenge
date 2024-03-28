#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GameObject.hpp"

class EndPortalObject : public GameObject {
public:
    static constexpr auto CLASS_NAME = "EndPortalObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EndPortalObject, GameObject)

    /**
     * @note[short] Windows: 0xeb140
     * @note[short] Android
     */
    static EndPortalObject* create();

    /**
     * @note[short] Windows: 0xeb740
     * @note[short] Android
     */
    TodoReturn getSpawnPos();

    /**
     * @note[short] Windows: 0xeb6c0
     * @note[short] Android
     */
    TodoReturn triggerObject(GJBaseGameLayer* p0);

    /**
     * @note[short] Windows: 0xeb5b0
     * @note[short] Android
     */
    TodoReturn updateColors(cocos2d::ccColor3B p0);

    /**
     * @note[short] Windows: 0xeb920
     * @note[short] Android
     */
    TodoReturn updateEndPos(bool p0);

    /**
     * @note[short] Windows: 0xeb210
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("EndPortalObject::setPosition not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);
public:
    
private:
    [[deprecated("EndPortalObject::setVisible not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setVisible(bool p0);
public:
};
