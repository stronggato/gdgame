#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class CCCircleWave : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CCCircleWave";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCCircleWave, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x46470
     * @note[short] Android: Rebinded
     */
    virtual  ~CCCircleWave();

    /**
     * @note[short] MacOS (ARM): 0x1235dc
     * @note[short] MacOS (Intel): 0x157760
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f8894
     * @note[short] Android
     */
    static CCCircleWave* create(float startRadius, float endRadius, float duration, bool fadeIn);

    /**
     * @note[short] MacOS (ARM): 0x1235e4
     * @note[short] MacOS (Intel): 0x157770
     * @note[short] Windows: 0x464d0
     * @note[short] iOS: 0x1f889c
     * @note[short] Android
     */
    static CCCircleWave* create(float startRadius, float endRadius, float duration, bool fadeIn, bool easeOut);

    /**
     * @note[short] MacOS (ARM): 0x1238b8
     * @note[short] MacOS (Intel): 0x157ac0
     * @note[short] Windows: 0x467c0
     * @note[short] iOS: 0x1f8af4
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& position);

    /**
     * @note[short] MacOS (ARM): 0x123d5c
     * @note[short] MacOS (Intel): 0x157f70
     * @note[short] Windows: 0x46c10
     * @note[short] iOS: 0x1f8e74
     * @note[short] Android
     */
    virtual void removeMeAndCleanup();

    /**
     * @note[short] MacOS (ARM): 0x123c18
     * @note[short] MacOS (Intel): 0x157e30
     * @note[short] Windows: 0x46ae0
     * @note[short] iOS: 0x1f8d3c
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1239c8
     * @note[short] MacOS (Intel): 0x157bc0
     * @note[short] Windows: 0x46840
     * @note[short] iOS: 0x1f8c04
     * @note[short] Android
     */
    virtual void updateTweenAction(float value, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x12387c
     * @note[short] MacOS (Intel): 0x157a60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void baseSetup(float radius);

    /**
     * @note[short] MacOS (ARM): 0x123938
     * @note[short] MacOS (Intel): 0x157b30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f8b74
     * @note[short] Android
     */
    void followObject(cocos2d::CCNode* newTarget, bool staticPosition);

    /**
     * @note[short] MacOS (ARM): 0x1236b8
     * @note[short] MacOS (Intel): 0x157860
     * @note[short] Windows: 0x46580
     * @note[short] iOS: 0x1f892c
     * @note[short] Android
     */
    bool init(float startRadius, float endRadius, float duration, bool fadeIn, bool easeOut);

    /**
     * @note[short] MacOS (ARM): 0x1238ec
     * @note[short] MacOS (Intel): 0x157af0
     * @note[short] Windows: 0x46800
     * @note[short] iOS: 0x1f8b28
     * @note[short] Android
     */
    void updatePosition(float dt);
    cocos2d::CCNode* m_target;
    float m_width;
    float m_radius;
    float m_opacity;
    cocos2d::ccColor3B m_color;
    cocos2d::CCPoint m_position;
    CircleMode m_circleMode;
    int m_lineWidth;
    float m_opacityMod;
    bool m_blendAdditive;
    CCCircleWaveDelegate* m_delegate;
};
