#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GameObjectCopy : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GameObjectCopy";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GameObjectCopy, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x24a8b0
     * @note[short] Android
     */
    static GameObjectCopy* create(GameObject* p0);

    /**
     * @note[short] Windows: 0x24a960
     * @note[short] Android
     */
    bool init(GameObject* p0);
    
private:
    [[deprecated("GameObjectCopy::resetObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetObject();
public:
    GameObject* m_object;
};
