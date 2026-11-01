#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/ListUploadDelegate.hpp>

class UploadListPopup : public FLAlertLayer, public ListUploadDelegate {
public:
    static constexpr auto CLASS_NAME = "UploadListPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UploadListPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     UploadListPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~UploadListPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static UploadListPopup* create(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x2df8b8
     * @note[short] MacOS (Intel): 0x34f990
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e4c68
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2df858
     * @note[short] MacOS (Intel): 0x34f920
     * @note[short] Windows: 0x430e40
     * @note[short] iOS: 0x2e4c08
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] Windows: 0x4308c0
     * @note[short] Android
     */
    virtual void listUploadFinished(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x2df560
     * @note[short] MacOS (Intel): 0x34f640
     * @note[short] Windows: 0x430a90
     * @note[short] iOS: 0x2e4954
     * @note[short] Android
     */
    virtual void listUploadFailed(GJLevelList* list, int response);

    /**
     * @note[short] MacOS (ARM): 0x2deeac
     * @note[short] Windows: 0x430390
     * @note[short] iOS: 0x2e42d4
     * @note[short] Android
     */
    bool init(GJLevelList* list);

    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2df814
     * @note[short] MacOS (Intel): 0x34f8d0
     * @note[short] Windows: 0x99df0
     * @note[short] iOS: 0x2e4bc4
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2df50c
     * @note[short] MacOS (Intel): 0x34f5d0
     * @note[short] Windows: 0x430df0
     * @note[short] iOS: 0x2e4900
     * @note[short] Android
     */
    void onReturnToList(cocos2d::CCObject* sender);
    GJLevelList* m_levelList;
    TextArea* m_textArea;
    LoadingCircle* m_loadingCircle;
    CCMenuItemSpriteExtra* m_backButton;
};
