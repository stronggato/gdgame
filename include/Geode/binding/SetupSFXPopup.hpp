#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupAudioTriggerPopup.hpp>
#include <Geode/binding/CustomSFXDelegate.hpp>
#include <Geode/binding/SFXBrowserDelegate.hpp>

class SetupSFXPopup : public SetupAudioTriggerPopup, public CustomSFXDelegate, public SFXBrowserDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupSFXPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSFXPopup, SetupAudioTriggerPopup)

    /**
     * @note[short] Windows: 0x5d6500
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupSFXPopup();

    /**
     * @note[short] Android
     */
    static SetupSFXPopup* create(SFXTriggerGameObject* p0, cocos2d::CCArray* p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x417898
     * @note[short] MacOS (Intel): 0x4b2de0
     * @note[short] Windows: 0x5d9bc0
     * @note[short] iOS: 0x211db0
     * @note[short] Android
     */
    virtual void pageChanged();

    /**
     * @note[short] MacOS (ARM): 0x4178f0
     * @note[short] MacOS (Intel): 0x4b2e40
     * @note[short] Windows: 0x5d9c30
     * @note[short] iOS: 0x211e08
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x417d94
     * @note[short] MacOS (Intel): 0x4b3350
     * @note[short] Windows: 0x5da890
     * @note[short] iOS: 0x212220
     * @note[short] Android
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x417c68
     * @note[short] MacOS (Intel): 0x4b3230
     * @note[short] Windows: 0x5da770
     * @note[short] iOS: 0x212130
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (Intel): 0x4b3100
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x212064
     * @note[short] Android
     */
    virtual void sfxObjectSelected(SFXInfoObject* object);

    /**
     * @note[short] MacOS (Intel): 0x3c3a80
     * @note[short] Windows: 0x5da670
     * @note[short] Android
     */
    virtual int getActiveSFXID();

    /**
     * @note[short] MacOS (ARM): 0x417bcc
     * @note[short] MacOS (Intel): 0x4b3190
     * @note[short] Windows: 0x5da6b0
     * @note[short] iOS: 0x2120c8
     * @note[short] Android
     */
    virtual bool overridePlaySFX(SFXInfoObject* object);

    /**
     * @note[short] Windows: 0x5dace0
     * @note[short] Android
     */
    virtual void sfxBrowserClosed(SFXBrowser* browser);

    /**
     * @note[short] Windows: 0x5da680
     * @note[short] Android
     */
    virtual int getActiveCustomSFXID();

    /**
     * @note[short] MacOS (Intel): 0x93fa90
     * @note[short] Android
     */
    void createSFXWidget();

    /**
     * @note[short] MacOS (ARM): 0x15ec
     * @note[short] Windows: 0x5e15e0
     * @note[short] Android
     */
    bool init(SFXTriggerGameObject* p0, cocos2d::CCArray* p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x41749c
     * @note[short] iOS: 0x2119e8
     * @note[short] Android
     */
    void onBrowseSFX(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x417b14
     * @note[short] MacOS (Intel): 0x4b30b0
     * @note[short] iOS: 0x212010
     * @note[short] Android
     */
    void updateLength();
    int m_sfxID;
    CustomSFXWidget* m_sfxWidget;
    int m_sfxLength;
};
