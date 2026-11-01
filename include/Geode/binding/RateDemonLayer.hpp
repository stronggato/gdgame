#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>

class RateDemonLayer : public FLAlertLayer, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "RateDemonLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RateDemonLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     RateDemonLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x527240
     * @note[short] Android: Rebinded
     */
     ~RateDemonLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static RateDemonLayer* create(int levelID);

    /**
     * @note[short] Windows: 0x559dc0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x21791c
     * @note[short] MacOS (Intel): 0x270f00
     * @note[short] Windows: 0x559bb0
     * @note[short] iOS: 0x4a688c
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x217a6c
     * @note[short] MacOS (Intel): 0x270ff0
     * @note[short] Windows: 0x559c30
     * @note[short] iOS: 0xc98f8
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] Windows: 0x559d00
     * @note[short] iOS: 0x4a69bc
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x217080
     * @note[short] MacOS (Intel): 0x270680
     * @note[short] Windows: 0x559290
     * @note[short] iOS: 0x4a621c
     * @note[short] Android
     */
    bool init(int levelID);

    /**
     * @note[short] MacOS (ARM): 0x217794
     * @note[short] MacOS (Intel): 0x270d80
     * @note[short] iOS: 0x4a6728
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2177f0
     * @note[short] MacOS (Intel): 0x270dd0
     * @note[short] iOS: 0x4a6784
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x217688
     * @note[short] MacOS (Intel): 0x270c90
     * @note[short] Windows: 0x559890
     * @note[short] iOS: 0x4a662c
     * @note[short] Android
     */
    void selectRating(cocos2d::CCObject* sender);
    bool m_uploadFinished;
    CCMenuItemSpriteExtra* m_submitButton;
    cocos2d::CCArray* m_demons;
    void* m_unkPtr;
    int m_levelID;
    int m_demonRate;
    bool m_moderator;
    UploadActionPopup* m_popup;
    RateLevelDelegate* m_delegate;
};
