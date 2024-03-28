#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EffectGameObject.hpp"

class LabelGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "LabelGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LabelGameObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x3a8b90
     * @note[short] Android
     */
    static LabelGameObject* create();
    
private:
    [[deprecated("LabelGameObject::createLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createLabel(gd::string p0);
public:
    
private:
    [[deprecated("LabelGameObject::queueUpdateLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn queueUpdateLabel(gd::string p0);
public:
    
private:
    [[deprecated("LabelGameObject::removeLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeLabel();
public:
    
private:
    [[deprecated("LabelGameObject::unlockLabelColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unlockLabelColor();
public:
    
private:
    [[deprecated("LabelGameObject::updateLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLabel(float p0);
public:
    
private:
    [[deprecated("LabelGameObject::updateLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLabel(gd::string p0);
public:
    
private:
    [[deprecated("LabelGameObject::updateLabelAlign not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLabelAlign(int p0);
public:
    
private:
    [[deprecated("LabelGameObject::updateLabelIfDirty not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLabelIfDirty();
public:
    
private:
    [[deprecated("LabelGameObject::updatePreviewLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePreviewLabel();
public:

    /**
     * @note[short] Windows: 0x3a8c30
     * @note[short] Android
     */
    virtual bool init();
    
private:
    [[deprecated("LabelGameObject::setOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);
public:

    /**
     * @note[short] Windows: 0x14dda0
     * @note[short] Android
     */
    virtual TodoReturn setupCustomSprites(gd::string p0);
    
private:
    [[deprecated("LabelGameObject::addMainSpriteToParent not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn addMainSpriteToParent(bool p0);
public:
    
private:
    [[deprecated("LabelGameObject::resetObject not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn resetObject();
public:
    
private:
    [[deprecated("LabelGameObject::customObjectSetup not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("LabelGameObject::getSaveString not implemented")]]
    /**
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
    
private:
    [[deprecated("LabelGameObject::setObjectColor not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& p0);
public:
    
private:
    [[deprecated("LabelGameObject::updateTextKerning not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateTextKerning(int p0);
public:
    
private:
    [[deprecated("LabelGameObject::getTextKerning not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn getTextKerning();
public:
private:
    int m_alignment;
public:
private:
    bool m_showSecondsOnly;
public:
private:
    int m_shownSpecial;
public:
private:
    bool m_isTimeCounter;
public:
private:
    int m_kerning;
public:
};
