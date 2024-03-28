#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "ChanceTriggerGameObject.hpp"

class RandTriggerGameObject : public ChanceTriggerGameObject {
public:
    static constexpr auto CLASS_NAME = "RandTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RandTriggerGameObject, ChanceTriggerGameObject)

    /**
     * @note[short] Windows: 0x3a9860
     * @note[short] Android
     */
    static RandTriggerGameObject* create();

    /**
     * @note[short] Windows: 0x3a9950
     * @note[short] Android
     */
    int getRandomGroupID();
    
private:
    [[deprecated("RandTriggerGameObject::getTotalChance not implemented")]]
    /**
     * @note[short] Android
     */
    int getTotalChance();
public:

    /**
     * @note[short] Windows: 0x3a9940
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x3a9a00
     * @note[short] Android
     */
    virtual TodoReturn triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);

    /**
     * @note[short] Windows: 0x3a9b30
     * @note[short] Android
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] Windows: 0x3a9d70
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};
