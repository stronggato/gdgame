#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class PurchaseItemPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "PurchaseItemPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PurchaseItemPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x3acc40
     * @note[short] Android: Rebinded
     */
    virtual  ~PurchaseItemPopup();

    /**
     * @note[short] iOS: 0x36a690
     * @note[short] Android
     */
    static PurchaseItemPopup* create(GJStoreItem* item);

    /**
     * @note[short] MacOS (ARM): 0x2a5c30
     * @note[short] MacOS (Intel): 0x313800
     * @note[short] Windows: 0x99e20
     * @note[short] iOS: 0x1cb2ac
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2a5120
     * @note[short] MacOS (Intel): 0x312bd0
     * @note[short] Windows: 0x3b2580
     * @note[short] iOS: 0x1ca8bc
     * @note[short] Android
     */
    bool init(GJStoreItem* item);

    /**
     * @note[short] MacOS (ARM): 0x2a5b80
     * @note[short] MacOS (Intel): 0x313760
     * @note[short] Windows: 0x99df0
     * @note[short] iOS: 0x1cb1fc
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a5bbc
     * @note[short] MacOS (Intel): 0x23a7a0
     * @note[short] Windows: 0x3b3430
     * @note[short] iOS: 0x1cb238
     * @note[short] Android
     */
    void onPurchase(cocos2d::CCObject* sender);
    GJStoreItem* m_storeItem;
    GJPurchaseDelegate* m_delegate;
};
