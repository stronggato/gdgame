#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/binding/PlatformDownloadDelegate.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/set.hpp>
#include <Geode/mapping/unordered_set.hpp>
#include <Geode/mapping/vector.hpp>

class MusicDownloadManager : public cocos2d::CCNode, public PlatformDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "MusicDownloadManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MusicDownloadManager, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x47f160
     * @note[short] Android: Rebinded
     */
    virtual  ~MusicDownloadManager();

    /**
     * @note[short] MacOS (Intel): 0x647d30
     * @note[short] Windows: 0x6cc60
     * @note[short] Android
     */
    static MusicDownloadManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x584388
     * @note[short] MacOS (Intel): 0x649380
     * @note[short] Windows: 0x47f370
     * @note[short] iOS: 0x1d0fdc
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x585010
     * @note[short] MacOS (Intel): 0x64a040
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addDLToActive(char const* tag);

    /**
     * @note[short] MacOS (Intel): 0x64d770
     * @note[short] Windows: 0x4810f0
     * @note[short] iOS: 0x1d38a0
     * @note[short] Android
     */
    void addDLToActive(char const* tag, cocos2d::CCObject* obj);

    /**
     * @note[short] MacOS (ARM): 0x584508
     * @note[short] MacOS (Intel): 0x649530
     * @note[short] Windows: 0x47f510
     * @note[short] iOS: 0x1d10d4
     * @note[short] Android
     */
    void addMusicDownloadDelegate(MusicDownloadDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x4c53c0
     * @note[short] MacOS (Intel): 0x64a0e0
     * @note[short] Windows: 0x3a1e10
     * @note[short] iOS: 0x1d1810
     * @note[short] Android
     */
    SongInfoObject* addSongObjectFromString(std::string str);

    /**
     * @note[short] MacOS (Intel): 0x64ca70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d2f7c
     * @note[short] Android
     */
    void clearSong(int songID);

    /**
     * @note[short] Android
     */
    TodoReturn clearSortedMusicCache();

    /**
     * @note[short] MacOS (ARM): 0x587890
     * @note[short] MacOS (Intel): 0x64cc20
     * @note[short] Windows: 0x480760
     * @note[short] iOS: 0x1d30cc
     * @note[short] Android
     */
    void clearUnusedSongs();

    /**
     * @note[short] iOS: 0x1985e4
     * @note[short] Android
     */
    cocos2d::CCDictionary* createArtistsInfo(std::string str);

    /**
     * @note[short] Android
     */
    TodoReturn createCustomSFXFolder(std::string p0, int p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn createCustomSFXPlacement(int p0, int p1, std::string p2, int p3);

    /**
     * @note[short] MacOS (ARM): 0x5862dc
     * @note[short] MacOS (Intel): 0x64b580
     * @note[short] iOS: 0x1d22c8
     * @note[short] Android
     */
    void createSongsInfo(std::string songsStr, std::string artistsStr);

    /**
     * @note[short] Android
     */
    TodoReturn customSFXPathDisplay(std::string const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn customSFXPathLeaf(std::string const& p0);

    /**
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] Android
     */
    TodoReturn decodeCustomSFX(std::string const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn decodeCustomSFXMappingEntries(std::string const& p0, std::map<std::pair<int, int>, std::string>& p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn deleteCustomSFXObject(int p0);

    /**
     * @note[short] MacOS (ARM): 0x598584
     * @note[short] MacOS (Intel): 0x65f020
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1de2c4
     * @note[short] Android
     */
    void deleteSFX(int id);

    /**
     * @note[short] MacOS (ARM): 0x58763c
     * @note[short] MacOS (Intel): 0x64ca20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d2f2c
     * @note[short] Android
     */
    void deleteSong(int id);

    /**
     * @note[short] MacOS (ARM): 0x587d7c
     * @note[short] MacOS (Intel): 0x64d180
     * @note[short] Windows: 0x489240
     * @note[short] iOS: 0x1d34a0
     * @note[short] Android
     */
    void downloadCustomSong(int id);

    /**
     * @note[short] Android
     */
    void downloadMusicLibrary();

    /**
     * @note[short] Android
     */
    TodoReturn downloadNewsFeed();

    /**
     * @note[short] Android
     */
    TodoReturn downloadNewsImage(std::string p0);

    /**
     * @note[short] MacOS (ARM): 0x596598
     * @note[short] MacOS (Intel): 0x65cc90
     * @note[short] Windows: 0x48be40
     * @note[short] iOS: 0x1dca7c
     * @note[short] Android
     */
    void downloadSFX(int id);

    /**
     * @note[short] MacOS (ARM): 0x596aa8
     * @note[short] MacOS (Intel): 0x65d1d0
     * @note[short] iOS: 0x1dce30
     * @note[short] Android
     */
    void downloadSFXFailed(int id, GJSongError errorCode);

    /**
     * @note[short] MacOS (ARM): 0x5911ec
     * @note[short] MacOS (Intel): 0x65d240
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1dcea4
     * @note[short] Android
     */
    void downloadSFXFinished(int id);

    /**
     * @note[short] MacOS (ARM): 0x596ed8
     * @note[short] MacOS (Intel): 0x65d5f0
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    void downloadSFXLibrary();

    /**
     * @note[short] MacOS (ARM): 0x5879d8
     * @note[short] MacOS (Intel): 0x64cd80
     * @note[short] iOS: 0x1d31dc
     * @note[short] Android
     */
    void downloadSong(int id);

    /**
     * @note[short] MacOS (ARM): 0x588420
     * @note[short] MacOS (Intel): 0x64d860
     * @note[short] iOS: 0x1d390c
     * @note[short] Android
     */
    void downloadSongFailed(int id, GJSongError errorCode);

    /**
     * @note[short] MacOS (ARM): 0x588494
     * @note[short] MacOS (Intel): 0x64d8d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d3980
     * @note[short] Android
     */
    void downloadSongFinished(int id);

    /**
     * @note[short] MacOS (ARM): 0x587960
     * @note[short] MacOS (Intel): 0x64cd00
     * @note[short] Windows: 0x480a70
     * @note[short] iOS: 0x1d316c
     * @note[short] Android
     */
    void downloadSongStarted(int id);

    /**
     * @note[short] Android
     */
    TodoReturn encodeCustomSFX(std::set<int> const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn encodeCustomSFXMappingEntries(std::map<std::pair<int, int>, std::string> const& p0);

    /**
     * @note[short] MacOS (ARM): 0x7ecbfc
     * @note[short] MacOS (Intel): 0xa2a20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4dc108
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] Android
     */
    TodoReturn exportCustomSFXToFile();

    /**
     * @note[short] MacOS (ARM): 0x596220
     * @note[short] MacOS (Intel): 0x65c860
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    cocos2d::CCArray* filterMusicByArtistID(int id, cocos2d::CCArray* songs);

    /**
     * @note[short] MacOS (ARM): 0x596378
     * @note[short] MacOS (Intel): 0x65ca80
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x1dc934
     * @note[short] Android
     */
    cocos2d::CCArray* filterMusicByTag(int id, cocos2d::CCArray* songs);

    /**
     * @note[short] MacOS (ARM): 0x58f704
     * @note[short] MacOS (Intel): 0x6552b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d7fe0
     * @note[short] Android
     */
    void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0x591a48
     * @note[short] MacOS (Intel): 0x6576f0
     * @note[short] Windows: 0x48da30
     * @note[short] iOS: 0x1d9698
     * @note[short] Android
     */
    std::string generateCustomContentURL(std::string path);

    /**
     * @note[short] MacOS (ARM): 0x58445c
     * @note[short] MacOS (Intel): 0x649470
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d1028
     * @note[short] Android
     */
    void generateResourceAssetList();

    /**
     * @note[short] MacOS (ARM): 0x596114
     * @note[short] MacOS (Intel): 0x65c740
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1dc82c
     * @note[short] Android
     */
    cocos2d::CCArray* getAllMusicArtists(OptionsObjectDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x595d04
     * @note[short] MacOS (Intel): 0x65c310
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1dc54c
     * @note[short] Android
     */
    cocos2d::CCArray* getAllMusicObjects(GJSongType type);

    /**
     * @note[short] Android
     */
    TodoReturn getAllMusicObjectsSorted(GJSongType p0, AudioSortType p1);

    /**
     * @note[short] MacOS (ARM): 0x595fc0
     * @note[short] MacOS (Intel): 0x65c5e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1dc6f4
     * @note[short] Android
     */
    cocos2d::CCArray* getAllMusicTags(OptionsObjectDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x5984dc
     * @note[short] MacOS (Intel): 0x65ef60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1de254
     * @note[short] Android
     */
    cocos2d::CCArray* getAllSFXObjects(bool onlySFX);

    /**
     * @note[short] MacOS (ARM): 0x5874b8
     * @note[short] MacOS (Intel): 0x64c880
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d2e54
     * @note[short] Android
     */
    cocos2d::CCArray* getAllSongs();

    /**
     * @note[short] Android
     */
    TodoReturn getAudioFilesize(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x591000
     * @note[short] MacOS (Intel): 0x656cb0
     * @note[short] Windows: 0x488440
     * @note[short] iOS: 0x1d8ec0
     * @note[short] Android
     */
    void getCustomContentURL();

    /**
     * @note[short] Android
     */
    TodoReturn getCustomSFXCount(std::set<int> const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn getCustomSFXFolderForID(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getCustomSFXFolderPath(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn getCustomSFXLocationText(SFXInfoObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getCustomSFXObject(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getCustomSFXRawPath(SFXInfoObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getCustomSFXRoot();

    /**
     * @note[short] MacOS (Intel): 0x6497d0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x1d12b0
     * @note[short] Android
     */
    cocos2d::CCObject* getDLObject(char const* id);

    /**
     * @note[short] MacOS (ARM): 0x5871b4
     * @note[short] MacOS (Intel): 0x64c530
     * @note[short] Windows: 0x4806a0
     * @note[short] iOS: 0x1d2cd0
     * @note[short] Android
     */
    cocos2d::CCArray* getDownloadedSongs();

    /**
     * @note[short] MacOS (ARM): 0x588500
     * @note[short] MacOS (Intel): 0x64d940
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d39ec
     * @note[short] Android
     */
    int getDownloadProgress(int id);

    /**
     * @note[short] MacOS (ARM): 0x595cf0
     * @note[short] MacOS (Intel): 0x6506a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1dc538
     * @note[short] Android
     */
    MusicArtistObject* getMusicArtistForID(int id);

    /**
     * @note[short] MacOS (ARM): 0x5885e8
     * @note[short] MacOS (Intel): 0x64da00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    SongInfoObject* getMusicObject(int id);

    /**
     * @note[short] Android
     */
    TodoReturn getNewsImageDownloadKey(std::string p0);

    /**
     * @note[short] MacOS (ARM): 0x5885c0
     * @note[short] MacOS (Intel): 0x64d9e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    char const* getSFXDownloadKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x588560
     * @note[short] MacOS (Intel): 0x64d990
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d3a40
     * @note[short] Android
     */
    int getSFXDownloadProgress(int id);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1de108
     * @note[short] Android
     */
    SFXFolderObject* getSFXFolderObjectForID(int id);

    /**
     * @note[short] iOS: 0x1de174
     * @note[short] Android
     */
    std::string getSFXFolderPathForID(int id, bool nextFolder);

    /**
     * @note[short] MacOS (ARM): 0x595cf0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    SFXInfoObject* getSFXObject(int id);

    /**
     * @note[short] MacOS (ARM): 0x584748
     * @note[short] MacOS (Intel): 0x649760
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    char const* getSongDownloadKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x584b9c
     * @note[short] MacOS (Intel): 0x649b80
     * @note[short] iOS: 0x1d14d4
     * @note[short] Android
     */
    void getSongInfo(int id, bool download);

    /**
     * @note[short] MacOS (ARM): 0x584720
     * @note[short] MacOS (Intel): 0x649740
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    char const* getSongInfoKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x584a58
     * @note[short] MacOS (Intel): 0x649a20
     * @note[short] Windows: 0x481290
     * @note[short] iOS: 0x1d1410
     * @note[short] Android
     */
    SongInfoObject* getSongInfoObject(int id);

    /**
     * @note[short] MacOS (ARM): 0x584b88
     * @note[short] MacOS (Intel): 0x649b60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getSongPriority();

    /**
     * @note[short] Windows: 0x47f020
     * @note[short] Android
     */
    void handleIt(bool success, std::string response, std::string tag, GJHttpType type);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void handleItDelayed(bool success, std::string response, std::string tag, GJHttpType type);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void handleItND(cocos2d::CCNode* node, void* data);

    /**
     * @note[short] Android
     */
    TodoReturn hasUnreadNews();

    /**
     * @note[short] Android
     */
    TodoReturn importCustomSFXFromFile(std::string& p0, int& p1, int& p2);

    /**
     * @note[short] Android
     */
    TodoReturn importCustomSFXMappings(std::map<std::pair<int, int>, std::string> const& p0, std::string const& p1, int& p2, int& p3);

    /**
     * @note[short] Android
     */
    TodoReturn importCustomSFXSetup(std::string const& p0, std::string const& p1, bool p2, int& p3, int& p4);

    /**
     * @note[short] MacOS (ARM): 0x584a24
     * @note[short] MacOS (Intel): 0x6499f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d13dc
     * @note[short] Android
     */
    void incrementPriorityForSong(int id);

    /**
     * @note[short] Android
     */
    bool isCustomSFXFavorite(int p0);

    /**
     * @note[short] Android
     */
    bool isCustomSFXInScope(SFXInfoObject* p0, std::set<int> const& p1);

    /**
     * @note[short] MacOS (ARM): 0x584704
     * @note[short] MacOS (Intel): 0x649720
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isDLActive(char const* tag);

    /**
     * @note[short] Android
     */
    bool isMusicFavorite(int p0);

    /**
     * @note[short] MacOS (ARM): 0x5945dc
     * @note[short] MacOS (Intel): 0x65abb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isMusicLibraryLoaded();

    /**
     * @note[short] Android
     */
    bool isNewsFeedLoaded();

    /**
     * @note[short] Android
     */
    bool isNewsImageDownloaded(std::string p0);

    /**
     * @note[short] MacOS (ARM): 0x588b30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isResourceSFX(int id);

    /**
     * @note[short] MacOS (ARM): 0x5885fc
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isResourceSong(int id);

    /**
     * @note[short] MacOS (ARM): 0x58467c
     * @note[short] MacOS (Intel): 0x6496b0
     * @note[short] Windows: 0x47f680
     * @note[short] iOS: 0x1d11d8
     * @note[short] Android
     */
    bool isRunningActionForSongID(int id);

    /**
     * @note[short] iOS: 0x1d3bb4
     * @note[short] Android
     */
    bool isSFXDownloaded(int id);

    /**
     * @note[short] Android
     */
    bool isSFXFavorite(int p0);

    /**
     * @note[short] MacOS (ARM): 0x598164
     * @note[short] MacOS (Intel): 0x65ebe0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isSFXLibraryLoaded();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x1d2d64
     * @note[short] Android
     */
    bool isSongDownloaded(int id);

    /**
     * @note[short] Android
     */
    TodoReturn joinIDString(std::vector<int> const& p0);

    /**
     * @note[short] MacOS (ARM): 0x587508
     * @note[short] MacOS (Intel): 0x64c8e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d2ea4
     * @note[short] Android
     */
    void limitDownloadedSongs();

    /**
     * @note[short] Android
     */
    TodoReturn linkRowString(GJLinkObject const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn linkTitleForType(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn linkTypeForURL(std::string const& p0);

    /**
     * @note[short] MacOS (ARM): 0x585040
     * @note[short] MacOS (Intel): 0x64a070
     * @note[short] iOS: 0x1d179c
     * @note[short] Android
     */
    void loadSongInfoFailed(int id, GJSongError errorCode);

    /**
     * @note[short] MacOS (ARM): 0x584fa4
     * @note[short] MacOS (Intel): 0x649fd0
     * @note[short] Windows: 0x490c40
     * @note[short] iOS: 0x1d1730
     * @note[short] Android
     */
    void loadSongInfoFinished(SongInfoObject* object);

    /**
     * @note[short] Android
     */
    TodoReturn mintCustomSFXID();

    /**
     * @note[short] Android
     */
    TodoReturn moveCustomSFXObject(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x591180
     * @note[short] MacOS (Intel): 0x656e20
     * @note[short] iOS: 0x1d8fcc
     * @note[short] Android
     */
    void musicActionFailed(GJMusicAction action);

    /**
     * @note[short] Android
     */
    void musicActionFinished(GJMusicAction action);

    /**
     * @note[short] MacOS (ARM): 0x59644c
     * @note[short] MacOS (Intel): 0x65cb60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1dc9c8
     * @note[short] Android
     */
    std::string nameForTagID(int id);

    /**
     * @note[short] Android
     */
    TodoReturn newsImageDownloaded(std::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn newsImageFailed(std::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn noteSFXUsed(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn noteSongUsed(int p0);

    /**
     * @note[short] MacOS (ARM): 0x5925b0
     * @note[short] MacOS (Intel): 0x658420
     * @note[short] iOS: 0x1d9f80
     * @note[short] Android
     */
    void onDownloadMusicLibraryCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] Android
     */
    TodoReturn onDownloadNewsFeedCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);

    /**
     * @note[short] Android
     */
    TodoReturn onDownloadNewsImageCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);

    /**
     * @note[short] MacOS (ARM): 0x596870
     * @note[short] Windows: 0xc58f0
     * @note[short] iOS: 0x1dccec
     * @note[short] Android
     */
    void onDownloadSFXCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] MacOS (ARM): 0x5970b4
     * @note[short] MacOS (Intel): 0x65d7a0
     * @note[short] iOS: 0x1dd3a0
     * @note[short] Android
     */
    void onDownloadSFXLibraryCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] MacOS (ARM): 0x5880a8
     * @note[short] Windows: 0x480e40
     * @note[short] iOS: 0x1d371c
     * @note[short] Android
     */
    void onDownloadSongCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] Android
     */
    TodoReturn onGetAudioFilesizeCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x583cf4
     * @note[short] MacOS (Intel): 0x648bb0
     * @note[short] iOS: 0x1d0be0
     * @note[short] Android
     */
    void onGetCustomContentURLCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x583a64
     * @note[short] MacOS (Intel): 0x648910
     * @note[short] Windows: 0x3c89a0
     * @note[short] iOS: 0x1d0a68
     * @note[short] Android
     */
    void onGetSongInfoCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    void onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] Android
     */
    void onTryUpdateMusicLibraryCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] Android
     */
    TodoReturn onTryUpdateNewsFeedCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);

    /**
     * @note[short] Android
     */
    void onTryUpdateSFXLibraryCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] Android
     */
    TodoReturn parseLinkRows(std::string const& p0, std::vector<GJLinkObject>& p1);

    /**
     * @note[short] MacOS (ARM): 0x597284
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x1dd4bc
     * @note[short] Android
     */
    void parseMusicLibrary();

    /**
     * @note[short] Android
     */
    TodoReturn parseNewsFeed();

    /**
     * @note[short] Windows: 0x48ca40
     * @note[short] iOS: 0x278afc
     * @note[short] Android
     */
    void parseSFXLibrary();

    /**
     * @note[short] Android
     */
    TodoReturn pathForNewsFolder();

    /**
     * @note[short] Android
     */
    TodoReturn pathForNewsImage(std::string p0);

    /**
     * @note[short] MacOS (ARM): 0x588c14
     * @note[short] MacOS (Intel): 0x64e1b0
     * @note[short] Windows: 0x481980
     * @note[short] iOS: 0x1d3ca4
     * @note[short] Android
     */
    std::string pathForSFX(int id);

    /**
     * @note[short] Android
     */
    std::string pathForSFXFolder(int id);

    /**
     * @note[short] MacOS (ARM): 0x5877a4
     * @note[short] MacOS (Intel): 0x64cb60
     * @note[short] Windows: 0x481640
     * @note[short] iOS: 0x1d2ff8
     * @note[short] Android
     */
    std::string pathForSong(int id);

    /**
     * @note[short] iOS: 0x1d3a94
     * @note[short] Android
     */
    std::string pathForSongFolder(int id);

    /**
     * @note[short] MacOS (ARM): 0x5833f4
     * @note[short] MacOS (Intel): 0x5b2d40
     * @note[short] Windows: 0x47ee00
     * @note[short] iOS: 0x1d06cc
     * @note[short] Android
     */
    cocos2d::extension::CCHttpRequest* ProcessHttpGetRequest(std::string url, std::string tag, cocos2d::extension::SEL_HttpResponse selector, int connectTimeout, int readTimeout);

    /**
     * @note[short] MacOS (ARM): 0x5830c4
     * @note[short] MacOS (Intel): 0x647f20
     * @note[short] Windows: 0x47ecc0
     * @note[short] iOS: 0x1d0474
     * @note[short] Android
     */
    void ProcessHttpRequest(std::string url, std::string params, std::string tag, GJHttpType type);

    /**
     * @note[short] Android
     */
    TodoReturn rebuildCustomSFXMappings(std::vector<std::pair<int, int>> const& p0, std::map<std::pair<int, int>, std::string>& p1, std::set<int> const* p2);

    /**
     * @note[short] MacOS (ARM): 0x5848d0
     * @note[short] MacOS (Intel): 0x6498b0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0xad518
     * @note[short] Android
     */
    void removeDLFromActive(char const* tag);

    /**
     * @note[short] MacOS (ARM): 0x5845fc
     * @note[short] MacOS (Intel): 0x649620
     * @note[short] Windows: 0x47f5f0
     * @note[short] iOS: 0x1d1158
     * @note[short] Android
     */
    void removeMusicDownloadDelegate(MusicDownloadDelegate* delegate);

    /**
     * @note[short] Android
     */
    TodoReturn renameCustomSFXObject(int p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn resolveSFXPlacement(int p0, int p1, std::string const& p2);

    /**
     * @note[short] MacOS (ARM): 0x585354
     * @note[short] MacOS (Intel): 0x64a380
     * @note[short] iOS: 0x1d19bc
     * @note[short] Android
     */
    cocos2d::CCDictionary* responseToDict(std::string response, char const* delimiter);

    /**
     * @note[short] MacOS (ARM): 0x588edc
     * @note[short] MacOS (Intel): 0x64e4d0
     * @note[short] Windows: 0x481a40
     * @note[short] iOS: 0x1d3e90
     * @note[short] Android
     */
    void showTOS(FLAlertLayerProtocol* delegate);

    /**
     * @note[short] MacOS (ARM): 0x5849c8
     * @note[short] MacOS (Intel): 0x649990
     * @note[short] Windows: 0x47f700
     * @note[short] iOS: 0x1d1380
     * @note[short] Android
     */
    void songStateChanged();

    /**
     * @note[short] Android
     */
    TodoReturn splitIDString(std::string const& p0, std::vector<int>& p1);

    /**
     * @note[short] MacOS (ARM): 0x584770
     * @note[short] MacOS (Intel): 0x649780
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d1254
     * @note[short] Android
     */
    void stopDownload(int id);

    /**
     * @note[short] MacOS (Intel): 0x65be10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void storeMusicObject(SongInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x598188
     * @note[short] MacOS (Intel): 0x65ec00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ddfc0
     * @note[short] Android
     */
    void storeSFXInfoObject(SFXInfoObject* object);

    /**
     * @note[short] Android
     */
    TodoReturn sumLocalAudioSizeBytes(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn syncCustomSFXPlacements();

    /**
     * @note[short] Android
     */
    TodoReturn toggleCustomSFXFavorite(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleMusicFavorite(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleSFXFavorite(int p0);

    /**
     * @note[short] MacOS (ARM): 0x59826c
     * @note[short] MacOS (Intel): 0x65ece0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void tryLoadLibraries();

    /**
     * @note[short] Android
     */
    TodoReturn tryLoadNewsFeed();

    /**
     * @note[short] MacOS (ARM): 0x592060
     * @note[short] MacOS (Intel): 0x657ef0
     * @note[short] Android
     */
    void tryUpdateMusicLibrary();

    /**
     * @note[short] Android
     */
    TodoReturn tryUpdateNewsFeed();

    /**
     * @note[short] Android
     */
    void tryUpdateSFXLibrary();

    /**
     * @note[short] Android
     */
    TodoReturn urlEncode(std::string const& p0);
    cocos2d::CCDictionary* m_activeDownloads;
    cocos2d::CCArray* m_musicDownloadDelegates;
    cocos2d::CCDictionary* m_songObjects;
    cocos2d::CCDictionary* m_MDLM003;
    int m_songPriority;
    std::string m_customContentURL;
    cocos2d::CCDictionary* m_sfxObjects;
    cocos2d::CCArray* m_sfxArtists;
    int m_sfxLibraryVersion;
    int m_sfxObjectCount;
    bool m_requestedSfxLibraryDownloaded;
    cocos2d::CCDictionary* m_musicObjects;
    cocos2d::CCDictionary* m_musicArtists;
    std::map<int, std::string> m_musicTags;
    int m_musicLibraryVersion;
    int m_musicObjectCount;
    int m_ncsSongCount;
    bool m_downloadingMusicLibrary;
    bool m_triedToLoadLibraries;
    bool m_unkBool;
    std::unordered_set<int> m_resourceSfxUnorderedSet;
    std::unordered_set<int> m_resourceSongUnorderedSet;
};
