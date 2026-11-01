#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/vector.hpp>

class PlatformToolbox {
public:
    static constexpr auto CLASS_NAME = "PlatformToolbox";

    /**
     * @note[short] MacOS (ARM): 0x4207ec
     * @note[short] MacOS (Intel): 0x4bc8f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f7698
     * @note[short] Android
     */
    static void activateGameCenter();

    /**
     * @note[short] MacOS (ARM): 0x4213e8
     * @note[short] MacOS (Intel): 0x4bd720
     * @note[short] iOS: 0x1f7a94
     * @note[short] Android
     */
    static bool copyToClipboard(std::string str);

    /**
     * @note[short] MacOS (ARM): 0x420cf8
     * @note[short] MacOS (Intel): 0x4bcf40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static bool doesFileExist(std::string path);

    /**
     * @note[short] MacOS (ARM): 0x420db0
     * @note[short] MacOS (Intel): 0x4bd030
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void downloadAndSavePromoImage(std::string url, std::string path);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f7a08
     * @note[short] Android
     */
    static void gameDidSave();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static float getDeviceRefreshRate();

    /**
     * @note[short] MacOS (ARM): 0x421610
     * @note[short] MacOS (Intel): 0x4bda10
     * @note[short] Windows: 0x8ba20
     * @note[short] iOS: 0x1f7a14
     * @note[short] Android
     */
    static cocos2d::CCSize getDisplaySize();

    /**
     * @note[short] MacOS (ARM): 0x421300
     * @note[short] MacOS (Intel): 0x4bd610
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static std::string getRawPath(char const* path);

    /**
     * @note[short] MacOS (ARM): 0x4206d4
     * @note[short] MacOS (Intel): 0x4bc740
     * @note[short] Windows: 0x8b680
     * @note[short] iOS: 0x1f753c
     * @note[short] Android
     */
    static std::string getUniqueUserID();

    /**
     * @note[short] MacOS (ARM): 0x4207b0
     * @note[short] MacOS (Intel): 0x4bc820
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f75a4
     * @note[short] Android
     */
    static std::string getUserID();

    /**
     * @note[short] MacOS (ARM): 0x420840
     * @note[short] MacOS (Intel): 0x4bc990
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f7658
     * @note[short] Android
     */
    static void hideCursor();

    /**
     * @note[short] MacOS (ARM): 0x4216dc
     * @note[short] MacOS (Intel): 0x4bdb60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f7a58
     * @note[short] Android
     */
    static bool isControllerConnected();

    /**
     * @note[short] MacOS (ARM): 0x420cd4
     * @note[short] MacOS (Intel): 0x4bcf10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1cdee4
     * @note[short] Android
     */
    static bool isHD();

    /**
     * @note[short] MacOS (ARM): 0x4207f0
     * @note[short] MacOS (Intel): 0x4bc900
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f769c
     * @note[short] Android
     */
    static bool isLocalPlayerAuthenticated();

    /**
     * @note[short] MacOS (ARM): 0x4207bc
     * @note[short] MacOS (Intel): 0x4bc850
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static bool isLowMemoryDevice();

    /**
     * @note[short] MacOS (ARM): 0x4207b4
     * @note[short] MacOS (Intel): 0x4bc840
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f7618
     * @note[short] Android
     */
    static bool isNetworkAvailable();

    /**
     * @note[short] MacOS (ARM): 0x4207f8
     * @note[short] MacOS (Intel): 0x4bc910
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f76a4
     * @note[short] Android
     */
    static bool isSignedInGooglePlay();

    /**
     * @note[short] MacOS (ARM): 0x420b70
     * @note[short] MacOS (Intel): 0x4bcd60
     * @note[short] iOS: 0x1f78e4
     * @note[short] Android
     */
    static void loadAndDecryptFileToString(char const* dirPath, char const* fileName, std::string& str);

    /**
     * @note[short] MacOS (ARM): 0x4207e8
     * @note[short] MacOS (Intel): 0x4bc8e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f7694
     * @note[short] Android
     */
    static void logEvent(char const* event);

    /**
     * @note[short] MacOS (ARM): 0x4207d8
     * @note[short] MacOS (Intel): 0x4bc8b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void onGameLaunch();

    /**
     * @note[short] MacOS (ARM): 0x4207c8
     * @note[short] MacOS (Intel): 0x4bc870
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void onNativePause();

    /**
     * @note[short] MacOS (ARM): 0x4207cc
     * @note[short] MacOS (Intel): 0x4bc880
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x206828
     * @note[short] Android
     */
    static void onNativeResume();

    /**
     * @note[short] MacOS (ARM): 0x4207d0
     * @note[short] MacOS (Intel): 0x4bc890
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void onToggleKeyboard();

    /**
     * @note[short] MacOS (ARM): 0x40bfd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f7780
     * @note[short] Android
     */
    static void openAppPage();

    /**
     * @note[short] Android
     */
    static void platformShutdown();

