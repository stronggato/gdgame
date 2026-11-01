#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/EmotePickerDelegate.hpp>

class ShareCommentLayer : public FLAlertLayer, public UploadActionDelegate, public UploadPopupDelegate, public EmotePickerDelegate {
public:
    static constexpr auto CLASS_NAME = "ShareCommentLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShareCommentLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x629d50
     * @note[short] Android: Rebinded
     */
    virtual  ~ShareCommentLayer();

    /**
     * @note[short] MacOS (ARM): 0x5c8f5c
     * @note[short] MacOS (Intel): 0x6af230
     * @note[short] Windows: 0x629ea0
     * @note[short] iOS: 0x26a72c
     * @note[short] Android
     */
    static ShareCommentLayer* create(std::string title, int charLimit, CommentType type, int ID, std::string desc);

    /**
     * @note[short] MacOS (ARM): 0x5caf7c
     * @note[short] MacOS (Intel): 0x6b1500
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x26c12c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Windows: 0x62bce0
     * @note[short] iOS: 0x1523b4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x5cb130
     * @note[short] MacOS (Intel): 0x3c3800
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26c22c
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x5cafb4
     * @note[short] MacOS (Intel): 0x6b1540
     * @note[short] Windows: 0x62bd40
     * @note[short] iOS: 0x26c164
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x5cb138
     * @note[short] MacOS (Intel): 0x6b16d0
     * @note[short] Windows: 0x62bea0
     * @note[short] iOS: 0x26c234
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x5cb3e4
     * @note[short] MacOS (Intel): 0x6b1970
     * @note[short] Windows: 0x62c2c0
     * @note[short] iOS: 0x26c41c
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (Intel): 0x8a3c90
     * @note[short] Windows: 0x62c350
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x5cb694
     * @note[short] MacOS (Intel): 0x6b1bd0
     * @note[short] Windows: 0x62c410
     * @note[short] iOS: 0x26c548
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] Windows: 0x62c2b0
     * @note[short] Android
     */
    virtual void emotePickerClosed(EmotePickerPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0x5af5ac
     * @note[short] MacOS (Intel): 0x6af390
     * @note[short] iOS: 0x4a6cc4
     * @note[short] Android
     */
    bool init(std::string title, int charLimit, CommentType type, int ID, std::string desc);

    /**
     * @note[short] Android
     */
    TodoReturn lockInput(std::string const& p0);

    /**
     * @note[short] MacOS (ARM): 0x5ca574
     * @note[short] MacOS (Intel): 0x6b0a60
     * @note[short] Windows: 0x62b560
     * @note[short] iOS: 0x2de1c
     * @note[short] Android
     */
    void onClear(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEmotes(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x346638
     * @note[short] MacOS (Intel): 0x6b08d0
     * @note[short] iOS: 0x113f18
     * @note[short] Android
     */
    void onPercent(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x3abb40
     * @note[short] Windows: 0x16a7a0
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0xe040
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateCharCountLabel();

    /**
     * @note[short] Windows: 0x77590
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateDescText(std::string desc);

    /**
     * @note[short] MacOS (ARM): 0x5ca4a8
     * @note[short] MacOS (Intel): 0x6b09a0
     * @note[short] Windows: 0x812b0
     * @note[short] iOS: 0x26b83c
     * @note[short] Android
     */
    void updatePercentLabel();
    int m_charLimit;
    int m_itemID;
    CommentType m_commentType;
    bool m_allowEmotes;
    CCTextInputNode* m_commentInput;
    CCMenuItemSpriteExtra* m_emotesButton;
    EmotePickerPopup* m_emotePicker;
    std::string m_descText;
    std::string m_placeholderText;
    cocos2d::CCLabelBMFont* m_charCountLabel;
    cocos2d::CCLabelBMFont* m_percentLabel;
    UploadActionPopup* m_uploadPopup;
    bool m_uploadSuccess;
    bool m_percentEnabled;
    int m_percent;
    ShareCommentDelegate* m_delegate;
};
