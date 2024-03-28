#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayerProtocol.hpp"
#include "ColorSelectDelegate.hpp"
#include "GJRotationControlDelegate.hpp"
#include "GJScaleControlDelegate.hpp"
#include "GJTransformControlDelegate.hpp"
#include "MusicDownloadDelegate.hpp"
#include "SetIDPopupDelegate.hpp"

class EditorUI : public cocos2d::CCLayer, public FLAlertLayerProtocol, public ColorSelectDelegate, public GJRotationControlDelegate, public GJScaleControlDelegate, public GJTransformControlDelegate, public MusicDownloadDelegate, public SetIDPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "EditorUI";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(EditorUI, cocos2d::CCLayer)
    
private:
    [[deprecated("EditorUI::create not implemented")]]
    /**
     * @note[short] Android
     */
    static EditorUI* create(LevelEditorLayer* p0);
public:

    /**
     * @note[short] Windows: 0xd83d0
     * @note[short] Android
     */
    TodoReturn activateRotationControl(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0xcc130
     * @note[short] Android
     */
    TodoReturn activateScaleControl(cocos2d::CCObject* p0);
    
private:
    [[deprecated("EditorUI::activateTransformControl not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activateTransformControl(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorUI::addObjectsToSmartTemplate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addObjectsToSmartTemplate(GJSmartTemplate* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("EditorUI::addSnapPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addSnapPosition(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("EditorUI::alignObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn alignObjects(cocos2d::CCArray* p0, bool p1);
public:

    /**
     * @note[short] Windows: 0xd7d70
     * @note[short] Android
     */
    TodoReturn applyOffset(GameObject* p0);
    
private:
    [[deprecated("EditorUI::applySpecialOffset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn applySpecialOffset(cocos2d::CCPoint p0, GameObject* p1, cocos2d::CCPoint p2);
public:
    
private:
    [[deprecated("EditorUI::arrayContainsClass not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn arrayContainsClass(cocos2d::CCArray* p0, int p1);
public:
    
private:
    [[deprecated("EditorUI::assignNewGroups not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn assignNewGroups(bool p0);
public:
    
private:
    [[deprecated("EditorUI::canAllowMultiActivate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canAllowMultiActivate(GameObject* p0, cocos2d::CCArray* p1);
public:

    /**
     * @note[short] Windows: 0xc89c0
     * @note[short] Android
     */
    TodoReturn canSelectObject(GameObject* p0);

    /**
     * @note[short] Windows: 0xaa950
     * @note[short] Android
     */
    TodoReturn centerCameraOnObject(GameObject* p0);
    
private:
    [[deprecated("EditorUI::changeSelectedObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn changeSelectedObjects(cocos2d::CCArray* p0, bool p1);
public:
    
private:
    [[deprecated("EditorUI::checkDiffAfterTransformAnchor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkDiffAfterTransformAnchor(cocos2d::CCPoint p0, cocos2d::CCArray* p1);
public:

    /**
     * @note[short] Windows: 0xc8b70
     * @note[short] Android
     */
    TodoReturn checkLiveColorSelect();

    /**
     * @note[short] Windows: 0xa6870
     * @note[short] Android
     */
    TodoReturn clickOnPosition(cocos2d::CCPoint p0);

    /**
     * @note[short] Windows: 0xd4550
     * @note[short] Android
     */
    TodoReturn closeLiveColorSelect();

    /**
     * @note[short] Windows: 0xd46d0
     * @note[short] Android
     */
    TodoReturn closeLiveHSVSelect();
    
private:
    [[deprecated("EditorUI::colorSelectClosed not implemented")]]
    /**
     * @note[short] Android
     */
    void colorSelectClosed(cocos2d::ccColor3B p0);
public:

    /**
     * @note[short] Windows: 0xd7df0
     * @note[short] Android
     */
    TodoReturn constrainGameLayerPosition();

    /**
     * @note[short] Windows: 0xd7df0
     * @note[short] Android
     */
    void constrainGameLayerPosition(float p0, float p1);
    
private:
    [[deprecated("EditorUI::convertKeyBasedOnNeighbors not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn convertKeyBasedOnNeighbors(int p0, int p1, cocos2d::CCPoint p2, cocos2d::CCArray* p3);
public:
    
private:
    [[deprecated("EditorUI::convertToBaseKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn convertToBaseKey(int p0);
public:

    /**
     * @note[short] Windows: 0xca970
     * @note[short] Android
     */
    TodoReturn copyObjects(cocos2d::CCArray* p0, bool p1, bool p2);
    
private:
    [[deprecated("EditorUI::copyObjectsDetailed not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn copyObjectsDetailed(cocos2d::CCArray* p0);
public:

    /**
     * @note[short] Windows: 0xa8570
     * @note[short] Android
     */
    cocos2d::CCArray* createCustomItems();
    
private:
    [[deprecated("EditorUI::createEdgeForObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createEdgeForObject(GameObject* p0, int p1);
public:
    
private:
    [[deprecated("EditorUI::createExtraObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createExtraObject(int p0, cocos2d::CCPoint p1, GameObject* p2, cocos2d::CCArray* p3, int p4, int p5);
public:
    
private:
    [[deprecated("EditorUI::createExtras not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createExtras(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("EditorUI::createExtrasForObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createExtrasForObject(int p0, GameObject* p1, cocos2d::CCArray* p2);
public:
    
private:
    [[deprecated("EditorUI::createGlow not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createGlow();
public:

    /**
     * @note[short] Windows: 0xd0430
     * @note[short] Android
     */
    void createLoop();

    /**
     * @note[short] Windows: 0xd1be0
     * @note[short] Android
     */
    TodoReturn createMoveMenu();

    /**
     * @note[short] Windows: 0xd0230
     * @note[short] Android
     */
    TodoReturn createNewKeyframeAnim();

    /**
     * @note[short] Windows: 0xc86a0
     * @note[short] Android
     */
    TodoReturn createObject(int p0, cocos2d::CCPoint p1);
    
private:
    [[deprecated("EditorUI::createOutlines not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createOutlines(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("EditorUI::createPrefab not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createPrefab(GJSmartTemplate* p0, gd::string p1, int p2);
public:
    
private:
    [[deprecated("EditorUI::createRockBases not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createRockBases(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("EditorUI::createRockEdges not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createRockEdges(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("EditorUI::createSmartObjectsFromTemplate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createSmartObjectsFromTemplate(GJSmartTemplate* p0, cocos2d::CCArray* p1, bool p2, bool p3, bool p4, bool p5);
public:
    
private:
    [[deprecated("EditorUI::createSmartObjectsFromType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createSmartObjectsFromType(int p0, cocos2d::CCArray* p1, bool p2, bool p3);
public:

    /**
     * @note[short] Windows: 0xc9320
     * @note[short] Android
     */
    TodoReturn createUndoObject(UndoCommand p0, bool p1);

    /**
     * @note[short] Windows: 0xc9470
     * @note[short] Android
     */
    TodoReturn createUndoSelectObject(bool p0);
    
private:
    [[deprecated("EditorUI::deactivateRotationControl not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deactivateRotationControl();
public:

    /**
     * @note[short] Windows: 0xcc2d0
     * @note[short] Android
     */
    TodoReturn deactivateScaleControl();

    /**
     * @note[short] Windows: 0xcc800
     * @note[short] Android
     */
    TodoReturn deactivateTransformControl();

    /**
     * @note[short] Windows: 0xaa120
     * @note[short] Android
     */
    void deleteObject(GameObject* p0, bool p1);
    
private:
    [[deprecated("EditorUI::deleteSmartBlocksFromObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deleteSmartBlocksFromObjects(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("EditorUI::deleteTypeFromObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deleteTypeFromObjects(int p0, cocos2d::CCArray* p1);
public:

    /**
     * @note[short] Windows: 0xc9600
     * @note[short] Android
     */
    TodoReturn deselectAll();

    /**
     * @note[short] Windows: 0xc94f0
     * @note[short] Android
     */
    TodoReturn deselectObject();

    /**
     * @note[short] Windows: 0xc9540
     * @note[short] Android
     */
    TodoReturn deselectObject(GameObject* p0);
    
private:
    [[deprecated("EditorUI::deselectObjectsColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deselectObjectsColor();
public:

    /**
     * @note[short] Windows: 0xaa480
     * @note[short] Android
     */
    TodoReturn deselectTargetPortals();
    
private:
    [[deprecated("EditorUI::disableButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn disableButton(CreateMenuItem* p0);
public:

    /**
     * @note[short] Windows: 0xcaf10
     * @note[short] Android
     */
    TodoReturn doCopyObjects(bool p0);
    
private:
    [[deprecated("EditorUI::doPasteInPlace not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn doPasteInPlace(bool p0);
public:

    /**
     * @note[short] Windows: 0xcb090
     * @note[short] Android
     */
    TodoReturn doPasteObjects(bool p0);
    
private:
    [[deprecated("EditorUI::dynamicGroupUpdate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn dynamicGroupUpdate(bool p0);
public:
    
private:
    [[deprecated("EditorUI::edgeForObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn edgeForObject(int p0, int p1);
public:

    /**
     * @note[short] Windows: 0xd13a0
     * @note[short] Android
     */
    TodoReturn editButton2Usable();

    /**
     * @note[short] Windows: 0xd0cc0
     * @note[short] Android
     */
    TodoReturn editButtonUsable();

    /**
     * @note[short] Windows: 0xd4110
     * @note[short] Android
     */
    TodoReturn editColor();

    /**
     * @note[short] Windows: 0xd3d50
     * @note[short] Android
     */
    TodoReturn editColorButtonUsable();

    /**
     * @note[short] Windows: 0xd4720
     * @note[short] Android
     */
    TodoReturn editGroup(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0xd45a0
     * @note[short] Android
     */
    TodoReturn editHSV();

    /**
     * @note[short] Windows: 0xd2840
     * @note[short] Android
     */
    TodoReturn editObject(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0xd36b0
     * @note[short] Android
     */
    TodoReturn editObject2(cocos2d::CCObject* p0);
    
private:
    [[deprecated("EditorUI::editObject3 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn editObject3(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] Windows: 0xd36c0
     * @note[short] Android
     */
    TodoReturn editObjectSpecial(int p0);

    /**
     * @note[short] Windows: 0xcbda0
     * @note[short] Android
     */
    TodoReturn editorLayerForArray(cocos2d::CCArray* p0, bool p1);
    
private:
    [[deprecated("EditorUI::enableButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn enableButton(CreateMenuItem* p0);
public:

    /**
     * @note[short] Windows: 0xaa870
     * @note[short] Android
     */
    TodoReturn findAndSelectObject(int p0, bool p1);
    
private:
    [[deprecated("EditorUI::findSnapObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn findSnapObject(cocos2d::CCArray* p0, float p1);
public:
    
private:
    [[deprecated("EditorUI::findSnapObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn findSnapObject(cocos2d::CCPoint p0, float p1);
public:
    
private:
    [[deprecated("EditorUI::findTriggerTest not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn findTriggerTest();
public:

    /**
     * @note[short] Windows: 0xd5c20
     * @note[short] Android
     */
    TodoReturn flipObjectsX(cocos2d::CCArray* p0);

    /**
     * @note[short] Windows: 0xd5e50
     * @note[short] Android
     */
    TodoReturn flipObjectsY(cocos2d::CCArray* p0);
    
private:
    [[deprecated("EditorUI::getButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getButton(char const* p0, int p1, cocos2d::SEL_MenuHandler p2, cocos2d::CCMenu* p3);
public:

    /**
     * @note[short] Windows: 0xc78a0
     * @note[short] Android
     */
    CreateMenuItem* getCreateBtn(int id, int bg);
    
private:
    [[deprecated("EditorUI::getCreateMenuItemButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCreateMenuItemButton(cocos2d::CCSprite* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, int p4, cocos2d::CCPoint p5);
public:
    
private:
    [[deprecated("EditorUI::getCycledObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCycledObject(cocos2d::CCArray* p0, bool p1);
public:
    
private:
    [[deprecated("EditorUI::getEditColorTargets not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getEditColorTargets(ColorAction*& p0, ColorAction*& p1, EffectGameObject*& p2);
public:

    /**
     * @note[short] Windows: 0xd8aa0
     * @note[short] Android
     */
    TodoReturn getGridSnappedPos(cocos2d::CCPoint p0);

    /**
     * @note[short] Windows: 0xd8140
     * @note[short] Android
     */
    TodoReturn getGroupCenter(cocos2d::CCArray* p0, bool p1);
    
private:
    [[deprecated("EditorUI::getGroupInfo not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getGroupInfo(GameObject* p0, cocos2d::CCArray* p1, int& p2, int& p3, int& p4);
public:

    /**
     * @note[short] Windows: 0xd4ff0
     * @note[short] Android
     */
    TodoReturn getLimitedPosition(cocos2d::CCPoint p0);
    
private:
    [[deprecated("EditorUI::getModeBtn not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getModeBtn(char const* p0, int p1);
public:
    
private:
    [[deprecated("EditorUI::getNeighbor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getNeighbor(int p0, cocos2d::CCPoint p1, GJSmartDirection p2, cocos2d::CCArray* p3);
public:
    
private:
    [[deprecated("EditorUI::getRandomStartKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRandomStartKey(int p0);
public:
    
private:
    [[deprecated("EditorUI::getRelativeOffset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRelativeOffset(GameObject* p0);
public:

    /**
     * @note[short] Windows: 0xc92a0
     * @note[short] Android
     */
    cocos2d::CCArray* getSelectedObjects();
    
private:
    [[deprecated("EditorUI::getSimpleButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSimpleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2);
public:
    
private:
    [[deprecated("EditorUI::getSmartNeighbor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSmartNeighbor(SmartGameObject* p0, cocos2d::CCPoint p1, GJSmartDirection p2, cocos2d::CCArray* p3);
public:
    
private:
    [[deprecated("EditorUI::getSmartObjectKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSmartObjectKey(int p0, GJSmartDirection p1);
public:

    /**
     * @note[short] Windows: 0x23c490
     * @note[short] Android
     */
    TodoReturn getSnapAngle(GameObject* p0, cocos2d::CCArray* p1);
    
private:
    [[deprecated("EditorUI::getSpriteButton not implemented")]]
    /**
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getSpriteButton(char const* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, int p4, cocos2d::CCPoint p5);
public:

    /**
     * @note[short] Windows: 0xa6c00
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getSpriteButton(char const* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3);
    
private:
    [[deprecated("EditorUI::getSpriteButton not implemented")]]
    /**
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getSpriteButton(cocos2d::CCSprite* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, int p4, cocos2d::CCPoint p5);
public:
    
private:
    [[deprecated("EditorUI::getTouchPoint not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTouchPoint(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("EditorUI::getTransformState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTransformState();
public:

    /**
     * @note[short] Windows: 0xd8010
     * @note[short] Android
     */
    TodoReturn getXMin(int p0);

    /**
     * @note[short] Windows: 0xa4260
     * @note[short] Android
     */
    bool init(LevelEditorLayer* editorLayer);
    
private:
    [[deprecated("EditorUI::isLiveColorSelectTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    bool isLiveColorSelectTrigger(GameObject* p0);
public:

    /**
     * @note[short] Windows: 0xdd6e0
     * @note[short] Android
     */
    bool isSpecialSnapObject(int p0);
    
private:
    [[deprecated("EditorUI::liveEditColorUsable not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn liveEditColorUsable();
public:
    
private:
    [[deprecated("EditorUI::menuItemFromObjectString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn menuItemFromObjectString(gd::string p0, int p1);
public:

    /**
     * @note[short] Windows: 0xd4a20
     * @note[short] Android
     */
    cocos2d::CCPoint moveForCommand(EditCommand command);

    /**
     * @note[short] Windows: 0xa7070
     * @note[short] Android
     */
    TodoReturn moveGamelayer(cocos2d::CCPoint p0);

    /**
     * @note[short] Windows: 0xd4f10
     * @note[short] Android
     */
    TodoReturn moveObject(GameObject* p0, cocos2d::CCPoint p1);
    
private:
    [[deprecated("EditorUI::moveObjectCall not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn moveObjectCall(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] Windows: 0xd4d40
     * @note[short] Android
     */
    TodoReturn moveObjectCall(EditCommand p0);

    /**
     * @note[short] Windows: 0xdb460
     * @note[short] Android
     */
    TodoReturn offsetForKey(int p0);
    
private:
    [[deprecated("EditorUI::onAssignNewGroupID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn onAssignNewGroupID();
public:
    
private:
    [[deprecated("EditorUI::onColorFilter not implemented")]]
    /**
     * @note[short] Android
     */
    void onColorFilter(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xcaf00
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xcbcd0
     * @note[short] Android
     */
    void onCopyState(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xc7ee0
     * @note[short] Android
     */
    bool onCreate();

    /**
     * @note[short] Windows: 0xc7d50
     * @note[short] Android
     */
    void onCreateButton(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xc7fc0
     * @note[short] Android
     */
    TodoReturn onCreateObject(int p0);

    /**
     * @note[short] Windows: 0xa9b50
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorUI::onDeleteAll not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeleteAll(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onDeleteCustomItem not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeleteCustomItem(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onDeleteInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeleteInfo(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xaa1a0
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xaa5f0
     * @note[short] Android
     */
    void onDeleteSelectedType(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorUI::onDeleteStartPos not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeleteStartPos(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xc95c0
     * @note[short] Android
     */
    void onDeselectAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xca7d0
     * @note[short] Android
     */
    void onDuplicate(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd3eb0
     * @note[short] Android
     */
    void onEditColor(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorUI::onFindObject not implemented")]]
    /**
     * @note[short] Android
     */
    void onFindObject(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xcbec0
     * @note[short] Android
     */
    void onGoToBaseLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xcbe10
     * @note[short] Android
     */
    void onGoToLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd47a0
     * @note[short] Android
     */
    void onGroupDown(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorUI::onGroupIDFilter not implemented")]]
    /**
     * @note[short] Android
     */
    void onGroupIDFilter(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xca5c0
     * @note[short] Android
     */
    void onGroupSticky(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd4780
     * @note[short] Android
     */
    void onGroupUp(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xd48f0
     * @note[short] Android
     */
    void onLockLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa81c0
     * @note[short] Android
     */
    void onNewCustomItem(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xcb080
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xcbd50
     * @note[short] Android
     */
    void onPasteColor(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorUI::onPasteInPlace not implemented")]]
    /**
     * @note[short] Android
     */
    void onPasteInPlace(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xcbd00
     * @note[short] Android
     */
    void onPasteState(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa6130
     * @note[short] Android
     */
    void onPause(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xc9d20
     * @note[short] Android
     */
    void onPlayback(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xca090
     * @note[short] Android
     */
    void onPlaytest(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorUI::onResetSpecialFilter not implemented")]]
    /**
     * @note[short] Android
     */
    void onResetSpecialFilter(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xcbee0
     * @note[short] Android
     */
    void onSelectBuildTab(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa60e0
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xca200
     * @note[short] Android
     */
    void onStopPlaytest(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorUI::onTargetIDChange not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn onTargetIDChange(int p0);
public:
    
private:
    [[deprecated("EditorUI::onToggleGuide not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn onToggleGuide(EffectGameObject* p0);
public:
    
private:
    [[deprecated("EditorUI::onToggleSelectedOrder not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn onToggleSelectedOrder(EffectGameObject* p0);
public:

    /**
     * @note[short] Windows: 0xca600
     * @note[short] Android
     */
    void onUngroupSticky(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xaabe0
     * @note[short] Android
     */
    void onUpdateDeleteFilter(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorUI::orderDownCustomItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn orderDownCustomItem(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorUI::orderUpCustomItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn orderUpCustomItem(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] Windows: 0xcb240
     * @note[short] Android
     */
    TodoReturn pasteObjects(gd::string p0, bool p1);
    
private:
    [[deprecated("EditorUI::playCircleAnim not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playCircleAnim(cocos2d::CCPoint p0, float p1, float p2);
public:
    
private:
    [[deprecated("EditorUI::playerTouchBegan not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playerTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("EditorUI::playerTouchEnded not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playerTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:

    /**
     * @note[short] Windows: 0xca240
     * @note[short] Android
     */
    TodoReturn playtestStopped();

    /**
     * @note[short] Windows: 0xc8720
     * @note[short] Android
     */
    TodoReturn positionIsInSnapped(cocos2d::CCPoint p0);
    
private:
    [[deprecated("EditorUI::positionWithoutOffset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn positionWithoutOffset(GameObject* p0);
public:
    
private:
    [[deprecated("EditorUI::processSelectObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processSelectObjects(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("EditorUI::processSmartObjectsFromType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processSmartObjectsFromType(int p0, cocos2d::CCArray* p1, cocos2d::CCArray* p2, cocos2d::CCArray* p3, cocos2d::CCArray* p4);
public:

    /**
     * @note[short] Windows: 0xa8a60
     * @note[short] Android
     */
    void recreateButtonTabs();

    /**
     * @note[short] Windows: 0xc9ba0
     * @note[short] Android
     */
    TodoReturn redoLastAction(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0xa8a10
     * @note[short] Android
     */
    void reloadCustomItems();

    /**
     * @note[short] Windows: 0xd7cf0
     * @note[short] Android
     */
    TodoReturn removeOffset(GameObject* p0);
    
private:
    [[deprecated("EditorUI::replaceGroupID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn replaceGroupID(GameObject* p0, int p1, int p2);
public:

    /**
     * @note[short] Windows: 0xcbc50
     * @note[short] Android
     */
    TodoReturn repositionObjectsToCenter(cocos2d::CCArray* p0, cocos2d::CCPoint p1, bool p2);

    /**
     * @note[short] Windows: 0xcca80
     * @note[short] Android
     */
    void resetObjectEditorValues(cocos2d::CCArray* p0);

    /**
     * @note[short] Windows: 0xd4990
     * @note[short] Android
     */
    TodoReturn resetSelectedObjectsColor();

    /**
     * @note[short] Windows: 0xa8b10
     * @note[short] Android
     */
    TodoReturn resetUI();

    /**
     * @note[short] Windows: 0xd6080
     * @note[short] Android
     */
    TodoReturn rotateObjects(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2);
    
private:
    [[deprecated("EditorUI::rotationforCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn rotationforCommand(EditCommand p0);
public:

    /**
     * @note[short] Windows: 0xd64b0
     * @note[short] Android
     */
    TodoReturn scaleObjects(cocos2d::CCArray* p0, float p1, float p2, cocos2d::CCPoint p3, ObjectScaleType p4);

    /**
     * @note[short] Windows: 0xc9750
     * @note[short] Android
     */
    TodoReturn selectAll();

    /**
     * @note[short] Windows: 0xc9890
     * @note[short] Android
     */
    TodoReturn selectAllWithDirection(bool p0);

    /**
     * @note[short] Windows: 0xcbf00
     * @note[short] Android
     */
    TodoReturn selectBuildTab(int p0);

    /**
     * @note[short] Windows: 0xc8aa0
     * @note[short] Android
     */
    TodoReturn selectObject(GameObject* p0, bool p1);

    /**
     * @note[short] Windows: 0xc8d40
     * @note[short] Android
     */
    TodoReturn selectObjects(cocos2d::CCArray* p0, bool p1);
    
private:
    [[deprecated("EditorUI::selectObjectsInRect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn selectObjectsInRect(cocos2d::CCRect p0);
public:

    /**
     * @note[short] Windows: 0xab240
     * @note[short] Android
     */
    TodoReturn setupCreateMenu();

    /**
     * @note[short] Windows: 0xa8cc0
     * @note[short] Android
     */
    TodoReturn setupDeleteMenu();
    
private:
    [[deprecated("EditorUI::setupEditMenu not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupEditMenu();
public:
    
private:
    [[deprecated("EditorUI::setupTransformControl not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupTransformControl();
public:

    /**
     * @note[short] Windows: 0xaa080
     * @note[short] Android
     */
    static bool shouldDeleteObject(GameObject* p0);
    
private:
    [[deprecated("EditorUI::shouldSnap not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shouldSnap(GameObject* p0);
public:
    
private:
    [[deprecated("EditorUI::showDeleteConfirmation not implemented")]]
    /**
     * @note[short] Android
     */
    void showDeleteConfirmation();
public:

    /**
     * @note[short] Windows: 0xd4460
     * @note[short] Android
     */
    void showLiveColorSelectForMode(int p0);
    
private:
    [[deprecated("EditorUI::showLiveColorSelectForModeSpecial not implemented")]]
    /**
     * @note[short] Android
     */
    void showLiveColorSelectForModeSpecial(int p0);
public:

    /**
     * @note[short] Windows: 0xca6c0
     * @note[short] Android
     */
    void showMaxBasicError();

    /**
     * @note[short] Windows: 0xca750
     * @note[short] Android
     */
    void showMaxCoinError();

    /**
     * @note[short] Windows: 0xca640
     * @note[short] Android
     */
    void showMaxError();

    /**
     * @note[short] Windows: 0xc9c10
     * @note[short] Android
     */
    void showUI(bool p0);

    /**
     * @note[short] Windows: 0xa6cd0
     * @note[short] Android
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
    
private:
    [[deprecated("EditorUI::smartTypeForKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn smartTypeForKey(int p0);
public:
    
private:
    [[deprecated("EditorUI::spriteFromObjectString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spriteFromObjectString(gd::string p0, bool p1, bool p2, int p3, cocos2d::CCArray* p4, cocos2d::CCArray* p5, GameObject* p6);
public:
    
private:
    [[deprecated("EditorUI::toggleDuplicateButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleDuplicateButton();
public:

    /**
     * @note[short] Windows: 0xd1680
     * @note[short] Android
     */
    TodoReturn toggleEditObjectButton();

    /**
     * @note[short] Windows: 0xc8900
     * @note[short] Android
     */
    TodoReturn toggleEnableRotate(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0xc8810
     * @note[short] Android
     */
    TodoReturn toggleFreeMove(cocos2d::CCObject* p0);
    
private:
    [[deprecated("EditorUI::toggleLockUI not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleLockUI(bool p0);
public:

    /**
     * @note[short] Windows: 0xa8c20
     * @note[short] Android
     */
    TodoReturn toggleMode(cocos2d::CCObject* p0);
    
private:
    [[deprecated("EditorUI::toggleObjectInfoLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleObjectInfoLabel();
public:

    /**
     * @note[short] Windows: 0xc8880
     * @note[short] Android
     */
    TodoReturn toggleSnap(cocos2d::CCObject* p0);
    
private:
    [[deprecated("EditorUI::toggleSpecialEditButtons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleSpecialEditButtons();
public:

    /**
     * @note[short] Windows: 0xa6080
     * @note[short] Android
     */
    TodoReturn toggleStickyControls(bool p0);

    /**
     * @note[short] Windows: 0xc87a0
     * @note[short] Android
     */
    TodoReturn toggleSwipe(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0xd5780
     * @note[short] Android
     */
    TodoReturn transformObject(GameObject* p0, EditCommand p1, bool p2);

    /**
     * @note[short] Windows: 0xd5360
     * @note[short] Android
     */
    TodoReturn transformObjectCall(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0xd5380
     * @note[short] Android
     */
    TodoReturn transformObjectCall(EditCommand p0);

    /**
     * @note[short] Windows: 0xd6e40
     * @note[short] Android
     */
    TodoReturn transformObjects(cocos2d::CCArray* p0, cocos2d::CCPoint p1, float p2, float p3, float p4, float p5, float p6, float p7);

    /**
     * @note[short] Windows: 0xd6d20
     * @note[short] Android
     */
    TodoReturn transformObjectsActive();

    /**
     * @note[short] Windows: 0xd6da0
     * @note[short] Android
     */
    TodoReturn transformObjectsReset();
    
private:
    [[deprecated("EditorUI::triggerSwipeMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerSwipeMode();
public:
    
private:
    [[deprecated("EditorUI::tryUpdateTimeMarkers not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryUpdateTimeMarkers();
public:

    /**
     * @note[short] Windows: 0xc9b40
     * @note[short] Android
     */
    TodoReturn undoLastAction(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0xa6310
     * @note[short] Android
     */
    TodoReturn updateButtons();

    /**
     * @note[short] Windows: 0xc7d90
     * @note[short] Android
     */
    TodoReturn updateCreateMenu(bool p0);
    
private:
    [[deprecated("EditorUI::updateDeleteButtons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDeleteButtons();
public:
    
private:
    [[deprecated("EditorUI::updateDeleteMenu not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDeleteMenu();
public:

    /**
     * @note[short] Windows: 0xcc030
     * @note[short] Android
     */
    TodoReturn updateEditButtonColor(int p0, cocos2d::ccColor3B p1);
    
private:
    [[deprecated("EditorUI::updateEditColorButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEditColorButton();
public:

    /**
     * @note[short] Windows: 0xd0c90
     * @note[short] Android
     */
    TodoReturn updateEditMenu();

    /**
     * @note[short] Windows: 0xa6f20
     * @note[short] Android
     */
    void updateGridNodeSize();
    
private:
    [[deprecated("EditorUI::updateGridNodeSize not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGridNodeSize(int p0);
public:
    
private:
    [[deprecated("EditorUI::updateGroupIDBtn2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGroupIDBtn2();
public:

    /**
     * @note[short] Windows: 0xd47d0
     * @note[short] Android
     */
    TodoReturn updateGroupIDLabel();

    /**
     * @note[short] Windows: 0xa70d0
     * @note[short] Android
     */
    TodoReturn updateObjectInfoLabel();

    /**
     * @note[short] Windows: 0xc9f80
     * @note[short] Android
     */
    TodoReturn updatePlaybackBtn();

    /**
     * @note[short] Windows: 0xa6ed0
     * @note[short] Android
     */
    TodoReturn updateSlider();
    
private:
    [[deprecated("EditorUI::updateSpecialUIElements not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSpecialUIElements();
public:

    /**
     * @note[short] Windows: 0xca3d0
     * @note[short] Android
     */
    void updateZoom(float p0);

    /**
     * @note[short] Windows: 0xa6e20
     * @note[short] Android
     */
    void valueFromXPos(float p0);
    
private:
    [[deprecated("EditorUI::xPosFromValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn xPosFromValue(float p0);
public:
    
private:
    [[deprecated("EditorUI::zoomGameLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn zoomGameLayer(bool p0);
public:

    /**
     * @note[short] Windows: 0xca2f0
     * @note[short] Android
     */
    TodoReturn zoomIn(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0xca360
     * @note[short] Android
     */
    TodoReturn zoomOut(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0xd80f0
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] Windows: 0xd8be0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0xd9160
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0xd9730
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x4c830
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    
private:
    [[deprecated("EditorUI::registerWithTouchDispatcher not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();
public:

    /**
     * @note[short] Windows: 0xcc020
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0xda300
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] Windows: 0xa3aa0
     * @note[short] Android
     */
    virtual TodoReturn getUI();

    /**
     * @note[short] Windows: 0xaa700
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);

    /**
     * @note[short] Windows: 0xaa650
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0xcc870
     * @note[short] Android
     */
    virtual TodoReturn updateTransformControl();

    /**
     * @note[short] Windows: 0xccc50
     * @note[short] Android
     */
    virtual TodoReturn transformChangeBegin();

    /**
     * @note[short] Out of line
     */
    virtual void transformChangeEnded();

    /**
     * @note[short] Windows: 0xa3ab0
     * @note[short] Android
     */
    virtual TodoReturn getTransformNode();

    /**
     * @note[short] Windows: 0xd6ba0
     * @note[short] Android
     */
    virtual TodoReturn transformScaleXChanged(float p0);

    /**
     * @note[short] Windows: 0xd6bc0
     * @note[short] Android
     */
    virtual TodoReturn transformScaleYChanged(float p0);

    /**
     * @note[short] Windows: 0xd6be0
     * @note[short] Android
     */
    virtual TodoReturn transformScaleXYChanged(float p0, float p1);

    /**
     * @note[short] Windows: 0xd6c10
     * @note[short] Android
     */
    virtual TodoReturn transformSkewXChanged(float p0);

    /**
     * @note[short] Windows: 0xd6c30
     * @note[short] Android
     */
    virtual TodoReturn transformSkewYChanged(float p0);

    /**
     * @note[short] Windows: 0xd6c50
     * @note[short] Android
     */
    virtual TodoReturn transformRotationXChanged(float p0);

    /**
     * @note[short] Windows: 0xd6c70
     * @note[short] Android
     */
    virtual TodoReturn transformRotationYChanged(float p0);

    /**
     * @note[short] Windows: 0xd6c90
     * @note[short] Android
     */
    virtual TodoReturn transformRotationChanged(float p0);

    /**
     * @note[short] Windows: 0xd6cc0
     * @note[short] Android
     */
    virtual TodoReturn transformResetRotation();

    /**
     * @note[short] Windows: 0xd6cf0
     * @note[short] Android
     */
    virtual TodoReturn transformRestoreRotation();

    /**
     * @note[short] Windows: 0xca080
     * @note[short] Android
     */
    virtual void songStateChanged();

    /**
     * @note[short] Windows: 0xd4930
     * @note[short] Android
     */
    virtual void colorSelectClosed(cocos2d::CCNode* p0);

    /**
     * @note[short] Windows: 0xdb210
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] Windows: 0xdb260
     * @note[short] Android
     */
    virtual void scrollWheel(float p0, float p1);

    /**
     * @note[short] Windows: 0xd84d0
     * @note[short] Android
     */
    virtual TodoReturn angleChangeBegin();

    /**
     * @note[short] Out of line
     */
    virtual void angleChangeEnded();

    /**
     * @note[short] Windows: 0xd84e0
     * @note[short] Android
     */
    virtual TodoReturn angleChanged(float p0);

    /**
     * @note[short] Windows: 0xcc380
     * @note[short] Android
     */
    virtual TodoReturn updateScaleControl();

    /**
     * @note[short] Windows: 0xccc60
     * @note[short] Android
     */
    virtual TodoReturn anchorPointMoved(cocos2d::CCPoint p0);

    /**
     * @note[short] Windows: 0xcc4b0
     * @note[short] Android
     */
    virtual TodoReturn scaleChangeBegin();

    /**
     * @note[short] Out of line
     */
    virtual void scaleChangeEnded();

    /**
     * @note[short] Windows: 0xcc4c0
     * @note[short] Android
     */
    virtual TodoReturn scaleXChanged(float p0);

    /**
     * @note[short] Windows: 0xcc540
     * @note[short] Android
     */
    virtual TodoReturn scaleYChanged(float p0);

    /**
     * @note[short] Windows: 0xcc5c0
     * @note[short] Android
     */
    virtual void scaleXYChanged(float p0, float p1);
    GEODE_PAD(96);
    float m_unk1b8;
    float m_unk1bc;
    GEODE_PAD(4);
    EditButtonBar* m_buttonBar;
    GEODE_PAD(4);
    cocos2d::CCArray* m_unk1cc;
    float m_unk1d0;
    GEODE_PAD(48);
    cocos2d::CCLabelBMFont* m_objectInfoLabel;
    GJRotationControl* m_rotationControl;
    GEODE_PAD(12);
    GJScaleControl* m_scaleControl;
    GJTransformControl* m_transformControl;
    cocos2d::CCNode* m_unk220;
    cocos2d::CCNode* m_unk224;
    cocos2d::CCDictionary* m_editButtonDict;
    EditButtonBar* m_createButtonBar;
    EditButtonBar* m_editButtonBar;
    Slider* m_positionSlider;
    float m_unk238;
    float m_unk23c;
    float m_unk240;
    float m_unk244;
    GEODE_PAD(16);
    cocos2d::CCArray* m_unk258;
    GEODE_PAD(8);
    cocos2d::CCArray* m_selectedObjects;
    cocos2d::CCMenu* m_deleteMenu;
    cocos2d::CCArray* m_unknownArray4;
    CCMenuItemSpriteExtra* m_deleteModeBtn;
    CCMenuItemSpriteExtra* m_buildModeBtn;
    CCMenuItemSpriteExtra* m_editModeBtn;
    CCMenuItemSpriteExtra* m_swipeBtn;
    CCMenuItemSpriteExtra* m_freeMoveBtn;
    CCMenuItemSpriteExtra* m_deselectBtn;
    CCMenuItemSpriteExtra* m_snapBtn;
    CCMenuItemSpriteExtra* m_rotateBtn;
    CCMenuItemSpriteExtra* m_playbackBtn;
    CCMenuItemSpriteExtra* m_playtestBtn;
    CCMenuItemSpriteExtra* m_playtestStopBtn;
    CCMenuItemSpriteExtra* m_trashBtn;
    CCMenuItemSpriteExtra* m_linkBtn;
    CCMenuItemSpriteExtra* m_unlinkBtn;
    CCMenuItemSpriteExtra* m_undoBtn;
    CCMenuItemSpriteExtra* m_redoBtn;
    CCMenuItemSpriteExtra* m_editObjectBtn;
    CCMenuItemSpriteExtra* m_editGroupBtn;
    CCMenuItemSpriteExtra* m_editHSVBtn;
    CCMenuItemSpriteExtra* m_editSpecialBtn;
    GEODE_PAD(4);
    CCMenuItemSpriteExtra* m_copyPasteBtn;
    CCMenuItemSpriteExtra* m_copyBtn;
    CCMenuItemSpriteExtra* m_pasteBtn;
    CCMenuItemSpriteExtra* m_copyValuesBtn;
    CCMenuItemSpriteExtra* m_pasteStateBtn;
    CCMenuItemSpriteExtra* m_pasteColorBtn;
    CCMenuItemSpriteExtra* m_goToLayerBtn;
    cocos2d::CCArray* m_createButtonBars;
    cocos2d::CCMenu* m_tabsMenu;
    cocos2d::CCArray* m_tabsArray;
    cocos2d::CCSprite* m_idkSprite0;
    cocos2d::CCSprite* m_idkSprite1;
    CCMenuItemSpriteExtra* m_button27;
    CCMenuItemSpriteExtra* m_button28;
    CCMenuItemSpriteExtra* m_deleteFilterNone;
    CCMenuItemSpriteExtra* m_deleteFilterStatic;
    CCMenuItemSpriteExtra* m_deleteFilterDetails;
    CCMenuItemSpriteExtra* m_deleteFilterCustom;
    cocos2d::CCLabelBMFont* m_currentLayerLabel;
    CCMenuItemSpriteExtra* m_layerNextBtn;
    CCMenuItemSpriteExtra* m_layerPrevBtn;
    CCMenuItemSpriteExtra* m_goToBaseBtn;
    ButtonSprite* m_unk31c;
    ButtonSprite* m_unk320;
    int m_selectedCreateObjectID;
    GEODE_PAD(8);
    cocos2d::CCArray* m_createButtonArray;
    cocos2d::CCArray* m_customObjectButtonArray;
    cocos2d::CCArray* m_unknownArray9;
    int m_selectedMode;
    LevelEditorLayer* m_editorLayer;
    cocos2d::CCPoint m_swipeStart;
    cocos2d::CCPoint m_swipeEnd;
    GEODE_PAD(8);
    cocos2d::CCPoint m_lastTouchPoint;
    cocos2d::CCPoint m_cameraTest;
    cocos2d::CCPoint m_clickAtPosition;
    GameObject* m_selectedObject;
    void* m_unk530;
    void* m_unk538;
    void* m_unk540;
    int m_selectedTab;
    GEODE_PAD(44);
    bool m_unk3b4;
    GEODE_PAD(8);
};
