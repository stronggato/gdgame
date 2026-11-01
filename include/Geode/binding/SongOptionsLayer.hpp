#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class SongOptionsLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SongOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SongOptionsLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x1625d0
     * @note[short] Android: Rebinded
     */
    virtual  ~SongOptionsLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SongOptionsLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x36a690
     * @note[short] Android
     */
    static SongOptionsLayer* create(CustomSongDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x1ac0c0
     * @note[short] MacOS (Intel): 0x1fab10
     * @note[short] Windows: 0x165210
     * @note[short] iOS: 0x1c29fc
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1ab280
     * @note[short] MacOS (Intel): 0x1f9c30
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x1c1d24
     * @note[short] Android
     */
    bool init(CustomSongDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x1abd18
     * @note[short] MacOS (Intel): 0x1fa7a0
     * @note[short] iOS: 0x1c26ec
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1abc34
     * @note[short] MacOS (Intel): 0x1fa6e0
     * @note[short] iOS: 0x1c2608
     * @note[short] Android
     */
    void onFadeIn(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1abc80
     * @note[short] MacOS (Intel): 0x1fa720
     * @note[short] iOS: 0x1c2654
     * @note[short] Android
     */
    void onFadeOut(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1abe28
     * @note[short] MacOS (Intel): 0x1fa8a0
     * @note[short] iOS: 0x1c27fc
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1abf08
     * @note[short] MacOS (Intel): 0x1fa950
     * @note[short] Windows: 0x1ac7f0
     * @note[short] iOS: 0x1c2894
     * @note[short] Android
     */
    void onPlayback(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1abccc
     * @note[short] MacOS (Intel): 0x1fa760
     * @note[short] iOS: 0x1c26a0
     * @note[short] Android
     */
    void onSongPersistent(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ac054
     * @note[short] MacOS (Intel): 0x1faaa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c2990
     * @note[short] Android
     */
    void updatePlaybackBtn();
    CustomSongDelegate* m_delegate;
    CCTextInputNode* m_offsetInput;
    CCMenuItemSpriteExtra* m_playbackButton;
};
