#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "MusicDownloadDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class CustomSFXWidget : public cocos2d::CCNode, public MusicDownloadDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "CustomSFXWidget";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CustomSFXWidget, cocos2d::CCNode)
    
private:
    [[deprecated("CustomSFXWidget::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CustomSFXWidget* create(SFXInfoObject* p0, CustomSFXDelegate* p1, bool p2, bool p3, bool p4, bool p5, bool p6);
public:

    /**
     * @note[short] Windows: 0x8dcf0
     * @note[short] Android
     */
    TodoReturn deleteSFX();

    /**
     * @note[short] Windows: 0x8eaf0
     * @note[short] Android
     */
    void downloadFailed();

    /**
     * @note[short] Windows: 0x8e010
     * @note[short] Android
     */
    TodoReturn hideLoadingArt();

    /**
     * @note[short] Windows: 0x8cf20
     * @note[short] Android
     */
    bool init(SFXInfoObject* p0, CustomSFXDelegate* p1, bool p2, bool p3, bool p4, bool p5, bool p6);
    
private:
    [[deprecated("CustomSFXWidget::onCancelDownload not implemented")]]
    /**
     * @note[short] Android
     */
    void onCancelDownload(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSFXWidget::onDelete not implemented")]]
    /**
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x8e0f0
     * @note[short] Android
     */
    void onDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x8e270
     * @note[short] Android
     */
    void onPlayback(cocos2d::CCObject* sender);
    
private:
    [[deprecated("CustomSFXWidget::onSelect not implemented")]]
    /**
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x8dec0
     * @note[short] Android
     */
    void showLoadingArt();
    
private:
    [[deprecated("CustomSFXWidget::startDownload not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn startDownload();
public:

    /**
     * @note[short] Windows: 0x8e1b0
     * @note[short] Android
     */
    TodoReturn startMonitorDownload();
    
private:
    [[deprecated("CustomSFXWidget::updateDownloadProgress not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDownloadProgress(float p0);
public:
    
private:
    [[deprecated("CustomSFXWidget::updateError not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateError(GJSongError p0);
public:
    
private:
    [[deprecated("CustomSFXWidget::updateLengthMod not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLengthMod(float p0);
public:
    
private:
    [[deprecated("CustomSFXWidget::updatePlaybackBtn not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePlaybackBtn();
public:
    
private:
    [[deprecated("CustomSFXWidget::updateProgressBar not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateProgressBar(int p0);
public:

    /**
     * @note[short] Windows: 0x8e490
     * @note[short] Android
     */
    TodoReturn updateSFXInfo();

    /**
     * @note[short] Windows: 0x8de40
     * @note[short] Android
     */
    TodoReturn updateSFXObject(SFXInfoObject* p0);
    
private:
    [[deprecated("CustomSFXWidget::verifySFXID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn verifySFXID(int p0);
public:

    /**
     * @note[short] Windows: 0x8eab0
     * @note[short] Android
     */
    virtual void downloadSFXFinished(int p0);

    /**
     * @note[short] Windows: 0x8eaf0
     * @note[short] Android
     */
    virtual void downloadSFXFailed(int p0, GJSongError p1);

    /**
     * @note[short] Windows: 0x8e480
     * @note[short] Android
     */
    virtual void songStateChanged();

    /**
     * @note[short] Windows: 0x8ebf0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
