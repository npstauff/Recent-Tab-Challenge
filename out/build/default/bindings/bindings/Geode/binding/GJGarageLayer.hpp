#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TextInputDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "GameRateDelegate.hpp"
#include "ListButtonBarDelegate.hpp"
#include "DialogDelegate.hpp"
#include "CharacterColorDelegate.hpp"

class GJGarageLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public GameRateDelegate, public ListButtonBarDelegate, public DialogDelegate, public CharacterColorDelegate {
public:
    static constexpr auto CLASS_NAME = "GJGarageLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJGarageLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("GJGarageLayer::achievementForUnlock not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn achievementForUnlock(int p0, UnlockType p1);
public:

    /**
     * @note[short] Windows: 0x1f3420
     * @note[short] Android
     */
    gd::string descriptionForUnlock(int p0, UnlockType p1);
    
private:
    [[deprecated("GJGarageLayer::getItems not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getItems(IconType p0);
public:

    /**
     * @note[short] Windows: 0x1f2310
     * @note[short] Android
     */
    cocos2d::CCArray getItems(int p0, int p1, IconType p2, int p3);
    
private:
    [[deprecated("GJGarageLayer::getLockFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getLockFrame(int p0, UnlockType p1);
public:

    /**
     * @note[short] Windows: 0x1eedc0
     * @note[short] Android
     */
    static GJGarageLayer* node();

    /**
     * @note[short] Windows: 0x1f1bf0
     * @note[short] Android
     */
    void onArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1f3c70
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1f0c90
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1f1c80
     * @note[short] Android
     */
    void onNavigate(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1f3bb0
     * @note[short] Android
     */
    void onPaint(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1f2d30
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1f1cb0
     * @note[short] Android
     */
    void onSelectTab(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1f3b90
     * @note[short] Android
     */
    void onShards(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1f3c00
     * @note[short] Android
     */
    void onShop(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1f3110
     * @note[short] Android
     */
    void onSpecial(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1f3050
     * @note[short] Android
     */
    void onToggleItem(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1f3a00
     * @note[short] Android
     */
    void playRainbowEffect();
    
private:
    [[deprecated("GJGarageLayer::playShadowEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playShadowEffect();
public:
	inline static cocos2d::CCScene* scene() {
		auto scene = cocos2d::CCScene::create();
		scene->addChild(GJGarageLayer::node());
		return scene;
	}

    /**
     * @note[short] Windows: 0x1f1cd0
     * @note[short] Android
     */
    void selectTab(IconType p0);

    /**
     * @note[short] Windows: 0x1f1170
     * @note[short] Android
     */
    void setupIconSelect();

    /**
     * @note[short] Windows: 0x1f1d70
     * @note[short] Android
     */
    void setupPage(int p0, IconType p1);

    /**
     * @note[short] Windows: 0x1f2590
     * @note[short] Android
     */
    void setupSpecialPage();
    
private:
    [[deprecated("GJGarageLayer::showUnlockPopupNew not implemented")]]
    /**
     * @note[short] Android
     */
    void showUnlockPopupNew(int p0, UnlockType p1);
public:

    /**
     * @note[short] Windows: 0x1f32f0
     * @note[short] Android
     */
    gd::string titleForUnlock(int p0, UnlockType p1);
    
private:
    [[deprecated("GJGarageLayer::toggleGlow not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleGlow();
public:

    /**
     * @note[short] Windows: 0x1f3180
     * @note[short] Android
     */
    void updatePlayerColors();
    
private:
    [[deprecated("GJGarageLayer::updatePlayerName not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePlayerName(char const* p0);
public:

    /**
     * @note[short] Windows: 0x1ef250
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x1f3de0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x1f0e40
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x1f0f90
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);
    
private:
    [[deprecated("GJGarageLayer::textChanged not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
public:

    /**
     * @note[short] Windows: 0x1f32a0
     * @note[short] Android
     */
    virtual void listButtonBarSwitchedPage(ListButtonBar* p0, int p1);

    /**
     * @note[short] Windows: 0x1f32b0
     * @note[short] Android
     */
    virtual void showUnlockPopup(int p0, UnlockType p1);

    /**
     * @note[short] Windows: 0x1f3880
     * @note[short] Android
     */
    virtual void updateRate();

    /**
     * @note[short] Windows: 0x1f3570
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0x1f36a0
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);

    /**
     * @note[short] Windows: 0x1f3160
     * @note[short] Android
     */
    virtual void playerColorChanged();
};
