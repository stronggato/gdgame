#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/TableViewCellDelegate.hpp>
#include <Geode/binding/MusicDownloadDelegate.hpp>
#include <Geode/mapping/vector.hpp>

class AudioAssetsBrowser : public FLAlertLayer, public TableViewCellDelegate, public MusicDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "AudioAssetsBrowser";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AudioAssetsBrowser, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     AudioAssetsBrowser();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~AudioAssetsBrowser();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static AudioAssetsBrowser* create(std::vector<int>& songIds, std::vector<int>& sfxIds);

    /**
     * @note[short] MacOS (ARM): 0x78bc34
     * @note[short] MacOS (Intel): 0x8985a0
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x268590
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Windows: 0x99e20
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x78bb64
     * @note[short] MacOS (Intel): 0x898450
     * @note[short] Windows: 0x993b0
     * @note[short] iOS: 0x2684c8
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction action);

    /**
     * @note[short] MacOS (ARM): 0x78bb70
     * @note[short] MacOS (Intel): 0x898480
     * @note[short] Windows: 0x99440
     * @note[short] iOS: 0x2684d4
     * @note[short] Android
     */
    virtual void musicActionFailed(GJMusicAction action);

    /**
     * @note[short] MacOS (ARM): 0x78bb84
     * @note[short] MacOS (Intel): 0x8984c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2684e4
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): 0x78bb94
     * @note[short] MacOS (Intel): 0xfee30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2684f4
     * @note[short] Android
     */
    virtual int getSelectedCellIdx();

    /**
     * @note[short] MacOS (ARM): 0x78bba4
     * @note[short] MacOS (Intel): 0x898500
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x268504
     * @note[short] Android
     */
    virtual int getCellDelegateType();

    /**
     * @note[short] MacOS (ARM): 0x78ad7c
     * @note[short] MacOS (Intel): 0x897530
     * @note[short] Windows: 0x1b0090
     * @note[short] iOS: 0x2677d4
     * @note[short] Android
     */
    bool init(std::vector<int>& songIds, std::vector<int>& sfxIds);

    /**
     * @note[short] MacOS (ARM): 0x78b2b4
     * @note[short] MacOS (Intel): 0x897aa0
     * @note[short] Windows: 0x99df0
     * @note[short] iOS: 0x267cf4
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x78b2f0
     * @note[short] MacOS (Intel): 0x897ad0
     * @note[short] iOS: 0x267d30
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x78bb80
     * @note[short] MacOS (Intel): 0x8984b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x78b930
     * @note[short] MacOS (Intel): 0x8981f0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x2682b0
     * @note[short] Android
     */
    void setupList();

    /**
     * @note[short] MacOS (ARM): 0x78bac4
     * @note[short] MacOS (Intel): 0x8983b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x268440
     * @note[short] Android
     */
    void trySetupAudioBrowser();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updatePageLabel();
    cocos2d::CCArray* m_songInfoObjects;
    GJCommentListLayer* m_songList;
    cocos2d::CCLabelBMFont* m_pageIndicatorLabel;
    std::vector<int> m_songsIds;
    std::vector<int> m_sfxIds;
    LoadingCircleSprite* m_loadingCircle;
};
