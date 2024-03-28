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

class SequenceTriggerGameObject : public ChanceTriggerGameObject {
public:
    static constexpr auto CLASS_NAME = "SequenceTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SequenceTriggerGameObject, ChanceTriggerGameObject)

    /**
     * @note[short] Windows: 0x3a9fd0
     * @note[short] Android
     */
    static SequenceTriggerGameObject* create();

    /**
     * @note[short] Windows: 0x3aae20
     * @note[short] Android
     */
    void addCount(int p0, int p1);

    /**
     * @note[short] Windows: 0x3aad40
     * @note[short] Android
     */
    void addTarget(int p0, int p1);
    
private:
    [[deprecated("SequenceTriggerGameObject::deleteTarget not implemented")]]
    /**
     * @note[short] Android
     */
    void deleteTarget(int p0);
public:

    /**
     * @note[short] Windows: 0x3aada0
     * @note[short] Android
     */
    int reorderTarget(int p0, bool p1);
    
private:
    [[deprecated("SequenceTriggerGameObject::updateSequenceTotalCount not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSequenceTotalCount();
public:

    /**
     * @note[short] Windows: 0x3aa070
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x3aa080
     * @note[short] Android
     */
    virtual TodoReturn resetObject();

    /**
     * @note[short] Windows: 0x3aa0a0
     * @note[short] Android
     */
    virtual TodoReturn triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);

    /**
     * @note[short] Windows: 0x3aa5b0
     * @note[short] Android
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] Windows: 0x3aa900
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
};
