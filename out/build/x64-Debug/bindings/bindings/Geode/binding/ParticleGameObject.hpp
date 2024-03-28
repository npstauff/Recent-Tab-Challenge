#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EnhancedGameObject.hpp"

class ParticleGameObject : public EnhancedGameObject {
public:
    static constexpr auto CLASS_NAME = "ParticleGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ParticleGameObject, EnhancedGameObject)

    /**
     * @note[short] Windows: 0x398080
     * @note[short] Android
     */
    static ParticleGameObject* create();
    
private:
    [[deprecated("ParticleGameObject::applyParticleSettings not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn applyParticleSettings(cocos2d::CCParticleSystemQuad* p0);
public:
    
private:
    [[deprecated("ParticleGameObject::createAndAddCustomParticle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createAndAddCustomParticle();
public:
    
private:
    [[deprecated("ParticleGameObject::createParticlePreviewArt not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createParticlePreviewArt();
public:

    /**
     * @note[short] Windows: 0x398c00
     * @note[short] Android
     */
    void setParticleString(gd::string p0);

    /**
     * @note[short] Windows: 0x398cd0
     * @note[short] Android
     */
    void updateParticle();
    
private:
    [[deprecated("ParticleGameObject::updateParticleAngle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateParticleAngle(float p0, cocos2d::CCParticleSystemQuad* p1);
public:
    
private:
    [[deprecated("ParticleGameObject::updateParticlePreviewArtOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateParticlePreviewArtOpacity(float p0);
public:
    
private:
    [[deprecated("ParticleGameObject::updateParticleScale not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateParticleScale(float p0);
public:
    
private:
    [[deprecated("ParticleGameObject::updateParticleStruct not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateParticleStruct();
public:

    /**
     * @note[short] Windows: 0x398120
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("ParticleGameObject::setScaleX not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setScaleX(float p0);
public:
    
private:
    [[deprecated("ParticleGameObject::setScaleY not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setScaleY(float p0);
public:
    
private:
    [[deprecated("ParticleGameObject::setScale not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setScale(float p0);
public:
    
private:
    [[deprecated("ParticleGameObject::setRotation not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setRotation(float p0);
public:
    
private:
    [[deprecated("ParticleGameObject::setRotationX not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setRotationX(float p0);
public:
    
private:
    [[deprecated("ParticleGameObject::setRotationY not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setRotationY(float p0);
public:
    
private:
    [[deprecated("ParticleGameObject::setChildColor not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setChildColor(cocos2d::ccColor3B const& p0);
public:

    /**
     * @note[short] Windows: 0x3983f0
     * @note[short] Android
     */
    virtual void customSetup();
    
private:
    [[deprecated("ParticleGameObject::addMainSpriteToParent not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn addMainSpriteToParent(bool p0);
public:
    
private:
    [[deprecated("ParticleGameObject::resetObject not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn resetObject();
public:
    
private:
    [[deprecated("ParticleGameObject::deactivateObject not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void deactivateObject(bool p0);
public:

    /**
     * @note[short] Windows: 0x398170
     * @note[short] Android
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] Windows: 0x399880
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
    
private:
    [[deprecated("ParticleGameObject::claimParticle not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn claimParticle();
public:
    
private:
    [[deprecated("ParticleGameObject::unclaimParticle not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn unclaimParticle();
public:
    
private:
    [[deprecated("ParticleGameObject::particleWasActivated not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn particleWasActivated();
public:
    
private:
    [[deprecated("ParticleGameObject::setObjectColor not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& p0);
public:
    
private:
    [[deprecated("ParticleGameObject::blendModeChanged not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn blendModeChanged();
public:
    
private:
    [[deprecated("ParticleGameObject::updateParticleColor not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateParticleColor(cocos2d::ccColor3B const& p0);
public:
    
private:
    [[deprecated("ParticleGameObject::updateParticleOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateParticleOpacity(unsigned char p0);
public:
    
private:
    [[deprecated("ParticleGameObject::updateMainParticleOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateMainParticleOpacity(unsigned char p0);
public:
    
private:
    [[deprecated("ParticleGameObject::updateSecondaryParticleOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateSecondaryParticleOpacity(unsigned char p0);
public:
    
private:
    [[deprecated("ParticleGameObject::updateSyncedAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateSyncedAnimation(float p0, int p1);
public:
    
private:
    [[deprecated("ParticleGameObject::updateAnimateOnTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateAnimateOnTrigger(bool p0);
public:
    gd::string m_particleData;
    bool m_updatedParticleData;
    GEODE_PAD(291);
    bool m_hasUniformObjectColor;
    GEODE_PAD(7);
    bool m_shouldQuickStart;
    GEODE_PAD(15);
};
