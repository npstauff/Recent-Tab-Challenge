#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "UploadActionDelegate";

    /**
     * @note[short] Out of line
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] Out of line
     */
    virtual void uploadActionFailed(int p0, int p1);
};
