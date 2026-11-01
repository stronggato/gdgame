#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GameObject.hpp>
#include <Geode/mapping/vector.hpp>

class EnhancedGameObject : public GameObject {
public:
    static constexpr auto CLASS_NAME = "EnhancedGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EnhancedGameObject, GameObject)

    /**
     * @note[short] Windows: 0x2861a0
     * @note[short] Android: Rebinded
     */
    virtual  ~EnhancedGameObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0xcbc40
     * @note[short] iOS: 0x3006c0
     * @note[short] Android: Out of line
     */
     EnhancedGameObject();

    /**
     * @note[short] MacOS (ARM): 0x5a49dc
     * @note[short] MacOS (Intel): 0x6715f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ef8b0
     * @note[short] Android
     */
    static EnhancedGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x5b9a64
     * @note[short] MacOS (Intel): 0x69c010
     * @note[short] Windows: 0x29f910
     * @note[short] iOS: 0x2fe4f4
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x5b9360
     * @note[short] MacOS (Intel): 0x69b810
     * @note[short] Windows: 0x29f260
     * @note[short] iOS: 0x2fdef0
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x5baca0
     * @note[short] MacOS (Intel): 0x69ef30
     * @note[short] Windows: 0x2a1490
     * @note[short] iOS: 0x2ff6c0
     * @note[short] Android
     */
    virtual void deactivateObject(bool deactivate);

    /**
     * @note[short] MacOS (ARM): 0x5b9618
     * @note[short] MacOS (Intel): 0x69bae0
     * @note[short] Windows: 0x29f570
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] Windows: 0x2a15f0
     * @note[short] iOS: 0x2ff734
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x5b948c
     * @note[short] MacOS (Intel): 0x69b970
     * @note[short] Windows: 0x29f3b0
     * @note[short] iOS: 0x2fe018
     * @note[short] Android
     */
    virtual void triggerActivated(float xPosition);

    /**
     * @note[short] MacOS (ARM): 0x5b93dc
     * @note[short] MacOS (Intel): 0x69b8a0
     * @note[short] Windows: 0x29f310
     * @note[short] iOS: 0x2fdf6c
     * @note[short] Android
     */
    virtual void restoreObject();

    /**
     * @note[short] MacOS (ARM): 0x5b9588
     * @note[short] MacOS (Intel): 0x69ba40
     * @note[short] Windows: 0x29f4a0
     * @note[short] iOS: 0x2fe0f0
     * @note[short] Android
     */
    virtual void animationTriggered();

    /**
     * @note[short] MacOS (ARM): 0x5b9498
     * @note[short] MacOS (Intel): 0x69b980
     * @note[short] Windows: 0x29f3c0
     * @note[short] iOS: 0x2fe024
     * @note[short] Android
     */
    virtual void activatedByPlayer(PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): 0x5b94f8
     * @note[short] MacOS (Intel): 0x69b9d0
     * @note[short] Windows: 0x29f420
     * @note[short] iOS: 0x2fe07c
     * @note[short] Android
     */
    virtual bool hasBeenActivatedByPlayer(PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): 0x5b9568
     * @note[short] MacOS (Intel): 0x69ba20
     * @note[short] Windows: 0x29f480
     * @note[short] iOS: 0x2fe0d4
     * @note[short] Android
     */
    virtual bool hasBeenActivated();

    /**
     * @note[short] MacOS (ARM): 0x5b959c
     * @note[short] MacOS (Intel): 0x69ba60
     * @note[short] Windows: 0x29f500
     * @note[short] iOS: 0x2fe104
     * @note[short] Android
     */
    virtual void saveActiveColors();

    /**
     * @note[short] MacOS (ARM): 0x5b922c
     * @note[short] MacOS (Intel): 0x69b510
     * @note[short] Windows: 0x29f100
     * @note[short] iOS: 0x2fddbc
     * @note[short] Android
     */
    virtual bool canAllowMultiActivate();

    /**
     * @note[short] MacOS (ARM): 0x18a89c
     * @note[short] MacOS (Intel): 0x1d60c0
     * @note[short] Windows: 0x2860d0
     * @note[short] iOS: 0x30060c
     * @note[short] Android
     */
    virtual bool getHasSyncedAnimation();

    /**
     * @note[short] MacOS (ARM): 0x18a8a4
     * @note[short] MacOS (Intel): 0x1d60d0
     * @note[short] Windows: 0x2860e0
     * @note[short] iOS: 0x300614
     * @note[short] Android
     */
    virtual bool getHasRotateAction();

    /**
     * @note[short] MacOS (ARM): 0x5b946c
     * @note[short] MacOS (Intel): 0x69b950
     * @note[short] Windows: 0x29f390
     * @note[short] iOS: 0x2fdffc
     * @note[short] Android
     */
    virtual bool canMultiActivate(bool multiActivate);

    /**
     * @note[short] MacOS (ARM): 0x5b9414
     * @note[short] MacOS (Intel): 0x69b8e0
     * @note[short] Windows: 0x29f350
     * @note[short] iOS: 0x2fdfa4
     * @note[short] Android
     */
    virtual void powerOnObject(int state);

