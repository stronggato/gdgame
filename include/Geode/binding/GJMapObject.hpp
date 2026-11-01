#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCPoint.hpp>

class GJMapObject : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJMapObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJMapObject, cocos2d::CCNode)

    /**
     * @note[short] MacOS (Intel): 0x2509e0
     * @note[short] Android
     */
    static GJMapObject* create(cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): 0x1f9af0
     * @note[short] MacOS (Intel): 0x250bb0
     * @note[short] Android
     */
    static GJMapObject* createMonster(int objectID);

    /**
     * @note[short] MacOS (ARM): 0x1f99f0
     * @note[short] MacOS (Intel): 0x250ab0
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): 0x1fa614
     * @note[short] MacOS (Intel): 0x251750
     * @note[short] Android
     */
    void monsterIdle();

    /**
     * @note[short] MacOS (ARM): 0x1fa41c
     * @note[short] MacOS (Intel): 0x251550
     * @note[short] Android
     */
    void monsterJump();

    /**
     * @note[short] Android
     */
    void moveFinished();

    /**
     * @note[short] MacOS (ARM): 0x1fa218
     * @note[short] MacOS (Intel): 0x251340
     * @note[short] Android
     */
    void moveMonster();

    /**
     * @note[short] MacOS (ARM): 0x1fa258
     * @note[short] MacOS (Intel): 0x251380
     * @note[short] Android
     */
    void moveMonster(cocos2d::CCPoint position, float offset);

    /**
     * @note[short] MacOS (ARM): 0x1f9f9c
     * @note[short] MacOS (Intel): 0x251090
     * @note[short] Android
     */
    void playerJump();

    /**
     * @note[short] MacOS (ARM): 0x1fa1dc
     * @note[short] MacOS (Intel): 0x251300
     * @note[short] Android
     */
    void setObjectOrigin(cocos2d::CCPoint position, float offset);

    /**
     * @note[short] MacOS (Intel): 0x250eb0
     * @note[short] Android
     */
    void startMonsterJumpLoop();

    /**
     * @note[short] MacOS (ARM): 0x1f9f44
     * @note[short] MacOS (Intel): 0x251040
     * @note[short] Android
     */
    void startPlayerJumpLoop();

    /**
     * @note[short] MacOS (ARM): 0x1fa878
     * @note[short] MacOS (Intel): 0x2519f0
     * @note[short] Android
     */
    void touchMonster();

    /**
     * @note[short] MacOS (ARM): 0x1f9d8c
     * @note[short] MacOS (Intel): 0x250e50
     * @note[short] Android
     */
    void updateShadow(float scaleX, float scaleY, cocos2d::CCPoint position);
    float m_jumpStopTime;
    cocos2d::CCNode* m_mainNode;
    cocos2d::CCSprite* m_shadowSprite;
    cocos2d::CCPoint m_objectOrigin;
    float m_objectOffset;
    bool m_monsterIdle;
    bool m_monsterMoving;
    float m_moveStopTime;
    int m_monstersTouched;
};
