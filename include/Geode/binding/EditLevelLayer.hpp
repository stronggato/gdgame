#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/TextInputDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/SetIDPopupDelegate.hpp>
#include <Geode/binding/CreatorSettingsDelegate.hpp>
#include <Geode/binding/EmotePickerDelegate.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class EditLevelLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public SetIDPopupDelegate, public CreatorSettingsDelegate, public EmotePickerDelegate {
public:
    static constexpr auto CLASS_NAME = "EditLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(EditLevelLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     EditLevelLayer();

    /**
     * @note[short] MacOS (ARM): 0x3d972c
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7c048
     * @note[short] Android: Rebinded
     */
     ~EditLevelLayer();

    /**
     * @note[short] MacOS (Intel): 0x25c380
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static EditLevelLayer* create(GJGameLevel* level);

    /**
     * @note[short] Windows: 0x176d90
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x194bd4
     * @note[short] MacOS (Intel): 0x1e1150
     * @note[short] Windows: 0x17bd50
     * @note[short] iOS: 0x111950
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x194be0
     * @note[short] MacOS (Intel): 0x1e1180
     * @note[short] Windows: 0x17bd60
     * @note[short] iOS: 0x11195c
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] Windows: 0x17b660
     * @note[short] iOS: 0x1118cc
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* popup, int value);

    /**
     * @note[short] MacOS (ARM): 0x194650
     * @note[short] Windows: 0x17ac90
     * @note[short] iOS: 0x111500
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x193a60
     * @note[short] MacOS (Intel): 0x1dff60
     * @note[short] Windows: 0x179790
     * @note[short] iOS: 0x110d94
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x19371c
     * @note[short] MacOS (Intel): 0x1dfbf0
     * @note[short] Windows: 0x179160
     * @note[short] iOS: 0x110b04
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (Intel): 0x1e0040
     * @note[short] Windows: 0x179920
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x194c64
     * @note[short] MacOS (Intel): 0x1e1220
     * @note[short] Windows: 0x17bdd0
     * @note[short] iOS: 0x1119cc
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x194e14
     * @note[short] MacOS (Intel): 0x1e13c0
     * @note[short] Windows: 0x17bf00
     * @note[short] iOS: 0x111ac0
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x194c14
     * @note[short] MacOS (Intel): 0x1e11d0
     * @note[short] Windows: 0x17bd90
     * @note[short] iOS: 0x11197c
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] Windows: 0x17a110
     * @note[short] Android
     */
    virtual void creatorDescriptionChanged(std::string const& p0);

    /**
     * @note[short] Windows: 0x17a2c0
     * @note[short] Android
     */
    virtual void emotePickerClosed(EmotePickerPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0x1936c0
     * @note[short] MacOS (Intel): 0x1dfb90
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x110aa8
     * @note[short] Android
     */
    void closeTextInputs();

    /**
     * @note[short] MacOS (ARM): 0x1931ec
     * @note[short] Android
     */
    void confirmClone(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x192e70
     * @note[short] MacOS (Intel): 0x1df360
     * @note[short] iOS: 0x1103d4
     * @note[short] Android
     */
    void confirmDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn confirmMoveToBottom(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x192f58
     * @note[short] MacOS (Intel): 0x1df450
     * @note[short] iOS: 0x11053c
     * @note[short] Android
     */
    void confirmMoveToTop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x190874
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    bool init(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x193534
     * @note[short] MacOS (Intel): 0x1df9f0
     * @note[short] Windows: 0x17b8c0
     * @note[short] iOS: 0x110964
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x3ffea0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1117ec
     * @note[short] Android
     */
    void onClone();

    /**
     * @note[short] Android
     */
    void onCreatorSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDeathTracker(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x194610
     * @note[short] MacOS (Intel): 0x1e0b70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1114c0
     * @note[short] Android
     */
    void onDelete();

    /**
     * @note[short] MacOS (ARM): 0x191f24
     * @note[short] MacOS (Intel): 0x1de3f0
     * @note[short] Windows: 0x17a2d0
     * @note[short] iOS: 0x10f598
     * @note[short] Android
     */
    void onEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEmotes(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onExportLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGuidelines(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x77abc0
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x51fda4
     * @note[short] Android
     */
    void onLevelInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1932c4
     * @note[short] MacOS (Intel): 0x1df7b0
     * @note[short] iOS: 0x110764
     * @note[short] Android
     */
    void onLevelLeaderboard(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1936a0
     * @note[short] MacOS (Intel): 0x1dfb70
     * @note[short] iOS: 0x110a88
     * @note[short] Android
     */
    void onLevelOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn onMoveToBottom();

    /**
     * @note[short] MacOS (ARM): 0x194aa8
     * @note[short] MacOS (Intel): 0x1e0fd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onMoveToTop();

    /**
     * @note[short] MacOS (Intel): 0x1de550
     * @note[short] Windows: 0x179bc0
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x193118
     * @note[short] MacOS (Intel): 0x1df610
     * @note[short] Windows: 0x17b5d0
     * @note[short] iOS: 0x1105f0
     * @note[short] Android
     */
    void onSetFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x793130
     * @note[short] MacOS (Intel): 0x37c210
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onTest(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1941f8
     * @note[short] MacOS (Intel): 0x1df530
     * @note[short] Android
     */
    void onUpdateDescription(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1940ac
     * @note[short] iOS: 0x1112d0
     * @note[short] Android
     */
    void playStep2();

    /**
     * @note[short] iOS: 0x111394
     * @note[short] Android
     */
    void playStep3();

    /**
     * @note[short] MacOS (ARM): 0x192650
     * @note[short] MacOS (Intel): 0x1debc0
     * @note[short] Windows: 0x178890
     * @note[short] iOS: 0x10fb9c
     * @note[short] Android
     */
    void setupLevelInfo();

    /**
     * @note[short] MacOS (ARM): 0x191f20
     * @note[short] MacOS (Intel): 0x1de3e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateDescText(char const* text);

    /**
     * @note[short] MacOS (ARM): 0x193d78
     * @note[short] MacOS (Intel): 0x1e0230
     * @note[short] Windows: 0x214380
     * @note[short] iOS: 0x111020
     * @note[short] Android
     */
    void verifyLevelName();
    cocos2d::CCMenu* m_buttonMenu;
    GJGameLevel* m_level;
    cocos2d::CCArray* m_textInputs;
    cocos2d::CCLabelBMFont* m_folderLabel;
    bool m_exiting;
    GJLevelType m_levelType;
    std::string m_levelName;
    UploadActionPopup* m_descriptionPopup;
};
