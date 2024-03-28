#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "UploadPopupDelegate.hpp"
#include "UploadActionDelegate.hpp"

class RateStarsLayer : public FLAlertLayer, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "RateStarsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RateStarsLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x2f4870
     * @note[short] Android
     */
    static RateStarsLayer* create(int p0, bool p1, bool p2);
    
private:
    [[deprecated("RateStarsLayer::getStarsButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getStarsButton(int p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3);
public:

    /**
     * @note[short] Windows: 0x2f4920
     * @note[short] Android
     */
    bool init(int p0, bool p1, bool p2);

    /**
     * @note[short] Windows: 0x2f53b0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f4f90
     * @note[short] Android
     */
    void onFeature(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2f51c0
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);
    
private:
    [[deprecated("RateStarsLayer::onToggleCoins not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleCoins(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x2f5070
     * @note[short] Android
     */
    TodoReturn selectRating(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x2f53e0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x2f52b0
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] Windows: 0x2f52f0
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] Windows: 0x2f5340
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);
    GEODE_PAD(16);
    int m_starsRate;
};
