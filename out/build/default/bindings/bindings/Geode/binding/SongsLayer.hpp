#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"

class SongsLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "SongsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SongsLayer, GJDropDownLayer)

    /**
     * @note[short] Windows: 0x38bfb0
     * @note[short] Android
     */
    static SongsLayer* create();

    /**
     * @note[short] Windows: 0x38c0c0
     * @note[short] Android
     */
    virtual void customSetup();
};
