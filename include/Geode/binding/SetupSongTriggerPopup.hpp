#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupAudioTriggerPopup.hpp>
#include <Geode/binding/MusicDownloadDelegate.hpp>
#include <Geode/binding/SongPlaybackDelegate.hpp>

class SetupSongTriggerPopup : public SetupAudioTriggerPopup, public MusicDownloadDelegate, public SongPlaybackDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupSongTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSongTriggerPopup, SetupAudioTriggerPopup)

    /**
     * @note[short] Windows: 0x5ee590
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupSongTriggerPopup();

    /**
     * @note[short] Windows: 0x5ee6d0
     * @note[short] Android
     */
    static SetupSongTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x260740
     * @note[short] MacOS (Intel): 0x2c0ac0
     * @note[short] Windows: 0x5efcf0
     * @note[short] iOS: 0x25749c
     * @note[short] Android
     */
    virtual void pageChanged();

    /**
     * @note[short] MacOS (ARM): 0x2607d4
     * @note[short] MacOS (Intel): 0x2c0b50
     * @note[short] Windows: 0x5efd70
     * @note[short] iOS: 0x257530
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x260640
     * @note[short] MacOS (Intel): 0x2c09c0
     * @note[short] Windows: 0x5efba0
     * @note[short] iOS: 0x257408
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x26042c
     * @note[short] MacOS (Intel): 0x2c0780
     * @note[short] Windows: 0x5ef5e0
     * @note[short] iOS: 0x257200
     * @note[short] Android
     */
    virtual void onPlayback(SongInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x25f794
     * @note[short] iOS: 0x256688
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x260634
     * @note[short] MacOS (Intel): 0x2c09a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onResetSongTime(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2601d8
     * @note[short] MacOS (Intel): 0x2c0550
     * @note[short] Windows: 0x5efa00
     * @note[short] iOS: 0x256fd0
     * @note[short] Android
     */
    void onSavePlaybackPos(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2603e8
     * @note[short] MacOS (Intel): 0x2c0740
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2571bc
     * @note[short] Android
     */
    void updateApplyPrepare(bool hideAll);

    /**
     * @note[short] MacOS (ARM): 0x260180
     * @note[short] MacOS (Intel): 0x2c0500
     * @note[short] Windows: 0x5ef370
     * @note[short] iOS: 0x256f78
     * @note[short] Android
     */
    void updateLength();

    /**
     * @note[short] MacOS (ARM): 0x26030c
     * @note[short] MacOS (Intel): 0x2c0650
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2570e0
     * @note[short] Android
     */
    void updateSongTimeSlider();
    SongSelectNode* m_selectNode;
};
