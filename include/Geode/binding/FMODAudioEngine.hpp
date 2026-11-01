#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <fmod.hpp>
#include <Geode/binding/FMODAudioState.hpp>
#include <Geode/binding/FMODSoundState.hpp>
#include <Geode/binding/FMODMusic.hpp>
#include <Geode/binding/FMODSound.hpp>
#include <Geode/binding/FMODQueuedEffect.hpp>
#include <Geode/binding/FMODQueuedMusic.hpp>
#include <Geode/binding/FMODSoundTween.hpp>
#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/unordered_map.hpp>
#include <Geode/mapping/unordered_set.hpp>
#include <Geode/mapping/vector.hpp>

class FMODAudioEngine : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "FMODAudioEngine";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(FMODAudioEngine, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x113800
     * @note[short] iOS: 0x1ba218
     * @note[short] Android: Out of line
     */
     FMODAudioEngine();

    /**
     * @note[short] MacOS (ARM): 0x34cc70
     * @note[short] MacOS (Intel): 0x3c8c10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b3328
     * @note[short] Android: Rebinded
     */
     ~FMODAudioEngine();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static FMODAudioEngine* get();

    /**
     * @note[short] MacOS (ARM): 0x3528d0
     * @note[short] MacOS (Intel): 0x3d00f0
     * @note[short] Windows: 0x5f3e0
     * @note[short] iOS: 0x1b69c4
     * @note[short] Android
     */
    static float pitchForIdx(int index);

    /**
     * @note[short] MacOS (ARM): 0x34dcc4
     * @note[short] MacOS (Intel): 0x3ca110
     * @note[short] Windows: 0x5d890
     * @note[short] iOS: 0x1b3d78
     * @note[short] Android
     */
    static std::string reverbToString(FMODReverbPreset preset);

    /**
     * @note[short] MacOS (ARM): 0x34cfb8
     * @note[short] MacOS (Intel): 0x3c90c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static FMODAudioEngine* sharedEngine();

    /**
     * @note[short] MacOS (ARM): 0x34eb08
     * @note[short] MacOS (Intel): 0x3cb270
     * @note[short] Windows: 0x5e010
     * @note[short] iOS: 0x1b4344
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x3576e4
     * @note[short] MacOS (Intel): 0x3d5ed0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b9ab0
     * @note[short] Android
     */
    void activateQueuedMusic(int channel);

    /**
     * @note[short] MacOS (ARM): 0x34e39c
     * @note[short] MacOS (Intel): 0x3ca810
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x1b4008
     * @note[short] Android
     */
    FMOD::Channel* channelForChannelID(int id);

    /**
     * @note[short] MacOS (ARM): 0x3544fc
     * @note[short] MacOS (Intel): 0x3d2310
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    FMOD::Channel* channelForUniqueID(int id);

    /**
     * @note[short] MacOS (ARM): 0x3537d4
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x1b7290
     * @note[short] Android
     */
    int channelIDForUniqueID(int id);

    /**
     * @note[short] MacOS (ARM): 0x353be4
     * @note[short] MacOS (Intel): 0x3d1780
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b74b4
     * @note[short] Android
     */
    void channelLinkSound(int id, FMODSound* sound);

    /**
     * @note[short] MacOS (ARM): 0x354200
     * @note[short] MacOS (Intel): 0x3d1f20
     * @note[short] Windows: 0x60a10
     * @note[short] iOS: 0x1b78a8
     * @note[short] Android
     */
    void channelStopped(FMOD::Channel* channel, bool remove);

    /**
     * @note[short] MacOS (ARM): 0x35402c
     * @note[short] MacOS (Intel): 0x3d1cc0
     * @note[short] iOS: 0x1b77a8
     * @note[short] Android
     */
    void channelUnlinkSound(int id);

    /**
     * @note[short] MacOS (ARM): 0x34e550
     * @note[short] MacOS (Intel): 0x3caa70
     * @note[short] Windows: 0x5df60
     * @note[short] iOS: 0x1b40f0
     * @note[short] Android
     */
    void clearAllAudio();

    /**
     * @note[short] MacOS (ARM): 0x352254
     * @note[short] MacOS (Intel): 0x3cfa00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b65ac
     * @note[short] Android
     */
    int countActiveEffects();

    /**
     * @note[short] MacOS (ARM): 0x352304
     * @note[short] MacOS (Intel): 0x3cfae0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b65d0
     * @note[short] Android
     */
    int countActiveMusic();

    /**
     * @note[short] MacOS (ARM): 0x358150
     * @note[short] MacOS (Intel): 0x3d6c60
     * @note[short] Windows: 0x25d400
     * @note[short] iOS: 0x1ba05c
     * @note[short] Android
     */
    FMOD::Sound* createStream(std::string path);

    /**
     * @note[short] MacOS (ARM): 0x352848
     * @note[short] MacOS (Intel): 0x3d0050
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b6940
     * @note[short] Android
     */
    void disableMetering();

    /**
     * @note[short] MacOS (ARM): 0x352828
     * @note[short] MacOS (Intel): 0x3d0020
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b6920
     * @note[short] Android
     */
    void enableMetering();

    /**
     * @note[short] MacOS (ARM): 0x355460
     * @note[short] MacOS (Intel): 0x2ee820
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b8404
     * @note[short] Android
     */
    void fadeInBackgroundMusic(float value);

    /**
     * @note[short] MacOS (ARM): 0x355b18
     * @note[short] MacOS (Intel): 0x3d3c70
     * @note[short] Windows: 0x651f0
     * @note[short] iOS: 0x1b88cc
     * @note[short] Android
     */
    void fadeInMusic(float duration, int channel);

    /**
     * @note[short] MacOS (ARM): 0x3580a8
     * @note[short] MacOS (Intel): 0x3d6b80
     * @note[short] Windows: 0x65470
     * @note[short] iOS: 0x1b9fb4
     * @note[short] Android
     */
    void fadeMusic(float duration, int channel, float startVolume, float endVolume);

    /**
     * @note[short] MacOS (ARM): 0x35800c
     * @note[short] MacOS (Intel): 0x3d6aa0
     * @note[short] Windows: 0x65330
     * @note[short] iOS: 0x1b9f18
     * @note[short] Android
     */
    void fadeOutMusic(float duration, int channel);

    /**
     * @note[short] MacOS (ARM): 0x355748
     * @note[short] MacOS (Intel): 0x3d37f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b8648
     * @note[short] Android
     */
    std::string getActiveMusic(int id);

    /**
     * @note[short] MacOS (ARM): 0x351170
     * @note[short] MacOS (Intel): 0x3ce330
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b5b48
     * @note[short] Android
     */
    FMOD::Channel* getActiveMusicChannel(int musicID);

    /**
     * @note[short] MacOS (ARM): 0x3554a0
     * @note[short] MacOS (Intel): 0x3d3520
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b8444
     * @note[short] Android
     */
    float getBackgroundMusicVolume();

    /**
     * @note[short] MacOS (ARM): 0x352a70
     * @note[short] MacOS (Intel): 0x3d0270
     * @note[short] Windows: 0x5f550
     * @note[short] iOS: 0x1b6b0c
     * @note[short] Android
     */
    FMOD::ChannelGroup* getChannelGroup(int id, bool reverb);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float getEffectsVolume();

    /**
     * @note[short] MacOS (ARM): 0x3583a8
     * @note[short] MacOS (Intel): 0x3d6f00
     * @note[short] Android
     */
    std::string getFMODStatus(int unused);

    /**
     * @note[short] MacOS (Intel): 0x3d0060
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float getMeteringValue();

    /**
     * @note[short] MacOS (ARM): 0x353408
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b7064
     * @note[short] Android
     */
    int getMusicChannelID(int musicID);

    /**
     * @note[short] MacOS (ARM): 0x357b48
     * @note[short] MacOS (Intel): 0x3d6460
     * @note[short] Windows: 0x64fc0
     * @note[short] iOS: 0x1b9d04
     * @note[short] Android
     */
    unsigned int getMusicLengthMS(int channel);

    /**
     * @note[short] MacOS (ARM): 0x357ac4
     * @note[short] MacOS (Intel): 0x3d63e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b9ce0
     * @note[short] Android
     */
    float getMusicTime(int channel);

    /**
     * @note[short] MacOS (ARM): 0x357a58
     * @note[short] MacOS (Intel): 0x3d6370
     * @note[short] Windows: 0x64f60
     * @note[short] iOS: 0x1b9c74
     * @note[short] Android
     */
    unsigned int getMusicTimeMS(int channel);

    /**
     * @note[short] MacOS (ARM): 0x353c58
     * @note[short] MacOS (Intel): 0x3d17e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getNextChannelID();

    /**
     * @note[short] MacOS (Intel): 0x3cfba0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    std::map<std::pair<int, int>, FMODSoundTween>& getTweenContainer(AudioTargetType type);

    /**
     * @note[short] MacOS (ARM): 0x3567a4
     * @note[short] MacOS (Intel): 0x3d4ae0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b92d0
     * @note[short] Android
     */
    bool isAnyPersistentPlaying();

    /**
     * @note[short] MacOS (ARM): 0x3538f8
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isChannelStopping(int channel);

    /**
     * @note[short] MacOS (ARM): 0x35352c
     * @note[short] MacOS (Intel): 0x3d0fc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isEffectLoaded(std::string path);

    /**
     * @note[short] MacOS (ARM): 0x355520
     * @note[short] MacOS (Intel): 0x3d35c0
     * @note[short] Windows: 0x627c0
     * @note[short] iOS: 0x1b84c4
     * @note[short] Android
     */
    bool isMusicPlaying(int musicID);

    /**
     * @note[short] MacOS (ARM): 0x355640
     * @note[short] MacOS (Intel): 0x3d36f0
     * @note[short] iOS: 0x1b85b0
     * @note[short] Android
     */
    bool isMusicPlaying(std::string path, int musicID);

    /**
     * @note[short] MacOS (ARM): 0x355c70
     * @note[short] MacOS (Intel): 0x3d3de0
     * @note[short] iOS: 0x1b8a10
     * @note[short] Android
     */
    bool isPersistentMatchPlaying(std::string path, int musicID);

    /**
     * @note[short] MacOS (ARM): 0x3567c8
     * @note[short] MacOS (Intel): 0x3d4b10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isSoundReady(FMOD::Sound* sound);

    /**
     * @note[short] MacOS (ARM): 0x35521c
     * @note[short] MacOS (Intel): 0x3d3230
     * @note[short] Windows: 0x62570
     * @note[short] iOS: 0x1b833c
     * @note[short] Android
     */
    int lengthForSound(std::string path);

    /**
     * @note[short] MacOS (ARM): 0x3558b0
     * @note[short] MacOS (Intel): 0x3d39e0
     * @note[short] Windows: 0x62ae0
     * @note[short] iOS: 0x1b86ec
     * @note[short] Android
     */
    void loadAndPlayMusic(std::string path, unsigned int time, int musicID);

    /**
     * @note[short] MacOS (ARM): 0x34ffa4
     * @note[short] MacOS (Intel): 0x3ccb40
     * @note[short] Windows: 0x5e980
     * @note[short] iOS: 0x1b50e8
     * @note[short] Android
     */
    void loadAudioState(FMODAudioState& state);

    /**
     * @note[short] MacOS (ARM): 0x355bb0
     * @note[short] MacOS (Intel): 0x3d3d50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b8964
     * @note[short] Android
     */
    void loadMusic(std::string path);

    /**
     * @note[short] MacOS (ARM): 0x350ab4
     * @note[short] MacOS (Intel): 0x3cdb60
     * @note[short] Windows: 0x62d50
     * @note[short] iOS: 0x1b56dc
     * @note[short] Android
     */
    void loadMusic(std::string path, float speed, float unknown, float volume, bool shouldLoop, int musicID, int channelID, bool dontReset);

    /**
     * @note[short] Android
     */
    TodoReturn logLifecycleState(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn logMixerProbe();

    /**
     * @note[short] MacOS (Intel): 0x3ca9e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void pauseAllAudio();

    /**
     * @note[short] MacOS (ARM): 0x7e460
     * @note[short] MacOS (Intel): 0x883b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x147904
     * @note[short] Android
     */
    void pauseAllEffects();

    /**
     * @note[short] MacOS (ARM): 0x355570
     * @note[short] MacOS (Intel): 0x3d3600
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b8508
     * @note[short] Android
     */
    void pauseAllMusic(bool force);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void pauseEffect(unsigned int effect);

    /**
     * @note[short] MacOS (ARM): 0x357fe8
     * @note[short] MacOS (Intel): 0x3d6a80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void pauseMusic(int musicChannel);

    /**
     * @note[short] MacOS (ARM): 0x353168
     * @note[short] MacOS (Intel): 0x3d0be0
     * @note[short] Windows: 0x5f810
     * @note[short] iOS: 0x1b6e08
     * @note[short] Android
     */
    int playEffect(std::string path);

    /**
     * @note[short] MacOS (ARM): 0x353058
     * @note[short] MacOS (Intel): 0x3d0af0
     * @note[short] Windows: 0x5f890
     * @note[short] iOS: 0x1b6d14
     * @note[short] Android
     */
    int playEffect(std::string path, float speed, float unknown, float volume);

    /**
     * @note[short] MacOS (ARM): 0x3512ac
     * @note[short] MacOS (Intel): 0x3ce4f0
     * @note[short] Windows: 0x5f980
     * @note[short] iOS: 0x1b5bb0
     * @note[short] Android
     */
    int playEffectAdvanced(std::string path, float speed, float unknown, float volume, float pitch, bool fastFourierTransform, bool reverb, int startMillis, int endMillis, int fadeIn, int fadeOut, bool loopEnabled, int effectID, bool override, bool noPreload, int channelID, int uniqueID, float minInterval, int sfxGroup);

    /**
     * @note[short] MacOS (ARM): 0x353320
     * @note[short] MacOS (Intel): 0x3d0d60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b6f90
     * @note[short] Android
     */
    int playEffectAsync(std::string path);

    /**
     * @note[short] MacOS (ARM): 0x355994
     * @note[short] MacOS (Intel): 0x3d3ab0
     * @note[short] Windows: 0x62be0
     * @note[short] iOS: 0x1b87c4
     * @note[short] Android
     */
    void playMusic(std::string path, bool shouldLoop, float fadeInTime, int channel);

    /**
     * @note[short] Android
     */
    TodoReturn playUIEffect(std::string p0, float p1, float p2, float p3);

    /**
     * @note[short] MacOS (ARM): 0x34d840
     * @note[short] MacOS (Intel): 0x3c9bf0
     * @note[short] Windows: 0x61d10
     * @note[short] iOS: 0x1b39b0
     * @note[short] Android
     */
    FMODSound* preloadEffect(std::string path);

    /**
     * @note[short] MacOS (ARM): 0x353c6c
     * @note[short] MacOS (Intel): 0x3d1800
     * @note[short] Windows: 0x62140
     * @note[short] iOS: 0x1b7528
     * @note[short] Android
     */
    FMOD::Sound* preloadEffectAsync(std::string path);

    /**
     * @note[short] MacOS (ARM): 0x355d9c
     * @note[short] MacOS (Intel): 0x3d3f00
     * @note[short] Windows: 0x655c0
     * @note[short] iOS: 0x1b8adc
     * @note[short] Android
     */
    FMOD::Sound* preloadMusic(std::string path, bool noRelease, int musicID);

    /**
     * @note[short] MacOS (Intel): 0x245610
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void printResult(FMOD_RESULT result);

    /**
     * @note[short] MacOS (ARM): 0x356824
     * @note[short] MacOS (Intel): 0x3d4b50
     * @note[short] Windows: 0x63b80
     * @note[short] iOS: 0x1b92f4
     * @note[short] Android
     */
    void queuedEffectFinishedLoading(std::string path);

    /**
     * @note[short] MacOS (ARM): 0x35354c
     * @note[short] MacOS (Intel): 0x3d0fe0
     * @note[short] Windows: 0x60390
     * @note[short] iOS: 0x1b70c4
     * @note[short] Android
     */
    int queuePlayEffect(std::string audioFilename, float speed, float unknown, float volume, float pitch, bool fastFourierTransform, bool reverb, int start, int end, int fadeIn, int fadeOut, bool loop, int effectID, bool override, int uniqueID, float minInterval, int group);

    /**
     * @note[short] MacOS (ARM): 0x35652c
     * @note[short] MacOS (Intel): 0x3d4800
     * @note[short] Windows: 0x63580
     * @note[short] iOS: 0x1b9058
     * @note[short] Android
     */
    void queueStartMusic(std::string audioFilename, float pitch, float unknown, float volume, bool loop, int start, int end, int fadeIn, int fadeOut, int musicID, bool p10, int channelID, bool noPrepare, bool dontReset);

    /**
     * @note[short] MacOS (ARM): 0x353a68
     * @note[short] MacOS (Intel): 0x3d15f0
     * @note[short] Windows: 0x60560
     * @note[short] iOS: 0x1b7338
     * @note[short] Android
     */
    int registerChannel(FMOD::Channel* channel, int channelID, int effectID);

    /**
     * @note[short] MacOS (ARM): 0x34f358
     * @note[short] MacOS (Intel): 0x3cbbb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b4748
     * @note[short] Android
     */
    void releaseRemovedSounds();

    /**
     * @note[short] MacOS (Intel): 0x3caa30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resumeAllAudio();

    /**
     * @note[short] MacOS (ARM): 0x7e46c
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resumeAllEffects();

    /**
     * @note[short] MacOS (ARM): 0x3555ec
     * @note[short] MacOS (Intel): 0x3d3690
     * @note[short] Windows: 0x62940
     * @note[short] iOS: 0x1b8564
     * @note[short] Android
     */
    void resumeAllMusic();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b3da4
     * @note[short] Android
     */
    void resumeAudio();

    /**
     * @note[short] MacOS (Intel): 0xc3c10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resumeEffect(unsigned int effect);

    /**
     * @note[short] MacOS (ARM): 0x35114c
     * @note[short] MacOS (Intel): 0x3ce310
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b5b24
     * @note[short] Android
     */
    void resumeMusic(int musicChannel);

    /**
     * @note[short] Android
     */
    TodoReturn resumeSuspendedAudio();

    /**
     * @note[short] MacOS (ARM): 0x34fb84
     * @note[short] MacOS (Intel): 0x3cc510
     * @note[short] Windows: 0xffee0
     * @note[short] iOS: 0x1b4df8
     * @note[short] Android
     */
    void saveAudioState(FMODAudioState& state);

    /**
     * @note[short] MacOS (ARM): 0x3554a8
     * @note[short] MacOS (Intel): 0x3d3530
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b844c
     * @note[short] Android
     */
    void setBackgroundMusicVolume(float volume);

    /**
     * @note[short] MacOS (ARM): 0x352708
     * @note[short] MacOS (Intel): 0x3cfef0
     * @note[short] Windows: 0x61c00
     * @note[short] iOS: 0x1b6814
     * @note[short] Android
     */
    void setChannelPitch(int id, AudioTargetType type, float pitch);

    /**
     * @note[short] Android
     */
    void setChannelVolume(int id, AudioTargetType type, float volume);

    /**
     * @note[short] MacOS (ARM): 0x35252c
     * @note[short] iOS: 0x1b6638
     * @note[short] Android
     */
    void setChannelVolumeMod(int id, AudioTargetType type, float volumeMod);

    /**
     * @note[short] MacOS (Intel): 0x6aade0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setEffectsVolume(float volume);

    /**
     * @note[short] MacOS (ARM): 0x351c88
     * @note[short] MacOS (Intel): 0x3cf240
     * @note[short] Windows: 0x64e30
     * @note[short] iOS: 0x1b6340
     * @note[short] Android
     */
    void setMusicTimeMS(unsigned int time, bool dontWait, int musicID);

    /**
     * @note[short] MacOS (ARM): 0x230a1c
     * @note[short] MacOS (Intel): 0x3c9480
     * @note[short] iOS: 0x1b3488
     * @note[short] Android
     */
    void setup();

    /**
     * @note[short] MacOS (ARM): 0x34d5b0
     * @note[short] MacOS (Intel): 0x3c98d0
     * @note[short] Windows: 0x5cc50
     * @note[short] iOS: 0x1b3714
     * @note[short] Android
     */
    void setupAudioEngine();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    void start();

    /**
     * @note[short] MacOS (ARM): 0x3560ac
     * @note[short] MacOS (Intel): 0x3d4250
     * @note[short] iOS: 0x1b8d68
     * @note[short] Android
     */
    void startMusic(int start, int end, int fadeIn, int fadeOut, bool loop, int musicID, bool noResume, bool dontReset);

    /**
     * @note[short] MacOS (Intel): 0x3ca9e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void stop();

    /**
     * @note[short] MacOS (ARM): 0x34e600
     * @note[short] MacOS (Intel): 0x3cab50
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x1b4174
     * @note[short] Android
     */
    void stopAllEffects();

    /**
     * @note[short] MacOS (ARM): 0x34e8b8
     * @note[short] MacOS (Intel): 0x3caf80
     * @note[short] Windows: 0x62830
     * @note[short] iOS: 0x1b4254
     * @note[short] Android
     */
    void stopAllMusic(bool clear);

    /**
     * @note[short] MacOS (ARM): 0x354a98
     * @note[short] MacOS (Intel): 0x3d2ac0
     * @note[short] Windows: 0x614b0
     * @note[short] iOS: 0x1b7d14
     * @note[short] Android
     */
    float stopAndGetFade(FMOD::Channel* channel);

    /**
     * @note[short] MacOS (ARM): 0x357d70
     * @note[short] MacOS (Intel): 0x3d6720
     * @note[short] Windows: 0x658c0
     * @note[short] iOS: 0x1b9e3c
     * @note[short] Android
     */
    void stopAndRemoveMusic(int id);

    /**
     * @note[short] MacOS (ARM): 0x3539dc
     * @note[short] MacOS (Intel): 0x3d1570
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b72f0
     * @note[short] Android
     */
    void stopChannel(int id);

    /**
     * @note[short] MacOS (ARM): 0x354964
     * @note[short] MacOS (Intel): 0x3d2900
     * @note[short] Windows: 0x612a0
     * @note[short] iOS: 0x1b7be0
     * @note[short] Android
     */
    void stopChannel(FMOD::Channel* channel, bool loop, float delay);

    /**
     * @note[short] MacOS (ARM): 0x354524
     * @note[short] MacOS (Intel): 0x3d2330
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x1b79d8
     * @note[short] Android
     */
    void stopChannel(int id, AudioTargetType type, bool loop, float delay);

    /**
     * @note[short] MacOS (ARM): 0x3523d4
     * @note[short] MacOS (Intel): 0x3cfbd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void stopChannelTween(int id, AudioTargetType target, AudioModType mod);

    /**
     * @note[short] MacOS (ARM): 0x3524e8
     * @note[short] MacOS (Intel): 0x3cfcc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void stopChannelTweens(int id, AudioTargetType target);

    /**
     * @note[short] MacOS (ARM): 0x356b04
     * @note[short] MacOS (Intel): 0x3d4f50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b9514
     * @note[short] Android
     */
    void stopMusic(int id);

    /**
     * @note[short] MacOS (ARM): 0x357bc8
     * @note[short] MacOS (Intel): 0x3d64f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b9d84
     * @note[short] Android
     */
    void stopMusicNotInSet(std::unordered_set<int>& musicIDs);

    /**
     * @note[short] MacOS (ARM): 0x3550d4
     * @note[short] MacOS (Intel): 0x3d30f0
     * @note[short] Windows: 0x62000
     * @note[short] iOS: 0x1b81bc
     * @note[short] Android
     */
    FMODSound* storeEffect(FMOD::Sound* sound, std::string path);

    /**
     * @note[short] MacOS (ARM): 0x356b08
     * @note[short] MacOS (Intel): 0x3d4f60
     * @note[short] Windows: 0x64990
     * @note[short] iOS: 0x1b9518
     * @note[short] Android
     */
    void swapMusicIndex(int musicID, int channelID);

    /**
     * @note[short] MacOS (Intel): 0x368980
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void testFunction(int unknown);

    /**
     * @note[short] MacOS (ARM): 0x351db4
     * @note[short] MacOS (Intel): 0x3cf360
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x1b6434
     * @note[short] Android
     */
    void triggerQueuedMusic(FMODQueuedMusic music);

    /**
     * @note[short] MacOS (ARM): 0x355278
     * @note[short] MacOS (Intel): 0x3d32a0
     * @note[short] Windows: 0x76390
     * @note[short] iOS: 0x1b8394
     * @note[short] Android
     */
    void unloadAllEffects();

    /**
     * @note[short] MacOS (ARM): 0x355274
     * @note[short] MacOS (Intel): 0x3d3290
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void unloadEffect(std::string path);

    /**
     * @note[short] MacOS (ARM): 0x353e9c
     * @note[short] MacOS (Intel): 0x3d1aa0
     * @note[short] iOS: 0x1b76fc
     * @note[short] Android
     */
    void unregisterChannel(int id);

    /**
     * @note[short] MacOS (ARM): 0x34f79c
     * @note[short] MacOS (Intel): 0x3cc0f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateBackgroundFade();

    /**
     * @note[short] MacOS (ARM): 0x354b94
     * @note[short] MacOS (Intel): 0x3d2c10
     * @note[short] Windows: 0x615f0
     * @note[short] iOS: 0x1b7e10
     * @note[short] Android
     */
    void updateChannel(int channel, AudioTargetType target, AudioModType mod, float duration, float value);

    /**
     * @note[short] MacOS (ARM): 0x34f990
     * @note[short] MacOS (Intel): 0x3cc300
     * @note[short] Windows: 0x5f200
     * @note[short] iOS: 0x1b4c64
     * @note[short] Android
     */
    void updateChannelTweens(float dt);

    /**
     * @note[short] MacOS (ARM): 0x34f828
     * @note[short] MacOS (Intel): 0x3cc1a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b4b40
     * @note[short] Android
     */
    void updateMetering();

    /**
     * @note[short] MacOS (ARM): 0x34ef74
     * @note[short] MacOS (Intel): 0x3cb760
     * @note[short] iOS: 0x1b4524
     * @note[short] Android
     */
    void updateQueuedEffects();

    /**
     * @note[short] MacOS (ARM): 0x34f430
     * @note[short] MacOS (Intel): 0x3cbc90
     * @note[short] iOS: 0x1b480c
     * @note[short] Android
     */
    void updateQueuedMusic();

    /**
     * @note[short] MacOS (ARM): 0x34dac0
     * @note[short] MacOS (Intel): 0x3c9ec0
     * @note[short] Windows: 0x5cfd0
     * @note[short] iOS: 0x1b3b84
     * @note[short] Android
     */
    void updateReverb(FMODReverbPreset preset, bool force);

    /**
     * @note[short] Android
     */
    TodoReturn updateSystemPitch(float p0);

    /**
     * @note[short] MacOS (ARM): 0x34f118
     * @note[short] MacOS (Intel): 0x3cb940
     * @note[short] Windows: 0x63f20
     * @note[short] iOS: 0x1b4684
     * @note[short] Android
     */
    void updateTemporaryEffects();

    /**
     * @note[short] MacOS (ARM): 0x3579c0
     * @note[short] MacOS (Intel): 0x3d62d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b9bdc
     * @note[short] Android
     */
    FMOD_OPENSTATE waitUntilSoundReady(FMOD::Sound* sound);
    std::unordered_map<int, FMODMusic> m_fmodMusic;
    std::unordered_map<std::string, FMODSound> m_fmodSounds;
    std::unordered_set<std::string> m_temporarySoundPaths;
    float m_musicVolume;
    float m_sfxVolume;
    float m_backgroundMusicFade;
    float m_musicFadeStart;
    float m_pulse1;
    float m_pulse2;
    float m_pulse3;
    int m_pulseCounter;
    bool m_metering;
    FMOD::ChannelGroup* m_backgroundMusicChannel;
    FMOD::System* m_system;
    FMOD::DSP* m_mainDSP;
    FMOD::DSP* m_globalChannelDSP;
    FMOD::ChannelGroup* m_globalChannel;
    FMOD::ChannelGroup* m_reverbChannel;
    FMOD_RESULT m_lastResult;
    int m_sampleRate;
    bool m_reducedQuality;
    bool m_allAudioPaused;
    int m_musicOffset;
    bool m_stopped;
    FMODAudioState m_audioState;
    std::vector<FMOD::Sound*> m_removedSounds;
    std::unordered_map<int, FMOD::DSP*> m_channelIDToDSP;
    std::unordered_map<int, FMOD::Channel*> m_channelIDToChannel;
    std::unordered_set<int> m_stoppedChannels;
    FMODReverbPreset m_reverbPreset;
    std::unordered_map<int, int> m_channelIDToEffectID;
    std::unordered_map<int, int> m_effectIDToChannelID;
    std::unordered_map<int, std::string> m_channelIDToSoundPath;
    std::vector<FMODQueuedEffect> m_queuedEffects;
    std::unordered_map<std::string, FMOD::Sound*> m_soundPathToSound;
    std::unordered_map<int, FMOD::ChannelGroup*> m_globalChannelGroups;
    std::unordered_map<int, FMOD::ChannelGroup*> m_reverbChannelGroups;
    bool m_showAudioVisualizer;
    float m_musicVisualizerTime;
    float m_musicVisualizerPeak;
    float m_musicVisualizerVolume;
    float m_sfxVisualizerTime;
    float m_sfxVisualizerPeak;
    float m_sfxVisualizerVolume;
};
