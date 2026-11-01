#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/CustomSongLayerDelegate.hpp>
#include <Geode/binding/CustomSongDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>

class SongSelectNode : public cocos2d::CCNode, public FLAlertLayerProtocol, public CustomSongLayerDelegate, public CustomSongDelegate {
public:
    static constexpr auto CLASS_NAME = "SongSelectNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SongSelectNode, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x1626c0
     * @note[short] Android: Rebinded
     */
    virtual  ~SongSelectNode();

    /**
     * @note[short] MacOS (ARM): 0x1ad384
     * @note[short] MacOS (Intel): 0x1fbe60
     * @note[short] Windows: 0x166710
     * @note[short] iOS: 0x1c3b18
     * @note[short] Android
     */
    static SongSelectNode* create(int id, bool customSong, LevelSettingsObject* settings, SongSelectType selectType, cocos2d::CCPoint position, cocos2d::CCNode* parent, cocos2d::CCMenu* menu, bool noLabel);

    /**
     * @note[short] MacOS (ARM): 0x1ae15c
     * @note[short] MacOS (Intel): 0x1fcc90
     * @note[short] Windows: 0x167830
     * @note[short] iOS: 0x1c4814
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x1ae244
     * @note[short] MacOS (Intel): 0x1fcd70
     * @note[short] Windows: 0x1678c0
     * @note[short] iOS: 0x1c4890
     * @note[short] Android
     */
    virtual void customSongLayerClosed();

    /**
     * @note[short] MacOS (ARM): 0x1ae2ac
     * @note[short] MacOS (Intel): 0x1fcdd0
     * @note[short] Windows: 0x1678f0
     * @note[short] iOS: 0x1c48f8
     * @note[short] Android
     */
    virtual void songIDChanged(int id);

    /**
     * @note[short] MacOS (ARM): 0x1ae2cc
     * @note[short] MacOS (Intel): 0x1fce00
     * @note[short] Windows: 0x167900
     * @note[short] iOS: 0x1c4918
     * @note[short] Android
     */
    virtual int getActiveSongID();

    /**
     * @note[short] MacOS (ARM): 0x1ae2dc
     * @note[short] MacOS (Intel): 0x1fce20
     * @note[short] Windows: 0x167910
     * @note[short] iOS: 0x1c4928
     * @note[short] Android
     */
    virtual std::string getSongFileName();

    /**
     * @note[short] MacOS (ARM): 0x1ae418
     * @note[short] MacOS (Intel): 0x1fcf70
     * @note[short] Windows: 0x167a00
     * @note[short] iOS: 0x1c49d4
     * @note[short] Android
     */
    virtual LevelSettingsObject* getLevelSettings();

    /**
     * @note[short] MacOS (ARM): 0x1ade00
     * @note[short] MacOS (Intel): 0x1fc8d0
     * @note[short] Windows: 0x1672b0
     * @note[short] iOS: 0x1c456c
     * @note[short] Android
     */
    void audioNext(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1addcc
     * @note[short] MacOS (Intel): 0x1fc890
     * @note[short] Windows: 0x1672f0
     * @note[short] iOS: 0x1c4538
     * @note[short] Android
     */
    void audioPrevious(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x59b510
     * @note[short] MacOS (Intel): 0x1fbf80
     * @note[short] Windows: 0x12e680
     * @note[short] Android
     */
    bool init(int id, bool customSong, LevelSettingsObject* settings, SongSelectType selectType, cocos2d::CCPoint position, cocos2d::CCNode* parent, cocos2d::CCMenu* menu, bool noLabel);

    /**
     * @note[short] MacOS (ARM): 0x1ade6c
     * @note[short] MacOS (Intel): 0x1fc940
     * @note[short] iOS: 0x1c45d8
     * @note[short] Android
     */
    void onOpenCustomSong(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ade38
     * @note[short] MacOS (Intel): 0x1fc910
     * @note[short] iOS: 0x1c45a4
     * @note[short] Android
     */
    void onSongMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1adee8
     * @note[short] MacOS (Intel): 0x1fc9e0
     * @note[short] Windows: 0x167350
     * @note[short] iOS: 0x1c4634
     * @note[short] Android
     */
    void onSongMode(int songMode);

    /**
     * @note[short] MacOS (ARM): 0x1adec8
     * @note[short] MacOS (Intel): 0x1fc9b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void selectSong(int id);

    /**
     * @note[short] MacOS (ARM): 0x1ae128
     * @note[short] MacOS (Intel): 0x1fcc50
     * @note[short] Windows: 0x1676d0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void showCustomSongSelect();

    /**
     * @note[short] MacOS (ARM): 0x1adcb4
     * @note[short] MacOS (Intel): 0x1fc7a0
     * @note[short] Windows: 0x1671c0
     * @note[short] iOS: 0x1c4434
     * @note[short] Android
     */
    void updateAudioLabel();

    /**
     * @note[short] MacOS (ARM): 0x1ae0a8
     * @note[short] MacOS (Intel): 0x1fcbd0
     * @note[short] Windows: 0x167570
     * @note[short] iOS: 0x1c4794
     * @note[short] Android
     */
    void updateWidgetVisibility();
    int m_selectedSongID;
    bool m_isCustomSong;
    bool m_songChanged;
    cocos2d::CCLabelBMFont* m_audioLabel;
    cocos2d::CCArray* m_selectSongObjects;
    cocos2d::CCArray* m_normalSongObjects;
    cocos2d::CCArray* m_changeSongObjects;
    CCMenuItemSpriteExtra* m_normalButton;
    CCMenuItemSpriteExtra* m_customButton;
    CCMenuItemSpriteExtra* m_selectButton;
    CCMenuItemSpriteExtra* m_changeButton;
    CustomSongWidget* m_songWidget;
    LevelSettingsObject* m_settingsObject;
};
