#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EnhancedGameObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/vector.hpp>

class EffectGameObject : public EnhancedGameObject {
public:
    static constexpr auto CLASS_NAME = "EffectGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EffectGameObject, EnhancedGameObject)

    /**
     * @note[short] Windows: 0x633c40
     * @note[short] Android: Rebinded
     */
    virtual  ~EffectGameObject();

    /**
     * @note[short] MacOS (ARM): 0x18ab3c
     * @note[short] MacOS (Intel): 0x1d6420
     * @note[short] Windows: 0x6339a0
     * @note[short] iOS: 0x43e8e8
     * @note[short] Android: Rebinded
     */
     EffectGameObject();

    /**
     * @note[short] MacOS (ARM): 0x1592c0
     * @note[short] MacOS (Intel): 0x1995e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x428d74
     * @note[short] Android
     */
    static EffectGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x1596a0
     * @note[short] MacOS (Intel): 0x199a90
     * @note[short] Windows: 0x643e10
     * @note[short] iOS: 0x429040
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x15ac20
     * @note[short] MacOS (Intel): 0x19b820
     * @note[short] Windows: 0x646550
     * @note[short] iOS: 0x42a5c4
     * @note[short] Android
     */
    virtual void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0x13c2c0
     * @note[short] MacOS (Intel): 0x175e30
     * @note[short] Windows: 0x646580
     * @note[short] iOS: 0x419ae8
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x159724
     * @note[short] MacOS (Intel): 0x199b10
     * @note[short] Windows: 0x643e50
     * @note[short] iOS: 0x4290c4
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x13d954
     * @note[short] MacOS (Intel): 0x1773b0
     * @note[short] Windows: 0x646870
     * @note[short] iOS: 0x41ad3c
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x1344d8
     * @note[short] MacOS (Intel): 0x16b7e0
     * @note[short] Windows: 0x64a160
     * @note[short] iOS: 0x414d9c
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x159364
     * @note[short] MacOS (Intel): 0x199670
     * @note[short] Windows: 0x643920
     * @note[short] iOS: 0x428e0c
     * @note[short] Android
     */
    virtual void setRScaleX(float scaleX);

    /**
     * @note[short] MacOS (ARM): 0x159374
     * @note[short] MacOS (Intel): 0x199690
     * @note[short] Windows: 0x643970
     * @note[short] iOS: 0x428e1c
     * @note[short] Android
     */
    virtual void setRScaleY(float scaleY);

    /**
     * @note[short] MacOS (ARM): 0x15abac
     * @note[short] MacOS (Intel): 0x19b7b0
     * @note[short] Windows: 0x646530
     * @note[short] iOS: 0x42a550
     * @note[short] Android
     */
    virtual void triggerActivated(float xPosition);

    /**
     * @note[short] MacOS (ARM): 0x15a968
     * @note[short] MacOS (Intel): 0x19b570
     * @note[short] Windows: 0x646320
     * @note[short] iOS: 0x42a318
     * @note[short] Android
     */
    virtual void restoreObject();

    /**
     * @note[short] MacOS (ARM): 0x15ab68
     * @note[short] MacOS (Intel): 0x19b770
     * @note[short] Windows: 0x6464f0
     * @note[short] iOS: 0x42a514
     * @note[short] Android
     */
    virtual float spawnXPosition();

    /**
     * @note[short] MacOS (ARM): 0x15ae78
     * @note[short] MacOS (Intel): 0x19b9c0
     * @note[short] Windows: 0x649f80
     * @note[short] iOS: 0x42a78c
     * @note[short] Android
     */
    virtual bool canReverse();

    /**
     * @note[short] MacOS (ARM): 0x15af04
     * @note[short] MacOS (Intel): 0x19ba30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x42a818
     * @note[short] Android
     */
    virtual bool isSpecialSpawnObject();

    /**
     * @note[short] MacOS (ARM): 0x15b0b0
     * @note[short] MacOS (Intel): 0x19bbd0
     * @note[short] Windows: 0x64a0f0
     * @note[short] iOS: 0x42a820
     * @note[short] Android
     */
    virtual bool canBeOrdered();

