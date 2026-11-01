#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class ItemInfoPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ItemInfoPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ItemInfoPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x378b00
     * @note[short] Android: Rebinded
     */
    virtual  ~ItemInfoPopup();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    static ItemInfoPopup* create(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2eaae8
     * @note[short] MacOS (Intel): 0x35bc10
     * @note[short] Windows: 0x383960
     * @note[short] iOS: 0x3a3c6c
     * @note[short] Android
     */
    static std::string nameForUnlockType(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2eae94
     * @note[short] MacOS (Intel): 0x35bf40
     * @note[short] Windows: 0x99e20
     * @note[short] iOS: 0x3a3ddc
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2e98e4
     * @note[short] MacOS (Intel): 0x35a8f0
     * @note[short] iOS: 0x3a2bd4
     * @note[short] Android
     */
    bool init(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2eae38
     * @note[short] MacOS (Intel): 0x35bee0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isUnlockedByDefault(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2eadfc
     * @note[short] MacOS (Intel): 0x35beb0
     * @note[short] Windows: 0x99df0
     * @note[short] iOS: 0x3a3d70
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2eae64
     * @note[short] MacOS (Intel): 0x35bf10
     * @note[short] Windows: 0xb2650
     * @note[short] iOS: 0x3a3dac
     * @note[short] Android
     */
    void onCredit(cocos2d::CCObject* sender);
    int m_itemID;
    UnlockType m_unlockType;
    int m_accountID;
};
