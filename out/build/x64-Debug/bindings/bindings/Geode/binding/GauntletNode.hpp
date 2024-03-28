#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GauntletNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GauntletNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletNode, cocos2d::CCNode)
    
private:
    [[deprecated("GauntletNode::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GauntletNode* create(GJMapPack* p0);
public:

    /**
     * @note[short] Windows: 0x189b30
     * @note[short] Android
     */
    TodoReturn frameForType(GauntletType p0);

    /**
     * @note[short] Windows: 0x188740
     * @note[short] Android
     */
    bool init(GJMapPack* p0);

    /**
     * @note[short] Windows: 0x189f90
     * @note[short] Android
     */
    static gd::string nameForType(GauntletType p0);

    /**
     * @note[short] Windows: 0x189b00
     * @note[short] Android
     */
    TodoReturn onClaimReward();
};
