#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LevelTools {
public:
    static constexpr auto CLASS_NAME = "LevelTools";

    /**
     * @note[short] Windows: 0x2737c0
     * @note[short] Android
     */
    static int artistForAudio(int p0);

    /**
     * @note[short] Windows: 0x2753e0
     * @note[short] Android
     */
    static gd::string base64DecodeString(gd::string p0);

    /**
     * @note[short] Windows: 0x275360
     * @note[short] Android
     */
    static gd::string base64EncodeString(gd::string p0);
    
private:
    [[deprecated("LevelTools::createStarPackDict not implemented")]]
    /**
     * @note[short] Android
     */
    static cocos2d::CCDictionary* createStarPackDict();
public:

    /**
     * @note[short] Windows: 0x274010
     * @note[short] Android
     */
    static gd::string fbURLForArtist(int p0);
    
private:
    [[deprecated("LevelTools::getAudioBPM not implemented")]]
    /**
     * @note[short] Android
     */
    static int getAudioBPM(int p0);
public:

    /**
     * @note[short] Windows: 0x273430
     * @note[short] Android
     */
    static gd::string getAudioFileName(int p0);

    /**
     * @note[short] Windows: 0x274140
     * @note[short] Android
     */
    static gd::string getAudioString(int p0);

    /**
     * @note[short] Windows: 0x273090
     * @note[short] Android
     */
    static gd::string getAudioTitle(int p0);
    
private:
    [[deprecated("LevelTools::getLastGameplayReversed not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn getLastGameplayReversed();
public:
    
private:
    [[deprecated("LevelTools::getLastGameplayRotated not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn getLastGameplayRotated();
public:
    
private:
    [[deprecated("LevelTools::getLastTimewarp not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn getLastTimewarp();
public:

    /**
     * @note[short] Windows: 0x2725d0
     * @note[short] Android
     */
    static GJGameLevel* getLevel(int p0, bool p1);
    
private:
    [[deprecated("LevelTools::getLevelList not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn getLevelList();
public:

    /**
     * @note[short] Windows: 0x275040
     * @note[short] Android
     */
    static SongInfoObject* getSongObject(int p0);
    
private:
    [[deprecated("LevelTools::moveTriggerObjectsToArray not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn moveTriggerObjectsToArray(cocos2d::CCArray* p0, cocos2d::CCDictionary* p1, int p2);
public:

    /**
     * @note[short] Windows: 0x2738c0
     * @note[short] Android
     */
    static gd::string nameForArtist(int p0);

    /**
     * @note[short] Windows: 0x273d90
     * @note[short] Android
     */
    static gd::string ngURLForArtist(int p0);
    
private:
    [[deprecated("LevelTools::offsetBPMForTrack not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn offsetBPMForTrack(int p0);
public:
    
private:
    [[deprecated("LevelTools::posForTime not implemented")]]
    /**
     * @note[short] Android
     */
    static float posForTime(float p0, cocos2d::CCArray* p1, int p2, bool p3, int& p4);
public:

    /**
     * @note[short] Windows: 0x274a60
     * @note[short] Android
     */
    static float posForTimeInternal(float p0, cocos2d::CCArray* p1, int p2, bool p3, bool p4, bool p5, int& p6, int p7);

    /**
     * @note[short] Windows: 0x275600
     * @note[short] Android
     */
    static TodoReturn sortChannelOrderObjects(cocos2d::CCArray* p0, cocos2d::CCDictionary* p1, bool p2);

    /**
     * @note[short] Windows: 0x275820
     * @note[short] Android
     */
    static TodoReturn sortSpeedObjects(cocos2d::CCArray* p0, GJBaseGameLayer* p1);

    /**
     * @note[short] Windows: 0x2743d0
     * @note[short] Android
     */
    static float timeForPos(cocos2d::CCPoint p0, cocos2d::CCArray* p1, int p2, int p3, int p4, bool p5, bool p6, bool p7, bool p8, int p9);
    
private:
    [[deprecated("LevelTools::toggleDebugLogging not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn toggleDebugLogging(bool p0);
public:

    /**
     * @note[short] Windows: 0x273a00
     * @note[short] Android
     */
    static gd::string urlForAudio(int p0);

    /**
     * @note[short] Windows: 0x274380
     * @note[short] Android
     */
    static TodoReturn valueForSpeedMod(int p0);

    /**
     * @note[short] Windows: 0x2751d0
     * @note[short] Android
     */
    static bool verifyLevelIntegrity(gd::string p0, int p1);

    /**
     * @note[short] Windows: 0x273ed0
     * @note[short] Android
     */
    static gd::string ytURLForArtist(int p0);
};
