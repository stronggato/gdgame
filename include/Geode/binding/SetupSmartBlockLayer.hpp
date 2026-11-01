#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/SelectArtDelegate.hpp>

class SetupSmartBlockLayer : public FLAlertLayer, public SelectArtDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupSmartBlockLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSmartBlockLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x5e80a0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupSmartBlockLayer();

    /**
     * @note[short] Windows: 0x5e8430
     * @note[short] Android
     */
    static SetupSmartBlockLayer* create(SmartGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x2018c0
     * @note[short] MacOS (Intel): 0x4e1a20
     * @note[short] Windows: 0x5ea650
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4409f0
     * @note[short] MacOS (Intel): 0x4e1990
     * @note[short] Windows: 0x124dc0
     * @note[short] iOS: 0x7862c
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x440a3c
     * @note[short] MacOS (Intel): 0x4e19f0
     * @note[short] Windows: 0x5ea610
     * @note[short] iOS: 0x78678
     * @note[short] Android
     */
    virtual void selectArtClosed(SelectArtLayer* layer);

    /**
     * @note[short] MacOS (Intel): 0x4e0f20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x43f49c
     * @note[short] MacOS (Intel): 0x4e0190
     * @note[short] Windows: 0x5e8580
     * @note[short] iOS: 0x77314
     * @note[short] Android
     */
    bool init(SmartGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4408c0
     * @note[short] MacOS (Intel): 0x4e1850
     * @note[short] Windows: 0xd6960
     * @note[short] iOS: 0x784fc
     * @note[short] Android
     */
    void onAllowFlipping(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x4e1810
     * @note[short] Android
     */
    void onAllowRotation(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x44017c
     * @note[short] MacOS (Intel): 0x4e1020
     * @note[short] iOS: 0x77ea4
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x44021c
     * @note[short] MacOS (Intel): 0x4e10d0
     * @note[short] Windows: 0x5ea070
     * @note[short] iOS: 0x77f44
     * @note[short] Android
     */
    void onCreate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4405d8
     * @note[short] MacOS (Intel): 0x4e1530
     * @note[short] Windows: 0x7ea50
     * @note[short] iOS: 0x782cc
     * @note[short] Android
     */
    void onCreateAll(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x440308
     * @note[short] MacOS (Intel): 0x4e11e0
     * @note[short] Windows: 0x5ea4a0
     * @note[short] iOS: 0x78020
     * @note[short] Android
     */
    void onCreateTemplate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x4e1950
     * @note[short] Android
     */
    void onDontDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x4e18d0
     * @note[short] Android
     */
    void onIgnoreCorners(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x4e1910
     * @note[short] Android
     */
    void onNearbyReference(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4403ec
     * @note[short] MacOS (Intel): 0x4e12e0
     * @note[short] Windows: 0x378130
     * @note[short] iOS: 0x78104
     * @note[short] Android
     */
    void onPasteTemplate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x4e1780
     * @note[short] Android
     */
    void onReferenceOnly(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x440380
     * @note[short] MacOS (Intel): 0x4e1260
     * @note[short] iOS: 0x78098
     * @note[short] Android
     */
    void onSelectPremade(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4403c8
     * @note[short] MacOS (Intel): 0x4e12b0
     * @note[short] Windows: 0x5ea620
     * @note[short] iOS: 0x780e0
     * @note[short] Android
     */
    void onSelectTemplate(cocos2d::CCObject* sender);
    bool m_referenceOnly;
    bool m_allowRotation;
    bool m_allowFlipX;
    bool m_allowFlipY;
    bool m_useNearby;
    bool m_dontDelete;
    bool m_ignoreCorners;
    int m_specialTemplate;
    SmartGameObject* m_gameObject;
    cocos2d::CCArray* m_gameObjects;
};
