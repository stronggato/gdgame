#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CCBlockLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/StartPosBrowserDelegate.hpp>
#include <Geode/binding/CreateStartPosPopupDelegate.hpp>
#include <Geode/binding/VolumeChangeDelegate.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class PauseLayer : public CCBlockLayer, public FLAlertLayerProtocol, public StartPosBrowserDelegate, public CreateStartPosPopupDelegate, public VolumeChangeDelegate {
public:
    static constexpr auto CLASS_NAME = "PauseLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PauseLayer, CCBlockLayer)

    /**
     * @note[short] MacOS (ARM): 0x47324c
     * @note[short] MacOS (Intel): 0x3bef00
     * @note[short] Windows: 0x4d3410
     * @note[short] Android: Rebinded
     */
    virtual  ~PauseLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     PauseLayer();

    /**
     * @note[short] MacOS (Intel): 0x3bf0e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static PauseLayer* create(bool unfocused);

    /**
     * @note[short] MacOS (Intel): 0x3c2af0
     * @note[short] Windows: 0x4d8370
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x39967c
     * @note[short] MacOS (Intel): 0x4d3b70
     * @note[short] Windows: 0x4d8260
     * @note[short] iOS: 0x3035e4
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] Windows: 0x4d36f0
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x3472d0
     * @note[short] MacOS (Intel): 0x3c2880
     * @note[short] Windows: 0x4d8050
     * @note[short] iOS: 0x1bf5e0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (Intel): 0x3c2ad0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] Windows: 0x4d3630
     * @note[short] Android
     */
    virtual void volumeChanged();

    /**
     * @note[short] Windows: 0x4d8210
     * @note[short] Android
     */
    virtual bool handleAction(int p0, bool p1, double p2);

    /**
     * @note[short] Windows: 0x4d6060
     * @note[short] Android
     */
    virtual void startPosSelected(StartPosBrowser* p0, int p1, StartPosObject* p2);

    /**
     * @note[short] Windows: 0x4d6080
     * @note[short] Android
     */
    virtual void createStartPosPopupClosed(CreateStartPosPopup* p0);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    TodoReturn checkQuestsStatus();

    /**
     * @note[short] MacOS (ARM): 0x346e94
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void createToggleButton(std::string label, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position);

    /**
     * @note[short] Android
     */
    TodoReturn getQueuedStartPos();

    /**
     * @note[short] MacOS (ARM): 0x347198
     * @note[short] MacOS (Intel): 0x3c2740
     * @note[short] Windows: 0xe95b0
     * @note[short] iOS: 0x1bf4b8
     * @note[short] Android
     */
    void goEdit();

    /**
     * @note[short] MacOS (Intel): 0x3bf240
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(bool unfocused);

    /**
     * @note[short] MacOS (ARM): 0x224010
     * @note[short] MacOS (Intel): 0x27e9b0
     * @note[short] Windows: 0x180d10
     * @note[short] iOS: 0x1bee90
     * @note[short] Android
     */
    void musicSliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onChangeStartpos(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onCreateStartpos(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3470bc
     * @note[short] MacOS (Intel): 0x3c2660
     * @note[short] Windows: 0x4d7bb0
     * @note[short] iOS: 0x1bf3dc
     * @note[short] Android
     */
    void onEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x307a04
     * @note[short] MacOS (Intel): 0x3c27c0
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x345f14
     * @note[short] MacOS (Intel): 0x3c1370
     * @note[short] Windows: 0x4d7540
     * @note[short] iOS: 0x1be6bc
     * @note[short] Android
     */
    void onNormalMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x3c1330
     * @note[short] Windows: 0x4d7480
     * @note[short] Android
     */
    void onPracticeMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x34721c
     * @note[short] MacOS (Intel): 0x3c27e0
     * @note[short] Windows: 0x4d80c0
     * @note[short] iOS: 0x1bf544
     * @note[short] Android
     */
    void onQuit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x3c2630
     * @note[short] Android
     */
    void onRecordReplays(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x346e90
     * @note[short] MacOS (Intel): 0x3c2460
     * @note[short] Android
     */
    void onReplay(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4d7790
     * @note[short] Android
     */
    void onRestart(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4d78c0
     * @note[short] Android
     */
    void onRestartFull(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4d75b0
     * @note[short] Android
     */
    void onResume(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onShowStartposBrowser(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSideButtonPressed(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x346e8c
     * @note[short] MacOS (Intel): 0x3c2450
     * @note[short] Android
     */
    void onTime(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleUI(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x345d10
     * @note[short] MacOS (Intel): 0x3c1160
     * @note[short] Windows: 0x4d79f0
     * @note[short] iOS: 0x1be524
     * @note[short] Android
     */
    void onTryEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void setupProgressBars();

    /**
     * @note[short] Windows: 0x180db0
     * @note[short] iOS: 0x1beecc
     * @note[short] Android
     */
    void sfxSliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x927d50
     * @note[short] Windows: 0x4d7e80
     * @note[short] Android
     */
    void tryQuit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x346e5c
     * @note[short] MacOS (Intel): 0x3c2420
     * @note[short] Android
     */
    void tryShowBanner(float dt);
    bool m_unfocused;
    bool m_tryingQuit;
};
