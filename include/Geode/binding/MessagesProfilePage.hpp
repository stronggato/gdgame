#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/MessageListDelegate.hpp>

class MessagesProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public MessageListDelegate {
public:
    static constexpr auto CLASS_NAME = "MessagesProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MessagesProfilePage, FLAlertLayer)

    /**
     * @note[short] Windows: 0x472400
     * @note[short] Android: Rebinded
     */
    virtual  ~MessagesProfilePage();

    /**
     * @note[short] iOS: 0x261f1c
     * @note[short] Android
     */
    static MessagesProfilePage* create(bool sent);

    /**
     * @note[short] Windows: 0x46290
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x1c29a4
     * @note[short] MacOS (Intel): 0x213800
     * @note[short] Windows: 0x473e00
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1c251c
     * @note[short] MacOS (Intel): 0x2133e0
     * @note[short] Windows: 0x473aa0
     * @note[short] iOS: 0x263138
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] Windows: 0x473ad0
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] Windows: 0x473b20
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] Windows: 0x473ca0
     * @note[short] iOS: 0x263320
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] Windows: 0x4745b0
     * @note[short] Android
     */
    virtual void loadMessagesFinished(cocos2d::CCArray* messages, char const* key);

    /**
     * @note[short] Windows: 0x474710
     * @note[short] Android
     */
    virtual void loadMessagesFailed(char const* key, GJErrorCode errorType);

    /**
     * @note[short] Windows: 0x4747b0
     * @note[short] Android
     */
    virtual void forceReloadMessages(bool sent);

    /**
     * @note[short] Windows: 0x4747d0
     * @note[short] Android
     */
    virtual void setupPageInfo(std::string info, char const* key);

    /**
     * @note[short] Windows: 0x3ff70
     * @note[short] Android
     */
    virtual TodoReturn ownsTouchPrio();

    /**
     * @note[short] MacOS (ARM): 0x1c2350
     * @note[short] MacOS (Intel): 0x2131f0
     * @note[short] Windows: 0x473820
     * @note[short] iOS: 0x262f94
     * @note[short] Android
     */
    void deleteSelected();

    /**
     * @note[short] MacOS (ARM): 0x1c0f78
     * @note[short] MacOS (Intel): 0x211c70
     * @note[short] Windows: 0xc8a80
     * @note[short] iOS: 0x1efab4
     * @note[short] Android
     */
    bool init(bool sent);

    /**
     * @note[short] iOS: 0x263444
     * @note[short] Android
     */
    bool isCorrect(char const* key);

    /**
     * @note[short] iOS: 0x262cfc
     * @note[short] Android
     */
    void loadPage(int page);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectionChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x809e58
     * @note[short] iOS: 0x4f265c
     * @note[short] Android
     */
    void onSentMessages(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleAllObjects(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn selectedCount();

    /**
     * @note[short] MacOS (ARM): 0x1c2af0
     * @note[short] MacOS (Intel): 0x213990
     * @note[short] iOS: 0x263494
     * @note[short] Android
     */
    void setupCommentsBrowser(cocos2d::CCArray* messages);

    /**
     * @note[short] MacOS (Intel): 0x213790
     * @note[short] Android
     */
    void untoggleAll();

    /**
     * @note[short] MacOS (ARM): 0x7884e0
     * @note[short] MacOS (Intel): 0x894900
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateLevelsLabel();

    /**
     * @note[short] MacOS (ARM): 0x1c349c
     * @note[short] MacOS (Intel): 0x2142c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updatePageArrows();

    /**
     * @note[short] Android
     */
    TodoReturn updateSelectUI();
    bool m_sentMessages;
    std::string m_messageKey;
    cocos2d::CCLabelBMFont* m_levelsLabel;
    cocos2d::CCLabelBMFont* m_errorLabel;
    GJCommentListLayer* m_listLayer;
    LoadingCircle* m_loadingCircle;
    UploadActionPopup* m_actionPopup;
    void* m_unkPtr;
    CCMenuItemSpriteExtra* m_nextButton;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_refreshButton;
    CCMenuItemToggler* m_toggleAllToggler;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    int m_page;
    bool m_toggledAll;
};
