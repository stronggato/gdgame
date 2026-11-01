#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/mapping/vector.hpp>

class SongInfoLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SongInfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SongInfoLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x62fbe0
     * @note[short] Android: Rebinded
     */
    virtual  ~SongInfoLayer();

    /**
     * @note[short] MacOS (ARM): 0x259564
     * @note[short] Android
     */
    static SongInfoLayer* create(int artistID);

    /**
     * @note[short] Android
     */
    static SongInfoLayer* create(SongInfoObject* p0);

    /**
     * @note[short] Android
     */
    static SongInfoLayer* create(std::string p0, std::string p1, std::vector<GJLinkObject> p2, std::vector<GJLinkObject> p3, int p4, std::string p5, int p6);

    /**
     * @note[short] MacOS (ARM): 0x5ee1e4
     * @note[short] MacOS (Intel): 0x6d7ad0
     * @note[short] Windows: 0x99e20
     * @note[short] iOS: 0x44d5f4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Android
     */
    TodoReturn addLinkRows(std::vector<GJLinkObject> const& p0, float p1, int p2);

    /**
     * @note[short] MacOS (Intel): 0x651c50
     * @note[short] Android
     */
    bool init(std::string p0, std::string p1, std::vector<GJLinkObject> p2, std::vector<GJLinkObject> p3, int p4, std::string p5, int p6);

    /**
     * @note[short] MacOS (ARM): 0x5ed940
     * @note[short] MacOS (Intel): 0x6d7300
     * @note[short] iOS: 0x44ceb0
     * @note[short] Android
     */
    void onBPM(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5ed904
     * @note[short] MacOS (Intel): 0x6d72d0
     * @note[short] Windows: 0x99df0
     * @note[short] iOS: 0x44ce74
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onCopySongID(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c22d0
     * @note[short] MacOS (Intel): 0x2f79f0
     * @note[short] iOS: 0x24a804
     * @note[short] Android
     */
    void onFB(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onLink(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5edc50
     * @note[short] MacOS (Intel): 0x6d7630
     * @note[short] iOS: 0x44d15c
     * @note[short] Android
     */
    void onMenuMusic(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNG(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5edcf8
     * @note[short] MacOS (Intel): 0x6d76c0
     * @note[short] iOS: 0x44d1f0
     * @note[short] Android
     */
    void onPracticeMusic(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSongUsage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onYT(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5edeb0
     * @note[short] MacOS (Intel): 0x6d7840
     * @note[short] iOS: 0x44d378
     * @note[short] Android
     */
    void showCustomMusicUnlockInfo();
    std::string m_songName;
    std::string m_artistName;
    int m_songID;
    int m_musicCustomizerMessageIndex;
    std::vector<GJLinkObject> m_artistLinks;
};
