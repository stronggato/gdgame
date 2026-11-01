#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/vector.hpp>

class GJLevelList : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJLevelList";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJLevelList, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x216400
     * @note[short] Android: Rebinded
     */
    virtual  ~GJLevelList();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJLevelList();

    /**
     * @note[short] MacOS (ARM): 0x4958d8
     * @note[short] MacOS (Intel): 0x53eb80
     * @note[short] Windows: 0x26fe00
     * @note[short] iOS: 0xa6698
     * @note[short] Android
     */
    static GJLevelList* create();

    /**
     * @note[short] MacOS (ARM): 0x498f34
     * @note[short] MacOS (Intel): 0x542790
     * @note[short] iOS: 0xa8b7c
     * @note[short] Android
     */
    static GJLevelList* create(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4df244
     * @note[short] MacOS (Intel): 0x58ee50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd63a4
     * @note[short] Android
     */
    static GJLevelList* createWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4df7e0
     * @note[short] MacOS (Intel): 0x58f440
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd690c
     * @note[short] Android
     */
    static std::string frameForListDifficulty(int diff, DifficultyIconType type);

    /**
     * @note[short] MacOS (ARM): 0x4df5a0
     * @note[short] MacOS (Intel): 0x58f1c0
     * @note[short] Windows: 0x271700
     * @note[short] iOS: 0xd66cc
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4df7d8
     * @note[short] MacOS (Intel): 0x58f430
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd6904
     * @note[short] Android
     */
    virtual bool canEncode();

    /**
     * @note[short] MacOS (ARM): 0x4ddd84
     * @note[short] MacOS (Intel): 0x58da30
     * @note[short] Windows: 0x26ffa0
     * @note[short] iOS: 0xd563c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x4de4d8
     * @note[short] MacOS (Intel): 0x58e270
     * @note[short] Windows: 0x2704e0
     * @note[short] iOS: 0xd5bbc
     * @note[short] Android
     */
    void addLevelToList(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x4ded5c
     * @note[short] MacOS (Intel): 0x300d90
     * @note[short] Windows: 0x270ed0
     * @note[short] iOS: 0xd600c
     * @note[short] Android
     */
    int completedLevels();

    /**
     * @note[short] MacOS (ARM): 0x4df274
     * @note[short] MacOS (Intel): 0x58ee80
     * @note[short] Windows: 0x2713e0
     * @note[short] iOS: 0xd63d4
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4de07c
     * @note[short] MacOS (Intel): 0x58dd20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd58b4
     * @note[short] Android
     */
    void duplicateListLevels(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x4de0e8
     * @note[short] MacOS (Intel): 0x58dd90
     * @note[short] Windows: 0x270790
     * @note[short] iOS: 0xd5920
     * @note[short] Android
     */
    cocos2d::CCArray* getListLevelsArray(cocos2d::CCArray* levels);

    /**
     * @note[short] MacOS (ARM): 0x4ddfc0
     * @note[short] MacOS (Intel): 0x58dc80
     * @note[short] iOS: 0xd5804
     * @note[short] Android
     */
    std::string getUnpackedDescription();

    /**
     * @note[short] MacOS (ARM): 0x4dddfc
     * @note[short] MacOS (Intel): 0x58dab0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd56d4
     * @note[short] Android
     */
    void handleStatsConflict(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x4dde14
     * @note[short] MacOS (Intel): 0x58dad0
     * @note[short] Windows: 0x270020
     * @note[short] iOS: 0xcb06c
     * @note[short] Android
     */
    bool hasMatchingLevels(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x4de9fc
     * @note[short] MacOS (Intel): 0x58e780
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd5eb4
     * @note[short] Android
     */
    int orderForLevel(int id);

    /**
     * @note[short] MacOS (ARM): 0x4b0830
     * @note[short] MacOS (Intel): 0x55c520
     * @note[short] Windows: 0x51e720
     * @note[short] iOS: 0xb7f18
     * @note[short] Android
     */
    void parseListLevels(std::string str);

    /**
     * @note[short] MacOS (ARM): 0x4de8b4
     * @note[short] MacOS (Intel): 0x58e6b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd5dd8
     * @note[short] Android
     */
    void removeLevelFromList(int id);

    /**
     * @note[short] MacOS (ARM): 0x4dea34
     * @note[short] MacOS (Intel): 0x58e7c0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0xd5eec
     * @note[short] Android
     */
    void reorderLevel(int levelID, int newPosition);

    /**
     * @note[short] MacOS (ARM): 0x4deb84
     * @note[short] MacOS (Intel): 0x58e880
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd5fb8
     * @note[short] Android
     */
    void reorderLevelStep(int id, bool up);

    /**
     * @note[short] MacOS (ARM): 0x4dedc0
     * @note[short] MacOS (Intel): 0x58e9f0
     * @note[short] iOS: 0xd6060
     * @note[short] Android
     */
    void showListInfo();

    /**
     * @note[short] MacOS (ARM): 0x4ded4c
     * @note[short] MacOS (Intel): 0x58e980
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd5ffc
     * @note[short] Android
     */
    int totalLevels();

    /**
     * @note[short] MacOS (ARM): 0x4a6608
     * @note[short] MacOS (Intel): 0x58e440
     * @note[short] Windows: 0x25f210
     * @note[short] iOS: 0xcf8ac
     * @note[short] Android
     */
    void updateLevelsString();
    std::vector<int> m_levels;
    int m_listID;
    int m_listVersion;
    int m_downloads;
    int m_likes;
    int m_difficulty;
    int m_accountID;
    int m_folder;
    int m_listRevision;
    int m_listOrder;
    int m_original;
    int m_diamonds;
    int m_levelsToClaim;
    bool m_isEditable;
    bool m_unlisted;
    bool m_friendsOnly;
    bool m_uploaded;
    bool m_favorite;
    bool m_featured;
    bool m_onlineLevelsLoaded;
    bool m_modified;
    std::string m_creatorName;
    std::string m_listName;
    std::string m_unkString;
    std::string m_levelsString;
    std::string m_listDesc;
    int m_uploadDate;
    int m_updateDate;
    cocos2d::CCDictionary* m_levelsDict;
    GJLevelType m_listType;
    int m_M_ID;
};
