#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/GJMPDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/TextInputDelegate.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class MPLobbyLayer : public cocos2d::CCLayer, public GJMPDelegate, public UploadPopupDelegate, public UploadActionDelegate, public FLAlertLayerProtocol, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "MPLobbyLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MPLobbyLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x3f3918
     * @note[short] MacOS (Intel): 0x29ef90
     * @note[short] Android
     */
    static MPLobbyLayer* create(int type);

    /**
     * @note[short] MacOS (ARM): 0x3f3828
     * @note[short] MacOS (Intel): 0x281d10
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(int type);

    /**
     * @note[short] MacOS (ARM): 0x3f3d98
     * @note[short] MacOS (Intel): 0x48aa50
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x307dc4
     * @note[short] MacOS (Intel): 0x2c20e0
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x3f3ef8
     * @note[short] MacOS (Intel): 0x48abd0
     * @note[short] Android
     */
    virtual void joinLobbyFinished(int id);

    /**
     * @note[short] MacOS (ARM): 0x3f4300
     * @note[short] MacOS (Intel): 0x48b080
     * @note[short] Android
     */
    virtual void joinLobbyFailed(int id, GJMPErrorCode errorType);

    /**
     * @note[short] MacOS (ARM): 0x3f41f8
     * @note[short] MacOS (Intel): 0x48af30
     * @note[short] Android
     */
    virtual void updateComments();

    /**
     * @note[short] MacOS (ARM): 0x3f42e8
     * @note[short] MacOS (Intel): 0x48b060
     * @note[short] Android
     */
    virtual void didUploadMPComment(int id);

    /**
     * @note[short] MacOS (ARM): 0x3f4414
     * @note[short] MacOS (Intel): 0x48b180
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3f441c
     * @note[short] MacOS (Intel): 0x48b1a0
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3f4424
     * @note[short] MacOS (Intel): 0x48b1c0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3f44e0
     * @note[short] MacOS (Intel): 0x48b290
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x3f442c
     * @note[short] MacOS (Intel): 0x48b1e0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x3f44e8
     * @note[short] MacOS (Intel): 0x48b2b0
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x3f4710
     * @note[short] MacOS (Intel): 0x48b4d0
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x3f48c8
     * @note[short] MacOS (Intel): 0x48b680
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x3f39f0
     * @note[short] MacOS (Intel): 0x48a6e0
     * @note[short] Android
     */
    bool init(int type);

    /**
     * @note[short] MacOS (ARM): 0x3f3d54
     * @note[short] MacOS (Intel): 0x48aa10
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f3a78
     * @note[short] MacOS (Intel): 0x48a770
     * @note[short] Android
     */
    void onBtn1(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f3b74
     * @note[short] MacOS (Intel): 0x48a870
     * @note[short] Android
     */
    void onBtn2(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f3b78
     * @note[short] MacOS (Intel): 0x48a880
     * @note[short] Android
     */
    void onBtn3(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f3b7c
     * @note[short] MacOS (Intel): 0x48a890
     * @note[short] Android
     */
    void onComment(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f3a48
     * @note[short] MacOS (Intel): 0x48a740
     * @note[short] Android
     */
    void onUpdateLobby();

    /**
     * @note[short] MacOS (ARM): 0x3f3c70
     * @note[short] MacOS (Intel): 0x48a930
     * @note[short] Android
     */
    void postComment();

    /**
     * @note[short] MacOS (ARM): 0x3f3e24
     * @note[short] MacOS (Intel): 0x48aae0
     * @note[short] Android
     */
    void tryExitLobby();

    /**
     * @note[short] MacOS (ARM): 0x3f39f4
     * @note[short] MacOS (Intel): 0x48a6f0
     * @note[short] Android
     */
    void updateLobby(float delay);
    int m_lobbyID;
    cocos2d::CCLabelBMFont* m_lobbyLabel;
    UploadActionPopup* m_uploadPopup;
    GJCommentListLayer* m_listLayer;
    CCTextInputNode* m_commentInput;
    float m_lobbyDelay;
    bool m_awaitingLobby;
    bool m_lobbyJoined;
};
