#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class SetupObjectOptionsPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SetupObjectOptionsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupObjectOptionsPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupObjectOptionsPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x42a2c
     * @note[short] Android: Rebinded
     */
     ~SetupObjectOptionsPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x241ffc
     * @note[short] Android
     */
    static SetupObjectOptionsPopup* create(GameObject* object, cocos2d::CCArray* objects, SetGroupIDLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x2991f4
     * @note[short] MacOS (Intel): 0x305ce0
     * @note[short] Windows: 0x593a40
     * @note[short] iOS: 0x44e9c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x299218
     * @note[short] MacOS (Intel): 0x305d20
     * @note[short] Windows: 0x124dc0
     * @note[short] iOS: 0x44ec0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x298f44
     * @note[short] MacOS (Intel): 0x3058d0
     * @note[short] Windows: 0x592870
     * @note[short] iOS: 0x44cb8
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x299264
     * @note[short] MacOS (Intel): 0x305d80
     * @note[short] Windows: 0x99df0
     * @note[short] iOS: 0x44f0c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2968a0
     * @note[short] MacOS (Intel): 0x302c40
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x42aec
     * @note[short] Android
     */
    bool init(GameObject* object, cocos2d::CCArray* objects, SetGroupIDLayer* layer);

    /**
     * @note[short] Android
     */
    void onAlwaysHide(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onApplyScaleStick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x298990
     * @note[short] iOS: 0x44754
     * @note[short] Android
     */
    void onCenterEffect(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDisableGlow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2986dc
     * @note[short] MacOS (Intel): 0x304f90
     * @note[short] Windows: 0x592dd0
     * @note[short] iOS: 0x44518
     * @note[short] Android
     */
    void onDisableObject(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDontBoost(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5d4080
     * @note[short] MacOS (Intel): 0x304de0
     * @note[short] iOS: 0x2508fc
     * @note[short] Android
     */
    void onDontBoostX(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDontEnter(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDontFade(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x298a0c
     * @note[short] MacOS (Intel): 0x305300
     * @note[short] Windows: 0xe5360
     * @note[short] iOS: 0x447c8
     * @note[short] Android
     */
    void onExtendedCollision(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x305270
     * @note[short] Android
     */
    void onExtraSticky(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGripSlope(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onHideEffects(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x304f00
     * @note[short] Android
     */
    void onHighDetail(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onIceBlock(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x3057a0
     * @note[short] Android
     */
    void onNoAudioScale(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNonStickX(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNonStickY(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNoParticle(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPassable(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x305830
     * @note[short] Windows: 0x593820
     * @note[short] Android
     */
    void onReverse(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x298d2c
     * @note[short] iOS: 0x44ac0
     * @note[short] Android
     */
    void onSinglePlayerTouch(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleAreaParent(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2496ac
     * @note[short] iOS: 0x78448
     * @note[short] Android
     */
    void onToggleGroupParent(cocos2d::CCObject* sender);
    GameObject* m_gameObject;
    cocos2d::CCArray* m_gameObjects;
    bool m_iceBlock;
    bool m_dontFade;
    bool m_dontEnter;
    bool m_noEffects;
    bool m_noParticle;
    bool m_noTouch;
    bool m_passable;
    bool m_hide;
    bool m_nonStickX;
    bool m_nonStickY;
    bool m_extraSticky;
    bool m_dontBoostY;
    bool m_dontBoostX;
    bool m_noAudioScale;
    bool m_scaleStick;
    bool m_highDetail;
    bool m_groupParent;
    bool m_areaParent;
    bool m_gripSlope;
    bool m_noGlow;
    bool m_reverse;
    bool m_extendedCollision;
    bool m_unk2a6;
    SetGroupIDLayer* m_groupIDLayer;
    bool m_effectObject;
    bool m_singlePlayerTouch;
    bool m_centerEffect;
};
