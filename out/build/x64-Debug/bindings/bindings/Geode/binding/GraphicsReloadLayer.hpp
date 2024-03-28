#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GraphicsReloadLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GraphicsReloadLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GraphicsReloadLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x2b8460
     * @note[short] Android
     */
    static GraphicsReloadLayer* create(cocos2d::TextureQuality p0, cocos2d::CCSize p1, bool p2, bool p3);

    /**
     * @note[short] Windows: 0x2b8520
     * @note[short] Android
     */
    bool init(cocos2d::TextureQuality p0, cocos2d::CCSize p1, bool p2, bool p3);
    
private:
    [[deprecated("GraphicsReloadLayer::performReload not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn performReload();
public:
    
private:
    [[deprecated("GraphicsReloadLayer::scene not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scene(cocos2d::TextureQuality p0, cocos2d::CCSize p1, bool p2, bool p3);
public:
};