    /**
     * @note[short] MacOS (ARM): 0x18a8c4
     * @note[short] MacOS (Intel): 0x1d6110
     * @note[short] Windows: 0x633c20
     * @note[short] iOS: 0x43e5ac
     * @note[short] Android
     */
    virtual cocos2d::CCLabelBMFont* getObjectLabel();

    /**
     * @note[short] MacOS (ARM): 0x18a8cc
     * @note[short] MacOS (Intel): 0x1d6120
     * @note[short] Windows: 0x633c30
     * @note[short] iOS: 0x43e5b4
     * @note[short] Android
     */
    virtual void setObjectLabel(cocos2d::CCLabelBMFont* label);

    /**
     * @note[short] MacOS (ARM): 0x15a8dc
     * @note[short] MacOS (Intel): 0x19b4e0
     * @note[short] Windows: 0x646250
     * @note[short] iOS: 0x42a28c
     * @note[short] Android
     */
    virtual void stateSensitiveOff(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x15ac4c
     * @note[short] MacOS (Intel): 0x19b850
     * @note[short] Windows: 0x64a060
     * @note[short] iOS: 0x42a5f0
     * @note[short] Android
     */
    bool canSpawnTriggers();

    /**
     * @note[short] MacOS (ARM): 0x15a97c
     * @note[short] MacOS (Intel): 0x19b590
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x42a32c
     * @note[short] Android
     */
    int getTargetColorIndex();

    /**
     * @note[short] MacOS (ARM): 0x15af0c
     * @note[short] MacOS (Intel): 0x19ba40
     * @note[short] Android
     */
    bool hasSpawnTargetID(int id);

    /**
     * @note[short] MacOS (ARM): 0x12e830
     * @note[short] MacOS (Intel): 0x163c30
     * @note[short] Windows: 0x6438b0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x159384
     * @note[short] MacOS (Intel): 0x1996b0
     * @note[short] Windows: 0x11e690
     * @note[short] iOS: 0x428e2c
     * @note[short] Android
     */
    void playTriggerEffect();

    /**
     * @note[short] MacOS (ARM): 0x15abec
     * @note[short] MacOS (Intel): 0x19b7f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x42a590
     * @note[short] Android
     */
    void resetSpawnTrigger();

    /**
     * @note[short] MacOS (ARM): 0x146788
     * @note[short] MacOS (Intel): 0x182a70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x41fdd0
     * @note[short] Android
     */
    void setTargetID(int id);

    /**
     * @note[short] MacOS (ARM): 0x1467a0
     * @note[short] MacOS (Intel): 0x182a90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x41fde8
     * @note[short] Android
     */
    void setTargetID2(int id);

    /**
     * @note[short] MacOS (ARM): 0x159698
     * @note[short] MacOS (Intel): 0x199a80
     * @note[short] Android
     */
    void triggerEffectFinished();

    /**
     * @note[short] MacOS (ARM): 0x15aa68
     * @note[short] MacOS (Intel): 0x19b660
     * @note[short] Windows: 0x6463d0
     * @note[short] iOS: 0x42a418
     * @note[short] Android
     */
    void updateInteractiveHover(float offset);

    /**
     * @note[short] MacOS (ARM): 0x15a9f0
     * @note[short] MacOS (Intel): 0x19b600
     * @note[short] Windows: 0x646350
     * @note[short] iOS: 0x42a3a0
     * @note[short] Android
     */
    void updateSpecialColor();

    /**
     * @note[short] MacOS (ARM): 0x15ad14
     * @note[short] MacOS (Intel): 0x19b900
     * @note[short] Windows: 0x649e30
     * @note[short] iOS: 0x42a6b8
     * @note[short] Android
     */
    void updateSpeedModType();
    bool m_unknownBool;
    cocos2d::ccColor3B m_triggerTargetColor;
    float m_duration;
    float m_opacity;
    bool m_triggerEffectPlaying;
    int m_targetGroupID;
    int m_centerGroupID;
    bool m_isTouchTriggered;
    bool m_isSpawnTriggered;
    bool m_hasCenterEffect;
    float m_shakeStrength;
    float m_shakeInterval;
    bool m_tintGround;
    bool m_usesPlayerColor1;
    bool m_usesPlayerColor2;
    bool m_usesBlending;
    cocos2d::CCPoint m_moveOffset;
    EasingType m_easingType;
    float m_easingRate;
    bool m_lockToPlayerX;
    bool m_lockToPlayerY;
    bool m_lockToCameraX;
    bool m_lockToCameraY;
    bool m_useMoveTarget;
    MoveTargetType m_moveTargetMode;
    float m_moveModX;
    float m_moveModY;
    bool m_smallStep;
    bool m_isDirectionFollowSnap360;
    int m_targetModCenterID;
    float m_directionModeDistance;
    bool m_isDynamicMode;
    bool m_isSilent;
    int m_specialTarget;
    float m_rotationDegrees;
    int m_times360;
    bool m_lockObjectRotation;
    int m_rotationTargetID;
    float m_rotationOffset;
    int m_dynamicModeEasing;
    float m_followXMod;
    float m_followYMod;
    float m_followYSpeed;
    float m_followYDelay;
    int m_followYOffset;
    float m_followYMaxSpeed;
    float m_fadeInDuration;
    float m_holdDuration;
    float m_fadeOutDuration;
    int m_pulseMode;
    int m_pulseTargetType;
    cocos2d::ccHSVValue m_hsvValue;
    int m_copyColorID;
    bool m_copyOpacity;
    bool m_pulseMainOnly;
    bool m_pulseDetailOnly;
    bool m_pulseExclusive;
    bool m_legacyHSV;
    bool m_activateGroup;
    bool m_touchHoldMode;
    TouchTriggerType m_touchToggleMode;
    TouchTriggerControl m_touchPlayerMode;
    bool m_isDualMode;
    int m_animationID;
    float m_spawnXPosition;
    int m_spawnOrder;
    bool m_isMultiTriggered;
    bool m_previewDisable;
    bool m_spawnOrdered;
    bool m_triggerOnExit;
    int m_itemID2;
    int m_controlID;
    bool m_targetControlID;
    bool m_isDynamicBlock;
    int m_itemID;
    bool m_targetPlayer1;
    bool m_targetPlayer2;
    bool m_followCPP;
    bool m_subtractCount;
    bool m_collectibleIsPickupItem;
    bool m_collectibleIsToggleTrigger;
    int m_collectibleParticleID;
    int m_collectiblePoints;
    bool m_hasNoAnimation;
    void* m_unk698;
    int m_forceModID;
    bool m_rotateFollowP1;
    bool m_rotateFollowP2;
    float m_unk6a8;
    float m_unk6ac;
    float m_unk6b0;
    bool m_unk6b4;
    float m_gravityValue;
    bool m_isSinglePTouch;
    float m_zoomValue;
    bool m_cameraIsFreeMode;
    bool m_cameraEditCameraSettings;
    float m_cameraEasingValue;
    float m_cameraPaddingValue;
    bool m_cameraDisableGridSnap;
    bool m_endReversed;
    float m_timeWarpTimeMod;
    bool m_shouldPreview;
    int m_ordValue;
    int m_channelValue;
    bool m_isReverse;
    short m_speedModType;
    cocos2d::CCPoint m_speedStart;
    int m_secretCoinID;
    bool m_unk6f4;
    bool m_unk6f5;
    bool m_isPost2208Remap;
    cocos2d::CCPoint m_endPosition;
    float m_spawnTriggerDelay;
    float m_gravityMod;
    bool m_unk708;
    cocos2d::CCLabelBMFont* m_objectLabel;
    bool m_ignoreGroupParent;
    bool m_ignoreLinkedObjects;
    bool m_channelChanged;
    bool m_canSpawnTriggers;
};
