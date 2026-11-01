#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CCBlockLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/VolumeChangeDelegate.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class EditorPauseLayer : public CCBlockLayer, public FLAlertLayerProtocol, public VolumeChangeDelegate {
public:
    static constexpr auto CLASS_NAME = "EditorPauseLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorPauseLayer, CCBlockLayer)

    /**
     * @note[short] Windows: 0x17f6c0
     * @note[short] Android: Rebinded
     */
    virtual  ~EditorPauseLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     EditorPauseLayer();

    /**
     * @note[short] MacOS (Intel): 0x27c8c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static EditorPauseLayer* create(LevelEditorLayer* layer);

    /**
     * @note[short] Windows: 0x181e10
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x181e20
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (Intel): 0x5ada40
     * @note[short] Windows: 0x17ff70
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x2249bc
     * @note[short] MacOS (Intel): 0x27f3b0
     * @note[short] Windows: 0x181810
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] Windows: 0x17f7e0
     * @note[short] Android
     */
    virtual void volumeChanged();

    /**
     * @note[short] MacOS (ARM): 0x6fdbbc
     * @note[short] MacOS (Intel): 0x4ad8e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void doResetUnused();

    /**
     * @note[short] Android
     */
    TodoReturn editorSFXSliderChanged(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x22203c
     * @note[short] MacOS (Intel): 0x27c9e0
     * @note[short] Windows: 0x461a0
     * @note[short] iOS: 0x440c78
     * @note[short] Android
     */
    bool init(LevelEditorLayer* layer);

    /**
     * @note[short] Android
     */
    TodoReturn musicSliderChanged(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    void onAlignX(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onAlignY(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onAutoSaveSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onBuildHelper(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onControls(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onCopyWColor(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onCreateExtras(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onCreateLoop(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onCreateTemplate(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDeathStats(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDownloadAudio(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEditorSounds(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onExitEditor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x223a98
     * @note[short] MacOS (Intel): 0x27e420
     * @note[short] Windows: 0x1816a0
     * @note[short] iOS: 0x441fb4
     * @note[short] Android
     */
    void onExitNoSave(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onExport(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onKeybindings(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNewGroupX(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x2563fc
     * @note[short] Android
     */
    void onNewGroupY(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x27e770
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPasteWColor(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onReGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onResetUnusedColors(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x441db0
     * @note[short] Android
     */
    void onResume(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2239b8
     * @note[short] MacOS (Intel): 0x27e350
     * @note[short] iOS: 0x441ef8
     * @note[short] Android
     */
    void onSave(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x181550
     * @note[short] iOS: 0x441eac
     * @note[short] Android
     */
    void onSaveAndExit(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x180fb0
     * @note[short] iOS: 0x441e28
     * @note[short] Android
     */
    void onSaveAndPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectAllLeft(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectAllRight(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x152ae4
     * @note[short] Android
     */
    void onSong(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUnlockAllLayers(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x224844
     * @note[short] MacOS (Intel): 0x1de800
     * @note[short] Windows: 0x181050
     * @note[short] iOS: 0x442508
     * @note[short] Android
     */
    void playStep2();

    /**
     * @note[short] MacOS (ARM): 0x224914
     * @note[short] MacOS (Intel): 0x27f2f0
     * @note[short] Windows: 0x181180
     * @note[short] iOS: 0x4425d8
     * @note[short] Android
     */
    void playStep3();

    /**
     * @note[short] Windows: 0x2fe070
     * @note[short] Android
     */
    void saveLevel();

    /**
     * @note[short] Android
     */
    TodoReturn sfxSliderChanged(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    void toggleDebugDraw(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2246c4
     * @note[short] MacOS (Intel): 0x27f070
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleEditorBackground(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x224560
     * @note[short] MacOS (Intel): 0x27eef0
     * @note[short] iOS: 0x3ee028
     * @note[short] Android
     */
    void toggleEditorColorMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void toggleEditorGrid(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22467c
     * @note[short] MacOS (Intel): 0x27f020
     * @note[short] Android
     */
    void toggleEditorGround(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x224644
     * @note[short] MacOS (Intel): 0x27efe0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleEffectDuration(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x224660
     * @note[short] MacOS (Intel): 0x27f000
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleEffectLines(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleFollowPlayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x224728
     * @note[short] MacOS (Intel): 0x27f0e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleGridOnTop(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x4b51e4
     * @note[short] Android
     */
    void toggleHideInvisible(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22450c
     * @note[short] MacOS (Intel): 0x27ee90
     * @note[short] iOS: 0x4b51e4
     * @note[short] Android
     */
    void toggleIgnoreDamage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x224628
     * @note[short] MacOS (Intel): 0x27efc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void togglePlaytestMusic(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5f1ed8
     * @note[short] Windows: 0x3fe150
     * @note[short] Android
     */
    void togglePreviewAnim(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5f1ed8
     * @note[short] Android
     */
    void togglePreviewParticles(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x224544
     * @note[short] MacOS (Intel): 0x27eed0
     * @note[short] Android
     */
    void togglePreviewShaders(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7b6e38
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleRecordOrder(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x224528
     * @note[short] MacOS (Intel): 0x27eeb0
     * @note[short] iOS: 0x4b5200
     * @note[short] Android
     */
    void toggleSelectFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22479c
     * @note[short] MacOS (Intel): 0x27f160
     * @note[short] Android
     */
    void toggleShowObjectInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void uncheckAllPortals(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void updateSongButton();
    bool m_saved;
    CCMenuItemSpriteExtra* m_guidelinesOffButton;
    CCMenuItemSpriteExtra* m_guidelinesOnButton;
    LevelEditorLayer* m_editorLayer;
    GEODE_PAD(32);
};
