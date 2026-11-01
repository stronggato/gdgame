#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/EditorSoundUploadDelegate.hpp>

class EditorSoundConfigUploadPopup : public SetupTriggerPopup, public EditorSoundUploadDelegate {
public:
    static constexpr auto CLASS_NAME = "EditorSoundConfigUploadPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorSoundConfigUploadPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x1990b0
     * @note[short] Android: Rebinded
     */
    virtual  ~EditorSoundConfigUploadPopup();

    /**
     * @note[short] Android
     */
    static EditorSoundConfigUploadPopup* create(GJEditorSoundConfig* p0, EditorSoundConfigInfoLayer* p1);

    /**
     * @note[short] Windows: 0x19ac50
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x19ac70
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x19ad50
     * @note[short] Android
     */
    virtual void uploadEditorSoundFinished(int p0);

    /**
     * @note[short] Windows: 0x19b040
     * @note[short] Android
     */
    virtual void uploadEditorSoundFailed(int p0);

    /**
     * @note[short] Android
     */
    bool init(GJEditorSoundConfig* p0, EditorSoundConfigInfoLayer* p1);

    /**
     * @note[short] Android
     */
    void onCancel(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleFriendsOnly(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleUnlisted(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUpload(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUploadAsUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn performUpload(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateVisibilityState();
};
