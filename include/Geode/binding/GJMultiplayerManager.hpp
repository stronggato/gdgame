#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class GJMultiplayerManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJMultiplayerManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJMultiplayerManager, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x38d6d0
     * @note[short] Android: Rebinded
     */
    virtual  ~GJMultiplayerManager();

    /**
     * @note[short] MacOS (ARM): 0x64418c
     * @note[short] MacOS (Intel): 0x7362d0
     * @note[short] Windows: 0x38d770
     * @note[short] iOS: 0x2644b0
     * @note[short] Android
     */
    static GJMultiplayerManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x64579c
     * @note[short] MacOS (Intel): 0x737a50
     * @note[short] Windows: 0x38ded0
     * @note[short] iOS: 0x2652a8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x646474
     * @note[short] MacOS (Intel): 0x738680
     * @note[short] Windows: 0x18a790
     * @note[short] iOS: 0x265658
     * @note[short] Android
     */
    void addComment(std::string str, int lobbyID);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addDLToActive(char const* tag);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addDLToActive(char const* tag, cocos2d::CCObject* obj);

    /**
     * @note[short] MacOS (ARM): 0x647100
     * @note[short] MacOS (Intel): 0x739500
     * @note[short] iOS: 0x265d74
     * @note[short] Android
     */
    void createAndAddComment(std::string text, int lobbyID);

    /**
     * @note[short] MacOS (ARM): 0x6472b8
     * @note[short] MacOS (Intel): 0x7396d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x265e8c
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x6472b4
     * @note[short] MacOS (Intel): 0x7396c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x265e88
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x646674
     * @note[short] MacOS (Intel): 0x738890
     * @note[short] Android
     */
    bool exitLobby(int id);

    /**
     * @note[short] MacOS (ARM): 0x6472b0
     * @note[short] MacOS (Intel): 0x7396b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x265e84
     * @note[short] Android
     */
    void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0x645e94
     * @note[short] MacOS (Intel): 0x738140
     * @note[short] Windows: 0x38f0d0
     * @note[short] iOS: 0xd6d68
     * @note[short] Android
     */
    std::string getBasePostString();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCObject* getDLObject(char const* tag);

    /**
     * @note[short] MacOS (ARM): 0x645f9c
     * @note[short] MacOS (Intel): 0x738230
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getLastCommentIDForGame(int id);

    /**
     * @note[short] MacOS (ARM): 0x4da3e4
     * @note[short] Windows: 0x38dc30
     * @note[short] iOS: 0x1d07ec
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
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isDLActive(char const* tag);

    /**
     * @note[short] MacOS (ARM): 0x645b40
     * @note[short] MacOS (Intel): 0x5760b0
     * @note[short] Android
     */
    bool joinLobby(int id);

    /**
     * @note[short] MacOS (ARM): 0x645534
     * @note[short] MacOS (Intel): 0x7377f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2650ac
     * @note[short] Android
     */
    void onExitLobbyCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x644d18
     * @note[short] MacOS (Intel): 0x736ec0
     * @note[short] Windows: 0x38e010
     * @note[short] iOS: 0x264bd0
     * @note[short] Android
     */
    void onJoinLobbyCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    void onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] MacOS (ARM): 0x645634
     * @note[short] MacOS (Intel): 0x7378d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x9e634
     * @note[short] Android
     */
    void onUploadCommentCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x4c0c2c
     * @note[short] MacOS (Intel): 0x736350
     * @note[short] iOS: 0x264520
     * @note[short] Android
     */
    void ProcessHttpRequest(std::string url, std::string params, std::string tag, GJHttpType type);

    /**
     * @note[short] MacOS (ARM): 0x645a48
     * @note[short] MacOS (Intel): 0xa0280
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x265304
     * @note[short] Android
     */
    void removeDLFromActive(char const* tag);

    /**
     * @note[short] MacOS (ARM): 0x646944
     * @note[short] MacOS (Intel): 0x738b70
     * @note[short] Windows: 0x38e780
     * @note[short] iOS: 0x265838
     * @note[short] Android
     */
    bool uploadComment(std::string text, int lobbyID);
    cocos2d::CCDictionary* m_activeDownloads;
    cocos2d::CCDictionary* m_lobbyScores;
    cocos2d::CCDictionary* m_scoreArrays;
    cocos2d::CCDictionary* m_lobbyComments;
    GJMPDelegate* m_mpDelegate;
    UploadActionDelegate* m_uploadDelegate;
};
