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

class FindObjectPopup : public SetIDPopup {
public:
    static constexpr auto CLASS_NAME = "FindObjectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FindObjectPopup, SetIDPopup)

    /**
     * @note[short] Windows: 0x210890
     * @note[short] Android
     */
    static FindObjectPopup* create();
    
private:
    [[deprecated("FindObjectPopup::onFindObjectID not implemented")]]
    /**
     * @note[short] Android
     */
    void onFindObjectID(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0x210930
     * @note[short] Android
     */
    virtual bool init();
};