    /**
     * @note[short] Android
     */
    static void refreshWindow();

    /**
     * @note[short] MacOS (ARM): 0x420808
     * @note[short] MacOS (Intel): 0x4bc940
     * @note[short] iOS: 0x1f76ac
     * @note[short] Android
     */
    static void reportAchievementWithID(char const* key, int percent);

    /**
     * @note[short] MacOS (ARM): 0x4207c4
     * @note[short] MacOS (Intel): 0x4bc860
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void reportLoadingFinished();

    /**
     * @note[short] MacOS (ARM): 0x4215c8
     * @note[short] MacOS (Intel): 0x4bd980
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f7a10
     * @note[short] Android
     */
    static void resizeWindow(float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x4209ec
     * @note[short] iOS: 0x1f77a0
     * @note[short] Android
     */
    static void saveAndEncryptStringToFile(std::string& str, char const* fileName, char const* dirPath);

    /**
     * @note[short] MacOS (ARM): 0x42083c
     * @note[short] MacOS (Intel): 0x4bc980
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f76b4
     * @note[short] Android
     */
    static void sendMail(char const* title, char const* content, char const* address);

    /**
     * @note[short] MacOS (ARM): 0x4207dc
     * @note[short] MacOS (Intel): 0x4bc8c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void setBlockBackButton(bool block);

    /**
     * @note[short] MacOS (ARM): 0x4207d4
     * @note[short] MacOS (Intel): 0x4bc8a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x447b08
     * @note[short] Android
     */
    static void setKeyboardState(bool state);

    /**
     * @note[short] MacOS (ARM): 0x4207e0
     * @note[short] MacOS (Intel): 0x4bc8d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f768c
     * @note[short] Android
     */
    static bool shouldResumeSound();

    /**
     * @note[short] MacOS (ARM): 0x420838
     * @note[short] MacOS (Intel): 0x4bc970
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f76b0
     * @note[short] Android
     */
    static void showAchievements();

    /**
     * @note[short] MacOS (ARM): 0x420858
     * @note[short] MacOS (Intel): 0x4bc9b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f7a90
     * @note[short] Android
     */
    static void showCursor();

    /**
     * @note[short] MacOS (ARM): 0x420800
     * @note[short] MacOS (Intel): 0x4bc920
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void signInGooglePlay();

    /**
     * @note[short] MacOS (ARM): 0x420804
     * @note[short] MacOS (Intel): 0x4bc930
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void signOutGooglePlay();

    /**
     * @note[short] MacOS (ARM): 0x420db4
     * @note[short] MacOS (Intel): 0x4bd040
     * @note[short] Android
     */
    static cocos2d::CCSprite* spriteFromSavedFile(std::string path);

    /**
     * @note[short] MacOS (Intel): 0x4bdbd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void toggleCallGLFinish(bool enable);

    /**
     * @note[short] MacOS (ARM): 0x4216fc
     * @note[short] MacOS (Intel): 0x4bdbb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void toggleCPUSleepMode(bool enable);

    /**
     * @note[short] MacOS (Intel): 0x4bdbe0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void toggleForceTimer(bool enable);

    /**
     * @note[short] MacOS (ARM): 0x421574
     * @note[short] MacOS (Intel): 0x4bd910
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f7a0c
     * @note[short] Android
     */
    static void toggleFullScreen(bool fullscreen, bool borderless, bool fix);

    /**
     * @note[short] MacOS (ARM): 0x4215c4
     * @note[short] MacOS (Intel): 0x4bd970
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f7de8
     * @note[short] Android
     */
    static void toggleLockCursor(bool isLocked);

    /**
     * @note[short] MacOS (ARM): 0x4216ac
     * @note[short] MacOS (Intel): 0x4bdb10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f7a54
     * @note[short] Android
     */
    static void toggleMouseControl(bool enable);

    /**
     * @note[short] MacOS (Intel): 0x4bdbf0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void toggleSmoothFix(bool enable);

    /**
     * @note[short] MacOS (ARM): 0x421700
     * @note[short] MacOS (Intel): 0x4bdbc0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void toggleVerticalSync(bool enable);

    /**
     * @note[short] MacOS (ARM): 0x40bfcc
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f7740
     * @note[short] Android
     */
    static void tryShowRateDialog(std::string gameName);

    /**
     * @note[short] MacOS (ARM): 0x42168c
     * @note[short] MacOS (Intel): 0x4bdad0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void updateMouseControl();

    /**
     * @note[short] MacOS (ARM): 0x42160c
     * @note[short] MacOS (Intel): 0x4bda00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void updateWindowedSize(float width, float height);

    /**
     * @note[short] Android
     */
    TodoReturn pickImportFiles(PlatformFileDelegate* p0);

    /**
     * @note[short] Android
     */
    void setKeyboardInputFlags(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn shareFiles(std::vector<std::string> const& p0, PlatformFileDelegate* p1);
};
