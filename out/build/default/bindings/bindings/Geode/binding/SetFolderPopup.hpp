#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetIDPopup.hpp"
#include "SetTextPopupDelegate.hpp"

class SetFolderPopup : public SetIDPopup, public SetTextPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "SetFolderPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetFolderPopup, SetIDPopup)

    /**
     * @note[short] Windows: 0x210a80
     * @note[short] Android
     */
    static SetFolderPopup* create(int p0, bool p1, gd::string p2);

    /**
     * @note[short] Windows: 0x210b50
     * @note[short] Android
     */
    bool init(int p0, bool p1, gd::string p2);
    
private:
    [[deprecated("SetFolderPopup::onSetFolderName not implemented")]]
    /**
     * @note[short] Android
     */
    void onSetFolderName(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x210d90
     * @note[short] Android
     */
    virtual void valueChanged();

    /**
     * @note[short] Windows: 0x210ff0
     * @note[short] Android
     */
    virtual void setTextPopupClosed(SetTextPopup* p0, gd::string p1);
};
