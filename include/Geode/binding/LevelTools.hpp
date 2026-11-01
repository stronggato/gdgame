#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/unordered_set.hpp>

class LevelTools {
public:
    static constexpr auto CLASS_NAME = "LevelTools";

    /**
     * @note[short] MacOS (ARM): 0x4598cc
     * @note[short] MacOS (Intel): 0x4fd320
     * @note[short] Windows: 0x460e30
     * @note[short] iOS: 0x23b3f8
     * @note[short] Android
     */
    static int artistForAudio(int id);

    /**
     * @note[short] MacOS (ARM): 0x45c568
     * @note[short] MacOS (Intel): 0x500690
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x23c440
     * @note[short] Android
     */
    static std::string base64DecodeString(std::string str);

    /**
     * @note[short] MacOS (ARM): 0x45c534
     * @note[short] MacOS (Intel): 0x500640
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x23c40c
     * @note[short] Android
     */
    static std::string base64EncodeString(std::string str);

    /**
     * @note[short] MacOS (ARM): 0x45c59c
     * @note[short] MacOS (Intel): 0x5006e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x23c474
     * @note[short] Android
     */
    static cocos2d::CCDictionary* createStarPackDict();

    /**
     * @note[short] MacOS (ARM): 0x45a874
     * @note[short] MacOS (Intel): 0x4fe670
     * @note[short] iOS: 0x23b4d0
     * @note[short] Android
     */
    static std::string fbURLForArtist(int id);

    /**
     * @note[short] MacOS (ARM): 0x45abcc
     * @note[short] MacOS (Intel): 0x4fe9f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static int getAudioBPM(int id);

    /**
     * @note[short] MacOS (ARM): 0x459240
     * @note[short] MacOS (Intel): 0x4fcdb0
     * @note[short] iOS: 0x23b3cc
     * @note[short] Android
     */
    static std::string getAudioFileName(int id);

    /**
     * @note[short] MacOS (ARM): 0x45abec
     * @note[short] MacOS (Intel): 0x4fea10
     * @note[short] iOS: 0x23b4fc
     * @note[short] Android
     */
    static std::string getAudioString(int id);

    /**
     * @note[short] MacOS (ARM): 0x458af0
     * @note[short] MacOS (Intel): 0x4fc7f0
     * @note[short] Windows: 0x45f730
     * @note[short] iOS: 0x23b39c
     * @note[short] Android
     */
    static std::string getAudioTitle(int id);

    /**
     * @note[short] MacOS (ARM): 0x447928
     * @note[short] MacOS (Intel): 0x500010
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static bool getLastGameplayReversed();

    /**
     * @note[short] MacOS (Intel): 0x500020
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static bool getLastGameplayRotated();

    /**
     * @note[short] MacOS (ARM): 0x45c10c
     * @note[short] MacOS (Intel): 0x500000
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x23c114
     * @note[short] Android
     */
    static float getLastTimewarp();

    /**
     * @note[short] MacOS (ARM): 0x456d78
     * @note[short] MacOS (Intel): 0x4fa290
     * @note[short] Windows: 0x45cea0
     * @note[short] iOS: 0x239df4
     * @note[short] Android
     */
    static GJGameLevel* getLevel(int id, bool noString);

    /**
     * @note[short] MacOS (ARM): 0x4569c4
     * @note[short] MacOS (Intel): 0x4f9f50
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x239d68
     * @note[short] Android
     */
    static std::unordered_set<int> getLevelList();

    /**
     * @note[short] MacOS (ARM): 0x28a914
     * @note[short] MacOS (Intel): 0x500030
     * @note[short] Android
     */
    static SongInfoObject* getSongObject(int id);

    /**
     * @note[short] MacOS (ARM): 0x45ca0c
     * @note[short] MacOS (Intel): 0x500b30
     * @note[short] Windows: 0x464ff0
     * @note[short] iOS: 0x23c6f0
     * @note[short] Android
     */
    static void moveTriggerObjectsToArray(cocos2d::CCArray* objects, cocos2d::CCDictionary* objectsDict, int index);

