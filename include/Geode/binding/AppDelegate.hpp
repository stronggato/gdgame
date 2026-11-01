#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCApplication.hpp>
#include <Geode/mapping/CCSceneDelegate.hpp>

class AppDelegate : public cocos2d::CCApplication, public cocos2d::CCSceneDelegate {
public:
    static constexpr auto CLASS_NAME = "AppDelegate";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AppDelegate, cocos2d::CCApplication)

    /**
     * @note[short] MacOS (Intel): 0x739a20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static AppDelegate* get();

    /**
     * @note[short] MacOS (ARM): 0x647434
     * @note[short] MacOS (Intel): 0x739890
     * @note[short] Windows: 0x98080
     * @note[short] iOS: 0x304c4c
     * @note[short] Android
     */
    virtual bool applicationDidFinishLaunching();

    /**
     * @note[short] Android
     */
    virtual void applicationDidEnterBackground();

    /**
     * @note[short] MacOS (ARM): 0x6477d4
     * @note[short] MacOS (Intel): 0x739c70
     * @note[short] iOS: 0x304fa4
     * @note[short] Android
     */
    virtual void applicationWillEnterForeground();

    /**
     * @note[short] MacOS (ARM): 0x6475e4
     * @note[short] MacOS (Intel): 0x739a50
     * @note[short] iOS: 0x304dcc
     * @note[short] Android
     */
    virtual void applicationWillBecomeActive();

    /**
     * @note[short] MacOS (Intel): 0x739a70
     * @note[short] iOS: 0x304de0
     * @note[short] Android
     */
    virtual void applicationWillResignActive();

    /**
     * @note[short] MacOS (ARM): 0x6478e8
     * @note[short] MacOS (Intel): 0x739da0
     * @note[short] Windows: 0x98960
     * @note[short] Android
     */
    virtual void trySaveGame(bool force);

    /**
     * @note[short] Android
     */
    virtual void willSwitchToScene(cocos2d::CCScene* scene);

    /**
     * @note[short] Android
     */
    virtual void applicationWillTerminate();

    /**
     * @note[short] MacOS (Intel): 0x739a00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float bgScale();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void checkSound();

    /**
     * @note[short] MacOS (Intel): 0x739f40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void hideLoadingCircle();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void loadingIsFinished();

    /**
     * @note[short] MacOS (ARM): 0xbb6c
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    bool musicTest();

    /**
     * @note[short] Windows: 0x98880
     * @note[short] iOS: 0x304de4
     * @note[short] Android
     */
    void pauseGame();

    /**
     * @note[short] Android
     */
    void pauseSound();

    /**
     * @note[short] MacOS (ARM): 0x64733c
     * @note[short] MacOS (Intel): 0x739780
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void platformShutdown();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    void resumeSound();

    /**
     * @note[short] MacOS (ARM): 0x421708
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setIdleTimerDisabled(bool disabled);

    /**
     * @note[short] MacOS (ARM): 0x647340
     * @note[short] MacOS (Intel): 0x26a960
     * @note[short] iOS: 0x304af4
     * @note[short] Android
     */
    void setupGLView();

    /**
     * @note[short] MacOS (ARM): 0x647a5c
     * @note[short] MacOS (Intel): 0x739f30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39aeb4
     * @note[short] Android
     */
    void showLoadingCircle(bool unk1, bool unk2, bool unk3);
    bool m_glViewSetup;
    bool m_gamePaused;
    cocos2d::CCScene* m_runningScene;
    bool m_loadingFinished;
    bool m_managersLoadedUnused;
    bool m_ios;
    bool m_unk0eb;
    bool m_unk0ec;
    bool m_needsSafeArea;
    float m_saveTime;
};
