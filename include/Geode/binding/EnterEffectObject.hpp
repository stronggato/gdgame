#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/vector.hpp>

class EnterEffectObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "EnterEffectObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EnterEffectObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x633d60
     * @note[short] Android: Rebinded
     */
    virtual  ~EnterEffectObject();

    /**
     * @note[short] MacOS (ARM): 0x18aa54
     * @note[short] MacOS (Intel): 0x1d62f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x43e800
     * @note[short] Android: Rebinded
     */
     EnterEffectObject();

    /**
     * @note[short] MacOS (ARM): 0x12e70c
     * @note[short] MacOS (Intel): 0x163ae0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x41348c
     * @note[short] Android
     */
    static EnterEffectObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x13c254
     * @note[short] MacOS (Intel): 0x175da0
     * @note[short] Windows: 0x6360a0
     * @note[short] iOS: 0x419aa8
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x13c618
     * @note[short] MacOS (Intel): 0x176180
     * @note[short] Windows: 0x636200
     * @note[short] iOS: 0x419d4c
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (Intel): 0x163c80
     * @note[short] Windows: 0x6348f0
     * @note[short] iOS: 0x413548
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x12e7bc
     * @note[short] MacOS (Intel): 0x163b80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x5de414
     * @note[short] MacOS (Intel): 0x176110
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetEnterAnimValues();
    int m_enterType;
    int m_length;
    int m_lengthVariance;
    int m_offset;
    int m_offsetVariance;
    int m_offsetY;
    int m_offsetYVariance;
    int m_moveDistance;
    int m_moveDistanceVariance;
    float m_areaScaleX;
    float m_areaScaleXVariance;
    float m_areaScaleY;
    float m_areaScaleYVariance;
    int m_moveAngle;
    int m_moveAngleVariance;
    bool m_startAngle;
    cocos2d::CCPoint m_anglePosition;
    bool m_relative;
    float m_relativeFade;
    EasingType m_easingInType;
    float m_easingInRate;
    int m_easingInBuffer;
    EasingType m_easingOutType;
    float m_easingOutRate;
    int m_easingOutBuffer;
    int m_moveX;
    int m_moveXVariance;
    int m_moveY;
    int m_moveYVariance;
    int m_tintChannelID;
    int m_property224;
    int m_directionType;
    bool m_xyMode;
    bool m_easeOutEnabled;
    float m_modFront;
    float m_modBack;
    float m_areaTint;
    float m_property285;
    int m_effectID;
    float m_areaRotation;
    float m_areaRotationVariance;
    float m_toOpacity;
    float m_fromOpacity;
    bool m_inbound;
    bool m_hsvEnabled;
    float m_deadzone;
    bool m_twoDirections;
    bool m_dontEditAreaParent;
    int m_priority;
    int m_unk7d8;
    int m_enterChannel;
    bool m_useEffectID;
    cocos2d::CCPoint m_unk7e4;
    cocos2d::CCPoint m_unk7ec;
    bool m_negativeTargetX;
    int m_areaRange;
    int m_unk7fc;
};