    /**
     * @note[short] MacOS (ARM): 0x4598f0
     * @note[short] MacOS (Intel): 0x4fd340
     * @note[short] iOS: 0x23b41c
     * @note[short] Android
     */
    static std::string nameForArtist(int id);

    /**
     * @note[short] MacOS (ARM): 0x45a19c
     * @note[short] MacOS (Intel): 0x4fdfc0
     * @note[short] iOS: 0x23b478
     * @note[short] Android
     */
    static std::string ngURLForArtist(int id);

    /**
     * @note[short] MacOS (ARM): 0x45b1e8
     * @note[short] MacOS (Intel): 0x4ff030
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static float offsetBPMForTrack(int id);

    /**
     * @note[short] MacOS (ARM): 0x45bc14
     * @note[short] MacOS (Intel): 0x4ffa00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x23bc20
     * @note[short] Android
     */
    static cocos2d::CCPoint posForTime(float time, cocos2d::CCArray* objects, int speed, bool platformer, int& rotateChannel);

    /**
     * @note[short] MacOS (ARM): 0x45bc24
     * @note[short] MacOS (Intel): 0x4ffa30
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x23bc30
     * @note[short] Android
     */
    static cocos2d::CCPoint posForTimeInternal(float time, cocos2d::CCArray* objects, int speed, bool platformer, bool ignoreMinorAxis, bool ignoreWarp, int& rotateChannel, int unused);

    /**
     * @note[short] MacOS (ARM): 0x45cac4
     * @note[short] MacOS (Intel): 0x4bdf80
     * @note[short] Windows: 0x4650c0
     * @note[short] iOS: 0x23c7a8
     * @note[short] Android
     */
    static void sortChannelOrderObjects(cocos2d::CCArray* objects, cocos2d::CCDictionary* objectsDict, bool moveObjects);

    /**
     * @note[short] MacOS (ARM): 0x45cd8c
     * @note[short] MacOS (Intel): 0x500ec0
     * @note[short] Windows: 0x12dbf0
     * @note[short] iOS: 0x23ca1c
     * @note[short] Android
     */
    static void sortSpeedObjects(cocos2d::CCArray* objects, GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x45b234
     * @note[short] MacOS (Intel): 0x4ff080
     * @note[short] Windows: 0x463b80
     * @note[short] iOS: 0x23b528
     * @note[short] Android
     */
    static float timeForPos(cocos2d::CCPoint position, cocos2d::CCArray* objects, int speed, int order, int channel, bool songTriggers, bool platformer, bool ignoreWarp, bool ignoreRotate, int id);

    /**
     * @note[short] MacOS (ARM): 0x4569c0
     * @note[short] MacOS (Intel): 0x4f9f40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void toggleDebugLogging(bool enabled);

    /**
     * @note[short] MacOS (ARM): 0x459b3c
     * @note[short] MacOS (Intel): 0x4fd500
     * @note[short] Windows: 0x461200
     * @note[short] iOS: 0x23b448
     * @note[short] Android
     */
    static std::string urlForAudio(int id);

    /**
     * @note[short] MacOS (ARM): 0x45b208
     * @note[short] MacOS (Intel): 0x4ff050
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static float valueForSpeedMod(int speed);

    /**
     * @note[short] MacOS (ARM): 0x45c384
     * @note[short] MacOS (Intel): 0x5004f0
     * @note[short] Windows: 0x464d40
     * @note[short] iOS: 0x23c308
     * @note[short] Android
     */
    static bool verifyLevelIntegrity(std::string str, int id);

    /**
     * @note[short] MacOS (ARM): 0x45a4e0
     * @note[short] MacOS (Intel): 0x4fe2c0
     * @note[short] iOS: 0x23b4a4
     * @note[short] Android
     */
    static std::string ytURLForArtist(int id);
};
