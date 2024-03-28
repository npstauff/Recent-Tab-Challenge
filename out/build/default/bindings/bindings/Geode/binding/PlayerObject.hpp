#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GameObject.hpp"
#include "AnimatedSpriteDelegate.hpp"

class PlayerObject : public GameObject, public AnimatedSpriteDelegate {
public:
    static constexpr auto CLASS_NAME = "PlayerObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PlayerObject, GameObject)

    /**
     * @note[short] Windows: 0x2c2410
     * @note[short] Android
     */
    static PlayerObject* create(int p0, int p1, GJBaseGameLayer* p2, cocos2d::CCLayer* p3, bool p4);

    /**
     * @note[short] Windows: 0x2d89c0
     * @note[short] Android
     */
    TodoReturn activateStreak();

    /**
     * @note[short] Windows: 0x2c3b10
     * @note[short] Android
     */
    TodoReturn addAllParticles();
    
private:
    [[deprecated("PlayerObject::addToTouchedRings not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToTouchedRings(RingObject* p0);
public:
    
private:
    [[deprecated("PlayerObject::addToYVelocity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToYVelocity(double p0, int p1);
public:

    /**
     * @note[short] Windows: 0x2c7820
     * @note[short] Android
     */
    void animatePlatformerJump(float p0);

    /**
     * @note[short] Windows: 0x2d8820
     * @note[short] Android
     */
    TodoReturn boostPlayer(float p0);

    /**
     * @note[short] Windows: 0x2d80b0
     * @note[short] Android
     */
    TodoReturn bumpPlayer(float p0, int p1, bool p2, GameObject* p3);
    
private:
    [[deprecated("PlayerObject::buttonDown not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn buttonDown(PlayerButton p0);
public:
    
private:
    [[deprecated("PlayerObject::canStickToGround not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canStickToGround();
public:
    
private:
    [[deprecated("PlayerObject::checkSnapJumpToObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkSnapJumpToObject(GameObject* p0);
public:

    /**
     * @note[short] Windows: 0x2cc3d0
     * @note[short] Android
     */
    void collidedWithObject(float p0, GameObject* p1, cocos2d::CCRect p2, bool p3);
    
private:
    [[deprecated("PlayerObject::collidedWithObject not implemented")]]
    /**
     * @note[short] Android
     */
    void collidedWithObject(float p0, GameObject* p1);
public:

    /**
     * @note[short] Windows: 0x2cc450
     * @note[short] Android
     */
    void collidedWithObjectInternal(float p0, GameObject* p1, cocos2d::CCRect p2, bool p3);
    
private:
    [[deprecated("PlayerObject::collidedWithSlope not implemented")]]
    /**
     * @note[short] Android
     */
    void collidedWithSlope(float p0, GameObject* p1, bool p2);
public:
    
private:
    [[deprecated("PlayerObject::collidedWithSlopeInternal not implemented")]]
    /**
     * @note[short] Android
     */
    void collidedWithSlopeInternal(float p0, GameObject* p1, bool p2);
public:
    
private:
    [[deprecated("PlayerObject::convertToClosestRotation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn convertToClosestRotation(float p0);
public:
    
private:
    [[deprecated("PlayerObject::copyAttributes not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn copyAttributes(PlayerObject* p0);
public:

    /**
     * @note[short] Windows: 0x2d2320
     * @note[short] Android
     */
    void createFadeOutDartStreak();

    /**
     * @note[short] Windows: 0x2c35e0
     * @note[short] Android
     */
    TodoReturn createRobot(int p0);

    /**
     * @note[short] Windows: 0x2c3870
     * @note[short] Android
     */
    TodoReturn createSpider(int p0);
    
private:
    [[deprecated("PlayerObject::deactivateParticle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deactivateParticle();
public:
    
private:
    [[deprecated("PlayerObject::deactivateStreak not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deactivateStreak(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::destroyFromHitHead not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn destroyFromHitHead();
public:
    
private:
    [[deprecated("PlayerObject::didHitHead not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn didHitHead();
public:

    /**
     * @note[short] Out of line
     */
    void disableCustomGlowColor();
    
private:
    [[deprecated("PlayerObject::disablePlayerControls not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn disablePlayerControls();
public:

    /**
     * @note[short] Windows: 0x2d4280
     * @note[short] Android
     */
    void disableSwingFire();

    /**
     * @note[short] Windows: 0x2d2210
     * @note[short] Android
     */
    void doReversePlayer(bool p0);

    /**
     * @note[short] Out of line
     */
    void enableCustomGlowColor(cocos2d::_ccColor3B const& color);
    
private:
    [[deprecated("PlayerObject::enablePlayerControls not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn enablePlayerControls();
public:
    
private:
    [[deprecated("PlayerObject::exitPlatformerAnimateJump not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn exitPlatformerAnimateJump();
public:

    /**
     * @note[short] Windows: 0x2d8ab0
     * @note[short] Android
     */
    TodoReturn fadeOutStreak2(float p0);

    /**
     * @note[short] Windows: 0x2d1080
     * @note[short] Android
     */
    void flashPlayer(float p0, float p1, cocos2d::ccColor3B mainColor, cocos2d::ccColor3B secondColor);

    /**
     * @note[short] Windows: 0x2d36e0
     * @note[short] Android
     */
    TodoReturn flipGravity(bool p0, bool p1);
    
private:
    [[deprecated("PlayerObject::flipMod not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn flipMod();
public:
    
private:
    [[deprecated("PlayerObject::gameEventTriggered not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn gameEventTriggered(int p0, int p1);
public:

    /**
     * @note[short] Windows: 0x2d3a50
     * @note[short] Android
     */
    bool getActiveMode();
    
private:
    [[deprecated("PlayerObject::getCurrentXVelocity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCurrentXVelocity();
public:

    /**
     * @note[short] Windows: 0x2c9d30
     * @note[short] Android
     */
    TodoReturn getModifiedSlopeYVel();
    
private:
    [[deprecated("PlayerObject::getOldPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getOldPosition(float p0);
public:

    /**
     * @note[short] Windows: 0x2d90e0
     * @note[short] Android
     */
    cocos2d::ccColor3B getSecondColor();
    
private:
    [[deprecated("PlayerObject::getYVelocity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getYVelocity();
public:
    
private:
    [[deprecated("PlayerObject::gravityDown not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn gravityDown();
public:
    
private:
    [[deprecated("PlayerObject::gravityUp not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn gravityUp();
public:
    
private:
    [[deprecated("PlayerObject::handlePlayerCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn handlePlayerCommand(int p0);
public:
    
private:
    [[deprecated("PlayerObject::handleRotatedCollisionInternal not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn handleRotatedCollisionInternal(float p0, GameObject* p1, cocos2d::CCRect p2, bool p3, bool p4, bool p5);
public:
    
private:
    [[deprecated("PlayerObject::handleRotatedObjectCollision not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn handleRotatedObjectCollision(float p0, GameObject* p1, cocos2d::CCRect p2, bool p3);
public:
    
private:
    [[deprecated("PlayerObject::handleRotatedSlopeCollision not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn handleRotatedSlopeCollision(float p0, GameObject* p1, bool p2);
public:
    
private:
    [[deprecated("PlayerObject::hardFlipGravity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hardFlipGravity();
public:
    
private:
    [[deprecated("PlayerObject::hitGround not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hitGround(GameObject* p0, bool p1);
public:
    
private:
    [[deprecated("PlayerObject::hitGroundNoJump not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hitGroundNoJump(GameObject* p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x2c77f0
     * @note[short] Android
     */
    void incrementJumps();

    /**
     * @note[short] Windows: 0x2c24c0
     * @note[short] Android
     */
    bool init(int p0, int p1, GJBaseGameLayer* p2, cocos2d::CCLayer* p3, bool p4);

    /**
     * @note[short] Windows: 0x2c9cd0
     * @note[short] Android
     */
    bool isBoostValid(float p0);

    /**
     * @note[short] Windows: 0x2d3a20
     * @note[short] Android
     */
    bool isFlying();
    
private:
    [[deprecated("PlayerObject::isInBasicMode not implemented")]]
    /**
     * @note[short] Android
     */
    bool isInBasicMode();
public:

    /**
     * @note[short] Windows: 0x2d5780
     * @note[short] Android
     */
    bool isInNormalMode();
    
private:
    [[deprecated("PlayerObject::isSafeFlip not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSafeFlip(float p0);
public:
    
private:
    [[deprecated("PlayerObject::isSafeHeadTest not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSafeHeadTest();
public:
    
private:
    [[deprecated("PlayerObject::isSafeMode not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSafeMode(float p0);
public:
    
private:
    [[deprecated("PlayerObject::isSafeSpiderFlip not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSafeSpiderFlip(float p0);
public:
    
private:
    [[deprecated("PlayerObject::levelFlipFinished not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn levelFlipFinished();
public:

    /**
     * @note[short] Windows: 0x2d4880
     * @note[short] Android
     */
    bool levelFlipping();
    
private:
    [[deprecated("PlayerObject::levelWillFlip not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn levelWillFlip();
public:

    /**
     * @note[short] Windows: 0x2d9e60
     * @note[short] Android
     */
    void loadFromCheckpoint(PlayerCheckpoint* p0);

    /**
     * @note[short] Windows: 0x2d7d40
     * @note[short] Android
     */
    TodoReturn lockPlayer();
    
private:
    [[deprecated("PlayerObject::logValues not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn logValues();
public:
    
private:
    [[deprecated("PlayerObject::modeDidChange not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn modeDidChange();
public:
    
private:
    [[deprecated("PlayerObject::performSlideCheck not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn performSlideCheck();
public:

    /**
     * @note[short] Windows: 0x2d9110
     * @note[short] Android
     */
    TodoReturn placeStreakPoint();

    /**
     * @note[short] Windows: 0x2d8380
     * @note[short] Android
     */
    TodoReturn playBumpEffect(int p0, GameObject* p1);
    
private:
    [[deprecated("PlayerObject::playBurstEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playBurstEffect();
public:

    /**
     * @note[short] Windows: 0x2bfd50
     * @note[short] Android
     */
    TodoReturn playCompleteEffect(bool p0, bool p1);

    /**
     * @note[short] Windows: 0x2ba470
     * @note[short] Android
     */
    void playDeathEffect();

    /**
     * @note[short] Windows: 0x2d9ac0
     * @note[short] Android
     */
    void playDynamicSpiderRun();

    /**
     * @note[short] Windows: 0x2d1b30
     * @note[short] Android
     */
    void playerDestroyed(bool p0);

    /**
     * @note[short] Windows: 0x2d39b0
     * @note[short] Android
     */
    bool playerIsFalling(float p0);
    
private:
    [[deprecated("PlayerObject::playerIsFallingBugged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playerIsFallingBugged();
public:
    
private:
    [[deprecated("PlayerObject::playerIsMovingUp not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playerIsMovingUp();
public:
    
private:
    [[deprecated("PlayerObject::playerTeleported not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playerTeleported();
public:
    
private:
    [[deprecated("PlayerObject::playingEndEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playingEndEffect();
public:
    
private:
    [[deprecated("PlayerObject::playSpawnEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playSpawnEffect();
public:

    /**
     * @note[short] Windows: 0x2cf5b0
     * @note[short] Android
     */
    void playSpiderDashEffect(cocos2d::CCPoint from, cocos2d::CCPoint to);

    /**
     * @note[short] Windows: 0x2c82f0
     * @note[short] Android
     */
    TodoReturn postCollision(float p0);

    /**
     * @note[short] Windows: 0x2c81b0
     * @note[short] Android
     */
    TodoReturn preCollision();
    
private:
    [[deprecated("PlayerObject::preSlopeCollision not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preSlopeCollision(float p0, GameObject* p1);
public:

    /**
     * @note[short] Windows: 0x2d81b0
     * @note[short] Android
     */
    TodoReturn propellPlayer(float p0, bool p1, int p2);

    /**
     * @note[short] Windows: 0x2d1d30
     * @note[short] Android
     */
    TodoReturn pushButton(PlayerButton p0);
    
private:
    [[deprecated("PlayerObject::pushDown not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pushDown();
public:
    
private:
    [[deprecated("PlayerObject::pushPlayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pushPlayer(float p0);
public:

    /**
     * @note[short] Windows: 0x2cfbb0
     * @note[short] Android
     */
    TodoReturn redirectDash(float p0);
    
private:
    [[deprecated("PlayerObject::redirectPlayerForce not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn redirectPlayerForce(float p0, float p1, float p2, float p3);
public:
    
private:
    [[deprecated("PlayerObject::releaseAllButtons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn releaseAllButtons();
public:

    /**
     * @note[short] Windows: 0x2d1f70
     * @note[short] Android
     */
    TodoReturn releaseButton(PlayerButton p0);
    
private:
    [[deprecated("PlayerObject::removeAllParticles not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeAllParticles();
public:

    /**
     * @note[short] Windows: 0x2da1c0
     * @note[short] Android
     */
    TodoReturn removePendingCheckpoint();
    
private:
    [[deprecated("PlayerObject::removePlacedCheckpoint not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removePlacedCheckpoint();
public:
    
private:
    [[deprecated("PlayerObject::resetAllParticles not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetAllParticles();
public:
    
private:
    [[deprecated("PlayerObject::resetCollisionLog not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetCollisionLog(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::resetCollisionValues not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetCollisionValues();
public:

    /**
     * @note[short] Windows: 0x2d45b0
     * @note[short] Android
     */
    void resetPlayerIcon();
    
private:
    [[deprecated("PlayerObject::resetStateVariables not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetStateVariables();
public:

    /**
     * @note[short] Windows: 0x2c6540
     * @note[short] Android
     */
    TodoReturn resetStreak();
    
private:
    [[deprecated("PlayerObject::resetTouchedRings not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetTouchedRings();
public:
    
private:
    [[deprecated("PlayerObject::reverseMod not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reverseMod();
public:

    /**
     * @note[short] Windows: 0x2d2130
     * @note[short] Android
     */
    TodoReturn reversePlayer(EffectGameObject* p0);

    /**
     * @note[short] Windows: 0x2d27c0
     * @note[short] Android
     */
    TodoReturn ringJump(RingObject* p0, bool p1);

    /**
     * @note[short] Windows: 0x2d3340
     * @note[short] Android
     */
    TodoReturn rotateGameplay(int p0, int p1, bool p2, float p3, float p4, bool p5, bool p6);
    
private:
    [[deprecated("PlayerObject::rotateGameplayObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn rotateGameplayObject(GameObject* p0);
public:
    
private:
    [[deprecated("PlayerObject::rotateGameplayOnly not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn rotateGameplayOnly(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::rotatePreSlopeObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn rotatePreSlopeObjects();
public:

    /**
     * @note[short] Windows: 0x2c7e30
     * @note[short] Android
     */
    TodoReturn runBallRotation(float p0);

    /**
     * @note[short] Windows: 0x2c7f70
     * @note[short] Android
     */
    TodoReturn runBallRotation2();

    /**
     * @note[short] Out of line
     */
    void runNormalRotation();

    /**
     * @note[short] Windows: 0x2c7cf0
     * @note[short] Android
     */
    void runNormalRotation(bool p0, float p1);

    /**
     * @note[short] Windows: 0x2c7c90
     * @note[short] Android
     */
    void runRotateAction(bool p0, int p1);

    /**
     * @note[short] Windows: 0x2d9c20
     * @note[short] Android
     */
    TodoReturn saveToCheckpoint(PlayerCheckpoint* p0);

    /**
     * @note[short] Windows: 0x2d65a0
     * @note[short] Android
     */
    void setSecondColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] Windows: 0x2c3c80
     * @note[short] Android
     */
    void setupStreak();

    /**
     * @note[short] Windows: 0x2c40c0
     * @note[short] Android
     */
    void setYVelocity(double p0, int p1);
    
private:
    [[deprecated("PlayerObject::spawnCircle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnCircle();
public:
    
private:
    [[deprecated("PlayerObject::spawnCircle2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnCircle2();
public:

    /**
     * @note[short] Windows: 0x2d1a50
     * @note[short] Android
     */
    TodoReturn spawnDualCircle();

    /**
     * @note[short] Windows: 0x2d8f90
     * @note[short] Android
     */
    TodoReturn spawnFromPlayer(PlayerObject* p0, bool p1);

    /**
     * @note[short] Windows: 0x2d1810
     * @note[short] Android
     */
    TodoReturn spawnPortalCircle(cocos2d::ccColor3B p0, float p1);

    /**
     * @note[short] Windows: 0x2d1920
     * @note[short] Android
     */
    TodoReturn spawnScaleCircle();
    
private:
    [[deprecated("PlayerObject::specialGroundHit not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn specialGroundHit();
public:
    
private:
    [[deprecated("PlayerObject::speedDown not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn speedDown();
public:
    
private:
    [[deprecated("PlayerObject::speedUp not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn speedUp();
public:
    
private:
    [[deprecated("PlayerObject::spiderTestJump not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spiderTestJump(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::spiderTestJumpInternal not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spiderTestJumpInternal(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::spiderTestJumpX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spiderTestJumpX(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::spiderTestJumpY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spiderTestJumpY(bool p0);
public:

    /**
     * @note[short] Windows: 0x2cfdb0
     * @note[short] Android
     */
    void startDashing(DashRingObject* p0);
    
private:
    [[deprecated("PlayerObject::stopBurstEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopBurstEffect();
public:

    /**
     * @note[short] Windows: 0x2d0940
     * @note[short] Android
     */
    void stopDashing();
    
private:
    [[deprecated("PlayerObject::stopParticles not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopParticles();
public:

    /**
     * @note[short] Windows: 0x2c7b10
     * @note[short] Android
     */
    void stopPlatformerJumpAnimation();
    
private:
    [[deprecated("PlayerObject::stopRotation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopRotation(bool p0, int p1);
public:

    /**
     * @note[short] Windows: 0x2d8b20
     * @note[short] Android
     */
    TodoReturn stopStreak2();
    
private:
    [[deprecated("PlayerObject::storeCollision not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn storeCollision(PlayerCollisionDirection p0, int p1);
public:

    /**
     * @note[short] Windows: 0x2d1c40
     * @note[short] Android
     */
    TodoReturn switchedDirTo(PlayerButton p0);

    /**
     * @note[short] Windows: 0x2d4fd0
     * @note[short] Android
     */
    void switchedToMode(GameObjectType p0);
    
private:
    [[deprecated("PlayerObject::testForMoving not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn testForMoving(float p0, GameObject* p1);
public:

    /**
     * @note[short] Windows: 0x2d3d30
     * @note[short] Android
     */
    void toggleBirdMode(bool p0, bool p1);

    /**
     * @note[short] Windows: 0x2d42f0
     * @note[short] Android
     */
    void toggleDartMode(bool p0, bool p1);

    /**
     * @note[short] Windows: 0x2d3aa0
     * @note[short] Android
     */
    void toggleFlyMode(bool p0, bool p1);

    /**
     * @note[short] Windows: 0x2d7a40
     * @note[short] Android
     */
    TodoReturn toggleGhostEffect(GhostType p0);

    /**
     * @note[short] Out of line
     */
    void togglePlatformerMode(bool val);

    /**
     * @note[short] Windows: 0x2d9170
     * @note[short] Android
     */
    void togglePlayerScale(bool p0, bool p1);

    /**
     * @note[short] Windows: 0x2d49f0
     * @note[short] Android
     */
    void toggleRobotMode(bool p0, bool p1);

    /**
     * @note[short] Windows: 0x2d48c0
     * @note[short] Android
     */
    void toggleRollMode(bool p0, bool p1);

    /**
     * @note[short] Windows: 0x2d4ce0
     * @note[short] Android
     */
    void toggleSpiderMode(bool p0, bool p1);

    /**
     * @note[short] Windows: 0x2d3fb0
     * @note[short] Android
     */
    void toggleSwingMode(bool p0, bool p1);

    /**
     * @note[short] Windows: 0x2c63f0
     * @note[short] Android
     */
    TodoReturn toggleVisibility(bool p0);
    
private:
    [[deprecated("PlayerObject::touchedObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn touchedObject(GameObject* p0);
public:

    /**
     * @note[short] Windows: 0x2da220
     * @note[short] Android
     */
    TodoReturn tryPlaceCheckpoint();
    
private:
    [[deprecated("PlayerObject::unrotateGameplayObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unrotateGameplayObject(GameObject* p0);
public:
    
private:
    [[deprecated("PlayerObject::unrotatePreSlopeObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unrotatePreSlopeObjects();
public:
    
private:
    [[deprecated("PlayerObject::updateCheckpointMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCheckpointMode(bool p0);
public:

    /**
     * @note[short] Windows: 0x2c6310
     * @note[short] Android
     */
    TodoReturn updateCheckpointTest();
    
private:
    [[deprecated("PlayerObject::updateCollide not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCollide(PlayerCollisionDirection p0, GameObject* p1);
public:
    
private:
    [[deprecated("PlayerObject::updateCollideBottom not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCollideBottom(float p0, GameObject* p1);
public:
    
private:
    [[deprecated("PlayerObject::updateCollideLeft not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCollideLeft(float p0, GameObject* p1);
public:
    
private:
    [[deprecated("PlayerObject::updateCollideRight not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCollideRight(float p0, GameObject* p1);
public:
    
private:
    [[deprecated("PlayerObject::updateCollideTop not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCollideTop(float p0, GameObject* p1);
public:

    /**
     * @note[short] Windows: 0x2d0ea0
     * @note[short] Android
     */
    void updateDashAnimation();

    /**
     * @note[short] Windows: 0x2d0530
     * @note[short] Android
     */
    void updateDashArt();
    
private:
    [[deprecated("PlayerObject::updateEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEffects(float p0);
public:

    /**
     * @note[short] Windows: 0x2d6610
     * @note[short] Android
     */
    void updateGlowColor();
    
private:
    [[deprecated("PlayerObject::updateInternalActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateInternalActions(float p0);
public:

    /**
     * @note[short] Windows: 0x2c67b0
     * @note[short] Android
     */
    TodoReturn updateJump(float p0);
    
private:
    [[deprecated("PlayerObject::updateJumpVariables not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateJumpVariables();
public:
    
private:
    [[deprecated("PlayerObject::updateLastGroundObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLastGroundObject(GameObject* p0);
public:
    
private:
    [[deprecated("PlayerObject::updateMove not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMove(float p0);
public:

    /**
     * @note[short] Windows: 0x2d23e0
     * @note[short] Android
     */
    void updatePlayerArt();

    /**
     * @note[short] Windows: 0x2d70e0
     * @note[short] Android
     */
    void updatePlayerBirdFrame(int p0);

    /**
     * @note[short] Windows: 0x2d7680
     * @note[short] Android
     */
    void updatePlayerDartFrame(int p0);
    
private:
    [[deprecated("PlayerObject::updatePlayerForce not implemented")]]
    /**
     * @note[short] Android
     */
    void updatePlayerForce(cocos2d::CCPoint p0, bool p1);
public:

    /**
     * @note[short] Windows: 0x2d6b90
     * @note[short] Android
     */
    void updatePlayerFrame(int p0);

    /**
     * @note[short] Windows: 0x2d8c50
     * @note[short] Android
     */
    void updatePlayerGlow();

    /**
     * @note[short] Windows: 0x2d6f20
     * @note[short] Android
     */
    void updatePlayerJetpackFrame(int p0);

    /**
     * @note[short] Out of line
     */
    void updatePlayerRobotFrame(int id);

    /**
     * @note[short] Windows: 0x2d7300
     * @note[short] Android
     */
    void updatePlayerRollFrame(int p0);

    /**
     * @note[short] Windows: 0x2d8bf0
     * @note[short] Android
     */
    void updatePlayerScale();

    /**
     * @note[short] Windows: 0x2d6d60
     * @note[short] Android
     */
    void updatePlayerShipFrame(int p0);

    /**
     * @note[short] Out of line
     */
    void updatePlayerSpiderFrame(int id);

    /**
     * @note[short] Windows: 0x2d7840
     * @note[short] Android
     */
    void updatePlayerSpriteExtra(gd::string p0);

    /**
     * @note[short] Windows: 0x2d74c0
     * @note[short] Android
     */
    void updatePlayerSwingFrame(int p0);
    
private:
    [[deprecated("PlayerObject::updateRobotAnimationSpeed not implemented")]]
    /**
     * @note[short] Android
     */
    void updateRobotAnimationSpeed();
public:
    
private:
    [[deprecated("PlayerObject::updateRotation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateRotation(float p0, float p1);
public:

    /**
     * @note[short] Windows: 0x2cbd20
     * @note[short] Android
     */
    TodoReturn updateRotation(float p0);
    
private:
    [[deprecated("PlayerObject::updateShipRotation not implemented")]]
    /**
     * @note[short] Android
     */
    void updateShipRotation(float p0);
public:

    /**
     * @note[short] Windows: 0x2d7940
     * @note[short] Android
     */
    void updateShipSpriteExtra(gd::string p0);
    
private:
    [[deprecated("PlayerObject::updateSlopeRotation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSlopeRotation(float p0);
public:
    
private:
    [[deprecated("PlayerObject::updateSlopeYVelocity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSlopeYVelocity(float p0);
public:

    /**
     * @note[short] Windows: 0x2c62c0
     * @note[short] Android
     */
    TodoReturn updateSpecial(float p0);
    
private:
    [[deprecated("PlayerObject::updateStateVariables not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateStateVariables();
public:
    
private:
    [[deprecated("PlayerObject::updateStaticForce not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateStaticForce(float p0, float p1, bool p2);
public:

    /**
     * @note[short] Windows: 0x2c4050
     * @note[short] Android
     */
    void updateStreakBlend(bool p0);
    
private:
    [[deprecated("PlayerObject::updateStreaks not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateStreaks(float p0);
public:

    /**
     * @note[short] Windows: 0x2d41e0
     * @note[short] Android
     */
    TodoReturn updateSwingFire();

    /**
     * @note[short] Windows: 0x2d95e0
     * @note[short] Android
     */
    TodoReturn updateTimeMod(float p0, bool p1);
    
private:
    [[deprecated("PlayerObject::usingWallLimitedMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn usingWallLimitedMode();
public:
    
private:
    [[deprecated("PlayerObject::yStartDown not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn yStartDown();
public:
    
private:
    [[deprecated("PlayerObject::yStartUp not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn yStartUp();
public:

    /**
     * @note[short] Windows: 0x2c41b0
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] Windows: 0x2da740
     * @note[short] Android
     */
    virtual void setScaleX(float p0);

    /**
     * @note[short] Windows: 0x2da760
     * @note[short] Android
     */
    virtual void setScaleY(float p0);

    /**
     * @note[short] Windows: 0x2da780
     * @note[short] Android
     */
    virtual void setScale(float p0);

    /**
     * @note[short] Windows: 0x2d5860
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);

    /**
     * @note[short] Windows: 0x2da7a0
     * @note[short] Android
     */
    virtual void setVisible(bool p0);

    /**
     * @note[short] Windows: 0x2da690
     * @note[short] Android
     */
    virtual void setRotation(float p0);

    /**
     * @note[short] Windows: 0x2d6a90
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] Windows: 0x2d6520
     * @note[short] Android
     */
    virtual void setColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] Windows: 0x2da6b0
     * @note[short] Android
     */
    virtual void setFlipX(bool p0);
    
private:
    [[deprecated("PlayerObject::setFlipY not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setFlipY(bool p0);
public:

    /**
     * @note[short] Windows: 0x2d1100
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] Windows: 0x2d6b70
     * @note[short] Android
     */
    virtual cocos2d::CCPoint getRealPosition();
    
private:
    [[deprecated("PlayerObject::getOrientedBox not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn getOrientedBox();
public:
    
private:
    [[deprecated("PlayerObject::getObjectRotation not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn getObjectRotation();
public:

    /**
     * @note[short] Windows: 0x2da7c0
     * @note[short] Android
     */
    virtual TodoReturn animationFinished(char const* p0);
    cocos2d::CCNode* m_mainLayer;
    GEODE_PAD(68);
    cocos2d::CCNode* m_unk4e4;
    cocos2d::CCDictionary* m_unk4e8;
    cocos2d::CCDictionary* m_unk4ec;
    cocos2d::CCDictionary* m_unk4f0;
    cocos2d::CCDictionary* m_unk4f4;
    GEODE_PAD(32);
    float m_unk518;
    bool m_unk51c;
    bool m_unk51d;
    bool m_unk51e;
    bool m_unk51f;
    GEODE_PAD(4);
    GameObject* m_collidedObject;
    GEODE_PAD(64);
    float m_unk568;
    cocos2d::CCSprite* m_unk56c;
    GEODE_PAD(4);
    GameObject* m_unk574;
    GameObject* m_unk578;
    GEODE_PAD(8);
    float unk_584;
    int unk_588;
    GEODE_PAD(4);
    cocos2d::CCArray* m_particleSystems;
    gd::unordered_map<int, GJPointDouble> m_unk594;
    gd::unordered_map<int, GameObject*> m_unk5b4;
    float m_unk5d4;
    float m_rotationSpeed;
    float m_unk5dc;
    bool m_isRotating;
    bool m_unk5e1;
    bool m_hasGlow;
    bool m_isHidden;
    int m_hasGhostTrail;
    GhostTrailEffect* m_ghostTrail;
    cocos2d::CCSprite* m_iconSprite;
    cocos2d::CCSprite* m_iconSpriteSecondary;
    cocos2d::CCSprite* m_iconSpriteWhitener;
    cocos2d::CCSprite* m_iconGlow;
    cocos2d::CCSprite* m_vehicleSprite;
    cocos2d::CCSprite* m_vehicleSpriteSecondary;
    cocos2d::CCSprite* m_unk604;
    cocos2d::CCSprite* m_vehicleSpriteWhitener;
    cocos2d::CCSprite* m_vehicleGlow;
    PlayerFireBoostSprite* m_swingFireMiddle;
    PlayerFireBoostSprite* m_swingFireBottom;
    PlayerFireBoostSprite* m_swingFireTop;
    cocos2d::CCSprite* m_unk61c;
    cocos2d::CCMotionStreak* m_regularTrail;
    GEODE_PAD(4);
    HardStreak* m_waveTrail;
    float m_unk62c;
    GEODE_PAD(20);
    float m_unk644;
    float m_unk648;
    GEODE_PAD(12);
    bool m_unk658;
    bool m_unk659;
    bool m_unk65a;
    bool m_unk65b;
    bool m_unk65c;
    bool m_unk65d;
    bool m_unk65e;
    bool m_unk65f;
    GEODE_PAD(40);
    float m_unk688;
    float m_unk68c;
    GEODE_PAD(18);
    bool m_unk6a2;
    bool m_unk6a3;
    GEODE_PAD(24);
    int m_unk6c0;
    GameObject* m_objectSnappedTo;
    GEODE_PAD(4);
    GJRobotSprite* m_robotSprite;
    GJSpiderSprite* m_spiderSprite;
    GEODE_PAD(4);
    cocos2d::CCParticleSystemQuad* m_unk6dc;
    cocos2d::CCParticleSystemQuad* m_trailingParticles;
    cocos2d::CCParticleSystemQuad* m_shipClickParticles;
    cocos2d::CCParticleSystemQuad* m_unk6e8;
    cocos2d::CCParticleSystemQuad* m_ufoClickParticles;
    cocos2d::CCParticleSystemQuad* m_robotBurstParticles;
    cocos2d::CCParticleSystemQuad* m_unk6f4;
    cocos2d::CCParticleSystemQuad* m_swingBurstParticles1;
    cocos2d::CCParticleSystemQuad* m_swingBurstParticles2;
    GEODE_PAD(4);
    cocos2d::CCParticleSystemQuad* m_unk704;
    cocos2d::CCParticleSystemQuad* m_unk708;
    float m_unk70c;
    float m_unk710;
    GEODE_PAD(100);
    bool m_hasCustomGlowColor;
    cocos2d::ccColor3B m_glowColor;
    GEODE_PAD(36);
    double m_yVelocity;
    bool m_isOnSlope;
    bool m_wasOnSlope;
    GEODE_PAD(7);
    bool m_isShip;
    bool m_isBird;
    bool m_isBall;
    bool m_isDart;
    bool m_isRobot;
    bool m_isSpider;
    bool m_isUpsideDown;
    bool m_isDead;
    bool m_isOnGround;
    bool m_isGoingLeft;
    bool m_isSideways;
    bool m_isSwing;
    GEODE_PAD(16);
    float m_unk7c8;
    float m_unk7cc;
    float m_unk7d0;
    bool m_isDashing;
    GEODE_PAD(8);
    float m_vehicleSize;
    float m_playerSpeed;
    float m_unk7e0;
    float m_unk7e4;
    cocos2d::CCPoint m_unk7e8;
    cocos2d::CCPoint m_unk7f0;
    bool m_unk7f8;
    GEODE_PAD(24);
    cocos2d::CCPoint m_lastGroundedPos;
    cocos2d::CCArray* m_touchingRings;
    gd::unordered_set<int> m_unk828;
    GameObject* m_lastActivatedPortal;
    bool m_unk814;
    bool m_unk815;
    cocos2d::ccColor3B m_playerColor1;
    cocos2d::ccColor3B m_playerColor2;
    cocos2d::CCPoint m_position;
    GEODE_PAD(20);
    float m_unk838;
    GEODE_PAD(4);
    bool m_gamevar0060;
    bool m_gamevar0061;
    bool m_gamevar0062;
    GEODE_PAD(4);
    gd::vector<float> m_unk880;
    GEODE_PAD(28);
    double m_platformerXVelocity;
    GEODE_PAD(112);
    bool m_isPlatformer;
    int m_unk8ec;
    int m_unk8f0;
    int m_unk8f4;
    int m_unk8f8;
    float m_gravityMod;
    GEODE_PAD(4);
    cocos2d::CCPoint m_unk904;
    GEODE_PAD(4);
    gd::map<int, bool> m_unk910;
    float m_unk918;
    float m_unk91c;
    GEODE_PAD(4);
    gd::map<int, bool> m_unk924;
    GEODE_PAD(4);
    gd::string m_unk930;
    bool m_unk948;
    GEODE_PAD(3);
    int m_iconRequestID;
    cocos2d::CCSpriteBatchNode* m_unk950;
    cocos2d::CCSpriteBatchNode* m_unk954;
    cocos2d::CCArray* m_unk958;
    PlayerFireBoostSprite* m_robotFire;
    GEODE_PAD(4);
    GJBaseGameLayer* m_gameLayer;
    cocos2d::CCLayer* m_parentLayer;
    GJActionManager* m_actionManager;
    GEODE_PAD(4);
    float m_unk974;
    bool m_unk978;
    bool m_unk979;
    bool m_unk97a;
    bool m_unk97b;
    GEODE_PAD(4);
};
