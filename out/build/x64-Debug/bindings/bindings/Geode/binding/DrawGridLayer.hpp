#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class DrawGridLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "DrawGridLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DrawGridLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("DrawGridLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static DrawGridLayer* create(cocos2d::CCNode* p0, LevelEditorLayer* p1);
public:

    /**
     * @note[short] Windows: 0x24ae00
     * @note[short] Android
     */
    void addAudioLineObject(AudioLineGuideGameObject* p0);
    
private:
    [[deprecated("DrawGridLayer::addToEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToEffects(EffectGameObject* p0);
public:
    
private:
    [[deprecated("DrawGridLayer::addToGuides not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToGuides(GameObject* p0);
public:

    /**
     * @note[short] Windows: 0x24adc0
     * @note[short] Android
     */
    TodoReturn addToSpeedObjects(EffectGameObject* p0);
    
private:
    [[deprecated("DrawGridLayer::getPortalMinMax not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPortalMinMax(GameObject* p0);
public:
    
private:
    [[deprecated("DrawGridLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* p0, LevelEditorLayer* p1);
public:

    /**
     * @note[short] Windows: 0x24afa0
     * @note[short] Android
     */
    void loadTimeMarkers(gd::string p0);
    
private:
    [[deprecated("DrawGridLayer::posForTime not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn posForTime(float p0);
public:
    
private:
    [[deprecated("DrawGridLayer::postUpdate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn postUpdate();
public:

    /**
     * @note[short] Windows: 0x24ae60
     * @note[short] Android
     */
    TodoReturn removeAudioLineObject(AudioLineGuideGameObject* p0);
    
private:
    [[deprecated("DrawGridLayer::removeFromEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeFromEffects(EffectGameObject* p0);
public:
    
private:
    [[deprecated("DrawGridLayer::removeFromGuides not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeFromGuides(GameObject* p0);
public:
    
private:
    [[deprecated("DrawGridLayer::removeFromSpeedObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeFromSpeedObjects(EffectGameObject* p0);
public:
    
private:
    [[deprecated("DrawGridLayer::sortSpeedObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sortSpeedObjects();
public:
    
private:
    [[deprecated("DrawGridLayer::timeForPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn timeForPos(cocos2d::CCPoint p0, int p1, int p2, bool p3, bool p4, bool p5, int p6);
public:
    
private:
    [[deprecated("DrawGridLayer::updateMusicGuideTime not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMusicGuideTime(float p0);
public:
    
private:
    [[deprecated("DrawGridLayer::updateTimeMarkers not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTimeMarkers();
public:
    
private:
    [[deprecated("DrawGridLayer::update not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void update(float p0);
public:
    
private:
    [[deprecated("DrawGridLayer::draw not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void draw();
public:
};
