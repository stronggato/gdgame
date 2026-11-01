#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>
#include <Geode/binding/OptionsObjectDelegate.hpp>
#include <Geode/mapping/vector.hpp>

class MusicSearchResult : public cocos2d::CCObject, public OptionsObjectDelegate {
public:
    static constexpr auto CLASS_NAME = "MusicSearchResult";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MusicSearchResult, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x47dbc0
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     MusicSearchResult();

    /**
     * @note[short] Windows: 0x4947e0
     * @note[short] Android: Rebinded
     */
     ~MusicSearchResult();

    /**
     * @note[short] MacOS (Intel): 0x665000
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static MusicSearchResult* create(GJSongType songType);

    /**
     * @note[short] MacOS (ARM): 0x59ec90
     * @note[short] Windows: 0x495760
     * @note[short] Android
     */
    virtual void updateObjects(AudioSortType type);

    /**
     * @note[short] MacOS (ARM): 0x59ec60
     * @note[short] Windows: 0x495740
     * @note[short] iOS: 0x1e2a0c
     * @note[short] Android
     */
    virtual void stateChanged(OptionsObject* object);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* applyArtistFilters(cocos2d::CCArray* objects);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    cocos2d::CCArray* applyTagFilters(cocos2d::CCArray* objects);

    /**
     * @note[short] Android
     */
    TodoReturn applyViewFilter(cocos2d::CCArray* p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e21b8
     * @note[short] Android
     */
    void createArtistFilterObjects();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e2134
     * @note[short] Android
     */
    void createTagFilterObjects();

    /**
     * @note[short] MacOS (Intel): 0x6666e0
     * @note[short] iOS: 0x1e2b80
     * @note[short] Android
     */
    cocos2d::CCArray* getFilesMatchingSearch(cocos2d::CCArray* objects, std::string query);

    /**
     * @note[short] MacOS (ARM): 0x1a0348
     * @note[short] MacOS (Intel): 0x665090
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(GJSongType songType);

    /**
     * @note[short] MacOS (ARM): 0x860e74
     * @note[short] MacOS (Intel): 0x8ff2c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateFutureCount(cocos2d::CCArray* p0, cocos2d::CCArray* p1, cocos2d::CCArray* p2);

    /**
     * @note[short] MacOS (ARM): 0x59ec80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24f70
     * @note[short] Android
     */
    void updateObjects();
    cocos2d::CCArray* m_filterObjects;
    cocos2d::CCArray* m_tagFilterObjects;
    cocos2d::CCArray* m_artistFilterObjects;
    cocos2d::CCArray* m_viewFilterObjects;
    int m_startIndex;
    int m_audioType;
    std::string m_searchQuery;
    AudioSortType m_sortType;
    bool m_tagFilter;
    bool m_artistFilter;
    GJSongType m_songType;
    std::vector<int> m_filterIDs;
};
