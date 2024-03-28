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
#include "FLAlertLayerProtocol.hpp"

class CreateGuidelinesLayer : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "CreateGuidelinesLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CreateGuidelinesLayer, FLAlertLayer)
    
private:
    [[deprecated("CreateGuidelinesLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CreateGuidelinesLayer* create(CustomSongDelegate* p0, AudioGuidelinesType p1);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::doClearGuidelines not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn doClearGuidelines();
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::getMergedRecordString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMergedRecordString(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(CustomSongDelegate* p0, AudioGuidelinesType p1);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::onClearGuidelines not implemented")]]
    /**
     * @note[short] Android
     */
    void onClearGuidelines(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::onStop not implemented")]]
    /**
     * @note[short] Android
     */
    void onStop(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::toggleItems not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleItems(bool p0);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::update not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void update(float p0);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::ccTouchBegan not implemented")]]
    /**
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::ccTouchMoved not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::ccTouchEnded not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::ccTouchCancelled not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::keyBackClicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::keyDown not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::FLAlert_Clicked not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::keyUp not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::playMusic not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn playMusic();
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::registerTouch not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn registerTouch();
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::onInfo not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::onRecord not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void onRecord(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateGuidelinesLayer::recordingDidStop not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn recordingDidStop();
public:
};
