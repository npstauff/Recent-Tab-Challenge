#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class PlayerFireBoostSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "PlayerFireBoostSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(PlayerFireBoostSprite, cocos2d::CCSprite)

    /**
     * @note[short] Windows: 0x2dab20
     * @note[short] Android
     */
    static PlayerFireBoostSprite* create();

    /**
     * @note[short] Windows: 0x2dac30
     * @note[short] Android
     */
    void animateFireIn();

    /**
     * @note[short] Out of line
     */
    void animateFireOut();
    
private:
    [[deprecated("PlayerFireBoostSprite::loopFireAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loopFireAnimation();
public:

    /**
     * @note[short] Windows: 0x2dabe0
     * @note[short] Android
     */
    virtual bool init();
    float m_size;
};
