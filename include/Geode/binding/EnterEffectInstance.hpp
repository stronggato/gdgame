#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/vector.hpp>

class EnterEffectInstance {
public:
    static constexpr auto CLASS_NAME = "EnterEffectInstance";

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     EnterEffectInstance();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2a56dc
     * @note[short] Android: Out of line
     */
     EnterEffectInstance(EnterEffectObject* object, int targetID, int centerID, int unknown, int targetGroupIndex, int easeIndexCount, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x5be530
     * @note[short] MacOS (Intel): 0x6a34b0
     * @note[short] iOS: 0x53fe0
     * @note[short] Android
     */
    void animateValue(int key, float value, float distance, float duration, int easingType, float easingRate, int easingBuffer);

    /**
     * @note[short] MacOS (Intel): 0x6a39a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getValue(int key);

    /**
     * @note[short] MacOS (ARM): 0x5bde3c
     * @note[short] MacOS (Intel): 0x6a2ae0
     * @note[short] Windows: 0x207a20
     * @note[short] iOS: 0x539b8
     * @note[short] Android
     */
    void loadTransitions(EnterEffectObject* object, float time);

    /**
     * @note[short] MacOS (ARM): 0x5bdd70
     * @note[short] MacOS (Intel): 0x6a29d0
     * @note[short] Windows: 0x207880
     * @note[short] iOS: 0x538ec
     * @note[short] Android
     */
    void loadValuesFromObject(EnterEffectObject* object);

    /**
     * @note[short] MacOS (ARM): 0x5be6fc
     * @note[short] MacOS (Intel): 0x6a3660
     * @note[short] Windows: 0x208980
     * @note[short] iOS: 0x540a0
     * @note[short] Android
     */
    void setValue(int key, float value);

    /**
     * @note[short] MacOS (ARM): 0x5be818
     * @note[short] MacOS (Intel): 0x6a37f0
     * @note[short] Windows: 0x208750
     * @note[short] iOS: 0x541bc
     * @note[short] Android
     */
    void updateTransitions(float dt, GJBaseGameLayer* layer);
    std::map<int,EnterEffectAnimValue> m_enterEffectAnimMap;
    float m_length;
    float m_lengthVariance;
    float m_offset;
    float m_offsetVariance;
    float m_offsetY;
    float m_offsetYVariance;
    float m_modFront;
    float m_modBack;
    float m_deadzone;
    float m_moveDistance;
    float m_moveDistanceVariance;
    float m_moveAngle;
    float m_moveAngleVariance;
    float m_moveX;
    float m_moveXVariance;
    float m_moveY;
    float m_moveYVariance;
    float m_relativeFade;
    float m_scaleX;
    float m_scaleXVariance;
    float m_scaleY;
    float m_scaleYVariance;
    float m_rotation;
    float m_rotationVariance;
    float m_tint;
    float m_unk074;
    float m_toOpacity;
    float m_fromOpacity;
    cocos2d::ccHSVValue m_hsvValue;
    float m_hue;
    float m_saturation;
    float m_value;
    EnterEffectObject* m_gameObject;
    bool m_reversed;
    int m_targetID;
    int m_centerID;
    int m_unkFloat3;
    int m_easeIndex;
    bool m_paused;
    bool m_paused2;
    bool m_unkBool4;
    int m_targetGroupIndex;
    std::vector<int> m_easeIndices;
    int m_controlID;
};
