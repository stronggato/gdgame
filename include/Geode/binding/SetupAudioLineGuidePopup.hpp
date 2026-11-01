#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/SelectSettingDelegate.hpp>

class SetupAudioLineGuidePopup : public SetupTriggerPopup, public SelectSettingDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupAudioLineGuidePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAudioLineGuidePopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupAudioLineGuidePopup();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupAudioLineGuidePopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetupAudioLineGuidePopup* create(AudioLineGuideGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4fd57c
     * @note[short] MacOS (Intel): 0x5af9b0
     * @note[short] Windows: 0x603330
     * @note[short] iOS: 0x48e384
     * @note[short] Android
     */
    virtual void selectSettingClosed(SelectSettingLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x4fced4
     * @note[short] Windows: 0x602b90
     * @note[short] iOS: 0x48dd8c
     * @note[short] Android
     */
    bool init(AudioLineGuideGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4fd534
     * @note[short] MacOS (Intel): 0x5af960
     * @note[short] Windows: 0x6032d0
     * @note[short] iOS: 0x48e33c
     * @note[short] Android
     */
    void onSpeed(cocos2d::CCObject* sender);
    cocos2d::CCSprite* m_speedSprite;
};
