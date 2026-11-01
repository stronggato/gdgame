#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GManager.hpp>
#include <Geode/binding/PlatformFileDelegate.hpp>
#include <Geode/mapping/unordered_map.hpp>
#include <Geode/mapping/vector.hpp>

class LocalLevelManager : public GManager, public PlatformFileDelegate {
public:
    static constexpr auto CLASS_NAME = "LocalLevelManager";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LocalLevelManager, GManager)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static LocalLevelManager* get();

    /**
     * @note[short] Windows: 0x4679f0
     * @note[short] Android: Rebinded
     */
    virtual  ~LocalLevelManager();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x25c384
     * @note[short] Android
     */
    static LocalLevelManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x5dfae4
     * @note[short] MacOS (Intel): 0x6c79d0
     * @note[short] Windows: 0x467c50
     * @note[short] iOS: 0x25c558
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x7ecbfc
     * @note[short] Windows: 0x468650
     * @note[short] iOS: 0x4dc108
     * @note[short] Android
     */
    virtual void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (Intel): 0x6c91f0
     * @note[short] Windows: 0x468a50
     * @note[short] Android
     */
    virtual void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x5e0ce8
     * @note[short] Windows: 0x4685c0
     * @note[short] iOS: 0x25d194
     * @note[short] Android
     */
    virtual void firstLoad();

    /**
     * @note[short] Windows: 0x468700
     * @note[short] Android
     */
    virtual TodoReturn didEncodeForSave();

    /**
     * @note[short] Windows: 0x46ae40
     * @note[short] Android
     */
    virtual TodoReturn saveFinished(bool p0);

    /**
     * @note[short] Windows: 0x46bfd0
     * @note[short] Android
     */
    virtual void filesPicked(std::vector<std::string> const& p0);

    /**
     * @note[short] Windows: 0x46c540
     * @note[short] Android
     */
    virtual void fileShareFinished(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn exportLevelsToFile(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x5e015c
     * @note[short] MacOS (Intel): 0x6c81a0
     * @note[short] Windows: 0x39d3b0
     * @note[short] iOS: 0x25c914
     * @note[short] Android
     */
    cocos2d::CCDictionary* getAllLevelsInDict();

    /**
     * @note[short] MacOS (ARM): 0x5e0348
     * @note[short] MacOS (Intel): 0x6c83d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25ca48
     * @note[short] Android
     */
    cocos2d::CCArray* getAllLevelsWithName(std::string name);

    /**
     * @note[short] MacOS (ARM): 0x5e0aec
     * @note[short] MacOS (Intel): 0x6c8c60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25cfb0
     * @note[short] Android
     */
    cocos2d::CCArray* getCreatedLevels(int folder);

    /**
     * @note[short] MacOS (ARM): 0x5e0c58
     * @note[short] MacOS (Intel): 0x6c8dc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25d108
     * @note[short] Android
     */
    cocos2d::CCArray* getCreatedLists(int folder);

    /**
     * @note[short] MacOS (ARM): 0x5e000c
     * @note[short] MacOS (Intel): 0x572b20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25c7cc
     * @note[short] Android
     */
    cocos2d::CCDictionary* getLevelsInNameGroups();

    /**
     * @note[short] MacOS (ARM): 0x5dfe88
     * @note[short] MacOS (Intel): 0x6c7e20
     * @note[short] iOS: 0x25c724
     * @note[short] Android
     */
    std::string getMainLevelString(int id);

    /**
     * @note[short] Android
     */
    TodoReturn importLevelsFromFile(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn importLevelsFromPaths(std::vector<std::string> const& p0, int p1);

    /**
     * @note[short] MacOS (Intel): 0x6c8bc0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void markLevelsAsUnmodified();

    /**
     * @note[short] Android
     */
    TodoReturn moveLevelToBottom(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x5e085c
     * @note[short] MacOS (Intel): 0x6c89a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25cdb8
     * @note[short] Android
     */
    void moveLevelToTop(GJGameLevel* level);

    /**
     * @note[short] Android
     */
    TodoReturn postFileResults(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn queueFileResults();

    /**
     * @note[short] MacOS (ARM): 0x5e0a9c
     * @note[short] MacOS (Intel): 0x6c8c10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25cf60
     * @note[short] Android
     */
    void reorderLevels();

    /**
     * @note[short] MacOS (ARM): 0x5e0c08
     * @note[short] MacOS (Intel): 0x6c8d70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25d0b8
     * @note[short] Android
     */
    void reorderLists();

    /**
     * @note[short] MacOS (ARM): 0x5dfb24
     * @note[short] MacOS (Intel): 0x6c7a10
     * @note[short] iOS: 0x25c598
     * @note[short] Android
     */
    void tryLoadMainLevelString(int id);

    /**
     * @note[short] Android
     */
    TodoReturn tryRecoverAutoSaves();

    /**
     * @note[short] MacOS (ARM): 0x5e0b7c
     * @note[short] MacOS (Intel): 0x6c8cf0
     * @note[short] Windows: 0x58fb20
     * @note[short] iOS: 0x25d03c
     * @note[short] Android
     */
    int updateLevelOrder();

    /**
     * @note[short] MacOS (ARM): 0x5e0470
     * @note[short] MacOS (Intel): 0x6c8530
     * @note[short] Windows: 0xcb8c0
     * @note[short] iOS: 0x25cb28
     * @note[short] Android
     */
    void updateLevelRevision();

    /**
     * @note[short] MacOS (ARM): 0x5e0b7c
     * @note[short] MacOS (Intel): 0x6c8cf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25d03c
     * @note[short] Android
     */
    int updateListOrder();
    cocos2d::CCArray* m_localLevels;
    cocos2d::CCArray* m_localLists;
    std::unordered_map<int, std::string> m_mainLevels;
};
