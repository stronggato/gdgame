#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupKeyframePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupKeyframePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupKeyframePopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5b5cc0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupKeyframePopup();

    /**
     * @note[short] Windows: 0x157e50
     * @note[short] Android
     */
    static SetupKeyframePopup* create(KeyframeGameObject* object, cocos2d::CCArray* objects, LevelEditorLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x197968
     * @note[short] MacOS (Intel): 0x1e4540
     * @note[short] Windows: 0x5b8750
     * @note[short] iOS: 0x248cc8
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x197588
     * @note[short] MacOS (Intel): 0x1e4170
     * @note[short] Windows: 0x5b7e30
     * @note[short] iOS: 0x2489d8
     * @note[short] Android
     */
    virtual void onCustomButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1972a0
     * @note[short] MacOS (Intel): 0x1e3ec0
     * @note[short] Windows: 0x5b7d50
     * @note[short] iOS: 0x2487b0
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x1974e4
     * @note[short] MacOS (Intel): 0x1e40e0
     * @note[short] Windows: 0x5b7d70
     * @note[short] iOS: 0x248934
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x195c74
     * @note[short] MacOS (Intel): 0x1e2580
     * @note[short] iOS: 0x247704
     * @note[short] Android
     */
    bool init(KeyframeGameObject* object, cocos2d::CCArray* objects, LevelEditorLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x19710c
     * @note[short] MacOS (Intel): 0x1e3d30
     * @note[short] iOS: 0x2486c0
     * @note[short] Android
     */
    void onTimeMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1972c0
     * @note[short] MacOS (Intel): 0x1e3ee0
     * @note[short] Windows: 0x5b83a0
     * @note[short] iOS: 0x2487d0
     * @note[short] Android
     */
    void refreshPreviewArt();

    /**
     * @note[short] MacOS (ARM): 0x197214
     * @note[short] MacOS (Intel): 0x1e3e30
     * @note[short] Windows: 0x5b86c0
     * @note[short] iOS: 0x248724
     * @note[short] Android
     */
    void updateTimeModeButtons();
    cocos2d::CCArray* m_timeModeToggles;
    LevelEditorLayer* m_editorLayer;
    bool m_groupIDChanged;
};
