#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class GJSearchObject : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJSearchObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSearchObject, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x216d40
     * @note[short] Android: Rebinded
     */
    virtual  ~GJSearchObject();

    /**
     * @note[short] MacOS (ARM): 0x4dceb0
     * @note[short] MacOS (Intel): 0x58c890
     * @note[short] Windows: 0x26d5c0
     * @note[short] iOS: 0xd48e8
     * @note[short] Android
     */
    static GJSearchObject* create(SearchType searchType);

    /**
     * @note[short] MacOS (ARM): 0x4dcf1c
     * @note[short] MacOS (Intel): 0x58c900
     * @note[short] Windows: 0x26d6a0
     * @note[short] iOS: 0xd49f8
     * @note[short] Android
     */
    static GJSearchObject* create(SearchType searchType, std::string searchQuery);

    /**
     * @note[short] MacOS (ARM): 0x4dcc08
     * @note[short] MacOS (Intel): 0x58c560
     * @note[short] Windows: 0x26d7d0
     * @note[short] iOS: 0xd469c
     * @note[short] Android
     */
    static GJSearchObject* create(SearchType searchType, std::string searchQuery, std::string difficulty, std::string length, int page, bool star, bool uncompleted, bool featured, int songID, bool original, bool twoPlayer, bool customSong, bool songFilter, bool noStar, bool coins, bool epic, bool legendary, bool mythic, bool onlyCompleted, int demonFilter, int folder, int searchMode);

    /**
     * @note[short] MacOS (ARM): 0x4a00ec
     * @note[short] MacOS (Intel): 0x54a320
     * @note[short] Windows: 0x26ce80
     * @note[short] iOS: 0xad608
     * @note[short] Android
     */
    static GJSearchObject* createFromKey(char const* key);

    /**
     * @note[short] Windows: 0x26ddd0
     * @note[short] Android
     */
    static char const* getSearchKey(SearchType searchType, std::string searchQuery, std::string difficulty, std::string length, int page, bool star, bool uncompleted, bool featured, int songID, bool original, bool twoPlayer, bool customSong, bool songFilter, bool noStar, bool coins, bool epic, bool legendary, bool mythic, bool onlyCompleted, int demonFilter, int folder, int searchMode);

    /**
     * @note[short] Windows: 0x26db10
     * @note[short] iOS: 0xb5aa0
     * @note[short] Android
     */
    char const* getKey();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd4f7c
     * @note[short] Android
     */
    char const* getNextPageKey();

    /**
     * @note[short] MacOS (ARM): 0x4dd70c
     * @note[short] MacOS (Intel): 0x58d270
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd5120
     * @note[short] Android
     */
    GJSearchObject* getNextPageObject();

    /**
     * @note[short] MacOS (ARM): 0x4dd718
     * @note[short] MacOS (Intel): 0x58d290
     * @note[short] Windows: 0x26dc60
     * @note[short] iOS: 0xd512c
     * @note[short] Android
     */
    GJSearchObject* getPageObject(int page);

    /**
     * @note[short] MacOS (ARM): 0x4dd90c
     * @note[short] MacOS (Intel): 0x58d550
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd52e0
     * @note[short] Android
     */
    GJSearchObject* getPrevPageObject();

    /**
     * @note[short] MacOS (ARM): 0x4dd004
     * @note[short] MacOS (Intel): 0x58ca20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd4b24
     * @note[short] Android
     */
    bool init(SearchType searchType, std::string searchQuery, std::string difficulty, std::string length, int page, bool star, bool uncompleted, bool featured, int songID, bool original, bool twoPlayer, bool customSong, bool songFilter, bool noStar, bool coins, bool epic, bool legendary, bool mythic, bool onlyCompleted, int demonFilter, int folder, int searchMode);

    /**
     * @note[short] MacOS (ARM): 0x4dd920
     * @note[short] MacOS (Intel): 0x58d570
     * @note[short] Windows: 0x26e340
     * @note[short] iOS: 0xd52f4
     * @note[short] Android
     */
    bool isLevelSearchObject();
    SearchType m_searchType;
    std::string m_searchQuery;
    std::string m_difficulty;
    std::string m_length;
    int m_page;
    bool m_starFilter;
    bool m_noStarFilter;
    int m_total;
    bool m_uncompletedFilter;
    bool m_completedFilter;
    bool m_featuredFilter;
    bool m_originalFilter;
    bool m_twoPlayerFilter;
    bool m_coinsFilter;
    bool m_epicFilter;
    bool m_legendaryFilter;
    bool m_mythicFilter;
    GJDifficulty m_demonFilter;
    int m_folder;
    int m_songID;
    bool m_customSongFilter;
    bool m_songFilter;
    bool m_searchIsOverlay;
    int m_searchMode;
};
