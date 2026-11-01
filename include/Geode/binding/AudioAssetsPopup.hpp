#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/MusicDownloadDelegate.hpp>

class AudioAssetsPopup : public SetupTriggerPopup, public MusicDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "AudioAssetsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AudioAssetsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0xbcea0
     * @note[short] Android: Rebinded
     */
    virtual  ~AudioAssetsPopup();

    /**
     * @note[short] Android
     */
    static AudioAssetsPopup* create(int p0, int p1, std::string const& p2, std::string const& p3);

    /**
     * @note[short] Windows: 0xa6410
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0xbd680
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xbd5b0
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction p0);

    /**
     * @note[short] Android
     */
    bool init(int p0, int p1, std::string const& p2, std::string const& p3);
};
