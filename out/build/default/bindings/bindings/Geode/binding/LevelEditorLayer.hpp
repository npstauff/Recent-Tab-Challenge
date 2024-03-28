#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJBaseGameLayer.hpp"
#include "LevelSettingsDelegate.hpp"

class LevelEditorLayer : public GJBaseGameLayer, public LevelSettingsDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelEditorLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelEditorLayer, GJBaseGameLayer)

    /**
     * @note[short] Out of line
     */
    static LevelEditorLayer* get();

    /**
     * @note[short] Windows: 0x2399c0
     * @note[short] Android
     */
    static LevelEditorLayer* create(GJGameLevel* p0, bool p1);
    
private:
    [[deprecated("LevelEditorLayer::activateTriggerEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activateTriggerEffect(EffectGameObject* p0, float p1, float p2, float p3, bool p4);
public:
    
private:
    [[deprecated("LevelEditorLayer::addDelayedSpawn not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addDelayedSpawn(EffectGameObject* p0, float p1);
public:

    /**
     * @note[short] Windows: 0x241da0
     * @note[short] Android
     */
    TodoReturn addExclusionList(cocos2d::CCArray* p0, cocos2d::CCDictionary* p1);
    
private:
    [[deprecated("LevelEditorLayer::addObjectFromVector not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addObjectFromVector(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("LevelEditorLayer::addObjectsAtPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addObjectsAtPosition(cocos2d::CCPoint p0, cocos2d::CCArray* p1, cocos2d::CCArray* p2);
public:
    
private:
    [[deprecated("LevelEditorLayer::addObjectsInRect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addObjectsInRect(cocos2d::CCRect p0, bool p1, cocos2d::CCArray* p2, cocos2d::CCArray* p3);
public:
    
private:
    [[deprecated("LevelEditorLayer::addObjectToGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addObjectToGroup(GameObject* p0, int p1);
public:
    
private:
    [[deprecated("LevelEditorLayer::addPlayer2Point not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addPlayer2Point(cocos2d::CCPoint p0, bool p1);
public:
    
private:
    [[deprecated("LevelEditorLayer::addPlayerCollisionBlock not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addPlayerCollisionBlock();
public:
    
private:
    [[deprecated("LevelEditorLayer::addPlayerPoint not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addPlayerPoint(cocos2d::CCPoint p0);
public:

    /**
     * @note[short] Windows: 0x23ec50
     * @note[short] Android
     */
    void addSpecial(GameObject* p0);
    
private:
    [[deprecated("LevelEditorLayer::addToRedoList not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToRedoList(UndoObject* p0);
public:

    /**
     * @note[short] Windows: 0x2509d0
     * @note[short] Android
     */
    TodoReturn addTouchPoint(cocos2d::CCPoint p0);
    
private:
    [[deprecated("LevelEditorLayer::addToUndoList not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToUndoList(UndoObject* p0, bool p1);
public:
    
private:
    [[deprecated("LevelEditorLayer::applyAttributeState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn applyAttributeState(GameObject* p0, GameObject* p1);
public:
    
private:
    [[deprecated("LevelEditorLayer::applyGroupState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn applyGroupState(GameObject* p0, GameObject* p1);
public:
    
private:
    [[deprecated("LevelEditorLayer::breakApartTextObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn breakApartTextObject(TextGameObject* p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::canPasteState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canPasteState();
public:
    
private:
    [[deprecated("LevelEditorLayer::clearPlayerPoints not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn clearPlayerPoints();
public:
    
private:
    [[deprecated("LevelEditorLayer::clearTouchPoints not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn clearTouchPoints();
public:

    /**
     * @note[short] Windows: 0x2477f0
     * @note[short] Android
     */
    TodoReturn copyObjectState(GameObject* p0);
    
private:
    [[deprecated("LevelEditorLayer::copyParticleState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn copyParticleState(ParticleGameObject* p0);
public:

    /**
     * @note[short] Windows: 0x23bf10
     * @note[short] Android
     */
    GameObject* createObject(int p0, cocos2d::CCPoint p1, bool p2);

    /**
     * @note[short] Windows: 0x23b330
     * @note[short] Android
     */
    void createObjectsFromSetup(gd::string& p0);

    /**
     * @note[short] Windows: 0x23b970
     * @note[short] Android
     */
    cocos2d::CCArray* createObjectsFromString(gd::string const& p0, bool p1, bool p2);
    
private:
    [[deprecated("LevelEditorLayer::dirtifyTriggers not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn dirtifyTriggers();
public:
    
private:
    [[deprecated("LevelEditorLayer::duplicateKeyframeAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn duplicateKeyframeAnimation(int p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::fastUpdateDisabledGroups not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn fastUpdateDisabledGroups();
public:

    /**
     * @note[short] Windows: 0x23d260
     * @note[short] Android
     */
    TodoReturn findGameObject(int p0);
    
private:
    [[deprecated("LevelEditorLayer::findStartPosObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn findStartPosObject();
public:
    
private:
    [[deprecated("LevelEditorLayer::forceShowSelectedObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn forceShowSelectedObjects(bool p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::fullUpdateDisabledGroups not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn fullUpdateDisabledGroups();
public:
    
private:
    [[deprecated("LevelEditorLayer::getAllObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAllObjects();
public:
    
private:
    [[deprecated("LevelEditorLayer::getDelayedSpawnNode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getDelayedSpawnNode();
public:
    
private:
    [[deprecated("LevelEditorLayer::getGridPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getGridPos(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::getLastObjectX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getLastObjectX();
public:

    /**
     * @note[short] Windows: 0x23db70
     * @note[short] Android
     */
    TodoReturn getLevelString();
    
private:
    [[deprecated("LevelEditorLayer::getLockedLayers not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getLockedLayers();
public:
    
private:
    [[deprecated("LevelEditorLayer::getNextColorChannel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getNextColorChannel();
public:
    
private:
    [[deprecated("LevelEditorLayer::getNextFreeAreaEffectID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getNextFreeAreaEffectID(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::getNextFreeBlockID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getNextFreeBlockID(cocos2d::CCArray* p0);
public:

    /**
     * @note[short] Windows: 0x241950
     * @note[short] Android
     */
    TodoReturn getNextFreeEditorLayer(cocos2d::CCArray* p0);
    
private:
    [[deprecated("LevelEditorLayer::getNextFreeEnterChannel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getNextFreeEnterChannel(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::getNextFreeGradientID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getNextFreeGradientID(cocos2d::CCArray* p0);
public:

    /**
     * @note[short] Windows: 0x241530
     * @note[short] Android
     */
    int getNextFreeGroupID(cocos2d::CCArray* p0);
    
private:
    [[deprecated("LevelEditorLayer::getNextFreeItemID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getNextFreeItemID(cocos2d::CCArray* p0);
public:

    /**
     * @note[short] Windows: 0x241870
     * @note[short] Android
     */
    TodoReturn getNextFreeOrderChannel(cocos2d::CCArray* p0);
    
private:
    [[deprecated("LevelEditorLayer::getNextFreeSFXGroupID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getNextFreeSFXGroupID(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::getNextFreeSFXID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getNextFreeSFXID(cocos2d::CCArray* p0);
public:

    /**
     * @note[short] Windows: 0x23cb10
     * @note[short] Android
     */
    TodoReturn getObjectRect(GameObject* p0, bool p1, bool p2);
    
private:
    [[deprecated("LevelEditorLayer::getRelativeOffset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRelativeOffset(GameObject* p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::getSavedEditorPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSavedEditorPosition(int p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::getSavedEditorPositions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSavedEditorPositions();
public:
    
private:
    [[deprecated("LevelEditorLayer::getSectionCount not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSectionCount();
public:
    
private:
    [[deprecated("LevelEditorLayer::getSelectedEditorOrder not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSelectedEditorOrder();
public:
    
private:
    [[deprecated("LevelEditorLayer::getSelectedEffectPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSelectedEffectPos();
public:
    
private:
    [[deprecated("LevelEditorLayer::getSelectedOrderChannel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSelectedOrderChannel();
public:
    
private:
    [[deprecated("LevelEditorLayer::getSFXIDs not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSFXIDs();
public:
    
private:
    [[deprecated("LevelEditorLayer::getSongIDs not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSongIDs(bool& p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::getTriggerGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTriggerGroup(int p0);
public:

    /**
     * @note[short] Windows: 0x23d670
     * @note[short] Android
     */
    void handleAction(bool p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("LevelEditorLayer::hasAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hasAction(bool p0);
public:

    /**
     * @note[short] Windows: 0x239a70
     * @note[short] Android
     */
    bool init(GJGameLevel* p0, bool p1);

    /**
     * @note[short] Out of line
     */
    bool isLayerLocked(int layer);

    /**
     * @note[short] Windows: 0x23c610
     * @note[short] Android
     */
    TodoReturn objectAtPosition(cocos2d::CCPoint p0);

    /**
     * @note[short] Windows: 0x23f080
     * @note[short] Android
     */
    TodoReturn objectMoved(GameObject* p0);
    
private:
    [[deprecated("LevelEditorLayer::objectsAtPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn objectsAtPosition(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::objectsInRect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn objectsInRect(cocos2d::CCRect p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x246c70
     * @note[short] Android
     */
    TodoReturn onPausePlaytest();

    /**
     * @note[short] Windows: 0x2463a0
     * @note[short] Android
     */
    TodoReturn onPlaytest();

    /**
     * @note[short] Windows: 0x246d60
     * @note[short] Android
     */
    TodoReturn onResumePlaytest();
    
private:
    [[deprecated("LevelEditorLayer::onStopPlaytest not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn onStopPlaytest();
public:

    /**
     * @note[short] Windows: 0x247940
     * @note[short] Android
     */
    TodoReturn pasteAttributeState(GameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x2478d0
     * @note[short] Android
     */
    TodoReturn pasteColorState(GameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("LevelEditorLayer::pasteGroupState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pasteGroupState(GameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("LevelEditorLayer::pasteParticleState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pasteParticleState(ParticleGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("LevelEditorLayer::processLoadedMoveActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processLoadedMoveActions();
public:
    
private:
    [[deprecated("LevelEditorLayer::quickUpdateAllPositions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn quickUpdateAllPositions();
public:
    
private:
    [[deprecated("LevelEditorLayer::recreateGroups not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn recreateGroups();
public:
    
private:
    [[deprecated("LevelEditorLayer::redoLastAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn redoLastAction();
public:
    
private:
    [[deprecated("LevelEditorLayer::refreshSpecial not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn refreshSpecial(GameObject* p0);
public:

    /**
     * @note[short] Windows: 0x23d360
     * @note[short] Android
     */
    TodoReturn removeAllObjects();
    
private:
    [[deprecated("LevelEditorLayer::removeAllObjectsOfType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeAllObjectsOfType(int p0);
public:

    /**
     * @note[short] Windows: 0x23d2b0
     * @note[short] Android
     */
    TodoReturn removeObject(GameObject* p0, bool p1);
    
private:
    [[deprecated("LevelEditorLayer::removePlayerCollisionBlock not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removePlayerCollisionBlock();
public:

    /**
     * @note[short] Windows: 0x23f2f0
     * @note[short] Android
     */
    TodoReturn removeSpecial(GameObject* p0);
    
private:
    [[deprecated("LevelEditorLayer::resetDelayedSpawnNodes not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetDelayedSpawnNodes();
public:
    
private:
    [[deprecated("LevelEditorLayer::resetEffectTriggerOptim not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetEffectTriggerOptim(GameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("LevelEditorLayer::resetMovingObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetMovingObjects();
public:
    
private:
    [[deprecated("LevelEditorLayer::resetObjectVector not implemented")]]
    /**
     * @note[short] Android
     */
    void resetObjectVector();
public:
    
private:
    [[deprecated("LevelEditorLayer::resetPlayback not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetPlayback();
public:
    
private:
    [[deprecated("LevelEditorLayer::resetToggledGroups not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetToggledGroups();
public:
    
private:
    [[deprecated("LevelEditorLayer::resetToggledGroupsAndObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetToggledGroupsAndObjects();
public:
    
private:
    [[deprecated("LevelEditorLayer::resetUnusedColorChannels not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetUnusedColorChannels();
public:
    
private:
    [[deprecated("LevelEditorLayer::reverseKeyframeAnimationOrder not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reverseKeyframeAnimationOrder(int p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::reverseObjectChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reverseObjectChanged(EffectGameObject* p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::rotationForSlopeNearObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn rotationForSlopeNearObject(GameObject* p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::runColorEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn runColorEffect(EffectGameObject* p0, int p1, float p2, float p3, bool p4);
public:
    
private:
    [[deprecated("LevelEditorLayer::saveEditorPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn saveEditorPosition(cocos2d::CCPoint& p0, int p1);
public:

    /**
     * @note[short] Windows: 0x239980
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJGameLevel* p0, bool p1);
    
private:
    [[deprecated("LevelEditorLayer::setObjectCount not implemented")]]
    /**
     * @note[short] Android
     */
    void setObjectCount(int p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::shouldBlend not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shouldBlend(int p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::sortBatchnodeChildren not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sortBatchnodeChildren(float p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::spawnGroupPreview not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnGroupPreview(int p0, float p1, float p2, float p3, float p4, float p5, bool p6, bool p7);
public:
    
private:
    [[deprecated("LevelEditorLayer::stopPlayback not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopPlayback();
public:
    
private:
    [[deprecated("LevelEditorLayer::stopTriggersInGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopTriggersInGroup(int p0, float p1);
public:
    
private:
    [[deprecated("LevelEditorLayer::timeObjectChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn timeObjectChanged();
public:
    
private:
    [[deprecated("LevelEditorLayer::toggleBackground not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleBackground(bool p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::toggleGrid not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleGrid(bool p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::toggleGround not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleGround(bool p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::toggleGroupPreview not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleGroupPreview(int p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x23e6a0
     * @note[short] Android
     */
    TodoReturn toggleLockActiveLayer();
    
private:
    [[deprecated("LevelEditorLayer::transferDefaultColors not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn transferDefaultColors(GJEffectManager* p0, GJEffectManager* p1);
public:
    
private:
    [[deprecated("LevelEditorLayer::triggerFollowCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerFollowCommand(EffectGameObject* p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::triggerPlayerFollowCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerPlayerFollowCommand(EffectGameObject* p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::triggerRotateCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerRotateCommand(EffectGameObject* p0);
public:

    /**
     * @note[short] Windows: 0x23f600
     * @note[short] Android
     */
    TodoReturn tryUpdateSpeedObject(EffectGameObject* p0, bool p1);

    /**
     * @note[short] Windows: 0x23c100
     * @note[short] Android
     */
    TodoReturn typeExistsAtPosition(int p0, cocos2d::CCPoint p1, bool p2, bool p3, float p4);
    
private:
    [[deprecated("LevelEditorLayer::undoLastAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn undoLastAction();
public:
    
private:
    [[deprecated("LevelEditorLayer::unlockAllLayers not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unlockAllLayers();
public:
    
private:
    [[deprecated("LevelEditorLayer::updateAnimateOnTriggerObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateAnimateOnTriggerObjects(bool p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::updateArt not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateArt(float p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::updateBlendValues not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateBlendValues();
public:
    
private:
    [[deprecated("LevelEditorLayer::updateEditor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEditor(float p0);
public:

    /**
     * @note[short] Windows: 0x2423a0
     * @note[short] Android
     */
    TodoReturn updateEditorMode();
    
private:
    [[deprecated("LevelEditorLayer::updateGameObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGameObjects();
public:
    
private:
    [[deprecated("LevelEditorLayer::updateGridLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGridLayer();
public:
    
private:
    [[deprecated("LevelEditorLayer::updateGridLayerParent not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGridLayerParent();
public:
    
private:
    [[deprecated("LevelEditorLayer::updateKeyframeObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateKeyframeObjects();
public:
    
private:
    [[deprecated("LevelEditorLayer::updateKeyframeVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateKeyframeVisibility(bool p0);
public:

    /**
     * @note[short] Windows: 0x2458c0
     * @note[short] Android
     */
    void updateLevelFont(int p0);
    
private:
    [[deprecated("LevelEditorLayer::updateObjectColors not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateObjectColors(cocos2d::CCArray* p0);
public:

    /**
     * @note[short] Windows: 0x23e710
     * @note[short] Android
     */
    static void updateObjectLabel(GameObject* p0);

    /**
     * @note[short] Windows: 0x23afa0
     * @note[short] Android
     */
    TodoReturn updateOptions();

    /**
     * @note[short] Windows: 0x247c90
     * @note[short] Android
     */
    TodoReturn updatePreviewAnim();

    /**
     * @note[short] Windows: 0x247ec0
     * @note[short] Android
     */
    void updatePreviewParticle(ParticleGameObject* p0);

    /**
     * @note[short] Windows: 0x247e20
     * @note[short] Android
     */
    TodoReturn updatePreviewParticles();
    
private:
    [[deprecated("LevelEditorLayer::updateToggledGroups not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateToggledGroups();
public:
    
private:
    [[deprecated("LevelEditorLayer::validGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn validGroup(GameObject* p0, bool p1);
public:
    
private:
    [[deprecated("LevelEditorLayer::draw not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void draw();
public:

    /**
     * @note[short] Windows: 0x2475d0
     * @note[short] Android
     */
    virtual void postUpdate(float p0);

    /**
     * @note[short] Windows: 0x23fa90
     * @note[short] Android
     */
    virtual TodoReturn updateVisibility(float p0);
    
private:
    [[deprecated("LevelEditorLayer::playerTookDamage not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn playerTookDamage(PlayerObject* p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::updateColor not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateColor(cocos2d::ccColor3B& p0, float p1, int p2, bool p3, float p4, cocos2d::ccHSVValue& p5, int p6, bool p7, EffectGameObject* p8, int p9, int p10);
public:
    
private:
    [[deprecated("LevelEditorLayer::updateDebugDraw not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateDebugDraw();
public:
    
private:
    [[deprecated("LevelEditorLayer::addToGroup not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void addToGroup(GameObject* p0, int p1, bool p2);
public:
    
private:
    [[deprecated("LevelEditorLayer::removeFromGroup not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void removeFromGroup(GameObject* p0, int p1);
public:
    
private:
    [[deprecated("LevelEditorLayer::updateObjectSection not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateObjectSection(GameObject* p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::updateDisabledObjectsLastPos not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateDisabledObjectsLastPos(cocos2d::CCArray* p0);
public:

    /**
     * @note[short] Windows: 0x245020
     * @note[short] Android
     */
    virtual float timeForPos(cocos2d::CCPoint p0, int p1, int p2, bool p3, int p4);

    /**
     * @note[short] Windows: 0x2450b0
     * @note[short] Android
     */
    virtual float posForTime(float p0);
    
private:
    [[deprecated("LevelEditorLayer::resetSPTriggered not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void resetSPTriggered();
public:

    /**
     * @note[short] Windows: 0x2460b0
     * @note[short] Android
     */
    virtual TodoReturn didRotateGameplay();
    
private:
    [[deprecated("LevelEditorLayer::manualUpdateObjectColors not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn manualUpdateObjectColors(GameObject* p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::claimCustomParticle not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn claimCustomParticle(gd::string const& p0, cocos2d::ParticleStruct const& p1, int p2, int p3, int p4, bool p5);
public:
    
private:
    [[deprecated("LevelEditorLayer::unclaimCustomParticle not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn unclaimCustomParticle(gd::string const& p0, cocos2d::CCParticleSystemQuad* p1);
public:
    
private:
    [[deprecated("LevelEditorLayer::activatedAudioTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn activatedAudioTrigger(SFXTriggerGameObject* p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::checkpointActivated not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void checkpointActivated(CheckpointGameObject* p0);
public:
    
private:
    [[deprecated("LevelEditorLayer::addKeyframe not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn addKeyframe(KeyframeGameObject* p0);
public:

    /**
     * @note[short] Windows: 0x23b2b0
     * @note[short] Android
     */
    virtual void levelSettingsUpdated();
    bool m_drawTriggerBoxes;
    bool m_showGrid;
    bool m_hideGridOnPlay;
    bool m_drawEffectLines;
    bool m_showGround;
    bool m_showDurationLines;
    bool m_increaseMaxUndoRedo;
    bool m_hideBackground;
    bool m_gv0120;
    bool m_layerLockingEnabled;
    bool m_unkBool4;
    bool m_previewParticles;
    bool m_previewAnimations;
    bool m_previewShaders;
    bool m_hideParticleIcons;
    bool m_unkBool5;
    bool m_playTestSmoothFix;
    GEODE_PAD(15);
    cocos2d::CCArray* m_unkArr0;
    cocos2d::CCArray* m_unkArr1;
    cocos2d::CCArray* m_unkArr2;
    cocos2d::CCArray* m_unkArr3;
    cocos2d::CCArray* m_unkArr4;
    cocos2d::CCArray* m_unkArr8;
    cocos2d::CCArray* m_unkArr11;
    cocos2d::CCArray* m_unkArr12;
    cocos2d::CCArray* m_unkArr13;
    cocos2d::CCDictionary* m_unkDict3;
    cocos2d::CCArray* m_unkArr5;
    GEODE_PAD(8);
    cocos2d::CCDictionary* m_unkDict4;
    cocos2d::CCArray* m_unkArr7;
    bool m_unkBool3;
    bool m_unkBool2;
    geode::SeedValueRSV m_coinCount;
    GEODE_PAD(8);
    cocos2d::CCArray* m_unkArr6;
    GEODE_PAD(4);
    cocos2d::CCDictionary* m_unkDict1;
    cocos2d::CCDictionary* m_unkDict2;
    bool m_unkBool0;
    bool m_unkBool1;
    short m_currentLayer;
    GEODE_PAD(24);
    EditorUI* m_editorUI;
    cocos2d::CCArray* m_undoObjects;
    cocos2d::CCArray* m_redoObjects;
    geode::SeedValueRSV m_objectCount;
    DrawGridLayer* m_drawGridLayer;
    bool m_unkBool;
    bool m_previewMode;
    GEODE_PAD(134);
    gd::vector<bool> m_lockedLayers;
};
