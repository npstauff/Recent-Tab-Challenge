#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "RewardedVideoDelegate";
    
private:
    [[deprecated("RewardedVideoDelegate::rewardedVideoFinished not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn rewardedVideoFinished();
public:

    /**
     * @note[short] Windows: 0xeb070
     * @note[short] Android
     */
    virtual TodoReturn shouldOffsetRewardCurrency();
};
