#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/set.hpp>
#include <Geode/mapping/unordered_set.hpp>
#include <Geode/mapping/vector.hpp>
#include <Geode/binding/GJLinkObject.hpp>

class SongInfoObject : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "SongInfoObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SongInfoObject, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x47d830
     * @note[short] Android: Rebinded
     */
    virtual  ~SongInfoObject();

    /**
     * @note[short] MacOS (Intel): 0x64a660
     * @note[short] Windows: 0x2fd670
     * @note[short] Android
     */
    static SongInfoObject* create(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x2992dc
     * @note[short] Windows: 0x490ff0
     * @note[short] Android
     */
    static SongInfoObject* create(int songID);

    /**
     * @note[short] MacOS (ARM): 0x7bc1a8
     * @note[short] Android
     */
    static SongInfoObject* create(int p0, std::string p1, std::string p2, int p3, float p4, std::string p5, int p6, std::string p7, bool p8, int p9, int p10);

    /**
     * @note[short] iOS: 0x1e0808
     * @note[short] Android
     */
    static SongInfoObject* createWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x59c344
     * @note[short] MacOS (Intel): 0x663690
     * @note[short] Windows: 0x492d50
     * @note[short] iOS: 0x1e0fcc
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x59c4c0
     * @note[short] MacOS (Intel): 0x578c80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e1148
     * @note[short] Android
     */
    virtual bool canEncode();

    /**
     * @note[short] Android
     */
    TodoReturn addArtistLink(GJLinkObject const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn addSongLink(GJLinkObject const& p0);

    /**
     * @note[short] MacOS (ARM): 0x595654
     * @note[short] MacOS (Intel): 0x65bbf0
     * @note[short] iOS: 0x1dc038
     * @note[short] Android
     */
    void addTags(std::string tags);

    /**
     * @note[short] MacOS (ARM): 0x3a95c8
     * @note[short] MacOS (Intel): 0x432ed0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool containsTag(int tag);

    /**
     * @note[short] MacOS (Intel): 0x8d8910
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void copyValues(SongInfoObject* object);

    /**
     * @note[short] Android
     */
    TodoReturn getArtistLinks();

    /**
     * @note[short] MacOS (ARM): 0x59c4c8
     * @note[short] MacOS (Intel): 0x663860
     * @note[short] iOS: 0x1e1150
     * @note[short] Android
     */
    std::string getArtistNames(int unused);

    /**
     * @note[short] MacOS (ARM): 0x59c994
     * @note[short] MacOS (Intel): 0x663ea0
     * @note[short] Windows: 0x493560
     * @note[short] iOS: 0x1e14c4
     * @note[short] Android
     */
    int getExtraArtistCount();

    /**
     * @note[short] Android
     */
    TodoReturn getSongLinks();

    /**
     * @note[short] MacOS (ARM): 0x59d070
     * @note[short] MacOS (Intel): 0x6645d0
     * @note[short] Windows: 0x494190
     * @note[short] iOS: 0x1e1a5c
     * @note[short] Android
     */
    std::string getTagsString(bool shortTags);

    /**
@param downloadLinkOverride The user-friendly page URL for the so     * @note[short] MacOS (ARM): 0x1ad494
     * @note[short] Windows: 0xa8dd0
     * @note[short] Android
     */
    bool init(int p0, std::string p1, std::string p2, int p3, float p4, std::string p5, int p6, std::string p7, bool p8, int p9, int p10);

    /**
     * @note[short] Android
     */
    void setArtistLinks(std::string const& p0);

    /**
     * @note[short] Android
     */
    void setSongLinks(std::string const& p0);

    /**
     * @note[short] MacOS (Intel): 0x6628d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e06d4
     * @note[short] Android
     */
    void updateArtists(std::string artists);
    int m_songID;
    std::string m_songName;
    std::string m_artistName;
    std::string m_songUrl;
    int m_artistID;
    float m_fileSize;
    int m_nongType;
    std::string m_downloadLinkOverride;
    bool m_unloaded;
    bool m_verified;
    bool m_isBlocked;
    int m_priority;
    int m_duration;
    int m_BPM;
    bool m_isNew;
    int m_libraryOrder;
    int m_songOrder;
    std::string m_extraArtistNames;
    std::unordered_set<int> m_artistIDs;
    std::string m_songLinksString;
    std::string m_artistLinksString;
    std::vector<GJLinkObject> m_songLinks;
    std::vector<GJLinkObject> m_artistLinks;
    std::set<int> m_tags;
    std::string m_longTagsString;
    std::string m_shortTagsString;
    std::string m_unk318;
    std::string m_unk338;
};
