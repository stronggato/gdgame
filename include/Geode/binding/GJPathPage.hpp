#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/GJPurchaseDelegate.hpp>

class GJPathPage : public FLAlertLayer, public FLAlertLayerProtocol, public GJPurchaseDelegate {
public:
    static constexpr auto CLASS_NAME = "GJPathPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPathPage, FLAlertLayer)

    /**
     * @note[short] Windows: 0x38f7c0
     * @note[short] Android: Rebinded
     */
    virtual  ~GJPathPage();

    /**
     * @note[short] Windows: 0x390730
     * @note[short] iOS: 0x311ec4
     * @note[short] Android
     */
    static GJPathPage* create(int path, GJPathsLayer* layer);

    /**
     * @note[short] Windows: 0x46290
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x282fec
     * @note[short] MacOS (Intel): 0x2ed290
     * @note[short] Windows: 0x3943a0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x9ed50
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x281734
     * @note[short] MacOS (Intel): 0x2eb6c0
     * @note[short] Windows: 0x392790
     * @note[short] iOS: 0x45e9e0
     * @note[short] Android
     */
    virtual void didPurchaseItem(GJStoreItem* item);

    /**
     * @note[short] MacOS (ARM): 0x27fa44
     * @note[short] MacOS (Intel): 0x2e9940
     * @note[short] iOS: 0x45d078
     * @note[short] Android
     */
    bool init(int path, GJPathsLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x281710
     * @note[short] MacOS (Intel): 0x2eb690
     * @note[short] Windows: 0x117bb0
     * @note[short] iOS: 0x45e9bc
     * @note[short] Android
     */
    void onActivatePath(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2813a8
     * @note[short] MacOS (Intel): 0x2eb360
     * @note[short] Windows: 0x394300
     * @note[short] iOS: 0x45e718
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ebfdc
     * @note[short] MacOS (Intel): 0x2eb3f0
     * @note[short] iOS: 0x45e7b8
     * @note[short] Android
     */
    void onIconInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x281600
     * @note[short] MacOS (Intel): 0x2eb5a0
     * @note[short] iOS: 0x45e8d0
     * @note[short] Android
     */
    void onUnlock(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x281738
     * @note[short] MacOS (Intel): 0x2eb6d0
     * @note[short] iOS: 0x45e9e4
     * @note[short] Android
     */
    void playUnlockAnimation();

    /**
     * @note[short] Android
     */
    void showCantAffordMessage(GJStoreItem* item);

    /**
     * @note[short] MacOS (Intel): 0x2ec710
     * @note[short] Windows: 0x3941d0
     * @note[short] Android
     */
    void unlockAnimationFinished();

    /**
     * @note[short] MacOS (ARM): 0x282398
     * @note[short] MacOS (Intel): 0x2ec420
     * @note[short] Windows: 0x393650
     * @note[short] iOS: 0x45f360
     * @note[short] Android
     */
    void unlockAnimationStep2();

    /**
     * @note[short] MacOS (ARM): 0x282738
     * @note[short] MacOS (Intel): 0x2ec870
     * @note[short] Windows: 0xccb80
     * @note[short] iOS: 0x1a3a40
     * @note[short] Android
     */
    void unlockAnimationStep3();
    GJPathsLayer* m_pathsLayer;
    int m_pathNumber;
    bool m_animationPlaying;
    int m_dialogIndex;
};
