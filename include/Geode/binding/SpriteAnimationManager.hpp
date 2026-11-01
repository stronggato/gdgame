#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class SpriteAnimationManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "SpriteAnimationManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SpriteAnimationManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SpriteAnimationManager();

    /**
     * @note[short] MacOS (ARM): 0x701e48
     * @note[short] MacOS (Intel): 0x8016f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3c0038
     * @note[short] Android: Rebinded
     */
     ~SpriteAnimationManager();

    /**
     * @note[short] MacOS (ARM): 0x6feec4
     * @note[short] MacOS (Intel): 0x7fe310
     * @note[short] iOS: 0x3be5ac
     * @note[short] Android
     */
    static void createAnimations(std::string definition);

    /**
     * @note[short] MacOS (ARM): 0x6febb0
     * @note[short] MacOS (Intel): 0x28ffe0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3be2c0
     * @note[short] Android
     */
    static SpriteAnimationManager* createWithOwner(CCAnimatedSprite* sprite, std::string definition);

    /**
     * @note[short] MacOS (ARM): 0x700844
     * @note[short] MacOS (Intel): 0x7fff70
     * @note[short] Windows: 0x11e5f0
     * @note[short] iOS: 0x3bf4b8
     * @note[short] Android
     */
    void animationFinished();

    /**
     * @note[short] MacOS (ARM): 0x701960
     * @note[short] MacOS (Intel): 0x801200
     * @note[short] Windows: 0x87490
     * @note[short] iOS: 0x3bfea8
     * @note[short] Android
     */
    void callAnimationFinished();

    /**
     * @note[short] MacOS (ARM): 0x701e20
     * @note[short] MacOS (Intel): 0x8016c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void doCleanup();

    /**
     * @note[short] MacOS (ARM): 0x46f7c0
     * @note[short] MacOS (Intel): 0x800b00
     * @note[short] Windows: 0x55d30
     * @note[short] iOS: 0x3bfaf0
     * @note[short] Android
     */
    void executeAnimation(std::string animation);

    /**
     * @note[short] MacOS (ARM): 0x701a74
     * @note[short] MacOS (Intel): 0x801310
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void finishAnimation(std::string animation);

    /**
     * @note[short] MacOS (ARM): 0x701680
     * @note[short] MacOS (Intel): 0x800f10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3bfdcc
     * @note[short] Android
     */
    spriteMode getAnimType(std::string animation);

    /**
     * @note[short] MacOS (ARM): 0x223de8
     * @note[short] MacOS (Intel): 0x27e790
     * @note[short] Windows: 0x87590
     * @note[short] iOS: 0x375f24
     * @note[short] Android
     */
    int getPrio(std::string animation);

    /**
     * @note[short] MacOS (ARM): 0x6fec98
     * @note[short] MacOS (Intel): 0x7fe0f0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x3be3a8
     * @note[short] Android
     */
    bool initWithOwner(CCAnimatedSprite* sprite, std::string definition);

    /**
     * @note[short] MacOS (ARM): 0x6ffdc4
     * @note[short] MacOS (Intel): 0x7ff2c0
     * @note[short] iOS: 0x3beec0
     * @note[short] Android
     */
    void loadAnimations(std::string definition);

    /**
     * @note[short] MacOS (ARM): 0x701b80
     * @note[short] MacOS (Intel): 0x801460
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3bff94
     * @note[short] Android
     */
    void offsetCurrentAnimation(float dt);

    /**
     * @note[short] MacOS (ARM): 0x701698
     * @note[short] MacOS (Intel): 0x800f30
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x3bfde4
     * @note[short] Android
     */
    void overridePrio();

    /**
     * @note[short] MacOS (ARM): 0x700d80
     * @note[short] MacOS (Intel): 0x800510
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void playSound(std::string sound);

    /**
     * @note[short] MacOS (ARM): 0x700ba4
     * @note[short] MacOS (Intel): 0x800320
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3bf6e0
     * @note[short] Android
     */
    void playSoundForAnimation(std::string animation);

    /**
     * @note[short] MacOS (ARM): 0x701118
     * @note[short] MacOS (Intel): 0x5c20d0
     * @note[short] Windows: 0x87360
     * @note[short] iOS: 0x3bf9f4
     * @note[short] Android
     */
    void queueAnimation(std::string animation);

    /**
     * @note[short] MacOS (ARM): 0x701bf8
     * @note[short] MacOS (Intel): 0x8014c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetAnimState();

    /**
     * @note[short] MacOS (ARM): 0x700d84
     * @note[short] MacOS (Intel): 0x800520
     * @note[short] Windows: 0x86c10
     * @note[short] iOS: 0x3bf7cc
     * @note[short] Android
     */
    void runAnimation(std::string animation);

    /**
     * @note[short] MacOS (ARM): 0x701748
     * @note[short] MacOS (Intel): 0x800fe0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void runQueuedAnimation();

    /**
     * @note[short] MacOS (ARM): 0x701890
     * @note[short] MacOS (Intel): 0x801130
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3bfe60
     * @note[short] Android
     */
    void stopAnimations();

    /**
     * @note[short] MacOS (ARM): 0x7008a8
     * @note[short] MacOS (Intel): 0x7fffd0
     * @note[short] iOS: 0x3bf51c
     * @note[short] Android
     */
    void storeAnimation(cocos2d::CCAnimate* action, cocos2d::CCAnimate* frames, std::string name, int priority, spriteMode type, cocos2d::CCSpriteFrame* first);

    /**
     * @note[short] MacOS (ARM): 0x7007e4
     * @note[short] MacOS (Intel): 0x7fff10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3bf458
     * @note[short] Android
     */
    void storeSoundForAnimation(cocos2d::CCString* sound, std::string animation, float delay);

    /**
     * @note[short] MacOS (Intel): 0x801500
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void switchToFirstFrameOfAnimation(std::string animation);

    /**
     * @note[short] MacOS (ARM): 0x700b60
     * @note[short] MacOS (Intel): 0x8002c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3bf698
     * @note[short] Android
     */
    void updateAnimationSpeed(float speed);
    CCAnimatedSprite* m_sprite;
    cocos2d::CCDictionary* m_priorityDict;
    cocos2d::CCDictionary* m_typeDict;
    cocos2d::CCDictionary* m_soundDict;
    std::string m_queuedAnimation;
    float m_speed;
    cocos2d::CCDictionary* m_animateDict;
    cocos2d::CCDictionary* m_frameDict;
    std::string m_currentAnimation;
    std::string m_nextAnimation;
};
