#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/ccTypes.hpp>

class ExplodeItemNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "ExplodeItemNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ExplodeItemNode, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x4d9a20
     * @note[short] Android: Rebinded
     */
    virtual  ~ExplodeItemNode();

    /**
     * @note[short] MacOS (ARM): 0x1a8608
     * @note[short] MacOS (Intel): 0x1f6b30
     * @note[short] Windows: 0x4df280
     * @note[short] iOS: 0x648ac
     * @note[short] Android
     */
    static ExplodeItemNode* create(cocos2d::CCRenderTexture* texture);

    /**
     * @note[short] MacOS (ARM): 0x1a94ec
     * @note[short] MacOS (Intel): 0x1f7b00
     * @note[short] Windows: 0x4dfc30
     * @note[short] iOS: 0x655b0
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x1a86bc
     * @note[short] MacOS (Intel): 0x1f6be0
     * @note[short] Windows: 0x4df350
     * @note[short] iOS: 0x64938
     * @note[short] Android
     */
    void createSprites(int countX, int countY, float xVel, float xVar, float yVel, float yVar, float dur, float durVar, cocos2d::ccColor4F startColor, cocos2d::ccColor4F endColor, bool noParticles);

    /**
     * @note[short] MacOS (ARM): 0x1a93f0
     * @note[short] MacOS (Intel): 0x1f7a20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x654c0
     * @note[short] Android
     */
    bool init(cocos2d::CCRenderTexture* texture);
    cocos2d::CCRenderTexture* m_renderTexture;
    cocos2d::CCArray* m_sprites;
    float m_unk1;
    float m_floorHeight;
    bool m_noGravity;
};
