#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/LevelUploadDelegate.hpp>

class UploadPopup : public FLAlertLayer, public LevelUploadDelegate {
public:
    static constexpr auto CLASS_NAME = "UploadPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UploadPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     UploadPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~UploadPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static UploadPopup* create(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x215dc4
     * @note[short] MacOS (Intel): 0x26f000
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x312b0c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x215d64
     * @note[short] MacOS (Intel): 0x26ef90
     * @note[short] Windows: 0x430e40
     * @note[short] iOS: 0x312aac
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] Windows: 0x62e8a0
     * @note[short] Android
     */
    virtual void levelUploadFinished(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x215b6c
     * @note[short] MacOS (Intel): 0x26ed80
     * @note[short] Windows: 0x62ea70
     * @note[short] iOS: 0x3128d8
     * @note[short] Android
     */
    virtual void levelUploadFailed(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x21540c
     * @note[short] Windows: 0x62e2f0
     * @note[short] iOS: 0x3121b8
     * @note[short] Android
     */
    bool init(GJGameLevel* level);

    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x215d20
     * @note[short] MacOS (Intel): 0x26ef40
     * @note[short] Windows: 0x99df0
     * @note[short] iOS: 0x312a68
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x215ae4
     * @note[short] MacOS (Intel): 0x26ece0
     * @note[short] Windows: 0x62ec50
     * @note[short] iOS: 0x312850
     * @note[short] Android
     */
    void onReturnToLevel(cocos2d::CCObject* sender);
    GJGameLevel* m_level;
    TextArea* m_textArea;
    LoadingCircle* m_loadingCircle;
    CCMenuItemSpriteExtra* m_backButton;
};
