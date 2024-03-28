#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class FMODAudioEngine : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "FMODAudioEngine";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(FMODAudioEngine, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x32bf0
     * @note[short] Android
     */
    static FMODAudioEngine* sharedEngine();
    
private:
    [[deprecated("FMODAudioEngine::activateQueuedMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activateQueuedMusic(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::channelForChannelID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn channelForChannelID(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::channelForUniqueID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn channelForUniqueID(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::channelIDForUniqueID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn channelIDForUniqueID(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::channelLinkSound not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn channelLinkSound(int p0, FMODSound* p1);
public:
    
private:
    [[deprecated("FMODAudioEngine::channelStopped not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn channelStopped(FMOD::Channel* p0, bool p1);
public:
    
private:
    [[deprecated("FMODAudioEngine::channelUnlinkSound not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn channelUnlinkSound(int p0);
public:

    /**
     * @note[short] Windows: 0x338a0
     * @note[short] Android
     */
    void clearAllAudio();
    
private:
    [[deprecated("FMODAudioEngine::countActiveEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn countActiveEffects();
public:
    
private:
    [[deprecated("FMODAudioEngine::countActiveMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn countActiveMusic();
public:

    /**
     * @note[short] Windows: 0x3aea0
     * @note[short] Android
     */
    TodoReturn createStream(gd::string p0);
    
private:
    [[deprecated("FMODAudioEngine::disableMetering not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn disableMetering();
public:
    
private:
    [[deprecated("FMODAudioEngine::enableMetering not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn enableMetering();
public:
    
private:
    [[deprecated("FMODAudioEngine::fadeInBackgroundMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn fadeInBackgroundMusic(float p0);
public:

    /**
     * @note[short] Windows: 0x3a740
     * @note[short] Android
     */
    TodoReturn fadeInMusic(float p0, int p1);
    
private:
    [[deprecated("FMODAudioEngine::fadeOutMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn fadeOutMusic(float p0, int p1);
public:

    /**
     * @note[short] Windows: 0x3a940
     * @note[short] Android
     */
    TodoReturn getActiveMusic(int p0);
    
private:
    [[deprecated("FMODAudioEngine::getActiveMusicChannel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getActiveMusicChannel(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::getBackgroundMusicVolume not implemented")]]
    /**
     * @note[short] Android
     */
    float getBackgroundMusicVolume();
public:

    /**
     * @note[short] Windows: 0x35240
     * @note[short] Android
     */
    TodoReturn getChannelGroup(int p0, bool p1);
	inline float getEffectsVolume() {
		return m_sfxVolume;
	}

    /**
     * @note[short] Windows: 0x3b0f0
     * @note[short] Android
     */
    TodoReturn getFMODStatus(int p0);
    
private:
    [[deprecated("FMODAudioEngine::getMeteringValue not implemented")]]
    /**
     * @note[short] Android
     */
    float getMeteringValue();
public:
    
private:
    [[deprecated("FMODAudioEngine::getMusicChannelID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMusicChannelID(int p0);
public:

    /**
     * @note[short] Windows: 0x3a570
     * @note[short] Android
     */
    TodoReturn getMusicLengthMS(int p0);
    
private:
    [[deprecated("FMODAudioEngine::getMusicTime not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMusicTime(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::getMusicTimeMS not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMusicTimeMS(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::getNextChannelID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getNextChannelID();
public:
    
private:
    [[deprecated("FMODAudioEngine::getTweenContainer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTweenContainer(AudioTargetType p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::isChannelStopping not implemented")]]
    /**
     * @note[short] Android
     */
    bool isChannelStopping(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::isEffectLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    bool isEffectLoaded(gd::string p0);
public:

    /**
     * @note[short] Windows: 0x383e0
     * @note[short] Android
     */
    bool isMusicPlaying(gd::string p0, int p1);
    
private:
    [[deprecated("FMODAudioEngine::isMusicPlaying not implemented")]]
    /**
     * @note[short] Android
     */
    bool isMusicPlaying(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::isSoundReady not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSoundReady(FMOD::Sound* p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::lengthForSound not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn lengthForSound(gd::string p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::loadAndPlayMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadAndPlayMusic(gd::string p0, unsigned int p1, int p2);
public:

    /**
     * @note[short] Windows: 0x34000
     * @note[short] Android
     */
    TodoReturn loadAudioState(FMODAudioState& p0);

    /**
     * @note[short] Windows: 0x38740
     * @note[short] Android
     */
    TodoReturn loadMusic(gd::string p0, float p1, float p2, float p3, bool p4, int p5, int p6);

    /**
     * @note[short] Windows: 0x386a0
     * @note[short] Android
     */
    TodoReturn loadMusic(gd::string p0);
    
private:
    [[deprecated("FMODAudioEngine::pauseAllAudio not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pauseAllAudio();
public:
    
private:
    [[deprecated("FMODAudioEngine::pauseAllEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pauseAllEffects();
public:

    /**
     * @note[short] Windows: 0x38350
     * @note[short] Android
     */
    TodoReturn pauseAllMusic();
    
private:
    [[deprecated("FMODAudioEngine::pauseEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pauseEffect(unsigned int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::pauseMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pauseMusic(int p0);
public:

    /**
     * @note[short] Windows: 0x350e0
     * @note[short] Android
     */
    TodoReturn pitchForIdx(int p0);

    /**
     * @note[short] Windows: 0x356e0
     * @note[short] Android
     */
    void playEffect(gd::string p0, float p1, float p2, float p3);

    /**
     * @note[short] Windows: 0x35590
     * @note[short] Android
     */
    void playEffect(gd::string p0);

    /**
     * @note[short] Windows: 0x357b0
     * @note[short] Android
     */
    TodoReturn playEffectAdvanced(gd::string p0, float p1, float p2, float p3, float p4, bool p5, bool p6, int p7, int p8, int p9, int p10, bool p11, int p12, bool p13, bool p14, int p15, int p16, float p17, int p18);

    /**
     * @note[short] Windows: 0x35620
     * @note[short] Android
     */
    TodoReturn playEffectAsync(gd::string p0);

    /**
     * @note[short] Windows: 0x385b0
     * @note[short] Android
     */
    TodoReturn playMusic(gd::string p0, bool p1, float p2, int p3);

    /**
     * @note[short] Windows: 0x37a10
     * @note[short] Android
     */
    TodoReturn preloadEffect(gd::string p0);
    
private:
    [[deprecated("FMODAudioEngine::preloadEffectAsync not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preloadEffectAsync(gd::string p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::preloadMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preloadMusic(gd::string p0, bool p1, int p2);
public:
    
private:
    [[deprecated("FMODAudioEngine::printResult not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn printResult(FMOD_RESULT p0);
public:

    /**
     * @note[short] Windows: 0x391f0
     * @note[short] Android
     */
    TodoReturn queuedEffectFinishedLoading(gd::string p0);

    /**
     * @note[short] Windows: 0x4361f0
     * @note[short] Android
     */
    TodoReturn queuePlayEffect(gd::string p0, float p1, float p2, float p3, float p4, bool p5, bool p6, int p7, int p8, int p9, int p10, bool p11, int p12, bool p13, int p14, float p15, int p16);
    
private:
    [[deprecated("FMODAudioEngine::queueStartMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn queueStartMusic(gd::string p0, float p1, float p2, float p3, bool p4, int p5, int p6, int p7, int p8, int p9, bool p10, int p11, bool p12);
public:

    /**
     * @note[short] Windows: 0x36410
     * @note[short] Android
     */
    TodoReturn registerChannel(FMOD::Channel* p0, int p1, int p2);

    /**
     * @note[short] Windows: 0x3b040
     * @note[short] Android
     */
    void releaseRemovedSounds();
    
private:
    [[deprecated("FMODAudioEngine::resumeAllAudio not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resumeAllAudio();
public:
    
private:
    [[deprecated("FMODAudioEngine::resumeAllEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resumeAllEffects();
public:

    /**
     * @note[short] Windows: 0x383a0
     * @note[short] Android
     */
    TodoReturn resumeAllMusic();
    
private:
    [[deprecated("FMODAudioEngine::resumeAudio not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resumeAudio();
public:
    
private:
    [[deprecated("FMODAudioEngine::resumeEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resumeEffect(unsigned int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::resumeMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resumeMusic(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::reverbToString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reverbToString(FMODReverbPreset p0);
public:

    /**
     * @note[short] Windows: 0x33b80
     * @note[short] Android
     */
    TodoReturn saveAudioState(FMODAudioState& p0);
    
private:
    [[deprecated("FMODAudioEngine::setBackgroundMusicVolume not implemented")]]
    /**
     * @note[short] Android
     */
    void setBackgroundMusicVolume(float p0);
public:

    /**
     * @note[short] Windows: 0x378b0
     * @note[short] Android
     */
    void setChannelPitch(int p0, AudioTargetType p1, float p2);

    /**
     * @note[short] Windows: 0x373b0
     * @note[short] Android
     */
    void setChannelVolume(int p0, AudioTargetType p1, float p2);

    /**
     * @note[short] Windows: 0x37630
     * @note[short] Android
     */
    void setChannelVolumeMod(int p0, AudioTargetType p1, float p2);
    
private:
    [[deprecated("FMODAudioEngine::setEffectsVolume not implemented")]]
    /**
     * @note[short] Android
     */
    void setEffectsVolume(float p0);
public:

    /**
     * @note[short] Windows: 0x3a3f0
     * @note[short] Android
     */
    void setMusicTimeMS(unsigned int p0, bool p1, int p2);

    /**
     * @note[short] Windows: 0x32c70
     * @note[short] Android
     */
    TodoReturn setup();

    /**
     * @note[short] Windows: 0x32f90
     * @note[short] Android
     */
    TodoReturn setupAudioEngine();

    /**
     * @note[short] Windows: 0x33830
     * @note[short] Android
     */
    TodoReturn start();

    /**
     * @note[short] Windows: 0x38b90
     * @note[short] Android
     */
    TodoReturn startMusic(int p0, int p1, int p2, int p3, bool p4, int p5);
    
private:
    [[deprecated("FMODAudioEngine::stop not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stop();
public:

    /**
     * @note[short] Windows: 0x37f90
     * @note[short] Android
     */
    void stopAllEffects();

    /**
     * @note[short] Windows: 0x38310
     * @note[short] Android
     */
    void stopAllMusic();
    
private:
    [[deprecated("FMODAudioEngine::stopAndGetFade not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopAndGetFade(FMOD::Channel* p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopAndRemoveMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopAndRemoveMusic(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopChannel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopChannel(FMOD::Channel* p0, bool p1, float p2);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopChannel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopChannel(int p0, AudioTargetType p1, bool p2, float p3);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopChannel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopChannel(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopChannelTween not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopChannelTween(int p0, AudioTargetType p1, AudioModType p2);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopChannelTweens not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopChannelTweens(int p0, AudioTargetType p1);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopMusic(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopMusicNotInSet not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopMusicNotInSet(std::unordered_set<int, std::hash<int>, std::equal_to<int>, std::allocator<int> >& p0);
public:

    /**
     * @note[short] Windows: 0x37c00
     * @note[short] Android
     */
    TodoReturn storeEffect(FMOD::Sound* p0, gd::string p1);
    
private:
    [[deprecated("FMODAudioEngine::swapMusicIndex not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn swapMusicIndex(int p0, int p1);
public:
    
private:
    [[deprecated("FMODAudioEngine::testFunction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn testFunction(int p0);
public:

    /**
     * @note[short] Windows: 0x39800
     * @note[short] Android
     */
    TodoReturn triggerQueuedMusic(FMODQueuedMusic p0);

    /**
     * @note[short] Windows: 0x38130
     * @note[short] Android
     */
    TodoReturn unloadAllEffects();
    
private:
    [[deprecated("FMODAudioEngine::unloadEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unloadEffect(gd::string p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::unregisterChannel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unregisterChannel(int p0);
public:

    /**
     * @note[short] Windows: 0x38230
     * @note[short] Android
     */
    void updateBackgroundFade();

    /**
     * @note[short] Windows: 0x37200
     * @note[short] Android
     */
    TodoReturn updateChannel(int p0, AudioTargetType p1, AudioModType p2, float p3, float p4);

    /**
     * @note[short] Windows: 0x34dd0
     * @note[short] Android
     */
    TodoReturn updateChannelTweens(float p0);

    /**
     * @note[short] Windows: 0x34f80
     * @note[short] Android
     */
    void updateMetering();

    /**
     * @note[short] Windows: 0x39120
     * @note[short] Android
     */
    TodoReturn updateQueuedEffects();

    /**
     * @note[short] Windows: 0x396c0
     * @note[short] Android
     */
    void updateQueuedMusic();

    /**
     * @note[short] Windows: 0x33220
     * @note[short] Android
     */
    TodoReturn updateReverb(FMODReverbPreset p0, bool p1);

    /**
     * @note[short] Windows: 0x39520
     * @note[short] Android
     */
    void updateTemporaryEffects();
    
private:
    [[deprecated("FMODAudioEngine::waitUntilSoundReady not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn waitUntilSoundReady(FMOD::Sound* p0);
public:

    /**
     * @note[short] Windows: 0x33980
     * @note[short] Android
     */
    virtual void update(float p0);
    GEODE_PAD(96);
    float m_musicVolume;
    float m_sfxVolume;
    GEODE_PAD(28);
    FMOD::Channel* m_backgroundMusicChannel;
    FMOD::System* m_system;
    FMOD::Sound* m_sound;
    FMOD::Channel* m_currentSoundChannel;
    FMOD::Channel* m_globalChannel;
    FMOD::DSP* m_DSP;
    FMOD_RESULT m_lastResult;
    int m_version;
    void* m_extraDriverData;
    int m_musicOffset;
};
