#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCBlockLayer.hpp"
#include "FLAlertLayerProtocol.hpp"

class EditorPauseLayer : public CCBlockLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "EditorPauseLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorPauseLayer, CCBlockLayer)

    /**
     * @note[short] Windows: 0x9ff80
     * @note[short] Android
     */
    static EditorPauseLayer* create(LevelEditorLayer* p0);

    /**
     * @note[short] Windows: 0x242150
     * @note[short] Android
     */
    TodoReturn doResetUnused();

    /**
     * @note[short] Windows: 0xa0020
     * @note[short] Android
     */
    bool init(LevelEditorLayer* p0);
    
private:
    [[deprecated("EditorPauseLayer::onAlignX not implemented")]]
    /**
     * @note[short] Android
     */
    void onAlignX(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorPauseLayer::onAlignY not implemented")]]
    /**
     * @note[short] Android
     */
    void onAlignY(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorPauseLayer::onBuildHelper not implemented")]]
    /**
     * @note[short] Android
     */
    void onBuildHelper(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorPauseLayer::onCopyWColor not implemented")]]
    /**
     * @note[short] Android
     */
    void onCopyWColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorPauseLayer::onCreateExtras not implemented")]]
    /**
     * @note[short] Android
     */
    void onCreateExtras(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xa2040
     * @note[short] Android
     */
    void onCreateLoop(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorPauseLayer::onCreateTemplate not implemented")]]
    /**
     * @note[short] Android
     */
    void onCreateTemplate(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xa2ef0
     * @note[short] Android
     */
    void onExitEditor(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa2f50
     * @note[short] Android
     */
    void onExitNoSave(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorPauseLayer::onHelp not implemented")]]
    /**
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorPauseLayer::onKeybindings not implemented")]]
    /**
     * @note[short] Android
     */
    void onKeybindings(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorPauseLayer::onNewGroupX not implemented")]]
    /**
     * @note[short] Android
     */
    void onNewGroupX(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorPauseLayer::onNewGroupY not implemented")]]
    /**
     * @note[short] Android
     */
    void onNewGroupY(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorPauseLayer::onOptions not implemented")]]
    /**
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorPauseLayer::onPasteWColor not implemented")]]
    /**
     * @note[short] Android
     */
    void onPasteWColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorPauseLayer::onReGroup not implemented")]]
    /**
     * @note[short] Android
     */
    void onReGroup(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xa1f30
     * @note[short] Android
     */
    void onResetUnusedColors(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa2640
     * @note[short] Android
     */
    void onResume(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa2e40
     * @note[short] Android
     */
    void onSave(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa2eb0
     * @note[short] Android
     */
    void onSaveAndExit(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa2c90
     * @note[short] Android
     */
    void onSaveAndPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa20e0
     * @note[short] Android
     */
    void onSelectAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa2100
     * @note[short] Android
     */
    void onSelectAllLeft(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorPauseLayer::onSelectAllRight not implemented")]]
    /**
     * @note[short] Android
     */
    void onSelectAllRight(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xa25a0
     * @note[short] Android
     */
    void onSong(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorPauseLayer::onUnlockAllLayers not implemented")]]
    /**
     * @note[short] Android
     */
    void onUnlockAllLayers(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xa2cf0
     * @note[short] Android
     */
    TodoReturn playStep2();

    /**
     * @note[short] Windows: 0xa2dc0
     * @note[short] Android
     */
    TodoReturn playStep3();

    /**
     * @note[short] Windows: 0xa26c0
     * @note[short] Android
     */
    void saveLevel();
    
private:
    [[deprecated("EditorPauseLayer::toggleDebugDraw not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleDebugDraw(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleEditorBackground not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleEditorBackground(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleEditorColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleEditorColorMode(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleEditorGrid not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleEditorGrid(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleEditorGround not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleEditorGround(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleEffectDuration not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleEffectDuration(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleEffectLines not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleEffectLines(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleFollowPlayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleFollowPlayer(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleGridOnTop not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleGridOnTop(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleHideInvisible not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleHideInvisible(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleIgnoreDamage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleIgnoreDamage(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::togglePlaytestMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn togglePlaytestMusic(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::togglePreviewAnim not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn togglePreviewAnim(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::togglePreviewParticles not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn togglePreviewParticles(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::togglePreviewShaders not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn togglePreviewShaders(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleRecordOrder not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleRecordOrder(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleSelectFilter not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleSelectFilter(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleShowObjectInfo not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleShowObjectInfo(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] Windows: 0xa1e70
     * @note[short] Android
     */
    TodoReturn uncheckAllPortals(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0xa25d0
     * @note[short] Android
     */
    TodoReturn updateSongButton();

    /**
     * @note[short] Windows: 0xa3070
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0xa3080
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] Windows: 0xa0730
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] Windows: 0xa2fc0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    bool m_saved;
    CCMenuItemSpriteExtra* m_guidelinesOffButton;
    CCMenuItemSpriteExtra* m_guidelinesOnButton;
    LevelEditorLayer* m_editorLayer;
};
