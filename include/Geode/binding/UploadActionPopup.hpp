#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class UploadActionPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "UploadActionPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UploadActionPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x39e220
     * @note[short] Android: Rebinded
     */
    virtual  ~UploadActionPopup();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    static UploadActionPopup* create(UploadPopupDelegate* delegate, std::string str);

    /**
     * @note[short] MacOS (ARM): 0x234aac
     * @note[short] MacOS (Intel): 0x290a70
     * @note[short] Windows: 0x39ea80
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x44f0c
     * @note[short] Android
     */
    void closePopup();

    /**
     * @note[short] MacOS (ARM): 0x234278
     * @note[short] MacOS (Intel): 0x290230
     * @note[short] Windows: 0x430390
     * @note[short] iOS: 0x374f48
     * @note[short] Android
     */
    bool init(UploadPopupDelegate* delegate, std::string str);

    /**
     * @note[short] MacOS (ARM): 0x23468c
     * @note[short] MacOS (Intel): 0x290680
     * @note[short] Windows: 0x39e9a0
     * @note[short] iOS: 0x3752e4
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x234848
     * @note[short] MacOS (Intel): 0x290840
     * @note[short] Windows: 0x39e8a0
     * @note[short] iOS: 0x375434
     * @note[short] Android
     */
    void showFailMessage(std::string message);

    /**
     * @note[short] Android
     */
    TodoReturn showFailMessageOrDismiss(std::string p0);

    /**
     * @note[short] MacOS (ARM): 0x2346ec
     * @note[short] MacOS (Intel): 0x2906d0
     * @note[short] Windows: 0x39e790
     * @note[short] iOS: 0x375344
     * @note[short] Android
     */
    void showSuccessMessage(std::string message);
    UploadPopupDelegate* m_delegate;
    TextArea* m_textArea;
    LoadingCircle* m_loadingCircle;
    CCMenuItemSpriteExtra* m_closeButton;
    bool m_succeeded;
};
