#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/UploadMessageDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class GJWriteMessagePopup : public FLAlertLayer, public UploadMessageDelegate, public UploadPopupDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJWriteMessagePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJWriteMessagePopup, FLAlertLayer)

    /**
     * @note[short] Android
     */
    static GJWriteMessagePopup* create(int accountID, int messageID);

    /**
     * @note[short] MacOS (ARM): 0x23a538
     * @note[short] MacOS (Intel): 0x296a50
     * @note[short] iOS: 0x8f278
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x23a524
     * @note[short] MacOS (Intel): 0x296a20
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x23a58c
     * @note[short] MacOS (Intel): 0x296ad0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x23a570
     * @note[short] MacOS (Intel): 0x296a90
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x11a070
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x815e0
     * @note[short] MacOS (Intel): 0x296af0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (Intel): 0x2971a0
     * @note[short] iOS: 0x26c41c
     * @note[short] Android
     */
    virtual void uploadMessageFinished(int accountID);

    /**
     * @note[short] MacOS (ARM): 0x23acec
     * @note[short] MacOS (Intel): 0x297260
     * @note[short] Android
     */
    virtual void uploadMessageFailed(int accountID);

    /**
     * @note[short] MacOS (ARM): 0x23ae2c
     * @note[short] MacOS (Intel): 0x297390
     * @note[short] iOS: 0x376c94
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x23afc0
     * @note[short] MacOS (Intel): 0x2974e0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* node, float yOffset);

    /**
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x23a364
     * @note[short] MacOS (Intel): 0x296850
     * @note[short] Android
     */
    void closeMessagePopup(bool fullExit);

    /**
     * @note[short] MacOS (ARM): 0x239094
     * @note[short] MacOS (Intel): 0x295440
     * @note[short] Android
     */
    bool init(int accountID, int messageID);

    /**
     * @note[short] MacOS (ARM): 0x23a270
     * @note[short] MacOS (Intel): 0x296760
     * @note[short] iOS: 0x50a680
     * @note[short] Android
     */
    void onClearBody(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x239e58
     * @note[short] MacOS (Intel): 0x296310
     * @note[short] iOS: 0x50b210
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x239e60
     * @note[short] MacOS (Intel): 0x296320
     * @note[short] Windows: 0x18da90
     * @note[short] Android
     */
    void onSend(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23a1d4
     * @note[short] MacOS (Intel): 0x2966e0
     * @note[short] Android
     */
    void updateBody(std::string body);

    /**
     * @note[short] MacOS (ARM): 0x23aae8
     * @note[short] MacOS (Intel): 0x297080
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateCharCountLabel(int type);

    /**
     * @note[short] MacOS (ARM): 0x23a138
     * @note[short] MacOS (Intel): 0x296660
     * @note[short] Android
     */
    void updateSubject(std::string subject);

    /**
     * @note[short] MacOS (ARM): 0x23a87c
     * @note[short] MacOS (Intel): 0x296e00
     * @note[short] Android
     */
    void updateText(std::string text, int type);
    int m_unk298;
    int m_messageID;
    int m_accountID;
    CCTextInputNode* m_messageInput;
    CCTextInputNode* m_subjectInput;
    std::string m_messageText;
    std::string m_subjectText;
    cocos2d::CCLabelBMFont* m_messageCountLabel;
    cocos2d::CCLabelBMFont* m_subjectCountLabel;
    UploadActionPopup* m_uploadPopup;
    bool m_uploadSuccess;
};
