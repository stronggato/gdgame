#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GameObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class EndPortalObject : public GameObject {
public:
    static constexpr auto CLASS_NAME = "EndPortalObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EndPortalObject, GameObject)

    /**
     * @note[short] Windows: 0x2861a0
     * @note[short] Android: Rebinded
     */
    virtual  ~EndPortalObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     EndPortalObject();

    /**
     * @note[short] MacOS (ARM): 0x3104ec
     * @note[short] MacOS (Intel): 0x385770
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x47c8f4
     * @note[short] Android
     */
    static EndPortalObject* create();

    /**
     * @note[short] MacOS (ARM): 0x310588
     * @note[short] MacOS (Intel): 0x385810
     * @note[short] Windows: 0x206e30
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3109f8
     * @note[short] MacOS (Intel): 0x385d00
     * @note[short] Windows: 0x207330
     * @note[short] iOS: 0x47cdf4
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& position);

    /**
     * @note[short] MacOS (ARM): 0x310af0
     * @note[short] MacOS (Intel): 0x385e10
     * @note[short] Windows: 0x207490
     * @note[short] iOS: 0x47ceec
     * @note[short] Android
     */
    virtual void setVisible(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x310994
     * @note[short] MacOS (Intel): 0x385c80
     * @note[short] Windows: 0x207270
     * @note[short] iOS: 0x47cd90
     * @note[short] Android
     */
    cocos2d::CCPoint getSpawnPos();

    /**
     * @note[short] MacOS (ARM): 0x310924
     * @note[short] MacOS (Intel): 0x385c00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x47cd20
     * @note[short] Android
     */
    void triggerObject(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x310858
     * @note[short] MacOS (Intel): 0x385b40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x47cc54
     * @note[short] Android
     */
    void updateColors(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x310b54
     * @note[short] MacOS (Intel): 0x385e70
     * @note[short] Windows: 0x16cfa0
     * @note[short] iOS: 0x15a4dc
     * @note[short] Android
     */
    void updateEndPos(bool updateParticle);
    cocos2d::CCSprite* m_gradientBar;
    bool m_flippedX;
    bool m_startPosHeightRelated;
};