    /**
     * @note[short] MacOS (ARM): 0x5b9428
     * @note[short] MacOS (Intel): 0x69b900
     * @note[short] Windows: 0x29f370
     * @note[short] iOS: 0x2fdfb8
     * @note[short] Android
     */
    virtual void powerOffObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void stateSensitiveOff(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1efb60
     * @note[short] MacOS (Intel): 0x245890
     * @note[short] Windows: 0x2a2c90
     * @note[short] iOS: 0x3e3ddc
     * @note[short] Android
     */
    virtual void updateSyncedAnimation(float totalTime, int frameIndex);

    /**
     * @note[short] MacOS (ARM): 0x1f0fa8
     * @note[short] MacOS (Intel): 0x2477e0
     * @note[short] Windows: 0x2a49e0
     * @note[short] iOS: 0x3e515c
     * @note[short] Android
     */
    virtual void updateAnimateOnTrigger(bool animate);

    /**
     * @note[short] MacOS (ARM): 0x5b99f4
     * @note[short] MacOS (Intel): 0x69bf70
     * @note[short] Windows: 0x2a1ba0
     * @note[short] iOS: 0x2fe484
     * @note[short] Android
     */
    void createRotateAction(float angle, int clockwiseDirection);

    /**
     * @note[short] MacOS (ARM): 0x5b91ec
     * @note[short] MacOS (Intel): 0x69b4d0
     * @note[short] Windows: 0x29f0b0
     * @note[short] iOS: 0x2fdd7c
     * @note[short] Android
     */
    bool init(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x1f10a0
     * @note[short] MacOS (Intel): 0x2478d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e5228
     * @note[short] Android
     */
    void previewAnimateOnTrigger();

    /**
     * @note[short] MacOS (ARM): 0x5bc3dc
     * @note[short] MacOS (Intel): 0x6a0d30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ffd34
     * @note[short] Android
     */
    void refreshRotateAction();

    /**
     * @note[short] MacOS (ARM): 0x1f10e0
     * @note[short] MacOS (Intel): 0x247910
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e5268
     * @note[short] Android
     */
    void resetSyncedAnimation();

    /**
     * @note[short] MacOS (ARM): 0x1f1110
     * @note[short] MacOS (Intel): 0x247960
     * @note[short] Windows: 0x2a4ae0
     * @note[short] iOS: 0x3e5298
     * @note[short] Android
     */
    void setupAnimationVariables();

    /**
     * @note[short] MacOS (ARM): 0x1f0f44
     * @note[short] MacOS (Intel): 0x247780
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e50f8
     * @note[short] Android
     */
    void triggerAnimation();

    /**
     * @note[short] MacOS (ARM): 0x5bc450
     * @note[short] MacOS (Intel): 0x6a0db0
     * @note[short] Windows: 0x2a1c30
     * @note[short] iOS: 0x2ffd40
     * @note[short] Android
     */
    void updateRotateAction(float dt);

    /**
     * @note[short] MacOS (ARM): 0x5b9440
     * @note[short] MacOS (Intel): 0x69b920
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fdfd0
     * @note[short] Android
     */
    void updateState(int state);

    /**
     * @note[short] MacOS (ARM): 0x5b0e40
     * @note[short] MacOS (Intel): 0x691250
     * @note[short] Windows: 0xdd670
     * @note[short] iOS: 0x2fa4ac
     * @note[short] Android
     */
    void updateUserCoin();

    /**
     * @note[short] MacOS (ARM): 0x1f0de8
     * @note[short] MacOS (Intel): 0x247650
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e4fc0
     * @note[short] Android
     */
    void waitForAnimationTrigger();
    bool m_poweredOn;
    int m_state;
    int m_animationRandomizedStartValue;
    float m_animationStart;
    float m_unk540;
    float m_unk544;
    bool m_unk548;
    float m_randomFrameTime;
    bool m_visible;
    bool m_shouldNotHideAnimFreeze;
    bool m_usesSpecialAnimation;
    float m_frameTime;
    short m_frames;
    bool m_hasCustomAnimation;
    bool m_hasCustomRotation;
    bool m_disableRotation;
    float m_rotationSpeed;
    float m_rotationAngle;
    float m_rotationDelta;
    float m_rotationAnimationSpeed;
    bool m_animationRandomizedStart;
    float m_animationSpeed;
    bool m_animationShouldUseSpeed;
    bool m_animateOnTrigger;
    bool m_disableDelayedLoop;
    bool m_disableAnimShine;
    int m_singleFrame;
    bool m_animationOffset;
    bool m_animationTriggered;
    int m_unkAnimationInt;
    int m_maybeAnimationVariableXInt;
    int m_maybeAnimationVariableYInt;
    bool m_animateOnlyWhenActive;
    bool m_isNoMultiActivate;
    bool m_isMultiActivate;
    bool m_activated;
    bool m_activatedByPlayer1;
    bool m_activatedByPlayer2;
    bool m_hasUniqueCoin;
};
