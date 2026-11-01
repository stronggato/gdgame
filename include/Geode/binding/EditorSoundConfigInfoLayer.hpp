#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/EditorSoundDownloadDelegate.hpp>
#include <Geode/binding/EditorSoundDeleteDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/AdminActionConfirmDelegate.hpp>
#include <Geode/binding/LikeItemDelegate.hpp>
#include <Geode/binding/SoundPackDescDelegate.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/MusicDownloadDelegate.hpp>
#include <Geode/mapping/vector.hpp>

class EditorSoundConfigInfoLayer : public SetupTriggerPopup, public EditorSoundDownloadDelegate, public EditorSoundDeleteDelegate, public FLAlertLayerProtocol, public AdminActionConfirmDelegate, public LikeItemDelegate, public SoundPackDescDelegate, public UploadActionDelegate, public UploadPopupDelegate, public MusicDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "EditorSoundConfigInfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorSoundConfigInfoLayer, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x1907d0
     * @note[short] Android: Rebinded
     */
    virtual  ~EditorSoundConfigInfoLayer();

    /**
     * @note[short] Android
     */
    static EditorSoundConfigInfoLayer* create(GJEditorSoundConfig* p0, EditorSoundInfoKind p1, EditorSoundBrowserLayer* p2);

    /**
     * @note[short] Windows: 0x1938c0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x193990
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x193a00
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x193a50
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x1973e0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1956f0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x196780
     * @note[short] Android
     */
    virtual void adminActionConfirmed(int p0, std::vector<int> const& p1, std::string const& p2);

    /**
     * @note[short] Windows: 0x1975c0
     * @note[short] Android
     */
    virtual void downloadEditorSoundFinished(GJEditorSoundConfig* p0);

    /**
     * @note[short] Windows: 0x197800
     * @note[short] Android
     */
    virtual void downloadEditorSoundFailed(int p0, int p1);

    /**
     * @note[short] Windows: 0x197950
     * @note[short] Android
     */
    virtual void deleteEditorSoundFinished(int p0);

    /**
     * @note[short] Windows: 0x197b80
     * @note[short] Android
     */
    virtual void deleteEditorSoundFailed(int p0, int p1);

    /**
     * @note[short] Windows: 0x1967a0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0x1957c0
     * @note[short] Android
     */
    virtual void likedItem(LikeItemType p0, int p1, bool p2);

    /**
     * @note[short] Windows: 0x1948d0
     * @note[short] Android
     */
    virtual void soundPackDescSaved(std::string const& p0, std::string const& p1);

    /**
     * @note[short] Windows: 0x194bf0
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] Windows: 0x194de0
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] Windows: 0x194ec0
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] Windows: 0x1955e0
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction p0);

    /**
     * @note[short] Windows: 0x195610
     * @note[short] Android
     */
    virtual void musicActionFailed(GJMusicAction p0);

    /**
     * @note[short] Android
     */
    TodoReturn applyConfig(bool p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn buildSummary();

    /**
     * @note[short] Android
     */
    TodoReturn downloadMissingSFX();

    /**
     * @note[short] Android
     */
    TodoReturn editsServerDescription();

    /**
     * @note[short] Android
     */
    bool init(GJEditorSoundConfig* p0, EditorSoundInfoKind p1, EditorSoundBrowserLayer* p2);

    /**
     * @note[short] Android
     */
    bool isOwner();

    /**
     * @note[short] Android
     */
    TodoReturn missingSFXIDs();

    /**
     * @note[short] Android
     */
    void onDeleteServer(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDescription(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDownloadSFX(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDuplicate(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFavorite(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFeatureAdmin(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onLoad(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onLocalDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMerge(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onOverwrite(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onShowDescription(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUpload(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn refreshActionButtons();

    /**
     * @note[short] Android
     */
    TodoReturn refreshLikeState();

    /**
     * @note[short] Android
     */
    TodoReturn reloadWindow();

    /**
     * @note[short] Android
     */
    TodoReturn startDownload();

    /**
     * @note[short] Android
     */
    TodoReturn startServerDelete(std::string const& p0, std::vector<int> const& p1);

    /**
     * @note[short] Android
     */
    TodoReturn startSFXDownload();
};
