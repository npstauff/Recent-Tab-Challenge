#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJItemIcon : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "GJItemIcon";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJItemIcon, cocos2d::CCSprite)

    /**
     * @note[short] Windows: 0x1f5010
     * @note[short] Android
     */
    static GJItemIcon* create(UnlockType p0, int p1, cocos2d::ccColor3B p2, cocos2d::ccColor3B p3, bool p4, bool p5, bool p6, cocos2d::ccColor3B p7);

    /**
     * @note[short] Windows: 0x1f5920
     * @note[short] Android
     */
    void changeToLockedState(float p0);
	inline static GJItemIcon* createBrowserItem(UnlockType unlockType, int itemID) {
		return GJItemIcon::create(unlockType, itemID, {0xAF, 0xAF, 0xAF}, {0xFF, 0xFF, 0xFF}, false, true, true, {0xFF, 0xFF, 0xFF});
	}
    
private:
    [[deprecated("GJItemIcon::createStoreItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createStoreItem(UnlockType p0, int p1, bool p2, cocos2d::ccColor3B p3);
public:

    /**
     * @note[short] Windows: 0x1f5720
     * @note[short] Android
     */
    void darkenStoreItem(cocos2d::ccColor3B p0);
    
private:
    [[deprecated("GJItemIcon::darkenStoreItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn darkenStoreItem(ShopType p0);
public:

    /**
     * @note[short] Windows: 0x1f50f0
     * @note[short] Android
     */
    bool init(UnlockType p0, int p1, cocos2d::ccColor3B p2, cocos2d::ccColor3B p3, bool p4, bool p5, bool p6, cocos2d::ccColor3B p7);

    /**
     * @note[short] Windows: 0x1f59e0
     * @note[short] Android
     */
    float scaleForType(UnlockType p0);

    /**
     * @note[short] Windows: 0x1f5870
     * @note[short] Android
     */
    TodoReturn toggleEnabledState(bool p0);
    
private:
    [[deprecated("GJItemIcon::unlockedColorForType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unlockedColorForType(int p0);
public:

    /**
     * @note[short] Windows: 0x1f55e0
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);
};
