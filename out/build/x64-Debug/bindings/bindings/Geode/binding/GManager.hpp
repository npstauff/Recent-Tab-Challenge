#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GManager, cocos2d::CCNode)
    
private:
    [[deprecated("GManager::getCompressedSaveString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCompressedSaveString();
public:
    
private:
    [[deprecated("GManager::getSaveString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSaveString();
public:
    
private:
    [[deprecated("GManager::load not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn load();
public:
    
private:
    [[deprecated("GManager::loadDataFromFile not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadDataFromFile(gd::string const& p0);
public:
    
private:
    [[deprecated("GManager::loadFromCompressedString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadFromCompressedString(gd::string& p0);
public:
    
private:
    [[deprecated("GManager::loadFromString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadFromString(gd::string& p0);
public:
	inline void save() {
		saveGMTo(m_fileName);
	}
    
private:
    [[deprecated("GManager::saveData not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn saveData(DS_Dictionary* p0, gd::string p1);
public:

    /**
     * @note[short] Windows: 0x47580
     * @note[short] Android
     */
    TodoReturn saveGMTo(gd::string p0);
    
private:
    [[deprecated("GManager::tryLoadData not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryLoadData(DS_Dictionary* p0, gd::string const& p1);
public:
	inline GManager() {}
    
private:
    [[deprecated("GManager::init not implemented")]]
    /**
     * @note[short] Android
     */
    virtual bool init();
public:

    /**
     * @note[short] Windows: 0x472c0
     * @note[short] Android
     */
    virtual TodoReturn setup();
    
private:
    [[deprecated("GManager::encodeDataTo not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void encodeDataTo(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GManager::dataLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void dataLoaded(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GManager::firstLoad not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void firstLoad();
public:
    gd::string m_fileName;
    bool m_setup;
    bool m_saved;
    bool m_quickSave;
};
