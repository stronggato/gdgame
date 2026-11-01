#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJDropDownLayer.hpp>
#include <Geode/binding/GJAccountDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class AccountHelpLayer : public GJDropDownLayer, public GJAccountDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "AccountHelpLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AccountHelpLayer, GJDropDownLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     AccountHelpLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8f07c
     * @note[short] Android: Rebinded
     */
     ~AccountHelpLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static AccountHelpLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x8c4b8
     * @note[short] Windows: 0x94b70
     * @note[short] iOS: 0x1ee174
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x8d11c
     * @note[short] MacOS (Intel): 0x9d350
     * @note[short] Windows: 0x957b0
     * @note[short] iOS: 0x1eebf4
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS (ARM): 0x8cfd0
     * @note[short] MacOS (Intel): 0x9d210
     * @note[short] Windows: 0x952b0
     * @note[short] iOS: 0x1eeb40
     * @note[short] Android
     */
    virtual void accountStatusChanged();

    /**
     * @note[short] MacOS (ARM): 0x8cfdc
     * @note[short] MacOS (Intel): 0x9d240
     * @note[short] Windows: 0x95570
     * @note[short] iOS: 0x1eeb4c
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x8cf9c
     * @note[short] MacOS (Intel): 0x9d1d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void doUnlink();

    /**
     * @note[short] MacOS (ARM): 0x8cfc8
     * @note[short] MacOS (Intel): 0x9d200
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void exitLayer();

    /**
     * @note[short] MacOS (ARM): 0x8c8dc
     * @note[short] MacOS (Intel): 0x9caf0
     * @note[short] iOS: 0x1ee594
     * @note[short] Android
     */
    void onAccountManagement(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8c868
     * @note[short] MacOS (Intel): 0x9ca90
     * @note[short] Windows: 0x94fa0
     * @note[short] iOS: 0x1ee51c
     * @note[short] Android
     */
    void onReLogin(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8c9b0
     * @note[short] MacOS (Intel): 0x9cbc0
     * @note[short] Windows: 0x8c660
     * @note[short] iOS: 0x10f698
     * @note[short] Android
     */
    void onUnlink(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8cb64
     * @note[short] MacOS (Intel): 0x9cd70
     * @note[short] Windows: 0x952c0
     * @note[short] iOS: 0x1ee788
     * @note[short] Android
     */
    void updatePage();

    /**
     * @note[short] MacOS (ARM): 0x8cea4
     * @note[short] MacOS (Intel): 0x9d0c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1eea7c
     * @note[short] Android
     */
    void verifyUnlink();
    cocos2d::CCLabelBMFont* m_loginStatusLabel;
    TextArea* m_textArea;
    CCMenuItemSpriteExtra* m_refreshLoginButton;
    CCMenuItemSpriteExtra* m_unlinkAccountButton;
    bool m_unk290;
};
