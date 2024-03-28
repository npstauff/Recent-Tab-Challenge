#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJGameState.hpp"
#include "PlayerButtonCommand.hpp"
#include "TriggerEffectDelegate.hpp"

class GJBaseGameLayer : public cocos2d::CCLayer, public TriggerEffectDelegate {
public:
    static constexpr auto CLASS_NAME = "GJBaseGameLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJBaseGameLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x18ef50
     * @note[short] Android
     */
     ~GJBaseGameLayer();

    /**
     * @note[short] Windows: 0x1a4270
     * @note[short] Android
     */
    TodoReturn activateCustomRing(RingObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::activatedAudioTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activatedAudioTrigger(SFXTriggerGameObject* p0, float p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activateEventTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activateEventTrigger(EventLinkTrigger* p0, gd::vector<int> const& p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activateItemCompareTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activateItemCompareTrigger(ItemTriggerGameObject* p0, gd::vector<int> const& p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activateItemEditTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activateItemEditTrigger(ItemTriggerGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activateObjectControlTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activateObjectControlTrigger(ObjectControlGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activatePersistentItemTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activatePersistentItemTrigger(ItemTriggerGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activatePlayerControlTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activatePlayerControlTrigger(PlayerControlGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activateResetTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activateResetTrigger(EffectGameObject* p0);
public:

    /**
     * @note[short] Windows: 0x1c4370
     * @note[short] Android
     */
    TodoReturn activateSFXEditTrigger(SFXTriggerGameObject* p0);

    /**
     * @note[short] Windows: 0x1c4230
     * @note[short] Android
     */
    TodoReturn activateSFXTrigger(SFXTriggerGameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::activateSongEditTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activateSongEditTrigger(SongTriggerGameObject* p0);
public:

    /**
     * @note[short] Windows: 0x1c3df0
     * @note[short] Android
     */
    TodoReturn activateSongTrigger(SongTriggerGameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::activateTimerTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activateTimerTrigger(TimerTriggerGameObject* p0, gd::vector<int> const& p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::addAreaEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addAreaEffect(EnterEffectObject* p0, gd::vector<EnterEffectInstance>* p1, GJAreaActionType p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::addCustomEnterEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addCustomEnterEffect(EnterEffectObject* p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::addGuideArt not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addGuideArt(GameObject* p0);
public:

    /**
     * @note[short] Windows: 0x1b74c0
     * @note[short] Android
     */
    TodoReturn addObjectCounter(LabelGameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::addPickupTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addPickupTrigger(CountTriggerGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::addPoints not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addPoints(int p0);
public:

    /**
     * @note[short] Windows: 0x1c4a20
     * @note[short] Android
     */
    TodoReturn addProximityVolumeEffect(int p0, int p1, SFXTriggerGameObject* p2);
    
private:
    [[deprecated("GJBaseGameLayer::addRemapTargets not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addRemapTargets(gd::set<int>& p0);
public:

    /**
     * @note[short] Windows: 0x1a96a0
     * @note[short] Android
     */
    TodoReturn addToGroupParents(GameObject* p0);

    /**
     * @note[short] Windows: 0x1a8c80
     * @note[short] Android
     */
    TodoReturn addToGroups(GameObject* p0, bool p1);
    
private:
    [[deprecated("GJBaseGameLayer::addToObjectsToShow not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToObjectsToShow(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::addUIObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addUIObject(GameObject* p0);
public:

    /**
     * @note[short] Windows: 0x19ae90
     * @note[short] Android
     */
    void animateInDualGroundNew(GameObject* p0, float p1, bool p2, float p3);
    
private:
    [[deprecated("GJBaseGameLayer::animateInGroundNew not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn animateInGroundNew(bool p0, float p1, bool p2);
public:

    /**
     * @note[short] Windows: 0x19b120
     * @note[short] Android
     */
    void animateOutGroundNew(bool p0);
    
private:
    [[deprecated("GJBaseGameLayer::animatePortalY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn animatePortalY(float p0, float p1, float p2, float p3);
public:

    /**
     * @note[short] Windows: 0x1bd900
     * @note[short] Android
     */
    TodoReturn applyLevelSettings(GameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::applyRemap not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn applyRemap(EffectGameObject* p0, gd::vector<int> const& p1, gd::unordered_map<int, int>& p2);
public:

    /**
     * @note[short] Windows: 0x1c45b0
     * @note[short] Android
     */
    TodoReturn applySFXEditTrigger(int p0, int p1, SFXTriggerGameObject* p2);

    /**
     * @note[short] Windows: 0x1c18c0
     * @note[short] Android
     */
    TodoReturn applyShake(cocos2d::CCPoint& p0);

    /**
     * @note[short] Windows: 0x1a9cb0
     * @note[short] Android
     */
    TodoReturn assignNewStickyGroups(cocos2d::CCArray* p0);
    
private:
    [[deprecated("GJBaseGameLayer::asyncBGLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn asyncBGLoaded(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::asyncGLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn asyncGLoaded(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::asyncMGLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn asyncMGLoaded(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::atlasValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn atlasValue(int p0);
public:

    /**
     * @note[short] Windows: 0x19e670
     * @note[short] Android
     */
    TodoReturn bumpPlayer(PlayerObject* p0, EffectGameObject* p1);
    
private:
    [[deprecated("GJBaseGameLayer::buttonIDToButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn buttonIDToButton(int p0);
public:

    /**
     * @note[short] Windows: 0x1960b0
     * @note[short] Android
     */
    TodoReturn calculateColorGroups();
    
private:
    [[deprecated("GJBaseGameLayer::cameraMoveX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn cameraMoveX(float p0, float p1, float p2, bool p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::cameraMoveY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn cameraMoveY(float p0, float p1, float p2, bool p3);
public:

    /**
     * @note[short] Windows: 0x19e470
     * @note[short] Android
     */
    TodoReturn canBeActivatedByPlayer(PlayerObject* p0, EffectGameObject* p1);
    
private:
    [[deprecated("GJBaseGameLayer::canProcessSFX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canProcessSFX(SFXTriggerState& p0, gd::unordered_map<int, int>& p1, gd::unordered_map<int, float>& p2, gd::vector<SFXTriggerState>& p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::canTouchObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canTouchObject(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::checkCameraLimitAfterTeleport not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkCameraLimitAfterTeleport(PlayerObject* p0, float p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::checkCollision not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkCollision(int p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::checkCollisionBlocks not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkCollisionBlocks(EffectGameObject* p0, gd::vector<EffectGameObject*>* p1, int p2);
public:

    /**
     * @note[short] Windows: 0x19b310
     * @note[short] Android
     */
    TodoReturn checkCollisions(PlayerObject* p0, float p1, bool p2);
    
private:
    [[deprecated("GJBaseGameLayer::checkRepellPlayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkRepellPlayer();
public:

    /**
     * @note[short] Windows: 0x1a1390
     * @note[short] Android
     */
    TodoReturn checkSpawnObjects();
    
private:
    [[deprecated("GJBaseGameLayer::claimMoveAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn claimMoveAction(int p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::claimParticle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn claimParticle(gd::string p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::claimRotationAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn claimRotationAction(int p0, int p1, float& p2, float& p3, bool p4, bool p5);
public:

    /**
     * @note[short] Windows: 0x1c5590
     * @note[short] Android
     */
    TodoReturn clearActivatedAudioTriggers();
    
private:
    [[deprecated("GJBaseGameLayer::clearPickedUpItems not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn clearPickedUpItems();
public:
    
private:
    [[deprecated("GJBaseGameLayer::collectedObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn collectedObject(EffectGameObject* p0);
public:

    /**
     * @note[short] Windows: 0x19c1b0
     * @note[short] Android
     */
    TodoReturn collisionCheckObjects(PlayerObject* p0, gd::vector<GameObject*>* p1, int p2, float p3);
    
private:
    [[deprecated("GJBaseGameLayer::controlAdvancedFollowCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlAdvancedFollowCommand(AdvancedFollowTriggerObject* p0, int p1, GJActionCommand p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlAreaEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlAreaEffect(EnterEffectObject* p0, gd::vector<EnterEffectInstance>* p1, GJActionCommand p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlAreaEffectWithID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlAreaEffectWithID(int p0, int p1, GJActionCommand p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlDynamicCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlDynamicCommand(EffectGameObject* p0, int p1, gd::vector<DynamicObjectAction>& p2, GJActionCommand p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlDynamicMoveCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlDynamicMoveCommand(EffectGameObject* p0, int p1, GJActionCommand p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlDynamicRotateCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlDynamicRotateCommand(EffectGameObject* p0, int p1, GJActionCommand p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlEventLink not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlEventLink(int p0, int p1, GJActionCommand p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlGradientTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlGradientTrigger(GradientTriggerObject* p0, GJActionCommand p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlTriggersInGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlTriggersInGroup(int p0, GJActionCommand p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlTriggersWithControlID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlTriggersWithControlID(int p0, GJActionCommand p1);
public:

    /**
     * @note[short] Windows: 0x1b2c10
     * @note[short] Android
     */
    TodoReturn convertToClosestDirection(float p0, float p1);

    /**
     * @note[short] Windows: 0x193890
     * @note[short] Android
     */
    void createBackground(int p0);

    /**
     * @note[short] Windows: 0x193c60
     * @note[short] Android
     */
    void createGroundLayer(int p0, int p1);

    /**
     * @note[short] Windows: 0x193bc0
     * @note[short] Android
     */
    void createMiddleground(int p0);

    /**
     * @note[short] Windows: 0x1b6bd0
     * @note[short] Android
     */
    TodoReturn createNewKeyframeAnim();

    /**
     * @note[short] Windows: 0x1c2fb0
     * @note[short] Android
     */
    TodoReturn createParticle(int p0, char const* p1, int p2, cocos2d::tCCPositionType p3);

    /**
     * @note[short] Windows: 0x193550
     * @note[short] Android
     */
    TodoReturn createPlayer();

    /**
     * @note[short] Windows: 0x19f1b0
     * @note[short] Android
     */
    TodoReturn createPlayerCollisionBlock();

    /**
     * @note[short] Windows: 0x197090
     * @note[short] Android
     */
    TodoReturn createTextLayers();
    
private:
    [[deprecated("GJBaseGameLayer::damagingObjectsInRect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn damagingObjectsInRect(cocos2d::CCRect p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x19cf50
     * @note[short] Android
     */
    void destroyObject(GameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::enterDualMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn enterDualMode(GameObject* p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::exitStaticCamera not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn exitStaticCamera(bool p0, bool p1, float p2, int p3, float p4, bool p5, float p6, bool p7);
public:
    
private:
    [[deprecated("GJBaseGameLayer::flipFinished not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn flipFinished();
public:

    /**
     * @note[short] Windows: 0x19a5f0
     * @note[short] Android
     */
    TodoReturn flipGravity(PlayerObject* p0, bool p1, bool p2);

    /**
     * @note[short] Windows: 0x1c8980
     * @note[short] Android
     */
    TodoReturn flipObjects();
    
private:
    [[deprecated("GJBaseGameLayer::gameEventToString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn gameEventToString(GJGameEvent p0);
public:

    /**
     * @note[short] Windows: 0x1b5bf0
     * @note[short] Android
     */
    TodoReturn gameEventTriggered(GJGameEvent p0, int p1, int p2);
    
private:
    [[deprecated("GJBaseGameLayer::generateEnterEasingBuffer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn generateEnterEasingBuffer(int p0, float p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::generateEnterEasingBuffers not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn generateEnterEasingBuffers(EnterEffectObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::generatePickupAnimRandVal not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn generatePickupAnimRandVal(GameObject* p0, float& p1, float& p2);
public:

    /**
     * @note[short] Windows: 0x1a3fc0
     * @note[short] Android
     */
    TodoReturn generateSpawnRemap();

    /**
     * @note[short] Windows: 0x1a9f10
     * @note[short] Android
     */
    TodoReturn generateTargetGroups();

    /**
     * @note[short] Windows: 0x1b5060
     * @note[short] Android
     */
    TodoReturn generateVisibilityGroups();
    
private:
    [[deprecated("GJBaseGameLayer::getActiveOrderSpawnObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getActiveOrderSpawnObjects();
public:
    
private:
    [[deprecated("GJBaseGameLayer::getAreaObjectValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAreaObjectValue(EnterEffectInstance* p0, GameObject* p1, cocos2d::CCPoint& p2, bool& p3);
public:

    /**
     * @note[short] Windows: 0x19e590
     * @note[short] Android
     */
    TodoReturn getBumpMod(PlayerObject* p0, int p1);
    
private:
    [[deprecated("GJBaseGameLayer::getCameraEdgeValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCameraEdgeValue(int p0);
public:

    /**
     * @note[short] Windows: 0x196ee0
     * @note[short] Android
     */
    TodoReturn getCapacityString();
    
private:
    [[deprecated("GJBaseGameLayer::getCenterGroupObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCenterGroupObject(int p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getCustomEnterEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCustomEnterEffects(int p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getEasedAreaValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getEasedAreaValue(GameObject* p0, EnterEffectInstance* p1, float p2, bool p3, int p4);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getEnterEasingKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getEnterEasingKey(int p0, float p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getEnterEasingValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getEnterEasingValue(float p0, int p1, float p2, int p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getFollowSpeedVal not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getFollowSpeedVal(GameObject* p0, int p1, int p2, float p3, float p4);
public:

    /**
     * @note[short] Windows: 0x199740
     * @note[short] Android
     */
    float getGroundHeight(PlayerObject* p0, int p1);
    
private:
    [[deprecated("GJBaseGameLayer::getGroundHeightForMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getGroundHeightForMode(int p0);
public:

    /**
     * @note[short] Windows: 0x1a8f50
     * @note[short] Android
     */
    TodoReturn getGroup(int p0);
    
private:
    [[deprecated("GJBaseGameLayer::getGroupParent not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getGroupParent(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getGroupParentsString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getGroupParentsString(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getItemValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getItemValue(int p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getMaxPortalY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMaxPortalY();
public:

    /**
     * @note[short] Windows: 0x1c4ea0
     * @note[short] Android
     */
    TodoReturn getMinDistance(cocos2d::CCPoint p0, cocos2d::CCArray* p1, float p2, int p3);
    
private:
    [[deprecated("GJBaseGameLayer::getMinPortalY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMinPortalY();
public:
    
private:
    [[deprecated("GJBaseGameLayer::getModifiedDelta not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getModifiedDelta(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getMoveTargetDelta not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMoveTargetDelta(EffectGameObject* p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x1a9010
     * @note[short] Android
     */
    TodoReturn getOptimizedGroup(int p0);
    
private:
    [[deprecated("GJBaseGameLayer::getOtherPlayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getOtherPlayer(PlayerObject* p0);
public:

    /**
     * @note[short] Windows: 0x1c2d70
     * @note[short] Android
     */
    TodoReturn getParticleKey(int p0, char const* p1, int p2, cocos2d::tCCPositionType p3);
    
private:
    [[deprecated("GJBaseGameLayer::getParticleKey2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getParticleKey2(gd::string p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getPlayerButtonID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPlayerButtonID(int p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getPlayTimerFullSeconds not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPlayTimerFullSeconds();
public:
    
private:
    [[deprecated("GJBaseGameLayer::getPlayTimerMilli not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPlayTimerMilli();
public:

    /**
     * @note[short] Windows: 0x1985c0
     * @note[short] Android
     */
    TodoReturn getPortalTarget(TeleportPortalObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::getPortalTargetPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPortalTargetPos(TeleportPortalObject* p0, GameObject* p1, PlayerObject* p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getRecordString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRecordString();
public:
    
private:
    [[deprecated("GJBaseGameLayer::getRotateCommandTargets not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRotateCommandTargets(EnhancedTriggerObject* p0, GameObject*& p1, GameObject*& p2, GameObject*& p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getSavedPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSavedPosition(int p0, float p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getScaledGroundHeight not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getScaledGroundHeight(float p0);
public:

    /**
     * @note[short] Windows: 0x1a9070
     * @note[short] Android
     */
    TodoReturn getSingleGroupObject(int p0);
    
private:
    [[deprecated("GJBaseGameLayer::getSpecialKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSpecialKey(int p0, bool p1, bool p2);
public:

    /**
     * @note[short] Windows: 0x1a8fb0
     * @note[short] Android
     */
    TodoReturn getStaticGroup(int p0);
    
private:
    [[deprecated("GJBaseGameLayer::getStickyGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getStickyGroup(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getTargetFlyCameraY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTargetFlyCameraY(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getTargetGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTargetGroup(int p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getTargetGroupOrigin not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTargetGroupOrigin(int p0, int p1);
public:

    /**
     * @note[short] Windows: 0x19e770
     * @note[short] Android
     */
    TodoReturn gravBumpPlayer(PlayerObject* p0, EffectGameObject* p1);

    /**
     * @note[short] Windows: 0x1a9b20
     * @note[short] Android
     */
    TodoReturn groupStickyObjects(cocos2d::CCArray* p0);

    /**
     * @note[short] Windows: 0x1b69f0
     * @note[short] Android
     */
    TodoReturn handleButton(bool p0, int p1, bool p2);
    
private:
    [[deprecated("GJBaseGameLayer::hasItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hasItem(int p0);
public:

    /**
     * @note[short] Windows: 0x19d580
     * @note[short] Android
     */
    TodoReturn hasUniqueCoin(EffectGameObject* p0);

    /**
     * @note[short] Windows: 0x194b40
     * @note[short] Android
     */
    TodoReturn increaseBatchNodeCapacity();
    
private:
    [[deprecated("GJBaseGameLayer::isFlipping not implemented")]]
    /**
     * @note[short] Android
     */
    bool isFlipping();
public:
    
private:
    [[deprecated("GJBaseGameLayer::isPlayer2Button not implemented")]]
    /**
     * @note[short] Android
     */
    bool isPlayer2Button(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::lightningFlash not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn lightningFlash(cocos2d::CCPoint p0, cocos2d::ccColor3B p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::lightningFlash not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn lightningFlash(cocos2d::CCPoint p0, cocos2d::CCPoint p1, cocos2d::ccColor3B p2, float p3, float p4, int p5, bool p6, float p7);
public:
    
private:
    [[deprecated("GJBaseGameLayer::loadGroupParentsFromString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadGroupParentsFromString(GameObject* p0, gd::string p1);
public:

    /**
     * @note[short] Windows: 0x1bd7b0
     * @note[short] Android
     */
    TodoReturn loadLevelSettings();

    /**
     * @note[short] Windows: 0x1b8d10
     * @note[short] Android
     */
    TodoReturn loadStartPosObject();

    /**
     * @note[short] Windows: 0x1b8e80
     * @note[short] Android
     */
    TodoReturn loadUpToPosition(float p0, int p1, int p2);
    
private:
    [[deprecated("GJBaseGameLayer::maxZOrderForShaderZ not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn maxZOrderForShaderZ(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::minZOrderForShaderZ not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn minZOrderForShaderZ(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::modifyGroupPhysics not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn modifyGroupPhysics(AdvancedFollowEditObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::modifyObjectPhysics not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn modifyObjectPhysics(AdvancedFollowEditObject* p0, GameObjectPhysics& p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::moveAreaObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn moveAreaObject(GameObject* p0, float p1, float p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::moveCameraToPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn moveCameraToPos(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::moveObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn moveObject(GameObject* p0, double p1, double p2, bool p3);
public:

    /**
     * @note[short] Windows: 0x1b1fa0
     * @note[short] Android
     */
    TodoReturn moveObjects(cocos2d::CCArray* p0, double p1, double p2, bool p3);
    
private:
    [[deprecated("GJBaseGameLayer::moveObjectsSilent not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn moveObjectsSilent(int p0, double p1, double p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::objectIntersectsCircle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn objectIntersectsCircle(GameObject* p0, GameObject* p1);
public:

    /**
     * @note[short] Windows: 0x1b6190
     * @note[short] Android
     */
    GJGameEvent objectTypeToGameEvent(int p0);

    /**
     * @note[short] Windows: 0x1b4cd0
     * @note[short] Android
     */
    TodoReturn optimizeMoveGroups();

    /**
     * @note[short] Windows: 0x1c7c20
     * @note[short] Android
     */
    TodoReturn orderSpawnObjects();
    
private:
    [[deprecated("GJBaseGameLayer::parentForZLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn parentForZLayer(int p0, bool p1, int p2, int p3);
public:

    /**
     * @note[short] Windows: 0x1bb600
     * @note[short] Android
     */
    TodoReturn pauseAudio();
    
private:
    [[deprecated("GJBaseGameLayer::performMathOperation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn performMathOperation(double p0, double p1, int p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::performMathRounding not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn performMathRounding(double p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::pickupItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pickupItem(EffectGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playAnimationCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playAnimationCommand(int p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playerCircleCollision not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playerCircleCollision(PlayerObject* p0, GameObject* p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playerIntersectsCircle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playerIntersectsCircle(PlayerObject* p0, GameObject* p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playerTouchedObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playerTouchedObject(PlayerObject* p0, GameObject* p1);
public:

    /**
     * @note[short] Windows: 0x19eca0
     * @note[short] Android
     */
    TodoReturn playerTouchedRing(PlayerObject* p0, RingObject* p1);
    
private:
    [[deprecated("GJBaseGameLayer::playerTouchedTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playerTouchedTrigger(PlayerObject* p0, EffectGameObject* p1);
public:

    /**
     * @note[short] Windows: 0x19e530
     * @note[short] Android
     */
    TodoReturn playerWasTouchingObject(PlayerObject* p0, GameObject* p1);

    /**
     * @note[short] Windows: 0x19ab80
     * @note[short] Android
     */
    void playerWillSwitchMode(PlayerObject* p0, GameObject* p1);

    /**
     * @note[short] Windows: 0x19da70
     * @note[short] Android
     */
    TodoReturn playExitDualEffect(PlayerObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::playFlashEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playFlashEffect(float p0, int p1, float p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playKeyframeAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playKeyframeAnimation(KeyframeAnimTriggerObject* p0, gd::vector<int> const& p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playSpeedParticle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playSpeedParticle(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::positionForShaderTarget not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn positionForShaderTarget(int p0);
public:

    /**
     * @note[short] Windows: 0x1ab2f0
     * @note[short] Android
     */
    TodoReturn positionUIObjects();

    /**
     * @note[short] Windows: 0x1a0220
     * @note[short] Android
     */
    TodoReturn prepareSavePositionObjects();
    
private:
    [[deprecated("GJBaseGameLayer::prepareTransformParent not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn prepareTransformParent(bool p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::preResumeGame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preResumeGame();
public:

    /**
     * @note[short] Windows: 0x1b97e0
     * @note[short] Android
     */
    TodoReturn preUpdateVisibility(float p0);

    /**
     * @note[short] Windows: 0x1c5960
     * @note[short] Android
     */
    TodoReturn processActivatedAudioTriggers(float p0);
    
private:
    [[deprecated("GJBaseGameLayer::processAdvancedFollowAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processAdvancedFollowAction(AdvancedFollowInstance& p0, bool p1, float p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAdvancedFollowActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processAdvancedFollowActions(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAreaActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processAreaActions(float p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAreaEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processAreaEffects(gd::vector<EnterEffectInstance>* p0, GJAreaActionType p1, float p2, bool p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAreaFadeGroupAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processAreaFadeGroupAction(cocos2d::CCArray* p0, EnterEffectInstance* p1, cocos2d::CCPoint p2, bool p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAreaMoveGroupAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processAreaMoveGroupAction(cocos2d::CCArray* p0, EnterEffectInstance* p1, cocos2d::CCPoint p2, int p3, int p4, int p5, int p6, int p7, bool p8, bool p9);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAreaRotateGroupAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processAreaRotateGroupAction(cocos2d::CCArray* p0, EnterEffectInstance* p1, cocos2d::CCPoint p2, int p3, int p4, int p5, int p6, int p7, bool p8, bool p9);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAreaTintGroupAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processAreaTintGroupAction(cocos2d::CCArray* p0, EnterEffectInstance* p1, cocos2d::CCPoint p2, bool p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAreaTransformGroupAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processAreaTransformGroupAction(cocos2d::CCArray* p0, EnterEffectInstance* p1, cocos2d::CCPoint p2, int p3, int p4, int p5, int p6, int p7, bool p8, bool p9);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAreaVisualActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processAreaVisualActions(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processCameraObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processCameraObject(GameObject* p0, PlayerObject* p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processCommands not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processCommands(float p0);
public:

    /**
     * @note[short] Windows: 0x1b2740
     * @note[short] Android
     */
    TodoReturn processDynamicObjectActions(int p0, float p1);
    
private:
    [[deprecated("GJBaseGameLayer::processFollowActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processFollowActions();
public:

    /**
     * @note[short] Windows: 0x19d2b0
     * @note[short] Android
     */
    TodoReturn processItems();

    /**
     * @note[short] Windows: 0x1b1b90
     * @note[short] Android
     */
    TodoReturn processMoveActions();

    /**
     * @note[short] Windows: 0x1afce0
     * @note[short] Android
     */
    TodoReturn processMoveActionsStep(float p0, bool p1);
    
private:
    [[deprecated("GJBaseGameLayer::processOptionsTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processOptionsTrigger(GameOptionsTrigger* p0);
public:

    /**
     * @note[short] Windows: 0x1b2400
     * @note[short] Android
     */
    TodoReturn processPlayerFollowActions(float p0);

    /**
     * @note[short] Windows: 0x1be520
     * @note[short] Android
     */
    TodoReturn processQueuedAudioTriggers();

    /**
     * @note[short] Windows: 0x1b5b40
     * @note[short] Android
     */
    TodoReturn processQueuedButtons();
    
private:
    [[deprecated("GJBaseGameLayer::processRotationActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processRotationActions();
public:

    /**
     * @note[short] Windows: 0x1c3fe0
     * @note[short] Android
     */
    TodoReturn processSFXObjects();
    
private:
    [[deprecated("GJBaseGameLayer::processSFXState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processSFXState(SFXTriggerState* p0, SFXTriggerState* p1, int p2, float p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processSongState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processSongState(int p0, float p1, float p2, int p3, float p4, float p5, gd::vector<SongTriggerState>* p6);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processStateObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processStateObjects();
public:
    
private:
    [[deprecated("GJBaseGameLayer::processTransformActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processTransformActions(bool p0);
public:

    /**
     * @note[short] Windows: 0x1b5af0
     * @note[short] Android
     */
    TodoReturn queueButton(int p0, bool p1, bool p2);

    /**
     * @note[short] Windows: 0x1a9e40
     * @note[short] Android
     */
    TodoReturn reAddToStickyGroup(GameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::recordAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn recordAction(int p0, bool p1, bool p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::rectIntersectsCircle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn rectIntersectsCircle(cocos2d::CCRect p0, cocos2d::CCPoint p1, float p2);
public:

    /**
     * @note[short] Windows: 0x1b87a0
     * @note[short] Android
     */
    TodoReturn refreshCounterLabels();

    /**
     * @note[short] Windows: 0x1b6d70
     * @note[short] Android
     */
    TodoReturn refreshKeyframeAnims();

    /**
     * @note[short] Windows: 0x196be0
     * @note[short] Android
     */
    TodoReturn regenerateEnterEasingBuffers();
    
private:
    [[deprecated("GJBaseGameLayer::registerSpawnRemap not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn registerSpawnRemap(gd::vector<ChanceObject>& p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::registerStateObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn registerStateObject(EffectGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::removeBackground not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeBackground();
public:
    
private:
    [[deprecated("GJBaseGameLayer::removeCustomEnterEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeCustomEnterEffects(int p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x1a9600
     * @note[short] Android
     */
    TodoReturn removeFromGroupParents(GameObject* p0);

    /**
     * @note[short] Windows: 0x1a8da0
     * @note[short] Android
     */
    TodoReturn removeFromGroups(GameObject* p0);

    /**
     * @note[short] Windows: 0x1a9da0
     * @note[short] Android
     */
    TodoReturn removeFromStickyGroup(GameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::removeGroundLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeGroundLayer();
public:

    /**
     * @note[short] Windows: 0x1a9550
     * @note[short] Android
     */
    TodoReturn removeGroupParent(int p0);

    /**
     * @note[short] Windows: 0x1b6c90
     * @note[short] Android
     */
    TodoReturn removeKeyframe(KeyframeGameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::removeMiddleground not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeMiddleground();
public:

    /**
     * @note[short] Windows: 0x1abea0
     * @note[short] Android
     */
    TodoReturn removeObjectFromSection(GameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::removePlayer2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removePlayer2();
public:

    /**
     * @note[short] Windows: 0x1c3d30
     * @note[short] Android
     */
    TodoReturn removeTemporaryParticles();
    
private:
    [[deprecated("GJBaseGameLayer::reorderObjectSection not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reorderObjectSection(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::reparentObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reparentObject(cocos2d::CCNode* p0, cocos2d::CCNode* p1);
public:

    /**
     * @note[short] Windows: 0x196350
     * @note[short] Android
     */
    TodoReturn resetActiveEnterEffects();
    
private:
    [[deprecated("GJBaseGameLayer::resetAreaObjectValues not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetAreaObjectValues(GameObject* p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::resetAudio not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetAudio();
public:

    /**
     * @note[short] Windows: 0x1c22b0
     * @note[short] Android
     */
    TodoReturn resetCamera();
    
private:
    [[deprecated("GJBaseGameLayer::resetGradientLayers not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetGradientLayers();
public:
    
private:
    [[deprecated("GJBaseGameLayer::resetGroupCounters not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetGroupCounters(bool p0);
public:

    /**
     * @note[short] Windows: 0x1bdb10
     * @note[short] Android
     */
    TodoReturn resetLevelVariables();
    
private:
    [[deprecated("GJBaseGameLayer::resetMoveOptimizedValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetMoveOptimizedValue();
public:
    
private:
    [[deprecated("GJBaseGameLayer::resetPlayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetPlayer();
public:

    /**
     * @note[short] Windows: 0x3bf30
     * @note[short] Android
     */
    void resetSongTriggerValues();

    /**
     * @note[short] Windows: 0x1c7e40
     * @note[short] Android
     */
    TodoReturn resetSpawnChannelIndex();
    
private:
    [[deprecated("GJBaseGameLayer::resetStaticCamera not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetStaticCamera(bool p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::resetStoppedAreaObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetStoppedAreaObjects();
public:
    
private:
    [[deprecated("GJBaseGameLayer::restoreAllUIObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn restoreAllUIObjects();
public:
    
private:
    [[deprecated("GJBaseGameLayer::restoreDefaultGameplayOffsetX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn restoreDefaultGameplayOffsetX();
public:
    
private:
    [[deprecated("GJBaseGameLayer::restoreDefaultGameplayOffsetY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn restoreDefaultGameplayOffsetY();
public:
    
private:
    [[deprecated("GJBaseGameLayer::restoreRemap not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn restoreRemap(EffectGameObject* p0, gd::unordered_map<int, int>& p1);
public:

    /**
     * @note[short] Windows: 0x1bb660
     * @note[short] Android
     */
    TodoReturn resumeAudio();
    
private:
    [[deprecated("GJBaseGameLayer::rotateAreaObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn rotateAreaObjects(GameObject* p0, cocos2d::CCArray* p1, float p2, bool p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::rotateObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn rotateObject(GameObject* p0, float p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::rotateObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn rotateObjects(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2, cocos2d::CCPoint p3, bool p4, bool p5);
public:

    /**
     * @note[short] Windows: 0x1a9460
     * @note[short] Android
     */
    void setGroupParent(GameObject* p0, int p1);

    /**
     * @note[short] Windows: 0x199e90
     * @note[short] Android
     */
    void setStartPosObject(StartPosObject* p0);

    /**
     * @note[short] Windows: 0x191440
     * @note[short] Android
     */
    TodoReturn setupLayers();

    /**
     * @note[short] Windows: 0x199ed0
     * @note[short] Android
     */
    TodoReturn setupLevelStart(LevelSettingsObject* p0);

    /**
     * @note[short] Windows: 0x1bd3d0
     * @note[short] Android
     */
    TodoReturn setupReplay(gd::string p0);

    /**
     * @note[short] Windows: 0x1be5d0
     * @note[short] Android
     */
    TodoReturn shakeCamera(float p0, float p1, float p2);

    /**
     * @note[short] Windows: 0x1934a0
     * @note[short] Android
     */
    TodoReturn shouldExitHackedLevel();
    
private:
    [[deprecated("GJBaseGameLayer::sortAllGroupsX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sortAllGroupsX();
public:

    /**
     * @note[short] Windows: 0x1a90f0
     * @note[short] Android
     */
    TodoReturn sortGroups();

    /**
     * @note[short] Windows: 0x1ac070
     * @note[short] Android
     */
    TodoReturn sortSectionVector();

    /**
     * @note[short] Windows: 0x1a99e0
     * @note[short] Android
     */
    TodoReturn sortStickyGroups();
    
private:
    [[deprecated("GJBaseGameLayer::spawnGroupTriggered not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnGroupTriggered(int p0, float p1, bool p2, gd::vector<int> const& p3, int p4, int p5);
public:
    
private:
    [[deprecated("GJBaseGameLayer::spawnObjectsInOrder not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnObjectsInOrder(cocos2d::CCArray* p0, double p1, gd::vector<int> const& p2, int p3, int p4);
public:

    /**
     * @note[short] Windows: 0x1c2b80
     * @note[short] Android
     */
    TodoReturn spawnParticle(char const* p0, int p1, cocos2d::tCCPositionType p2, cocos2d::CCPoint p3);
    
private:
    [[deprecated("GJBaseGameLayer::spawnParticleTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnParticleTrigger(int p0, cocos2d::CCPoint p1, float p2, float p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::spawnParticleTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnParticleTrigger(SpawnParticleGameObject* p0);
public:

    /**
     * @note[short] Windows: 0x19d970
     * @note[short] Android
     */
    TodoReturn spawnPlayer2();
    
private:
    [[deprecated("GJBaseGameLayer::speedForShaderTarget not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn speedForShaderTarget(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::staticObjectsInRect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn staticObjectsInRect(cocos2d::CCRect p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::stopAllGroundActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopAllGroundActions();
public:
    
private:
    [[deprecated("GJBaseGameLayer::stopCameraShake not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopCameraShake();
public:
    
private:
    [[deprecated("GJBaseGameLayer::stopCustomEnterEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopCustomEnterEffect(EnterEffectObject* p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::stopCustomEnterEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopCustomEnterEffect(EnterEffectObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::stopSFXTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopSFXTrigger(SFXTriggerGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::swapBackground not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn swapBackground(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::swapGround not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn swapGround(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::swapMiddleground not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn swapMiddleground(int p0);
public:

    /**
     * @note[short] Windows: 0x19a6d0
     * @note[short] Android
     */
    void switchToFlyMode(PlayerObject* p0, GameObject* p1, bool p2, int p3);

    /**
     * @note[short] Windows: 0x19a800
     * @note[short] Android
     */
    void switchToRobotMode(PlayerObject* p0, GameObject* p1, bool p2);

    /**
     * @note[short] Windows: 0x19a9c0
     * @note[short] Android
     */
    void switchToRollMode(PlayerObject* p0, GameObject* p1, bool p2);

    /**
     * @note[short] Windows: 0x19a8e0
     * @note[short] Android
     */
    void switchToSpiderMode(PlayerObject* p0, GameObject* p1, bool p2);

    /**
     * @note[short] Windows: 0x1bda80
     * @note[short] Android
     */
    TodoReturn syncBGTextures();

    /**
     * @note[short] Windows: 0x1980c0
     * @note[short] Android
     */
    TodoReturn teleportPlayer(TeleportPortalObject* p0, PlayerObject* p1);
    
private:
    [[deprecated("GJBaseGameLayer::testInstantCountTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn testInstantCountTrigger(int p0, int p1, int p2, bool p3, int p4, gd::vector<int> const& p5, int p6, int p7);
public:

    /**
     * @note[short] Windows: 0x1ca4d0
     * @note[short] Android
     */
    void toggleAudioVisualizer(bool p0);

    /**
     * @note[short] Windows: 0x19d6a0
     * @note[short] Android
     */
    TodoReturn toggleDualMode(GameObject* p0, bool p1, PlayerObject* p2, bool p3);

    /**
     * @note[short] Windows: 0x1c87e0
     * @note[short] Android
     */
    TodoReturn toggleFlipped(bool p0, bool p1);
    
private:
    [[deprecated("GJBaseGameLayer::toggleGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleGroup(int p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::toggleLockPlayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleLockPlayer(bool p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::togglePlayerStreakBlend not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn togglePlayerStreakBlend(bool p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::togglePlayerVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn togglePlayerVisibility(bool p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::togglePlayerVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn togglePlayerVisibility(bool p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::transformAreaObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn transformAreaObjects(GameObject* p0, cocos2d::CCArray* p1, float p2, float p3, bool p4);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerAdvancedFollowCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerAdvancedFollowCommand(AdvancedFollowTriggerObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerAdvancedFollowEditCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerAdvancedFollowEditCommand(AdvancedFollowEditObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerAreaEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerAreaEffect(EnterEffectObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerAreaEffectAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerAreaEffectAnimation(EnterEffectObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerDynamicMoveCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerDynamicMoveCommand(EffectGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerDynamicRotateCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerDynamicRotateCommand(EnhancedTriggerObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerGradientCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerGradientCommand(GradientTriggerObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerGravityChange not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerGravityChange(EffectGameObject* p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerMoveCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerMoveCommand(EffectGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerRotateCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerRotateCommand(EnhancedTriggerObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerShaderCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerShaderCommand(ShaderGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerTransformCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerTransformCommand(TransformTriggerGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::tryGetGroupParent not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryGetGroupParent(int p0);
public:

    /**
     * @note[short] Windows: 0x1a9340
     * @note[short] Android
     */
    TodoReturn tryGetMainObject(int p0);

    /**
     * @note[short] Windows: 0x1a9380
     * @note[short] Android
     */
    TodoReturn tryGetObject(int p0);
    
private:
    [[deprecated("GJBaseGameLayer::tryResumeAudio not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryResumeAudio();
public:
    
private:
    [[deprecated("GJBaseGameLayer::unclaimParticle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unclaimParticle(char const* p0, cocos2d::CCParticleSystemQuad* p1);
public:

    /**
     * @note[short] Windows: 0x1a9c10
     * @note[short] Android
     */
    TodoReturn ungroupStickyObjects(cocos2d::CCArray* p0);
    
private:
    [[deprecated("GJBaseGameLayer::unlinkAllEvents not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unlinkAllEvents();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateActiveEnterEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateActiveEnterEffect(EnterEffectObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateAllObjectSection not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateAllObjectSection();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateAreaObjectLastValues not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateAreaObjectLastValues(GameObject* p0);
public:

    /**
     * @note[short] Windows: 0x1ca410
     * @note[short] Android
     */
    TodoReturn updateAudioVisualizer();
    
private:
    [[deprecated("GJBaseGameLayer::updateBGArtSpeed not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateBGArtSpeed(float p0, float p1);
public:

    /**
     * @note[short] Windows: 0x1be670
     * @note[short] Android
     */
    TodoReturn updateCamera(float p0);
    
private:
    [[deprecated("GJBaseGameLayer::updateCameraBGArt not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCameraBGArt(cocos2d::CCPoint p0, float p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateCameraEdge not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCameraEdge(int p0, int p1);
public:

    /**
     * @note[short] Windows: 0x19aaa0
     * @note[short] Android
     */
    void updateCameraMode(EffectGameObject* p0, bool p1);
    
private:
    [[deprecated("GJBaseGameLayer::updateCameraOffsetX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCameraOffsetX(float p0, float p1, int p2, float p3, int p4, int p5);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateCameraOffsetY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCameraOffsetY(float p0, float p1, int p2, float p3, int p4, int p5);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateCollisionBlocks not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCollisionBlocks();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateCounters not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCounters(int p0, int p1);
public:

    /**
     * @note[short] Windows: 0x19ad50
     * @note[short] Android
     */
    void updateDualGround(PlayerObject* p0, int p1, bool p2, float p3);
    
private:
    [[deprecated("GJBaseGameLayer::updateEnterEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEnterEffects(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateExtendedCollision not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateExtendedCollision(GameObject* p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateExtraGameLayers not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateExtraGameLayers();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateGameplayOffsetX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGameplayOffsetX(int p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateGameplayOffsetY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGameplayOffsetY(int p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x1a57c0
     * @note[short] Android
     */
    TodoReturn updateGradientLayers();
    
private:
    [[deprecated("GJBaseGameLayer::updateGroundShadows not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGroundShadows();
public:

    /**
     * @note[short] Windows: 0x1c8700
     * @note[short] Android
     */
    TodoReturn updateGuideArt();
    
private:
    [[deprecated("GJBaseGameLayer::updateInternalCamOffsetX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateInternalCamOffsetX(float p0, float p1, float p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateInternalCamOffsetY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateInternalCamOffsetY(float p0, float p1, float p2);
public:

    /**
     * @note[short] Windows: 0x1b6ce0
     * @note[short] Android
     */
    TodoReturn updateKeyframeOrder(int p0);

    /**
     * @note[short] Windows: 0x194ca0
     * @note[short] Android
     */
    TodoReturn updateLayerCapacity(gd::string p0);
    
private:
    [[deprecated("GJBaseGameLayer::updateLegacyLayerCapacity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLegacyLayerCapacity(int p0, int p1, int p2, int p3);
public:

    /**
     * @note[short] Windows: 0x194490
     * @note[short] Android
     */
    TodoReturn updateLevelColors();

    /**
     * @note[short] Windows: 0x1bd960
     * @note[short] Android
     */
    TodoReturn updateMaxGameplayY();
    
private:
    [[deprecated("GJBaseGameLayer::updateMGArtSpeed not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMGArtSpeed(float p0, float p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateMGOffsetY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMGOffsetY(float p0, float p1, int p2, float p3, int p4, int p5);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateOBB2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateOBB2(cocos2d::CCRect p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateParticles not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateParticles(float p0);
public:

    /**
     * @note[short] Windows: 0x1bcd60
     * @note[short] Android
     */
    TodoReturn updatePlatformerTime();
    
private:
    [[deprecated("GJBaseGameLayer::updatePlayerCollisionBlocks not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePlayerCollisionBlocks();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateProximityVolumeEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateProximityVolumeEffects();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateQueuedLabels not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateQueuedLabels();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateReplay not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateReplay();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateSavePositionObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSavePositionObjects();
public:

    /**
     * @note[short] Windows: 0x1a7820
     * @note[short] Android
     */
    TodoReturn updateShaderLayer(float p0);

    /**
     * @note[short] Windows: 0x196060
     * @note[short] Android
     */
    TodoReturn updateSpecialGroupData();

    /**
     * @note[short] Windows: 0x1bc9f0
     * @note[short] Android
     */
    TodoReturn updateSpecialLabels();

    /**
     * @note[short] Windows: 0x1c1cb0
     * @note[short] Android
     */
    TodoReturn updateStaticCameraPos(cocos2d::CCPoint p0, bool p1, bool p2, bool p3, float p4, int p5, float p6);
    
private:
    [[deprecated("GJBaseGameLayer::updateStaticCameraPosToGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateStaticCameraPosToGroup(int p0, bool p1, bool p2, bool p3, float p4, float p5, int p6, float p7, bool p8, float p9);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateTimeMod not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTimeMod(float p0, bool p1, bool p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateTimerLabels not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTimerLabels();
public:

    /**
     * @note[short] Windows: 0x1b9350
     * @note[short] Android
     */
    void updateZoom(float p0, float p1, int p2, float p3, int p4, int p5);
    
private:
    [[deprecated("GJBaseGameLayer::visitWithColorFlash not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn visitWithColorFlash();
public:

    /**
     * @note[short] Windows: 0x1c4ae0
     * @note[short] Android
     */
    TodoReturn volumeForProximityEffect(SFXTriggerInstance& p0);

    /**
     * @note[short] Windows: 0x1bb780
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] Windows: 0x190290
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x1c8ea0
     * @note[short] Android
     */
    virtual void visit();
    
private:
    [[deprecated("GJBaseGameLayer::postUpdate not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn postUpdate(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::checkForEnd not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn checkForEnd();
public:
    
private:
    [[deprecated("GJBaseGameLayer::testTime not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn testTime();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateVerifyDamage not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateVerifyDamage();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateAttemptTime not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateAttemptTime(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateVisibility(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playerTookDamage not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn playerTookDamage(PlayerObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::opacityForObject not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn opacityForObject(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::addToSpeedObjects not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn addToSpeedObjects(EffectGameObject* p0);
public:

    /**
     * @note[short] Windows: 0x19fac0
     * @note[short] Android
     */
    virtual TodoReturn objectsCollided(int p0, int p1);

    /**
     * @note[short] Windows: 0x1a8760
     * @note[short] Android
     */
    virtual TodoReturn updateColor(cocos2d::ccColor3B& p0, float p1, int p2, bool p3, float p4, cocos2d::ccHSVValue& p5, int p6, bool p7, EffectGameObject* p8, int p9, int p10);
    
private:
    [[deprecated("GJBaseGameLayer::toggleGroupTriggered not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn toggleGroupTriggered(int p0, bool p1, gd::vector<int> const& p2, int p3, int p4);
public:
    
private:
    [[deprecated("GJBaseGameLayer::spawnGroup not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn spawnGroup(int p0, bool p1, double p2, gd::vector<int> const& p3, int p4, int p5);
public:
    
private:
    [[deprecated("GJBaseGameLayer::spawnObject not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn spawnObject(GameObject* p0, double p1, gd::vector<int> const& p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activateEndTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn activateEndTrigger(int p0, bool p1, bool p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activatePlatformerEndTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn activatePlatformerEndTrigger(EndTriggerGameObject* p0, gd::vector<int> const& p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::toggleGlitter not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn toggleGlitter(bool p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::destroyPlayer not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn destroyPlayer(PlayerObject* p0, GameObject* p1);
public:

    /**
     * @note[short] Windows: 0x1986f0
     * @note[short] Android
     */
    virtual TodoReturn updateDebugDraw();

    /**
     * @note[short] Windows: 0x1ab800
     * @note[short] Android
     */
    virtual TodoReturn addToSection(GameObject* p0);

    /**
     * @note[short] Windows: 0x1a8ce0
     * @note[short] Android
     */
    virtual void addToGroup(GameObject* p0, int p1, bool p2);

    /**
     * @note[short] Windows: 0x1a8e00
     * @note[short] Android
     */
    virtual void removeFromGroup(GameObject* p0, int p1);

    /**
     * @note[short] Windows: 0x1acd40
     * @note[short] Android
     */
    virtual TodoReturn updateObjectSection(GameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::updateDisabledObjectsLastPos not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateDisabledObjectsLastPos(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::toggleGroundVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn toggleGroundVisibility(bool p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::toggleMGVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn toggleMGVisibility(bool p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::toggleHideAttempts not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn toggleHideAttempts(bool p0);
public:

    /**
     * @note[short] Out of line
     */
    virtual TodoReturn timeForPos(cocos2d::CCPoint p0, int p1, int p2, bool p3, int p4);

    /**
     * @note[short] Out of line
     */
    virtual TodoReturn posForTime(float p0);

    /**
     * @note[short] Out of line
     */
    virtual TodoReturn resetSPTriggered();

    /**
     * @note[short] Windows: 0x1b9450
     * @note[short] Android
     */
    virtual TodoReturn updateScreenRotation(float p0, bool p1, bool p2, float p3, int p4, float p5, int p6, int p7);

    /**
     * @note[short] Windows: 0x19efb0
     * @note[short] Android
     */
    virtual TodoReturn reverseDirection(EffectGameObject* p0);

    /**
     * @note[short] Windows: 0x19f010
     * @note[short] Android
     */
    virtual TodoReturn rotateGameplay(RotateGameplayGameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::didRotateGameplay not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn didRotateGameplay();
public:

    /**
     * @note[short] Windows: 0x2dfda0
     * @note[short] Android
     */
    virtual TodoReturn updateTimeWarp(float p0);

    /**
     * @note[short] Windows: 0x2dfda0
     * @note[short] Android
     */
    virtual TodoReturn updateTimeWarp(GameObject* p0, float p1);

    /**
     * @note[short] Windows: 0x1b9770
     * @note[short] Android
     */
    virtual TodoReturn applyTimeWarp(float p0);
    
private:
    [[deprecated("GJBaseGameLayer::playGravityEffect not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn playGravityEffect(bool p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::manualUpdateObjectColors not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn manualUpdateObjectColors(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::createCustomParticle not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn createCustomParticle(gd::string const& p0, cocos2d::ParticleStruct const& p1, int p2, bool p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::claimCustomParticle not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn claimCustomParticle(gd::string const& p0, cocos2d::ParticleStruct const& p1, int p2, int p3, int p4, bool p5);
public:
    
private:
    [[deprecated("GJBaseGameLayer::unclaimCustomParticle not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn unclaimCustomParticle(gd::string const& p0, cocos2d::CCParticleSystemQuad* p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activatedAudioTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn activatedAudioTrigger(SFXTriggerGameObject* p0);
public:

    /**
     * @note[short] Windows: 0x1c8a50
     * @note[short] Android
     */
    virtual TodoReturn checkpointActivated(CheckpointGameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::flipArt not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn flipArt(bool p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::addKeyframe not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn addKeyframe(KeyframeGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateTimeLabel not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn updateTimeLabel(int p0, int p1, bool p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::checkSnapshot not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn checkSnapshot();
public:
    
private:
    [[deprecated("GJBaseGameLayer::toggleProgressbar not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn toggleProgressbar();
public:
    
private:
    [[deprecated("GJBaseGameLayer::toggleInfoLabel not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn toggleInfoLabel();
public:
    
private:
    [[deprecated("GJBaseGameLayer::removeAllCheckpoints not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void removeAllCheckpoints();
public:
    
private:
    [[deprecated("GJBaseGameLayer::toggleMusicInPractice not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn toggleMusicInPractice();
public:
    GEODE_PAD(8);
    GJGameState m_gameState;
    GJGameLevel* m_level;
    PlaybackMode m_playbackMode;
    GEODE_PAD(656);
    PlayerObject* m_player1;
    PlayerObject* m_player2;
    LevelSettingsObject* m_levelSettings;
    cocos2d::CCArray* m_objects;
    cocos2d::CCArray* m_unknownCB0;
    cocos2d::CCArray* m_unknownCB8;
    cocos2d::CCDictionary* m_unknownCC0;
    cocos2d::CCNode* m_unknownCC8;
    gd::vector<GameObject*> m_unknownCD0;
    gd::vector<GameObject*> m_unknownCE8;
    gd::vector<GameObject*> m_unknownD00;
    gd::vector<GameObject*> m_unknownD18;
    gd::vector<GameObject*> m_unknownD30;
    gd::unordered_map<int, gd::unordered_set<int>> m_unknownD48;
    gd::vector<GameObject*> m_unknownD70;
    gd::unordered_map<int, gd::vector<GameObject*>> m_unknownD88;
    int m_unknownDB0;
    int m_unknownDB8;
    int m_unknownDBC;
    int m_unknownDC0;
    int m_unknownDC4;
    int m_unknownDC8;
    int m_unknownDCC;
    int m_unknownDD0;
    int m_unknownDD4;
    cocos2d::CCDictionary* m_groupDict;
    cocos2d::CCDictionary* m_staticGroupDict;
    cocos2d::CCDictionary* m_optimizedGroupDict;
    gd::vector<cocos2d::CCArray*> m_groups;
    gd::vector<cocos2d::CCArray*> m_staticGroups;
    gd::vector<cocos2d::CCArray*> m_optimizedGroups;
    cocos2d::CCDictionary* m_unknownE38;
    cocos2d::CCDictionary* m_unknownE40;
    cocos2d::CCDictionary* m_unknownE48;
    cocos2d::CCArray* m_unknownE50;
    gd::unordered_map<int, std::pair<int, int>> m_unknownE58;
    cocos2d::CCDictionary* m_unknownE80;
    float m_unknownE88;
    cocos2d::CCNode* m_unknownE90;
    cocos2d::CCNode* m_unknownE98;
    cocos2d::CCNode* m_unknownEA0;
    cocos2d::CCLayer* m_objectLayer;
    GEODE_PAD(112);
    std::array<float, 2000> m_massiveFloatArray;
    GEODE_PAD(72);
    int m_leftSectionIndex;
    int m_rightSectionIndex;
    int m_bottomSectionIndex;
    int m_topSectionIndex;
    GEODE_PAD(184);
    bool m_isPracticeMode;
    bool m_practiceMusicSync;
    float m_unk2a80;
    cocos2d::CCNode* m_unk2a84;
    int m_unk2a88;
    float m_unk2a8c;
    int m_unk2a90;
    int m_unk2a94;
    int m_unk2a98;
    cocos2d::CCDictionary* m_unk2a9c;
    float m_levelLength;
    int m_unk2aa4;
    EndPortalObject* m_endPortal;
    bool m_isTestMode;
    GEODE_PAD(35);
    bool m_started;
    GEODE_PAD(124);
    gd::vector<PlayerButtonCommand> m_queuedButtons;
    GEODE_PAD(176);
    UILayer* m_uiLayer;
    GEODE_PAD(56);
    gd::vector<gd::vector<gd::vector<GameObject*>*>*> m_sections;
    GEODE_PAD(72);
    gd::vector<gd::vector<int>*> m_nonEffectObjectsPerSection;
    GEODE_PAD(197);
    cocos2d::CCDrawNode* m_debugDrawNode;
    GEODE_PAD(4);
    bool m_isDebugDrawEnabled;
};
