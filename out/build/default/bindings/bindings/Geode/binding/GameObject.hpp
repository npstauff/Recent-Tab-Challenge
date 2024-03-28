#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCSpritePlus.hpp"

class GameObject : public CCSpritePlus {
public:
    static constexpr auto CLASS_NAME = "GameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameObject, CCSpritePlus)
    
private:
    [[deprecated("GameObject::addColorSprite not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addColorSprite(gd::string p0);
public:
    
private:
    [[deprecated("GameObject::addColorSpriteToParent not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addColorSpriteToParent(bool p0);
public:
    
private:
    [[deprecated("GameObject::addColorSpriteToSelf not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addColorSpriteToSelf();
public:
    
private:
    [[deprecated("GameObject::addCustomBlackChild not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addCustomBlackChild(gd::string p0, float p1, bool p2);
public:
    
private:
    [[deprecated("GameObject::addCustomChild not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addCustomChild(gd::string p0, cocos2d::CCPoint p1, int p2);
public:
    
private:
    [[deprecated("GameObject::addCustomColorChild not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addCustomColorChild(gd::string p0);
public:
    
private:
    [[deprecated("GameObject::addEmptyGlow not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addEmptyGlow();
public:
    
private:
    [[deprecated("GameObject::addGlow not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addGlow(gd::string p0);
public:
    
private:
    [[deprecated("GameObject::addInternalChild not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addInternalChild(cocos2d::CCSprite* p0, gd::string p1, cocos2d::CCPoint p2, int p3);
public:
    
private:
    [[deprecated("GameObject::addInternalCustomColorChild not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addInternalCustomColorChild(gd::string p0, cocos2d::CCPoint p1, int p2);
public:
    
private:
    [[deprecated("GameObject::addInternalGlowChild not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addInternalGlowChild(gd::string p0, cocos2d::CCPoint p1);
public:
    
private:
    [[deprecated("GameObject::addNewSlope01 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addNewSlope01(bool p0);
public:
    
private:
    [[deprecated("GameObject::addNewSlope01Glow not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addNewSlope01Glow(bool p0);
public:
    
private:
    [[deprecated("GameObject::addNewSlope02 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addNewSlope02(bool p0);
public:
    
private:
    [[deprecated("GameObject::addNewSlope02Glow not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addNewSlope02Glow(bool p0);
public:
    
private:
    [[deprecated("GameObject::addRotation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addRotation(float p0, float p1);
public:
    
private:
    [[deprecated("GameObject::addRotation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addRotation(float p0);
public:
    
private:
    [[deprecated("GameObject::addToColorGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToColorGroup(int p0);
public:
    
private:
    [[deprecated("GameObject::addToCustomScaleX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToCustomScaleX(float p0);
public:
    
private:
    [[deprecated("GameObject::addToCustomScaleY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToCustomScaleY(float p0);
public:
    
private:
    [[deprecated("GameObject::addToOpacityGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToOpacityGroup(int p0);
public:
    
private:
    [[deprecated("GameObject::addToTempOffset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToTempOffset(double p0, double p1);
public:
    
private:
    [[deprecated("GameObject::assignUniqueID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn assignUniqueID();
public:
    
private:
    [[deprecated("GameObject::belongsToGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn belongsToGroup(int p0);
public:
    
private:
    [[deprecated("GameObject::calculateOrientedBox not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn calculateOrientedBox();
public:
    
private:
    [[deprecated("GameObject::canChangeCustomColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canChangeCustomColor();
public:
    
private:
    [[deprecated("GameObject::canChangeMainColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canChangeMainColor();
public:
    
private:
    [[deprecated("GameObject::canChangeSecondaryColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canChangeSecondaryColor();
public:
    
private:
    [[deprecated("GameObject::canRotateFree not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canRotateFree();
public:

    /**
     * @note[short] Windows: 0x142a50
     * @note[short] Android
     */
    TodoReturn colorForMode(int p0, bool p1);
    
private:
    [[deprecated("GameObject::commonInteractiveSetup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn commonInteractiveSetup();
public:

    /**
     * @note[short] Windows: 0x1310c0
     * @note[short] Android
     */
    TodoReturn commonSetup();

    /**
     * @note[short] Windows: 0x13d8f0
     * @note[short] Android
     */
    TodoReturn copyGroups(GameObject* p0);

    /**
     * @note[short] Windows: 0x13b790
     * @note[short] Android
     */
    TodoReturn createAndAddParticle(int p0, char const* p1, int p2, cocos2d::tCCPositionType p3);
    
private:
    [[deprecated("GameObject::createColorGroupContainer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createColorGroupContainer(int p0);
public:
    
private:
    [[deprecated("GameObject::createGlow not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createGlow(gd::string p0);
public:

    /**
     * @note[short] Windows: 0x13d790
     * @note[short] Android
     */
    void createGroupContainer(int p0);
    
private:
    [[deprecated("GameObject::createOpacityGroupContainer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createOpacityGroupContainer(int p0);
public:
    
private:
    [[deprecated("GameObject::createSpriteColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createSpriteColor(int p0);
public:

    /**
     * @note[short] Windows: 0x130fc0
     * @note[short] Android
     */
    static GameObject* createWithFrame(char const* p0);

    /**
     * @note[short] Windows: 0x130330
     * @note[short] Android
     */
    static GameObject* createWithKey(int p0);
    
private:
    [[deprecated("GameObject::deselectObject not implemented")]]
    /**
     * @note[short] Android
     */
    void deselectObject();
public:
	inline void destroyObject() {
		m_unk34a = true;
		m_unk292 = true;
		setOpacity(0);
	}

    /**
     * @note[short] Windows: 0x13d3c0
     * @note[short] Android
     */
    TodoReturn determineSlopeDirection();
    
private:
    [[deprecated("GameObject::didScaleXChange not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn didScaleXChange();
public:
    
private:
    [[deprecated("GameObject::didScaleYChange not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn didScaleYChange();
public:
    
private:
    [[deprecated("GameObject::dirtifyObjectPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn dirtifyObjectPos();
public:
    
private:
    [[deprecated("GameObject::dirtifyObjectRect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn dirtifyObjectRect();
public:
    
private:
    [[deprecated("GameObject::disableObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn disableObject();
public:
    
private:
    [[deprecated("GameObject::dontCountTowardsLimit not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn dontCountTowardsLimit();
public:
    
private:
    [[deprecated("GameObject::duplicateAttributes not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn duplicateAttributes(GameObject* p0);
public:

    /**
     * @note[short] Windows: 0x1424c0
     * @note[short] Android
     */
    TodoReturn duplicateColorMode(GameObject* p0);

    /**
     * @note[short] Windows: 0x1426f0
     * @note[short] Android
     */
    void duplicateValues(GameObject* p0);
    
private:
    [[deprecated("GameObject::editorColorForCustomMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn editorColorForCustomMode(int p0);
public:
    
private:
    [[deprecated("GameObject::editorColorForMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn editorColorForMode(int p0);
public:
    
private:
    [[deprecated("GameObject::fastRotateObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn fastRotateObject(float p0);
public:

    /**
     * @note[short] Windows: 0x142d30
     * @note[short] Android
     */
    TodoReturn getActiveColorForMode(int p0, bool p1);
    
private:
    [[deprecated("GameObject::getBallFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getBallFrame(int p0);
public:
    
private:
    [[deprecated("GameObject::getBoundingRect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getBoundingRect();
public:
    
private:
    [[deprecated("GameObject::getBoxOffset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getBoxOffset();
public:

    /**
     * @note[short] Windows: 0x132f00
     * @note[short] Android
     */
    TodoReturn getColorFrame(gd::string p0);
    
private:
    [[deprecated("GameObject::getColorIndex not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getColorIndex();
public:

    /**
     * @note[short] Windows: 0x13df90
     * @note[short] Android
     */
    TodoReturn getColorKey(bool p0, bool p1);
    
private:
    [[deprecated("GameObject::getCustomZLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCustomZLayer();
public:
    
private:
    [[deprecated("GameObject::getGlowFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getGlowFrame(gd::string p0);
public:
    
private:
    [[deprecated("GameObject::getGroupDisabled not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getGroupDisabled();
public:
    
private:
    [[deprecated("GameObject::getGroupID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getGroupID(int p0);
public:
    
private:
    [[deprecated("GameObject::getGroupString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getGroupString();
public:
    
private:
    [[deprecated("GameObject::getLastPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getLastPosition();
public:
    
private:
    [[deprecated("GameObject::getMainColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMainColor();
public:
    
private:
    [[deprecated("GameObject::getMainColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMainColorMode();
public:

    /**
     * @note[short] Windows: 0x13d620
     * @note[short] Android
     */
    TodoReturn getObjectDirection();
    
private:
    [[deprecated("GameObject::getObjectRadius not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getObjectRadius();
public:
    
private:
    [[deprecated("GameObject::getObjectRectDirty not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getObjectRectDirty();
public:
    
private:
    [[deprecated("GameObject::getObjectRectPointer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getObjectRectPointer();
public:
    
private:
    [[deprecated("GameObject::getObjectZLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getObjectZLayer();
public:
    
private:
    [[deprecated("GameObject::getObjectZOrder not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getObjectZOrder();
public:
    
private:
    [[deprecated("GameObject::getOrientedRectDirty not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getOrientedRectDirty();
public:
    
private:
    [[deprecated("GameObject::getOuterObjectRect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getOuterObjectRect();
public:

    /**
     * @note[short] Windows: 0x13ca30
     * @note[short] Android
     */
    TodoReturn getParentMode();

    /**
     * @note[short] Windows: 0x142320
     * @note[short] Android
     */
    TodoReturn getRelativeSpriteColor(int p0);
    
private:
    [[deprecated("GameObject::getScalePosDelta not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getScalePosDelta();
public:
    
private:
    [[deprecated("GameObject::getSecondaryColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSecondaryColor();
public:
    
private:
    [[deprecated("GameObject::getSecondaryColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSecondaryColorMode();
public:
    
private:
    [[deprecated("GameObject::getSlopeAngle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSlopeAngle();
public:
    
private:
    [[deprecated("GameObject::getStartPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getStartPos();
public:
    
private:
    [[deprecated("GameObject::getType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getType();
public:
    
private:
    [[deprecated("GameObject::getUnmodifiedPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getUnmodifiedPosition();
public:
    
private:
    [[deprecated("GameObject::groupColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn groupColor(cocos2d::ccColor3B const& p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x13dd70
     * @note[short] Android
     */
    TodoReturn groupOpacityMod();
    
private:
    [[deprecated("GameObject::groupWasDisabled not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn groupWasDisabled();
public:
    
private:
    [[deprecated("GameObject::groupWasEnabled not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn groupWasEnabled();
public:
    
private:
    [[deprecated("GameObject::hasSecondaryColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hasSecondaryColor();
public:

    /**
     * @note[short] Windows: 0x143d60
     * @note[short] Android
     */
    bool ignoreEditorDuration();
    
private:
    [[deprecated("GameObject::ignoreEnter not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn ignoreEnter();
public:
    
private:
    [[deprecated("GameObject::ignoreFade not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn ignoreFade();
public:
    
private:
    [[deprecated("GameObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("GameObject::isBasicEnterEffect not implemented")]]
    /**
     * @note[short] Android
     */
    bool isBasicEnterEffect(int p0);
public:
    
private:
    [[deprecated("GameObject::isBasicTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    bool isBasicTrigger();
public:
    
private:
    [[deprecated("GameObject::isColorObject not implemented")]]
    /**
     * @note[short] Android
     */
    bool isColorObject();
public:
    
private:
    [[deprecated("GameObject::isColorTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    bool isColorTrigger();
public:
    
private:
    [[deprecated("GameObject::isConfigurablePortal not implemented")]]
    /**
     * @note[short] Android
     */
    bool isConfigurablePortal();
public:

    /**
     * @note[short] Windows: 0x1431d0
     * @note[short] Android
     */
    bool isEditorSpawnableTrigger();

    /**
     * @note[short] Windows: 0x142180
     * @note[short] Android
     */
    bool isFacingDown();

    /**
     * @note[short] Windows: 0x142220
     * @note[short] Android
     */
    bool isFacingLeft();
    
private:
    [[deprecated("GameObject::isSettingsObject not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSettingsObject();
public:

    /**
     * @note[short] Windows: 0x1434e0
     * @note[short] Android
     */
    bool isSpawnableTrigger();
    
private:
    [[deprecated("GameObject::isSpecialObject not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSpecialObject();
public:

    /**
     * @note[short] Windows: 0x143970
     * @note[short] Android
     */
    bool isSpeedObject();

    /**
     * @note[short] Windows: 0x143800
     * @note[short] Android
     */
    bool isStoppableTrigger();

    /**
     * @note[short] Windows: 0x142ea0
     * @note[short] Android
     */
    bool isTrigger();

    /**
     * @note[short] Windows: 0x13dc20
     * @note[short] Android
     */
    void loadGroupsFromString(gd::string p0);
    
private:
    [[deprecated("GameObject::makeInvisible not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn makeInvisible();
public:

    /**
     * @note[short] Windows: 0x13e420
     * @note[short] Android
     */
    static GameObject* objectFromVector(gd::vector<gd::string>& p0, gd::vector<void*>& p1, GJBaseGameLayer* p2, bool p3);
    
private:
    [[deprecated("GameObject::opacityModForMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn opacityModForMode(int p0, bool p1);
public:
    
private:
    [[deprecated("GameObject::parentForZLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn parentForZLayer(int p0, bool p1, int p2);
public:
    
private:
    [[deprecated("GameObject::perspectiveColorFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn perspectiveColorFrame(char const* p0, int p1);
public:
    
private:
    [[deprecated("GameObject::perspectiveFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn perspectiveFrame(char const* p0, int p1);
public:

    /**
     * @note[short] Windows: 0x14a660
     * @note[short] Android
     */
    void playDestroyObjectAnim(GJBaseGameLayer* p0);
    
private:
    [[deprecated("GameObject::playPickupAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playPickupAnimation(cocos2d::CCSprite* p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, bool p9, float p10, float p11);
public:
    
private:
    [[deprecated("GameObject::playPickupAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playPickupAnimation(cocos2d::CCSprite* p0, float p1, float p2, float p3, float p4);
public:

    /**
     * @note[short] Windows: 0x13bf40
     * @note[short] Android
     */
    TodoReturn playShineEffect();
    
private:
    [[deprecated("GameObject::quickUpdatePosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn quickUpdatePosition();
public:
    
private:
    [[deprecated("GameObject::quickUpdatePosition2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn quickUpdatePosition2();
public:
    
private:
    [[deprecated("GameObject::removeColorSprite not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeColorSprite();
public:
    
private:
    [[deprecated("GameObject::removeGlow not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeGlow();
public:
    
private:
    [[deprecated("GameObject::reorderColorSprite not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reorderColorSprite();
public:
    
private:
    [[deprecated("GameObject::resetColorGroups not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetColorGroups();
public:
    
private:
    [[deprecated("GameObject::resetGroupDisabled not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetGroupDisabled();
public:
    
private:
    [[deprecated("GameObject::resetGroups not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetGroups();
public:
    
private:
    [[deprecated("GameObject::resetMainColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetMainColorMode();
public:
    
private:
    [[deprecated("GameObject::resetMID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetMID();
public:
    
private:
    [[deprecated("GameObject::resetMoveOffset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetMoveOffset();
public:
    
private:
    [[deprecated("GameObject::resetRScaleForced not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetRScaleForced();
public:
    
private:
    [[deprecated("GameObject::resetSecondaryColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetSecondaryColorMode();
public:
    
private:
    [[deprecated("GameObject::setAreaOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    void setAreaOpacity(float p0, float p1, int p2);
public:
    
private:
    [[deprecated("GameObject::setCustomZLayer not implemented")]]
    /**
     * @note[short] Android
     */
    void setCustomZLayer(int p0);
public:
    
private:
    [[deprecated("GameObject::setDefaultMainColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    void setDefaultMainColorMode(int p0);
public:
    
private:
    [[deprecated("GameObject::setDefaultSecondaryColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    void setDefaultSecondaryColorMode(int p0);
public:
    
private:
    [[deprecated("GameObject::setGlowOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    void setGlowOpacity(unsigned char p0);
public:
    
private:
    [[deprecated("GameObject::setLastPosition not implemented")]]
    /**
     * @note[short] Android
     */
    void setLastPosition(cocos2d::CCPoint const& p0);
public:
    
private:
    [[deprecated("GameObject::setMainColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    void setMainColorMode(int p0);
public:
    
private:
    [[deprecated("GameObject::setSecondaryColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    void setSecondaryColorMode(int p0);
public:
    
private:
    [[deprecated("GameObject::setupColorSprite not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupColorSprite(int p0, bool p1);
public:
    
private:
    [[deprecated("GameObject::setupPixelScale not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupPixelScale();
public:
    
private:
    [[deprecated("GameObject::setupSpriteSize not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupSpriteSize();
public:

    /**
     * @note[short] Windows: 0x133880
     * @note[short] Android
     */
    TodoReturn shouldBlendColor(GJSpriteColor* p0, bool p1);

    /**
     * @note[short] Windows: 0x139d10
     * @note[short] Android
     */
    TodoReturn shouldLockX();
    
private:
    [[deprecated("GameObject::shouldNotHideAnimFreeze not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shouldNotHideAnimFreeze();
public:
    
private:
    [[deprecated("GameObject::shouldShowPickupEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shouldShowPickupEffects();
public:
    
private:
    [[deprecated("GameObject::slopeFloorTop not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn slopeFloorTop();
public:
    
private:
    [[deprecated("GameObject::slopeWallLeft not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn slopeWallLeft();
public:
    
private:
    [[deprecated("GameObject::slopeYPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn slopeYPos(cocos2d::CCRect p0);
public:
    
private:
    [[deprecated("GameObject::slopeYPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn slopeYPos(float p0);
public:
    
private:
    [[deprecated("GameObject::slopeYPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn slopeYPos(GameObject* p0);
public:
    
private:
    [[deprecated("GameObject::spawnDefaultPickupParticle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnDefaultPickupParticle(GJBaseGameLayer* p0);
public:

    /**
     * @note[short] Windows: 0x13cf30
     * @note[short] Android
     */
    TodoReturn updateBlendMode();
    
private:
    [[deprecated("GameObject::updateCustomColorType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCustomColorType(short p0);
public:

    /**
     * @note[short] Windows: 0x13b290
     * @note[short] Android
     */
    TodoReturn updateCustomScaleX(float p0);

    /**
     * @note[short] Windows: 0x13b350
     * @note[short] Android
     */
    TodoReturn updateCustomScaleY(float p0);
    
private:
    [[deprecated("GameObject::updateHSVState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateHSVState();
public:

    /**
     * @note[short] Windows: 0x141fe0
     * @note[short] Android
     */
    TodoReturn updateIsOriented();
    
private:
    [[deprecated("GameObject::updateMainColorOnly not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMainColorOnly();
public:
    
private:
    [[deprecated("GameObject::updateMainOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMainOpacity();
public:

    /**
     * @note[short] Windows: 0x141b70
     * @note[short] Android
     */
    void updateObjectEditorColor();
    
private:
    [[deprecated("GameObject::updateSecondaryColorOnly not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSecondaryColorOnly();
public:
    
private:
    [[deprecated("GameObject::updateSecondaryOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSecondaryOpacity();
public:

    /**
     * @note[short] Windows: 0x133160
     * @note[short] Android
     */
    TodoReturn updateStartPos();
    
private:
    [[deprecated("GameObject::updateUnmodifiedPositions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateUnmodifiedPositions();
public:
    
private:
    [[deprecated("GameObject::usesFreezeAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn usesFreezeAnimation();
public:
    
private:
    [[deprecated("GameObject::usesSpecialAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn usesSpecialAnimation();
public:
    
private:
    [[deprecated("GameObject::update not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void update(float p0);
public:

    /**
     * @note[short] Windows: 0x13af80
     * @note[short] Android
     */
    virtual void setScaleX(float p0);

    /**
     * @note[short] Windows: 0x13b010
     * @note[short] Android
     */
    virtual void setScaleY(float p0);

    /**
     * @note[short] Windows: 0x13b0a0
     * @note[short] Android
     */
    virtual void setScale(float p0);

    /**
     * @note[short] Windows: 0x13aa40
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);

    /**
     * @note[short] Windows: 0x13b890
     * @note[short] Android
     */
    virtual void setVisible(bool p0);

    /**
     * @note[short] Windows: 0x13ac30
     * @note[short] Android
     */
    virtual void setRotation(float p0);

    /**
     * @note[short] Windows: 0x13ad30
     * @note[short] Android
     */
    virtual void setRotationX(float p0);

    /**
     * @note[short] Windows: 0x13ae30
     * @note[short] Android
     */
    virtual void setRotationY(float p0);

    /**
     * @note[short] Windows: 0x13b490
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] Windows: 0x131080
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* p0);

    /**
     * @note[short] Windows: 0x141630
     * @note[short] Android
     */
    virtual void setChildColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] Windows: 0x13af00
     * @note[short] Android
     */
    virtual void setFlipX(bool p0);

    /**
     * @note[short] Windows: 0x13af40
     * @note[short] Android
     */
    virtual void setFlipY(bool p0);
    
private:
    [[deprecated("GameObject::firstSetup not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void firstSetup();
public:

    /**
     * @note[short] Windows: 0x133940
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] Windows: 0x14dda0
     * @note[short] Android
     */
    virtual void setupCustomSprites(gd::string p0);

    /**
     * @note[short] Windows: 0x13cf90
     * @note[short] Android
     */
    virtual TodoReturn addMainSpriteToParent(bool p0);
    
private:
    [[deprecated("GameObject::resetObject not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void resetObject();
public:
    
private:
    [[deprecated("GameObject::triggerObject not implemented")]]
    /**
     * @note[short] Android
     */
    virtual bool triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);
public:
    
private:
    [[deprecated("GameObject::activateObject not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void activateObject();
public:

    /**
     * @note[short] Windows: 0x133790
     * @note[short] Android
     */
    virtual void deactivateObject(bool p0);

    /**
     * @note[short] Windows: 0x13a500
     * @note[short] Android
     */
    virtual TodoReturn transferObjectRect(cocos2d::CCRect& p0);

    /**
     * @note[short] Windows: 0x13a570
     * @note[short] Android
     */
    virtual cocos2d::CCRect const& getObjectRect();

    /**
     * @note[short] Windows: 0x13a570
     * @note[short] Android
     */
    virtual cocos2d::CCRect getObjectRect(float p0, float p1);
    
private:
    [[deprecated("GameObject::getObjectRect2 not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn getObjectRect2(float p0, float p1);
public:
    
private:
    [[deprecated("GameObject::getObjectTextureRect not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn getObjectTextureRect();
public:
    
private:
    [[deprecated("GameObject::getRealPosition not implemented")]]
    /**
     * @note[short] Android
     */
    virtual cocos2d::CCPoint getRealPosition();
public:
    
private:
    [[deprecated("GameObject::setStartPos not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setStartPos(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("GameObject::updateStartValues not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateStartValues();
public:
    
private:
    [[deprecated("GameObject::customObjectSetup not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:

    /**
     * @note[short] Windows: 0x13f9a0
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
    
private:
    [[deprecated("GameObject::claimParticle not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn claimParticle();
public:
    
private:
    [[deprecated("GameObject::unclaimParticle not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn unclaimParticle();
public:
    
private:
    [[deprecated("GameObject::particleWasActivated not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn particleWasActivated();
public:

    /**
     * @note[short] Windows: 0x13aee0
     * @note[short] Android
     */
    virtual bool isFlipX();

    /**
     * @note[short] Windows: 0x13aef0
     * @note[short] Android
     */
    virtual bool isFlipY();
    
private:
    [[deprecated("GameObject::setRScaleX not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setRScaleX(float p0);
public:
    
private:
    [[deprecated("GameObject::setRScaleY not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setRScaleY(float p0);
public:
    
private:
    [[deprecated("GameObject::setRScale not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setRScale(float p0);
public:
    
private:
    [[deprecated("GameObject::getRScaleX not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn getRScaleX();
public:
    
private:
    [[deprecated("GameObject::getRScaleY not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn getRScaleY();
public:
    
private:
    [[deprecated("GameObject::setRRotation not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setRRotation(float p0);
public:
    
private:
    [[deprecated("GameObject::triggerActivated not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn triggerActivated(float p0);
public:

    /**
     * @note[short] Windows: 0x141300
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& p0);
    
private:
    [[deprecated("GameObject::setGlowColor not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setGlowColor(cocos2d::ccColor3B const& p0);
public:
    
private:
    [[deprecated("GameObject::restoreObject not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn restoreObject();
public:
    
private:
    [[deprecated("GameObject::animationTriggered not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn animationTriggered();
public:

    /**
     * @note[short] Windows: 0x141690
     * @note[short] Android
     */
    virtual TodoReturn selectObject(cocos2d::ccColor3B p0);
    
private:
    [[deprecated("GameObject::activatedByPlayer not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn activatedByPlayer(PlayerObject* p0);
public:
    
private:
    [[deprecated("GameObject::hasBeenActivatedByPlayer not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn hasBeenActivatedByPlayer(PlayerObject* p0);
public:
    
private:
    [[deprecated("GameObject::hasBeenActivated not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn hasBeenActivated();
public:
    
private:
    [[deprecated("GameObject::getOrientedBox not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn getOrientedBox();
public:
    
private:
    [[deprecated("GameObject::updateOrientedBox not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateOrientedBox();
public:
    
private:
    [[deprecated("GameObject::getObjectRotation not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn getObjectRotation();
public:
    
private:
    [[deprecated("GameObject::updateMainColor not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateMainColor(cocos2d::ccColor3B const& p0);
public:
    
private:
    [[deprecated("GameObject::updateSecondaryColor not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateSecondaryColor(cocos2d::ccColor3B const& p0);
public:

    /**
     * @note[short] Windows: 0x13d7f0
     * @note[short] Android
     */
    virtual void addToGroup(int p0);

    /**
     * @note[short] Windows: 0x13d870
     * @note[short] Android
     */
    virtual void removeFromGroup(int p0);
    
private:
    [[deprecated("GameObject::saveActiveColors not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn saveActiveColors();
public:
    
private:
    [[deprecated("GameObject::spawnXPosition not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn spawnXPosition();
public:
    
private:
    [[deprecated("GameObject::canAllowMultiActivate not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn canAllowMultiActivate();
public:
    
private:
    [[deprecated("GameObject::blendModeChanged not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn blendModeChanged();
public:
    
private:
    [[deprecated("GameObject::updateParticleColor not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateParticleColor(cocos2d::ccColor3B const& p0);
public:
    
private:
    [[deprecated("GameObject::updateParticleOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateParticleOpacity(unsigned char p0);
public:
    
private:
    [[deprecated("GameObject::updateMainParticleOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateMainParticleOpacity(unsigned char p0);
public:
    
private:
    [[deprecated("GameObject::updateSecondaryParticleOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateSecondaryParticleOpacity(unsigned char p0);
public:
    
private:
    [[deprecated("GameObject::canReverse not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn canReverse();
public:
    
private:
    [[deprecated("GameObject::isSpecialSpawnObject not implemented")]]
    /**
     * @note[short] Android
     */
    virtual bool isSpecialSpawnObject();
public:
    
private:
    [[deprecated("GameObject::canBeOrdered not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn canBeOrdered();
public:
    
private:
    [[deprecated("GameObject::getObjectLabel not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn getObjectLabel();
public:
    
private:
    [[deprecated("GameObject::setObjectLabel not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setObjectLabel(cocos2d::CCLabelBMFont* p0);
public:
    
private:
    [[deprecated("GameObject::shouldDrawEditorHitbox not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn shouldDrawEditorHitbox();
public:
    
private:
    [[deprecated("GameObject::getHasSyncedAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn getHasSyncedAnimation();
public:
    
private:
    [[deprecated("GameObject::getHasRotateAction not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn getHasRotateAction();
public:
    
private:
    [[deprecated("GameObject::canMultiActivate not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn canMultiActivate(bool p0);
public:
    
private:
    [[deprecated("GameObject::updateTextKerning not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateTextKerning(int p0);
public:
    
private:
    [[deprecated("GameObject::getTextKerning not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn getTextKerning();
public:
    
private:
    [[deprecated("GameObject::setObjectRectDirty not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setObjectRectDirty(bool p0);
public:
    
private:
    [[deprecated("GameObject::setOrientedRectDirty not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setOrientedRectDirty(bool p0);
public:
    
private:
    [[deprecated("GameObject::setType not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setType(GameObjectType p0);
public:
    GEODE_PAD(15);
    bool m_hasExtendedCollision;
    GEODE_PAD(19);
    int m_activeMainColorID;
    int m_activeDetailColorID;
    GEODE_PAD(76);
    cocos2d::CCSprite* m_glowSprite;
    GEODE_PAD(4);
    float m_unk288;
    float m_unk28c;
    short m_unk290;
    bool m_unk292;
    GEODE_PAD(5);
    gd::string m_particleString;
    GEODE_PAD(1);
    bool m_particleUseObjectColor;
    GEODE_PAD(62);
    int m_linkedGroup;
    GEODE_PAD(12);
    cocos2d::CCSprite* m_colorSprite;
    GEODE_PAD(19);
    int m_uniqueID;
    GameObjectType m_objectType;
    GEODE_PAD(16);
    double m_realXPosition;
    double m_realYPosition;
    cocos2d::CCPoint m_startPosition;
    GEODE_PAD(1);
    bool m_hasNoAudioScale;
    bool m_unk34a;
    GEODE_PAD(41);
    short m_enterChannel;
    short m_objectMaterial;
    GEODE_PAD(4);
    bool m_hasNoGlow;
    int m_targetColor;
    int m_objectID;
    GEODE_PAD(8);
    short m_customColorType;
    bool m_isDontEnter;
    bool m_isDontFade;
    bool m_hasNoEffects;
    bool m_hasNoParticles;
    GEODE_PAD(22);
    int m_property53;
    GEODE_PAD(24);
    GJSpriteColor* m_baseColor;
    GJSpriteColor* m_detailColor;
    GEODE_PAD(10);
    ZLayer m_zLayer;
    int m_zOrder;
    GEODE_PAD(16);
    bool m_shouldUpdateColorSprite;
    GEODE_PAD(1);
    bool m_hasGroupParent;
    bool m_hasAreaParent;
    float m_scaleX;
    float m_scaleY;
    std::array<short, 10>* m_groups;
    short m_groupCount;
    bool m_hasGroupParentsString;
    std::array<short, 10>* m_colorGroups;
    short m_colorGroupCount;
    std::array<short, 10>* m_opacityGroups;
    short m_opacityGroupCount;
    short m_editorLayer;
    short m_editorLayer2;
    GEODE_PAD(8);
    bool m_isNoTouch;
    GEODE_PAD(9);
    cocos2d::CCPoint m_lastPosition;
    GEODE_PAD(27);
    bool m_isHighDetail;
    GEODE_PAD(17);
    bool m_isPassable;
    bool m_isHide;
    bool m_isNonStickX;
    bool m_isNonStickY;
    bool m_isIceBlock;
    bool m_isGripSlope;
    bool m_isScaleStick;
    bool m_isExtraSticky;
    bool m_isDontBoostY;
    bool m_isDontBoostX;
    GEODE_PAD(17);
    int m_property155;
    int m_property156;
    GEODE_PAD(18);
};
