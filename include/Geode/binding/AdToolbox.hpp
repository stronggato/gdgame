#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>


class AdToolbox {
public:
    static constexpr auto CLASS_NAME = "AdToolbox";

    /**
     * @note[short] MacOS (ARM): 0x89d60
     * @note[short] MacOS (Intel): 0x99ba0
     * @note[short] Android
     */
    static void cacheInterstitial();

    /**
     * @note[short] MacOS (ARM): 0x89d70
     * @note[short] MacOS (Intel): 0x99bd0
     * @note[short] Android
     */
    static void cacheRewardedVideo();

    /**
     * @note[short] MacOS (ARM): 0x89d58
     * @note[short] MacOS (Intel): 0x99b80
     * @note[short] Android
     */
    static void disableBanner();

    /**
     * @note[short] MacOS (ARM): 0x89d54
     * @note[short] MacOS (Intel): 0x99b70
     * @note[short] Android
     */
    static void enableBanner();

    /**
     * @note[short] MacOS (ARM): 0x89d50
     * @note[short] MacOS (Intel): 0x99b60
     * @note[short] Android
     */
    static void enableBannerNoRefresh();

    /**
     * @note[short] MacOS (ARM): 0x89d64
     * @note[short] MacOS (Intel): 0x99bb0
     * @note[short] Android
     */
    static bool hasCachedInterstitial();

    /**
     * @note[short] MacOS (ARM): 0x89d74
     * @note[short] MacOS (Intel): 0x99be0
     * @note[short] Android
     */
    static bool hasCachedRewardedVideo();

    /**
     * @note[short] MacOS (ARM): 0x89d80
     * @note[short] MacOS (Intel): 0x1f160
     * @note[short] Android
     */
    static bool isShowingAd();

    /**
     * @note[short] MacOS (ARM): 0x89d4c
     * @note[short] MacOS (Intel): 0x99b50
     * @note[short] Android
     */
    static void queueRefreshBanner();

    /**
     * @note[short] MacOS (ARM): 0x89d48
     * @note[short] MacOS (Intel): 0x99b40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3932f4
     * @note[short] Android
     */
    static void setupAds();

    /**
     * @note[short] MacOS (ARM): 0x89d7c
     * @note[short] MacOS (Intel): 0x99bf0
     * @note[short] Android
     */
    static void showDebug();

    /**
     * @note[short] MacOS (ARM): 0x89d5c
     * @note[short] MacOS (Intel): 0x99b90
     * @note[short] Android
     */
    static void showInterstitial();

    /**
     * @note[short] MacOS (ARM): 0x89d6c
     * @note[short] MacOS (Intel): 0x99bc0
     * @note[short] Android
     */
    static void showRewardedVideo();
};
