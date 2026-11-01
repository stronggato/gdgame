#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJPointDouble.hpp>
#include <Geode/binding/GameObject.hpp>
#include <Geode/binding/AnimatedSpriteDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/SeedValue.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/unordered_map.hpp>
#include <Geode/mapping/unordered_set.hpp>
#include <Geode/mapping/vector.hpp>

class PlayerObject : public GameObject, public AnimatedSpriteDelegate {
public:
    static constexpr auto CLASS_NAME = "PlayerObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PlayerObject, GameObject)

    /**
     * @note[short] MacOS (ARM): 0x383dfc
     * @note[short] MacOS (Intel): 0x40a500
     * @note[short] Windows: 0x3e9840
     * @note[short] iOS: 0x2c95d4
     * @note[short] Android: Rebinded
     */
     PlayerObject();

    /**
     * @note[short] MacOS (ARM): 0x364b80
     * @note[short] MacOS (Intel): 0x3e6b90
     * @note[short] Windows: 0x4e1080
     * @note[short] iOS: 0x2b2040
     * @note[short] Android: Rebinded
     */
     ~PlayerObject();

    /**
     * @note[short] MacOS (ARM): 0x364d74
     * @note[short] MacOS (Intel): 0x3e6e70
     * @note[short] Windows: 0x4e12b0
     * @note[short] iOS: 0x2b21b4
     * @note[short] Android
     */
    static PlayerObject* create(int player, int ship, GJBaseGameLayer* gameLayer, cocos2d::CCLayer* layer, bool playLayer);

    /**
     * @note[short] MacOS (ARM): 0x36734c
     * @note[short] MacOS (Intel): 0x3e9780
     * @note[short] Windows: 0x4e3930
     * @note[short] iOS: 0x2b4110
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x383830
     * @note[short] MacOS (Intel): 0x409e90
     * @note[short] Windows: 0x4fe5c0
     * @note[short] iOS: 0x2c9228
     * @note[short] Android
     */
    virtual void setScaleX(float scale);

    /**
     * @note[short] MacOS (ARM): 0x383834
     * @note[short] MacOS (Intel): 0x409ea0
     * @note[short] Windows: 0x4fe5d0
     * @note[short] iOS: 0x2c922c
     * @note[short] Android
     */
    virtual void setScaleY(float scale);

    /**
     * @note[short] MacOS (ARM): 0x383838
     * @note[short] MacOS (Intel): 0x409eb0
     * @note[short] Windows: 0x4fe5e0
     * @note[short] iOS: 0x2c9230
     * @note[short] Android
     */
    virtual void setScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x37fe54
     * @note[short] MacOS (Intel): 0x405aa0
     * @note[short] Windows: 0x4f7100
     * @note[short] iOS: 0x2c6144
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& position);

    /**
     * @note[short] MacOS (ARM): 0x38383c
     * @note[short] MacOS (Intel): 0x409ec0
     * @note[short] Windows: 0x4fe5f0
     * @note[short] iOS: 0x2c9234
     * @note[short] Android
     */
    virtual void setVisible(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x3837c0
     * @note[short] MacOS (Intel): 0x409e00
     * @note[short] Windows: 0x4fe4f0
     * @note[short] iOS: 0x2c91b8
     * @note[short] Android
     */
    virtual void setRotation(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x380ee8
     * @note[short] MacOS (Intel): 0x406ca0
     * @note[short] Windows: 0x4f85d0
     * @note[short] iOS: 0x2c7128
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x38090c
     * @note[short] MacOS (Intel): 0x406680
     * @note[short] Windows: 0x4f7dc0
     * @note[short] iOS: 0x2c6be4
     * @note[short] Android
     */
    virtual void setColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x3837c4
     * @note[short] MacOS (Intel): 0x409e10
     * @note[short] Windows: 0x4fe500
     * @note[short] iOS: 0x2c91bc
     * @note[short] Android
     */
    virtual void setFlipX(bool flipX);

    /**
     * @note[short] MacOS (ARM): 0x38382c
     * @note[short] MacOS (Intel): 0x409e80
     * @note[short] Windows: 0x292d60
     * @note[short] iOS: 0x2c9224
     * @note[short] Android
     */
    virtual void setFlipY(bool flipY);

    /**
     * @note[short] MacOS (Intel): 0x3fe790
     * @note[short] Windows: 0x4f19b0
     * @note[short] iOS: 0x2c1378
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x3810e4
     * @note[short] MacOS (Intel): 0x406e70
     * @note[short] Windows: 0x4f8700
     * @note[short] iOS: 0x2c722c
     * @note[short] Android
     */
    virtual cocos2d::CCPoint getRealPosition();

    /**
     * @note[short] MacOS (ARM): 0x38234c
     * @note[short] MacOS (Intel): 0x408220
     * @note[short] Windows: 0x4fb280
     * @note[short] iOS: 0x2c7fac
     * @note[short] Android
     */
    virtual OBB2D* getOrientedBox();

    /**
     * @note[short] MacOS (ARM): 0x382378
     * @note[short] MacOS (Intel): 0x408240
     * @note[short] Windows: 0x4fb2a0
     * @note[short] iOS: 0x2c7fd8
     * @note[short] Android
     */
    virtual float getObjectRotation();

    /**
     * @note[short] MacOS (ARM): 0x38390c
     * @note[short] MacOS (Intel): 0x409fb0
     * @note[short] Windows: 0x4fe610
     * @note[short] iOS: 0x2c9240
     * @note[short] Android
     */
    virtual void animationFinished(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x36cb74
     * @note[short] MacOS (Intel): 0x21dac0
     * @note[short] Windows: 0x4d0ab0
     * @note[short] iOS: 0x2b87d0
     * @note[short] Android
     */
    void activateStreak();

    /**
     * @note[short] MacOS (ARM): 0x366ff4
     * @note[short] MacOS (Intel): 0x3e93f0
     * @note[short] Windows: 0x4e3220
     * @note[short] iOS: 0x2b3e7c
     * @note[short] Android
     */
    void addAllParticles();

    /**
     * @note[short] MacOS (ARM): 0x37c740
     * @note[short] MacOS (Intel): 0x4020a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c3898
     * @note[short] Android
     */
    void addToTouchedRings(RingObject* object);

    /**
     * @note[short] MacOS (ARM): 0x367304
     * @note[short] MacOS (Intel): 0x3e9710
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addToYVelocity(double yVelocity, int type);

    /**
     * @note[short] MacOS (ARM): 0x36d384
     * @note[short] MacOS (Intel): 0x3f0470
     * @note[short] Windows: 0x4e7860
     * @note[short] iOS: 0x2b8d58
     * @note[short] Android
     */
    void animatePlatformerJump(float scale);

    /**
     * @note[short] MacOS (Intel): 0x3f2dc0
     * @note[short] Windows: 0x4fa990
     * @note[short] iOS: 0x2ba9b0
     * @note[short] Android
     */
    void boostPlayer(float yVelocity);

    /**
     * @note[short] MacOS (ARM): 0x381624
     * @note[short] MacOS (Intel): 0x8d920
     * @note[short] Windows: 0x4fa180
     * @note[short] iOS: 0x2c7524
     * @note[short] Android
     */
    void bumpPlayer(float bumpMod, int objectType, bool noEffects, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x37c724
     * @note[short] MacOS (Intel): 0x402080
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool buttonDown(PlayerButton button);

    /**
     * @note[short] MacOS (ARM): 0x37d094
     * @note[short] MacOS (Intel): 0x402a60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c4070
     * @note[short] Android
     */
    bool canStickToGround();

    /**
     * @note[short] MacOS (ARM): 0x374bf8
     * @note[short] MacOS (Intel): 0x3f96b0
     * @note[short] Windows: 0x4ee750
     * @note[short] iOS: 0x2bef04
     * @note[short] Android
     */
    void checkSnapJumpToObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x374b38
     * @note[short] MacOS (Intel): 0x3f9600
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2beea8
     * @note[short] Android
     */
    bool collidedWithObject(float dt, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x36f8dc
     * @note[short] MacOS (Intel): 0x3f3060
     * @note[short] Windows: 0x4ec530
     * @note[short] iOS: 0x2babf0
     * @note[short] Android
     */
    bool collidedWithObject(float dt, GameObject* object, cocos2d::CCRect rect, bool skipCheck);

    /**
     * @note[short] MacOS (ARM): 0x371520
     * @note[short] MacOS (Intel): 0x3f5250
     * @note[short] Windows: 0x33c660
     * @note[short] iOS: 0x2bc24c
     * @note[short] Android
     */
    bool collidedWithObjectInternal(float dt, GameObject* object, cocos2d::CCRect rect, bool skipCheck);

    /**
     * @note[short] MacOS (ARM): 0x36f99c
     * @note[short] MacOS (Intel): 0x3f3100
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2bac9c
     * @note[short] Android
     */
    void collidedWithSlope(float dt, GameObject* object, bool skipPre);

    /**
     * @note[short] MacOS (ARM): 0x370020
     * @note[short] MacOS (Intel): 0x3f37e0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x2bb140
     * @note[short] Android
     */
    void collidedWithSlopeInternal(float dt, GameObject* object, bool forced);

    /**
     * @note[short] MacOS (ARM): 0x36c2e4
     * @note[short] MacOS (Intel): 0x3ef2b0
     * @note[short] Windows: 0x4e7ce0
     * @note[short] iOS: 0x2b802c
     * @note[short] Android
     */
    float convertToClosestRotation(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x382050
     * @note[short] MacOS (Intel): 0x407ea0
     * @note[short] Windows: 0x4fb0d0
     * @note[short] iOS: 0x2c7d14
     * @note[short] Android
     */
    void copyAttributes(PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): 0x37c870
     * @note[short] MacOS (Intel): 0x4021f0
     * @note[short] iOS: 0x2c39c8
     * @note[short] Android
     */
    void createFadeOutDartStreak();

    /**
     * @note[short] MacOS (ARM): 0x3664a8
     * @note[short] MacOS (Intel): 0x3e87e0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x2b3434
     * @note[short] Android
     */
    void createRobot(int frame);

    /**
     * @note[short] MacOS (ARM): 0x3667ec
     * @note[short] MacOS (Intel): 0x3e8b90
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x2b3724
     * @note[short] Android
     */
    void createSpider(int frame);

    /**
     * @note[short] MacOS (Intel): 0x3edff0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2b7278
     * @note[short] Android
     */
    void deactivateParticle();

    /**
     * @note[short] MacOS (ARM): 0x36718c
     * @note[short] MacOS (Intel): 0x3e95b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2b4014
     * @note[short] Android
     */
    void deactivateStreak(bool stop);

    /**
     * @note[short] MacOS (ARM): 0x37fde4
     * @note[short] MacOS (Intel): 0x405a40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c60fc
     * @note[short] Android
     */
    bool destroyFromHitHead();

    /**
     * @note[short] MacOS (ARM): 0x3750f8
     * @note[short] MacOS (Intel): 0x3f9c20
     * @note[short] Windows: 0x4ee6d0
     * @note[short] iOS: 0x2bf32c
     * @note[short] Android
     */
    void didHitHead();

    /**
     * @note[short] MacOS (ARM): 0x380a3c
     * @note[short] MacOS (Intel): 0x4067d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void disableCustomGlowColor();

    /**
     * @note[short] MacOS (Intel): 0x407080
     * @note[short] Windows: 0xda460
     * @note[short] iOS: 0x2c7360
     * @note[short] Android
     */
    void disablePlayerControls();

    /**
     * @note[short] MacOS (ARM): 0x37af50
     * @note[short] MacOS (Intel): 0x400590
     * @note[short] Windows: 0x4f5970
     * @note[short] iOS: 0x2c2754
     * @note[short] Android
     */
    void disableSwingFire();

    /**
     * @note[short] MacOS (ARM): 0x36bc78
     * @note[short] MacOS (Intel): 0x3eeca0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x2b7ce4
     * @note[short] Android
     */
    void doReversePlayer(bool reverse);

    /**
     * @note[short] MacOS (ARM): 0x380a1c
     * @note[short] MacOS (Intel): 0x4067a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c6c88
     * @note[short] Android
     */
    void enableCustomGlowColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (Intel): 0x4070e0
     * @note[short] Windows: 0x4f9fe0
     * @note[short] iOS: 0x2c73bc
     * @note[short] Android
     */
    void enablePlayerControls();

    /**
     * @note[short] MacOS (ARM): 0x36bea0
     * @note[short] MacOS (Intel): 0x3eee40
     * @note[short] Windows: 0x4e7b20
     * @note[short] iOS: 0x2b7df4
     * @note[short] Android
     */
    void exitPlatformerAnimateJump();

    /**
     * @note[short] MacOS (ARM): 0x37aeb4
     * @note[short] MacOS (Intel): 0x400500
     * @note[short] Windows: 0x77650
     * @note[short] iOS: 0x2c26b8
     * @note[short] Android
     */
    void fadeOutStreak2(float duration);

    /**
     * @note[short] MacOS (ARM): 0x3766e4
     * @note[short] MacOS (Intel): 0x3fb500
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void flashPlayer(float flashDuration, float flashDelay, cocos2d::ccColor3B mainColor, cocos2d::ccColor3B secondColor);

    /**
     * @note[short] MacOS (ARM): 0x36d014
     * @note[short] MacOS (Intel): 0x3f00c0
     * @note[short] Windows: 0x4f4c30
     * @note[short] iOS: 0x2b8b98
     * @note[short] Android
     */
    void flipGravity(bool flip, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x36afd4
     * @note[short] MacOS (Intel): 0x3edf70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int flipMod();

    /**
     * @note[short] MacOS (ARM): 0x36d36c
     * @note[short] MacOS (Intel): 0x3f0440
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void gameEventTriggered(int gameEvent, int material);

    /**
     * @note[short] MacOS (ARM): 0x37d0c4
     * @note[short] MacOS (Intel): 0x402a90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c409c
     * @note[short] Android
     */
    GameObjectType getActiveMode();

    /**
     * @note[short] MacOS (ARM): 0x36afac
     * @note[short] MacOS (Intel): 0x3edf40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2b7224
     * @note[short] Android
     */
    double getCurrentXVelocity();

    /**
     * @note[short] MacOS (ARM): 0x36cf80
     * @note[short] MacOS (Intel): 0x3f0020
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getModifiedSlopeYVel();

    /**
     * @note[short] MacOS (ARM): 0x36c464
     * @note[short] MacOS (Intel): 0x3ef470
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2b81a0
     * @note[short] Android
     */
    float getOldPosition(float dt);

    /**
     * @note[short] MacOS (ARM): 0x3809f0
     * @note[short] MacOS (Intel): 0x406770
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c6c5c
     * @note[short] Android
     */
    cocos2d::ccColor3B getSecondColor();

    /**
     * @note[short] MacOS (ARM): 0x3672fc
     * @note[short] MacOS (Intel): 0x3e9700
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2b4108
     * @note[short] Android
     */
    double getYVelocity();

    /**
     * @note[short] MacOS (ARM): 0x38386c
     * @note[short] MacOS (Intel): 0x409f10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void gravityDown();

    /**
     * @note[short] MacOS (ARM): 0x383848
     * @note[short] MacOS (Intel): 0x409ee0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void gravityUp();

    /**
     * @note[short] MacOS (Intel): 0x3f0d50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2b9330
     * @note[short] Android
     */
    void handlePlayerCommand(int command);

    /**
     * @note[short] MacOS (ARM): 0x36fbc4
     * @note[short] MacOS (Intel): 0x3f32f0
     * @note[short] Windows: 0x4e9d60
     * @note[short] iOS: 0x1229d8
     * @note[short] Android
     */
    bool handleRotatedCollisionInternal(float dt, GameObject* object, cocos2d::CCRect rect, bool skipCheck, bool skipPre, bool slope);

    /**
     * @note[short] MacOS (ARM): 0x36fb58
     * @note[short] MacOS (Intel): 0x3f3290
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool handleRotatedObjectCollision(float dt, GameObject* object, cocos2d::CCRect rect, bool skipCheck);

    /**
     * @note[short] MacOS (ARM): 0x36fd24
     * @note[short] MacOS (Intel): 0x3f3450
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void handleRotatedSlopeCollision(float dt, GameObject* object, bool skipPre);

    /**
     * @note[short] MacOS (ARM): 0x3752e0
     * @note[short] MacOS (Intel): 0x3f9e70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2bf474
     * @note[short] Android
     */
    void hardFlipGravity();

    /**
     * @note[short] MacOS (ARM): 0x373adc
     * @note[short] MacOS (Intel): 0x3f8450
     * @note[short] Windows: 0x4f6a00
     * @note[short] iOS: 0x22de74
     * @note[short] Android
     */
    void hitGround(GameObject* object, bool notFlipped);

    /**
     * @note[short] MacOS (ARM): 0x374f60
     * @note[short] MacOS (Intel): 0x3f9a60
     * @note[short] Windows: 0x4f69a0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void hitGroundNoJump(GameObject* object, bool notFlipped);

    /**
     * @note[short] MacOS (ARM): 0x36cfd8
     * @note[short] MacOS (Intel): 0x3f0080
     * @note[short] Windows: 0x4e7780
     * @note[short] iOS: 0x2b8b5c
     * @note[short] Android
     */
    void incrementJumps();

    /**
     * @note[short] MacOS (ARM): 0x364e2c
     * @note[short] MacOS (Intel): 0x3e6f00
     * @note[short] iOS: 0x2b2258
     * @note[short] Android
     */
    bool init(int player, int ship, GJBaseGameLayer* gameLayer, cocos2d::CCLayer* layer, bool playLayer);

    /**
     * @note[short] MacOS (ARM): 0x36f610
     * @note[short] MacOS (Intel): 0x3f2d60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ba958
     * @note[short] Android
     */
    bool isBoostValid(float yVelocity);

    /**
     * @note[short] MacOS (ARM): 0x36afe8
     * @note[short] MacOS (Intel): 0x3edf90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2b724c
     * @note[short] Android
     */
    bool isFlying();

    /**
     * @note[short] MacOS (ARM): 0x375f54
     * @note[short] MacOS (Intel): 0x3facd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2bffe8
     * @note[short] Android
     */
    bool isInBasicMode();

    /**
     * @note[short] MacOS (ARM): 0x369b00
     * @note[short] MacOS (Intel): 0x3ec690
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isInNormalMode();

    /**
@note geode addition

 @note this will return false for PlayerObjects in MenuGameLayer

 @note this might break if you call from PlayerObject::in     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool isPlayer1();

    /**
@note geode addition

 @note this will return false for PlayerObjects in MenuGameLayer

 @note this might break if you call from PlayerObject::in     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool isPlayer2();

    /**
     * @note[short] MacOS (ARM): 0x373ab0
     * @note[short] MacOS (Intel): 0x3f8410
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2be150
     * @note[short] Android
     */
    bool isSafeFlip(float flipTime);

    /**
     * @note[short] MacOS (ARM): 0x381f28
     * @note[short] MacOS (Intel): 0x407d30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c7ca8
     * @note[short] Android
     */
    bool isSafeHeadTest();

    /**
     * @note[short] MacOS (ARM): 0x373a84
     * @note[short] MacOS (Intel): 0x3f83d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isSafeMode(float changeTime);

    /**
     * @note[short] MacOS (ARM): 0x3752b4
     * @note[short] MacOS (Intel): 0x3f9e30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isSafeSpiderFlip(float flipTime);

    /**
@note geode addition

 @note this will return false for PlayerObjects in MenuGameLayer

 @note this might break if you call from PlayerObject::in     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool isVanillaPlayer();

    /**
     * @note[short] MacOS (ARM): 0x36cd70
     * @note[short] MacOS (Intel): 0x3efdf0
     * @note[short] Windows: 0x4e6300
     * @note[short] iOS: 0x2b89b0
     * @note[short] Android
     */
    void levelFlipFinished();

    /**
     * @note[short] MacOS (ARM): 0x36b030
     * @note[short] MacOS (Intel): 0x3edfc0
     * @note[short] Windows: 0x4f5f70
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool levelFlipping();

    /**
     * @note[short] MacOS (ARM): 0x36cd28
     * @note[short] MacOS (Intel): 0x3efdb0
     * @note[short] Windows: 0x4e6280
     * @note[short] iOS: 0x2b896c
     * @note[short] Android
     */
    void levelWillFlip();

    /**
     * @note[short] MacOS (ARM): 0x378888
     * @note[short] MacOS (Intel): 0x3fda60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c0b98
     * @note[short] Android
     */
    void limitDashRotation(float& rotation);

    /**
     * @note[short] Windows: 0x4fce30
     * @note[short] Android
     */
    void loadFromCheckpoint(PlayerCheckpoint* object);

    /**
     * @note[short] MacOS (ARM): 0x381188
     * @note[short] MacOS (Intel): 0x3ca550
     * @note[short] Windows: 0x1765e0
     * @note[short] iOS: 0x2c72d0
     * @note[short] Android
     */
    void lockPlayer();

    /**
     * @note[short] MacOS (ARM): 0x383868
     * @note[short] MacOS (Intel): 0x409f00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void logValues();

    /**
     * @note[short] MacOS (ARM): 0x37db80
     * @note[short] MacOS (Intel): 0x4035d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c4868
     * @note[short] Android
     */
    void modeDidChange();

    /**
     * @note[short] MacOS (ARM): 0x36f814
     * @note[short] MacOS (Intel): 0x3f2f90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2bab2c
     * @note[short] Android
     */
    void performSlideCheck();

    /**
     * @note[short] MacOS (ARM): 0x36cc84
     * @note[short] MacOS (Intel): 0x3efd10
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x2b88d4
     * @note[short] Android
     */
    void placeStreakPoint();

    /**
     * @note[short] MacOS (ARM): 0x3817dc
     * @note[short] MacOS (Intel): 0x407550
     * @note[short] Windows: 0x4fa530
     * @note[short] iOS: 0x2c7654
     * @note[short] Android
     */
    void playBumpEffect(int objectType, GameObject* player);

    /**
     * @note[short] MacOS (ARM): 0x36d764
     * @note[short] MacOS (Intel): 0x3f08b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2b8ff0
     * @note[short] Android
     */
    void playBurstEffect();

    /**
     * @note[short] MacOS (ARM): 0x1a8e44
     * @note[short] MacOS (Intel): 0x1f74a0
     * @note[short] Windows: 0x4ded90
     * @note[short] iOS: 0x64fb0
     * @note[short] Android
     */
    void playCompleteEffect(bool noEffects, bool instant);

    /**
     * @note[short] MacOS (ARM): 0x1a14e8
     * @note[short] MacOS (Intel): 0x1ef690
     * @note[short] Windows: 0x4d9ad0
     * @note[short] iOS: 0x5fbf4
     * @note[short] Android
     */
    void playDeathEffect();

    /**
     * @note[short] MacOS (ARM): 0x36b9b4
     * @note[short] MacOS (Intel): 0x3ee9e0
     * @note[short] iOS: 0x2b7a94
     * @note[short] Android
     */
    void playDynamicSpiderRun();

    /**
     * @note[short] MacOS (ARM): 0x37acd0
     * @note[short] MacOS (Intel): 0x400300
     * @note[short] Windows: 0x4f2880
     * @note[short] iOS: 0x2c25cc
     * @note[short] Android
     */
    void playerDestroyed(bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x36d734
     * @note[short] MacOS (Intel): 0x3f0870
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool playerIsFalling(float yVelocity);

    /**
     * @note[short] MacOS (ARM): 0x36d668
     * @note[short] MacOS (Intel): 0x3f0780
     * @note[short] Windows: 0x4f4ea0
     * @note[short] iOS: 0x2b8f44
     * @note[short] Android
     */
    bool playerIsFallingBugged();

    /**
     * @note[short] MacOS (ARM): 0x36d714
     * @note[short] MacOS (Intel): 0x3f0840
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool playerIsMovingUp();

    /**
     * @note[short] MacOS (Intel): 0x402870
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c3fc4
     * @note[short] Android
     */
    void playerTeleported();

    /**
     * @note[short] MacOS (ARM): 0x381584
     * @note[short] MacOS (Intel): 0x407300
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c74a4
     * @note[short] Android
     */
    void playingEndEffect();

    /**
     * @note[short] MacOS (ARM): 0x37a62c
     * @note[short] MacOS (Intel): 0x3ffc40
     * @note[short] Windows: 0x4f1fa0
     * @note[short] iOS: 0x2c2084
     * @note[short] Android
     */
    void playSpawnEffect();

    /**
     * @note[short] MacOS (ARM): 0x375fb4
     * @note[short] MacOS (Intel): 0x3fad20
     * @note[short] Windows: 0x4efc10
     * @note[short] iOS: 0x2c0028
     * @note[short] Android
     */
    void playSpiderDashEffect(cocos2d::CCPoint from, cocos2d::CCPoint to);

    /**
     * @note[short] iOS: 0x2b94b0
     * @note[short] Android
     */
    void postCollision(float dt, bool betweenSteps);

    /**
     * @note[short] MacOS (Intel): 0x3f0ea0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2b93a4
     * @note[short] Android
     */
    void preCollision();

    /**
     * @note[short] MacOS (ARM): 0x3735ec
     * @note[short] MacOS (Intel): 0x3f7ee0
     * @note[short] Windows: 0x4e9f00
     * @note[short] iOS: 0x2bdcc4
     * @note[short] Android
     */
    bool preSlopeCollision(float dt, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x381900
     * @note[short] MacOS (Intel): 0x407690
     * @note[short] Windows: 0x4fa330
     * @note[short] iOS: 0x2c7778
     * @note[short] Android
     */
    void propellPlayer(float yVelocity, bool noEffects, int objectType);

    /**
     * @note[short] MacOS (ARM): 0x37b1d0
     * @note[short] MacOS (Intel): 0x400850
     * @note[short] Windows: 0x4f2a90
     * @note[short] iOS: 0x2c2904
     * @note[short] Android
     */
    bool pushButton(PlayerButton button);

    /**
     * @note[short] MacOS (ARM): 0x381fa0
     * @note[short] MacOS (Intel): 0x407da0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c7d04
     * @note[short] Android
     */
    void pushDown();

    /**
     * @note[short] MacOS (ARM): 0x381b28
     * @note[short] MacOS (Intel): 0x407890
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void pushPlayer(float yVelocity);

    /**
     * @note[short] MacOS (ARM): 0x3781d4
     * @note[short] MacOS (Intel): 0x3fd350
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c059c
     * @note[short] Android
     */
    void redirectDash(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x381cb0
     * @note[short] MacOS (Intel): 0x407a60
     * @note[short] Windows: 0x4fa740
     * @note[short] iOS: 0x2c7a70
     * @note[short] Android
     */
    void redirectPlayerForce(float rotation, float modifier, float minimum, float maximum);

    /**
     * @note[short] Android
     */
    TodoReturn refreshStreakState();

    /**
     * @note[short] MacOS (ARM): 0x381144
     * @note[short] MacOS (Intel): 0x406ee0
     * @note[short] Windows: 0x4f9be0
     * @note[short] iOS: 0x2c728c
     * @note[short] Android
     */
    void releaseAllButtons();

    /**
     * @note[short] MacOS (ARM): 0x37c2cc
     * @note[short] MacOS (Intel): 0x401bd0
     * @note[short] Windows: 0x4f2d30
     * @note[short] iOS: 0x2c3760
     * @note[short] Android
     */
    bool releaseButton(PlayerButton button);

    /**
     * @note[short] MacOS (ARM): 0x367114
     * @note[short] MacOS (Intel): 0x3e9540
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2b3f9c
     * @note[short] Android
     */
    void removeAllParticles();

    /**
     * @note[short] MacOS (ARM): 0x379f34
     * @note[short] MacOS (Intel): 0x3ff470
     * @note[short] Windows: 0x4fde80
     * @note[short] iOS: 0x2c1a88
     * @note[short] Android
     */
    void removePendingCheckpoint();

    /**
     * @note[short] MacOS (ARM): 0x37ac94
     * @note[short] MacOS (Intel): 0x4002c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c2590
     * @note[short] Android
     */
    void removePlacedCheckpoint();

    /**
     * @note[short] MacOS (ARM): 0x36ca28
     * @note[short] MacOS (Intel): 0x3efa90
     * @note[short] Windows: 0x4e6390
     * @note[short] iOS: 0x2b8684
     * @note[short] Android
     */
    void resetAllParticles();

    /**
     * @note[short] MacOS (ARM): 0x36dbf0
     * @note[short] MacOS (Intel): 0x3f0d70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2b9344
     * @note[short] Android
     */
    void resetCollisionLog(bool full);

    /**
     * @note[short] MacOS (Intel): 0x3f9f00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetCollisionValues();

    /**
     * @note[short] MacOS (ARM): 0x37d998
     * @note[short] MacOS (Intel): 0x4033d0
     * @note[short] Windows: 0x4f5d60
     * @note[short] iOS: 0x2c46e8
     * @note[short] Android
     */
    void resetPlayerIcon();

    /**
     * @note[short] MacOS (ARM): 0x379d48
     * @note[short] MacOS (Intel): 0x3ff150
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c1990
     * @note[short] Android
     */
    void resetStateVariables();

    /**
     * @note[short] MacOS (ARM): 0x36ca8c
     * @note[short] MacOS (Intel): 0x3efb00
     * @note[short] iOS: 0x2b86e8
     * @note[short] Android
     */
    void resetStreak();

    /**
     * @note[short] MacOS (ARM): 0x379dac
     * @note[short] MacOS (Intel): 0x3ff1d0
     * @note[short] Windows: 0x4f2e50
     * @note[short] iOS: 0x2c19f4
     * @note[short] Android
     */
    void resetTouchedRings(bool removeAll);

    /**
     * @note[short] MacOS (ARM): 0x36daac
     * @note[short] MacOS (Intel): 0x3f0c30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int reverseMod();

    /**
     * @note[short] MacOS (ARM): 0x37c798
     * @note[short] MacOS (Intel): 0x402100
     * @note[short] Windows: 0x4f2f90
     * @note[short] iOS: 0x2c38f0
     * @note[short] Android
     */
    void reversePlayer(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x37b570
     * @note[short] MacOS (Intel): 0x400c40
     * @note[short] Windows: 0x4f3780
     * @note[short] iOS: 0x244040
     * @note[short] Android
     */
    void ringJump(RingObject* object, bool skipCheck);

    /**
     * @note[short] MacOS (ARM): 0x3798dc
     * @note[short] MacOS (Intel): 0x3fed40
     * @note[short] Windows: 0x3581d0
     * @note[short] iOS: 0x2c1678
     * @note[short] Android
     */
    void rotateGameplay(int moveDirection, int groundDirection, bool editVelocity, float velocityModX, float velocityModY, bool overrideVelocity, bool dontSlide);

    /**
     * @note[short] MacOS (ARM): 0x36fd94
     * @note[short] MacOS (Intel): 0x3f34b0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x2bafac
     * @note[short] Android
     */
    void rotateGameplayObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x37ce84
     * @note[short] MacOS (Intel): 0x402850
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c3fbc
     * @note[short] Android
     */
    void rotateGameplayOnly(bool sideways);

    /**
     * @note[short] MacOS (ARM): 0x36ffe8
     * @note[short] MacOS (Intel): 0x3f37a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void rotatePreSlopeObjects();

    /**
     * @note[short] MacOS (ARM): 0x36d994
     * @note[short] MacOS (Intel): 0x3f0b10
     * @note[short] Windows: 0x4e7f30
     * @note[short] iOS: 0x2b9140
     * @note[short] Android
     */
    void runBallRotation(float speed);

    /**
     * @note[short] MacOS (Intel): 0x3f0c50
     * @note[short] Windows: 0x4e8060
     * @note[short] iOS: 0x2b9240
     * @note[short] Android
     */
    void runBallRotation2();

    /**
     * @note[short] MacOS (ARM): 0x36d8b8
     * @note[short] MacOS (Intel): 0x3f0a00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void runNormalRotation();

    /**
     * @note[short] MacOS (ARM): 0x369b70
     * @note[short] MacOS (Intel): 0x3ec6f0
     * @note[short] Windows: 0x4e7e00
     * @note[short] iOS: 0x2b60f4
     * @note[short] Android
     */
    void runNormalRotation(bool notNormalMode, float speed);

    /**
     * @note[short] MacOS (ARM): 0x36bfa0
     * @note[short] MacOS (Intel): 0x3eef50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2b7eb0
     * @note[short] Android
     */
    void runRotateAction(bool ground, int type);

    /**
     * @note[short] Android
     */
    void saveToCheckpoint(PlayerCheckpoint* checkpoint);

    /**
     * @note[short] MacOS (ARM): 0x368260
     * @note[short] MacOS (Intel): 0x3ea890
     * @note[short] Windows: 0x4f7e50
     * @note[short] iOS: 0x2b4e3c
     * @note[short] Android
     */
    void setSecondColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x366c50
     * @note[short] MacOS (Intel): 0x3e9040
     * @note[short] Windows: 0x4e3370
     * @note[short] iOS: 0x2b3af4
     * @note[short] Android
     */
    void setupStreak();

    /**
     * @note[short] MacOS (ARM): 0x366a50
     * @note[short] MacOS (Intel): 0x3e8e60
     * @note[short] Windows: 0x4e38c0
     * @note[short] iOS: 0x2b3978
     * @note[short] Android
     */
    void setYVelocity(double velocity, int type);

    /**
     * @note[short] MacOS (ARM): 0x194978
     * @note[short] MacOS (Intel): 0x3ffdb0
     * @note[short] iOS: 0x2c2170
     * @note[short] Android
     */
    void spawnCircle();

    /**
     * @note[short] MacOS (ARM): 0x37a8a0
     * @note[short] MacOS (Intel): 0x3ffea0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void spawnCircle2();

    /**
     * @note[short] MacOS (ARM): 0x37aba4
     * @note[short] MacOS (Intel): 0x4001c0
     * @note[short] Windows: 0x4f26b0
     * @note[short] iOS: 0x2c24a0
     * @note[short] Android
     */
    void spawnDualCircle();

    /**
     * @note[short] MacOS (ARM): 0x3821e0
     * @note[short] MacOS (Intel): 0x408090
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c7ea0
     * @note[short] Android
     */
    void spawnFromPlayer(PlayerObject* player, bool flip);

    /**
     * @note[short] MacOS (ARM): 0x37a944
     * @note[short] MacOS (Intel): 0x3fff40
     * @note[short] Windows: 0x4f2290
     * @note[short] iOS: 0x2c2250
     * @note[short] Android
     */
    void spawnPortalCircle(cocos2d::ccColor3B color, float startRadius);

    /**
     * @note[short] MacOS (ARM): 0x37aa64
     * @note[short] MacOS (Intel): 0x400070
     * @note[short] iOS: 0x249f90
     * @note[short] Android
     */
    void spawnScaleCircle();

    /**
     * @note[short] MacOS (ARM): 0x381fb0
     * @note[short] MacOS (Intel): 0x407dc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void specialGroundHit();

    /**
     * @note[short] MacOS (ARM): 0x3838ac
     * @note[short] MacOS (Intel): 0x409f50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void speedDown();

    /**
     * @note[short] MacOS (ARM): 0x38388c
     * @note[short] MacOS (Intel): 0x409f30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void speedUp();

    /**
     * @note[short] MacOS (ARM): 0x36cec8
     * @note[short] MacOS (Intel): 0x3eff60
     * @note[short] Windows: 0x4eede0
     * @note[short] iOS: 0x2b8aa4
     * @note[short] Android
     */
    void spiderTestJump(bool dynamic);

    /**
     * @note[short] MacOS (ARM): 0x375378
     * @note[short] MacOS (Intel): 0x3f9f20
     * @note[short] Windows: 0x4eee90
     * @note[short] iOS: 0x2bf4e8
     * @note[short] Android
     */
    void spiderTestJumpInternal(bool dynamic);

    /**
     * @note[short] MacOS (ARM): 0x3767a0
     * @note[short] MacOS (Intel): 0x3fb5f0
     * @note[short] Android
     */
    void spiderTestJumpX(bool dynamic);

    /**
     * @note[short] MacOS (ARM): 0x3774b8
     * @note[short] MacOS (Intel): 0x3fc4b0
     * @note[short] Android
     */
    void spiderTestJumpY(bool dynamic);

    /**
     * @note[short] MacOS (ARM): 0x378a24
     * @note[short] MacOS (Intel): 0x3fdc10
     * @note[short] iOS: 0x2c0d34
     * @note[short] Android
     */
    void startDashing(DashRingObject* object);

    /**
     * @note[short] MacOS (ARM): 0x37f1ec
     * @note[short] MacOS (Intel): 0x404d90
     * @note[short] Windows: 0x4f5f60
     * @note[short] iOS: 0x2c5850
     * @note[short] Android
     */
    void stopBurstEffect();

    /**
     * @note[short] MacOS (ARM): 0x36b2d8
     * @note[short] MacOS (Intel): 0x3ee290
     * @note[short] Windows: 0x4f10f0
     * @note[short] iOS: 0x2b74d0
     * @note[short] Android
     */
    void stopDashing();

    /**
     * @note[short] MacOS (Intel): 0x3eff00
     * @note[short] Windows: 0x4e6410
     * @note[short] iOS: 0x2b8a54
     * @note[short] Android
     */
    void stopParticles();

    /**
     * @note[short] MacOS (ARM): 0x36d820
     * @note[short] MacOS (Intel): 0x3f0950
     * @note[short] iOS: 0x2b90a8
     * @note[short] Android
     */
    void stopPlatformerJumpAnimation();

    /**
     * @note[short] MacOS (ARM): 0x36d8a8
     * @note[short] MacOS (Intel): 0x3f09e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2b9130
     * @note[short] Android
     */
    void stopRotation(bool ground, int type);

    /**
     * @note[short] MacOS (ARM): 0x381e90
     * @note[short] MacOS (Intel): 0x407ca0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c7c10
     * @note[short] Android
     */
    void stopStreak2();

    /**
     * @note[short] MacOS (ARM): 0x36dc50
     * @note[short] MacOS (Intel): 0x3f0de0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void storeCollision(PlayerCollisionDirection direction, int id);

    /**
     * @note[short] Android
     */
    TodoReturn streakDisabledForCurrentMode();

    /**
     * @note[short] MacOS (ARM): 0x37afcc
     * @note[short] MacOS (Intel): 0x400620
     * @note[short] Windows: 0x4f2970
     * @note[short] iOS: 0x2c27d0
     * @note[short] Android
     */
    bool switchedDirTo(PlayerButton button);

    /**
     * @note[short] MacOS (ARM): 0x379f80
     * @note[short] MacOS (Intel): 0x3ff4c0
     * @note[short] Windows: 0x4f6900
     * @note[short] iOS: 0x2c1ad4
     * @note[short] Android
     */
    void switchedToMode(GameObjectType type);

    /**
     * @note[short] MacOS (ARM): 0x36fa20
     * @note[short] MacOS (Intel): 0x3f3180
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2bad40
     * @note[short] Android
     */
    bool testForMoving(float dt, GameObject* object);

    /**
     * @note[short] MacOS (Intel): 0x4035f0
     * @note[short] Windows: 0x4f52a0
     * @note[short] iOS: 0x2c488c
     * @note[short] Android
     */
    void toggleBirdMode(bool enable, bool noEffects);

    /**
     * @note[short] MacOS (Intel): 0x404700
     * @note[short] Windows: 0x4f5a00
     * @note[short] iOS: 0x2c5408
     * @note[short] Android
     */
    void toggleDartMode(bool enable, bool noEffects);

    /**
     * @note[short] MacOS (Intel): 0x402af0
     * @note[short] Windows: 0x4f4f60
     * @note[short] iOS: 0x2c40ec
     * @note[short] Android
     */
    void toggleFlyMode(bool enable, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x37a4ec
     * @note[short] MacOS (Intel): 0x3ffac0
     * @note[short] Windows: 0x4f9910
     * @note[short] iOS: 0x2c1f50
     * @note[short] Android
     */
    void toggleGhostEffect(GhostType type);

    /**
     * @note[short] MacOS (Intel): 0x3e93e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2b3e74
     * @note[short] Android
     */
    void togglePlatformerMode(bool val);

    /**
     * @note[short] MacOS (ARM): 0x37a0f8
     * @note[short] MacOS (Intel): 0x3ff610
     * @note[short] Windows: 0x8cb90
     * @note[short] iOS: 0x2c1bf8
     * @note[short] Android
     */
    void togglePlayerScale(bool enable, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x37f5b0
     * @note[short] MacOS (Intel): 0x405180
     * @note[short] Windows: 0x11d9d0
     * @note[short] iOS: 0x2c5b44
     * @note[short] Android
     */
    void toggleRobotMode(bool enable, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x37f1f4
     * @note[short] MacOS (Intel): 0x404db0
     * @note[short] Windows: 0x4f5ff0
     * @note[short] iOS: 0x2c5858
     * @note[short] Android
     */
    void toggleRollMode(bool enable, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x37f9e0
     * @note[short] MacOS (Intel): 0x4055f0
     * @note[short] Windows: 0x3aab00
     * @note[short] iOS: 0x2c5e40
     * @note[short] Android
     */
    void toggleSpiderMode(bool enable, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x37e208
     * @note[short] MacOS (Intel): 0x403cf0
     * @note[short] Windows: 0x4f55a0
     * @note[short] iOS: 0x2c4d2c
     * @note[short] Android
     */
    void toggleSwingMode(bool enable, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x36c81c
     * @note[short] MacOS (Intel): 0x3ef880
     * @note[short] Windows: 0x4e5ff0
     * @note[short] iOS: 0x2b8534
     * @note[short] Android
     */
    void toggleVisibility(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x383520
     * @note[short] MacOS (Intel): 0x409b40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c9014
     * @note[short] Android
     */
    void touchedObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x36c5c4
     * @note[short] MacOS (Intel): 0x3ef5d0
     * @note[short] Windows: 0x4fdf00
     * @note[short] iOS: 0x2b82ec
     * @note[short] Android
     */
    void tryPlaceCheckpoint();

    /**
     * @note[short] MacOS (ARM): 0x3733b0
     * @note[short] MacOS (Intel): 0x3f7c00
     * @note[short] Windows: 0x4ec270
     * @note[short] iOS: 0x2bdb80
     * @note[short] Android
     */
    void unrotateGameplayObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x3735b4
     * @note[short] MacOS (Intel): 0x3f7ea0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void unrotatePreSlopeObjects();

    /**
     * @note[short] MacOS (ARM): 0x366fe4
     * @note[short] MacOS (Intel): 0x3e93d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2b3e6c
     * @note[short] Android
     */
    void updateCheckpointMode(bool enable);

    /**
     * @note[short] MacOS (Intel): 0x3ef500
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2b8210
     * @note[short] Android
     */
    void updateCheckpointTest();

    /**
     * @note[short] MacOS (ARM): 0x37415c
     * @note[short] MacOS (Intel): 0x3f8b90
     * @note[short] Windows: 0x4eea90
     * @note[short] iOS: 0x2be788
     * @note[short] Android
     */
    void updateCollide(PlayerCollisionDirection direction, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x375038
     * @note[short] MacOS (Intel): 0x3f9b50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2bf2b8
     * @note[short] Android
     */
    void updateCollideBottom(float y, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x375228
     * @note[short] MacOS (Intel): 0x3f9d90
     * @note[short] Windows: 0x4eeca0
     * @note[short] iOS: 0x2bf3f8
     * @note[short] Android
     */
    void updateCollideLeft(float x, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x37519c
     * @note[short] MacOS (Intel): 0x3f9cf0
     * @note[short] Windows: 0x4eed40
     * @note[short] iOS: 0x2bf37c
     * @note[short] Android
     */
    void updateCollideRight(float x, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x374fac
     * @note[short] MacOS (Intel): 0x3f9ac0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2bf244
     * @note[short] Android
     */
    void updateCollideTop(float y, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x36b090
     * @note[short] MacOS (Intel): 0x3ee020
     * @note[short] Windows: 0x4f17e0
     * @note[short] iOS: 0x2b72ac
     * @note[short] Android
     */
    void updateDashAnimation();

    /**
     * @note[short] MacOS (ARM): 0x378360
     * @note[short] MacOS (Intel): 0x3fd510
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x2c0708
     * @note[short] Android
     */
    void updateDashArt();

    /**
     * @note[short] MacOS (ARM): 0x36c45c
     * @note[short] MacOS (Intel): 0x3ef450
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2b8198
     * @note[short] Android
     */
    void updateEffects(float param);

    /**
     * @note[short] MacOS (ARM): 0x380a44
     * @note[short] MacOS (Intel): 0x4067e0
     * @note[short] iOS: 0x2c6ca8
     * @note[short] Android
     */
    void updateGlowColor();

    /**
     * @note[short] MacOS (ARM): 0x383df0
     * @note[short] MacOS (Intel): 0x40a4e0
     * @note[short] Windows: 0x4febf0
     * @note[short] iOS: 0x2c956c
     * @note[short] Android
     */
    void updateInternalActions(float dt);

    /**
     * @note[short] MacOS (ARM): 0x1b2660
     * @note[short] MacOS (Intel): 0x3ea900
     * @note[short] Android
     */
    void updateJump(float dt);

    /**
     * @note[short] MacOS (ARM): 0x36b23c
     * @note[short] MacOS (Intel): 0x3ee1e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateJumpVariables();

    /**
     * @note[short] MacOS (ARM): 0x3750c4
     * @note[short] MacOS (Intel): 0x3f9be0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateLastGroundObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x369c5c
     * @note[short] MacOS (Intel): 0x3ec800
     * @note[short] Windows: 0x4e4c80
     * @note[short] iOS: 0x2b61d4
     * @note[short] Android
     */
    void updateMove(float dt);

    /**
     * @note[short] MacOS (ARM): 0x37cb0c
     * @note[short] MacOS (Intel): 0x402450
     * @note[short] Windows: 0x4f33e0
     * @note[short] iOS: 0x2c3c44
     * @note[short] Android
     */
    void updatePlayerArt();

    /**
     * @note[short] MacOS (ARM): 0x37df84
     * @note[short] MacOS (Intel): 0x403a40
     * @note[short] Windows: 0x4f8730
     * @note[short] iOS: 0x2c4b0c
     * @note[short] Android
     */
    void updatePlayerBirdFrame(int frame);

    /**
     * @note[short] MacOS (ARM): 0x37efbc
     * @note[short] Windows: 0x4f94e0
     * @note[short] iOS: 0x2c569c
     * @note[short] Android
     */
    void updatePlayerDartFrame(int frame);

    /**
     * @note[short] MacOS (ARM): 0x379434
     * @note[short] MacOS (Intel): 0x3fe720
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updatePlayerForce(cocos2d::CCPoint velocity, bool additive);

    /**
     * @note[short] MacOS (ARM): 0x37e8d8
     * @note[short] MacOS (Intel): 0x404400
     * @note[short] Windows: 0x4f8730
     * @note[short] iOS: 0x2c5194
     * @note[short] Android
     */
    void updatePlayerFrame(int frame);

    /**
     * @note[short] MacOS (ARM): 0x37c94c
     * @note[short] MacOS (Intel): 0x4022c0
     * @note[short] iOS: 0x2c3aa4
     * @note[short] Android
     */
    void updatePlayerGlow();

    /**
     * @note[short] MacOS (ARM): 0x37d768
     * @note[short] Windows: 0x4f8ba0
     * @note[short] iOS: 0x2c4534
     * @note[short] Android
     */
    void updatePlayerJetpackFrame(int frame);

    /**
     * @note[short] MacOS (ARM): 0x381114
     * @note[short] MacOS (Intel): 0x406ea0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c725c
     * @note[short] Android
     */
    void updatePlayerRobotFrame(int frame);

    /**
     * @note[short] MacOS (ARM): 0x37f384
     * @note[short] MacOS (Intel): 0x404f40
     * @note[short] Windows: 0x4f9080
     * @note[short] iOS: 0x2c5994
     * @note[short] Android
     */
    void updatePlayerRollFrame(int frame);

    /**
     * @note[short] MacOS (ARM): 0x37cf38
     * @note[short] MacOS (Intel): 0x402920
     * @note[short] Windows: 0x4fae60
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updatePlayerScale();

    /**
     * @note[short] MacOS (ARM): 0x37d538
     * @note[short] MacOS (Intel): 0x402f40
     * @note[short] Windows: 0x4f8970
     * @note[short] iOS: 0x2c4380
     * @note[short] Android
     */
    void updatePlayerShipFrame(int frame);

    /**
     * @note[short] MacOS (ARM): 0x38112c
     * @note[short] MacOS (Intel): 0x406ec0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c7274
     * @note[short] Android
     */
    void updatePlayerSpiderFrame(int frame);

    /**
     * @note[short] MacOS (ARM): 0x3662e0
     * @note[short] MacOS (Intel): 0x3e8640
     * @note[short] iOS: 0x2b329c
     * @note[short] Android
     */
    void updatePlayerSpriteExtra(std::string frameName);

    /**
     * @note[short] MacOS (ARM): 0x37e610
     * @note[short] Windows: 0x4f92b0
     * @note[short] iOS: 0x2c4f54
     * @note[short] Android
     */
    void updatePlayerSwingFrame(int frame);

    /**
     * @note[short] MacOS (ARM): 0x3823f4
     * @note[short] MacOS (Intel): 0x408290
     * @note[short] iOS: 0x2c7fe4
     * @note[short] Android
     */
    void updateRobotAnimationSpeed();

    /**
     * @note[short] MacOS (ARM): 0x37497c
     * @note[short] MacOS (Intel): 0x3f9440
     * @note[short] Windows: 0x4ebc30
     * @note[short] iOS: 0x2becfc
     * @note[short] Android
     */
    void updateRotation(float dt);

    /**
     * @note[short] MacOS (ARM): 0x36c198
     * @note[short] MacOS (Intel): 0x3ef180
     * @note[short] iOS: 0x2b7eec
     * @note[short] Android
     */
    void updateRotation(float dt, float rotation);

    /**
     * @note[short] MacOS (ARM): 0x3745ac
     * @note[short] MacOS (Intel): 0x8d7a0
     * @note[short] iOS: 0x2be98c
     * @note[short] Android
     */
    void updateShipRotation(float dt);

    /**
     * @note[short] MacOS (ARM): 0x3663c4
     * @note[short] MacOS (Intel): 0x3e8710
     * @note[short] iOS: 0x2b3368
     * @note[short] Android
     */
    void updateShipSpriteExtra(std::string frameName);

    /**
     * @note[short] MacOS (ARM): 0x374430
     * @note[short] MacOS (Intel): 0x3f8ef0
     * @note[short] Windows: 0x4eb7c0
     * @note[short] iOS: 0x2be908
     * @note[short] Android
     */
    void updateSlopeRotation(float dt);

    /**
     * @note[short] MacOS (ARM): 0x3745a8
     * @note[short] MacOS (Intel): 0x3f9070
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateSlopeYVelocity(float yVelocity);

    /**
     * @note[short] MacOS (ARM): 0x36c3e4
     * @note[short] MacOS (Intel): 0x3ef3d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2b8128
     * @note[short] Android
     */
    void updateSpecial(float dt);

    /**
     * @note[short] MacOS (Intel): 0x3ee200
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2b7450
     * @note[short] Android
     */
    void updateStateVariables();

    /**
     * @note[short] MacOS (ARM): 0x381b74
     * @note[short] MacOS (Intel): 0x407900
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c7948
     * @note[short] Android
     */
    void updateStaticForce(float rotation, float staticForce, bool additive);

    /**
     * @note[short] MacOS (ARM): 0x367260
     * @note[short] MacOS (Intel): 0x3e9670
     * @note[short] Windows: 0x3dbf70
     * @note[short] iOS: 0x2b4084
     * @note[short] Android
     */
    void updateStreakBlend(bool blend);

    /**
     * @note[short] MacOS (ARM): 0x3672e4
     * @note[short] MacOS (Intel): 0x3e96e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateStreaks(float dt);

    /**
     * @note[short] MacOS (ARM): 0x37cf84
     * @note[short] MacOS (Intel): 0x402970
     * @note[short] iOS: 0x2c3ff8
     * @note[short] Android
     */
    void updateSwingFire();

    /**
     * @note[short] MacOS (ARM): 0x366a90
     * @note[short] MacOS (Intel): 0x3e8ec0
     * @note[short] Windows: 0x4fb9f0
     * @note[short] iOS: 0x2b39ac
     * @note[short] Android
     */
    void updateTimeMod(float speed, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x382384
     * @note[short] MacOS (Intel): 0x408250
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool usingWallLimitedMode();

    /**
     * @note[short] MacOS (ARM): 0x3838ec
     * @note[short] MacOS (Intel): 0x409f90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void yStartDown();

    /**
     * @note[short] MacOS (ARM): 0x3838cc
     * @note[short] MacOS (Intel): 0x409f70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void yStartUp();
    cocos2d::CCNode* m_mainLayer;
    bool m_wasTeleported;
    bool m_fixGravityBug;
    bool m_reverseSync;
    double m_yVelocityBeforeSlope;
    double m_dashX;
    double m_dashY;
    double m_dashAngle;
    double m_dashStartTime;
    DashRingObject* m_dashRing;
    double m_slopeStartTime;
    bool m_justPlacedStreak;
    GameObject* m_maybeLastGroundObject;
    cocos2d::CCDictionary* m_collisionLogTop;
    cocos2d::CCDictionary* m_collisionLogBottom;
    cocos2d::CCDictionary* m_collisionLogLeft;
    cocos2d::CCDictionary* m_collisionLogRight;
    int m_lastCollisionBottom;
    int m_lastCollisionTop;
    int m_lastCollisionLeft;
    int m_lastCollisionRight;
    int m_unk50C;
    int m_unk510;
    GameObject* m_currentSlope2;
    GameObject* m_preLastGroundObject;
    float m_slopeAngle;
    bool m_slopeSlidingMaybeRotated;
    bool m_quickCheckpointMode;
    GameObject* m_collidedObject;
    GameObject* m_lastGroundObject;
    GameObject* m_collidingWithLeft;
    GameObject* m_collidingWithRight;
    int m_maybeSavedPlayerFrame;
    double m_scaleXRelated2;
    double m_groundYVelocity;
    double m_yVelocityRelated;
    double m_scaleXRelated3;
    bool m_collidingBetweenSteps;
    double m_scaleXRelated4;
    double m_scaleXRelated5;
    bool m_isCollidingWithSlope;
    cocos2d::CCSprite* m_dashFireSprite;
    bool m_isBallRotating;
    bool m_unk669;
    GameObject* m_currentPotentialSlope;
    GameObject* m_currentSlope;
    double unk_584;
    int m_collidingWithSlopeId;
    bool m_slopeFlipGravityRelated;
    cocos2d::CCArray* m_particleSystems;
    float m_slopeAngleRadians;
    std::unordered_map<int, GJPointDouble> m_rotateObjectsRelated;
    std::unordered_map<int, GameObject*> m_potentialSlopeMap;
    float m_rotationSpeed;
    float m_rotateSpeed;
    bool m_isRotating;
    bool m_isBallRotating2;
    bool m_hasGlow;
    bool m_isHidden;
    GhostType m_ghostType;
    GhostTrailEffect* m_ghostTrail;
    cocos2d::CCSprite* m_iconSprite;
    cocos2d::CCSprite* m_iconSpriteSecondary;
    cocos2d::CCSprite* m_iconSpriteWhitener;
    cocos2d::CCSprite* m_iconGlow;
    cocos2d::CCSprite* m_vehicleSprite;
    cocos2d::CCSprite* m_vehicleSpriteSecondary;
    cocos2d::CCSprite* m_birdVehicle;
    cocos2d::CCSprite* m_vehicleSpriteWhitener;
    cocos2d::CCSprite* m_vehicleGlow;
    PlayerFireBoostSprite* m_swingFireMiddle;
    PlayerFireBoostSprite* m_swingFireBottom;
    PlayerFireBoostSprite* m_swingFireTop;
    cocos2d::CCSprite* m_dashSpritesContainer;
    cocos2d::CCMotionStreak* m_regularTrail;
    cocos2d::CCMotionStreak* m_shipStreak;
    HardStreak* m_waveTrail;
    double m_speedMultiplier;
    double m_yStart;
    double m_gravity;
    float m_trailingParticleLife;
    float m_unk648;
    double m_gameModeChangedTime;
    bool m_padRingRelated;
    bool m_maybeReducedEffects;
    bool m_maybeIsFalling;
    bool m_shouldTryPlacingCheckpoint;
    bool m_playEffects;
    bool m_maybeCanRunIntoBlocks;
    bool m_hasGroundParticles;
    bool m_hasShipParticles;
    bool m_isOnGround3;
    bool m_checkpointTimeout;
    double m_lastCheckpointTime;
    double m_lastJumpTime;
    double m_lastFlipTime;
    double m_flashTime;
    float m_flashDuration;
    float m_flashDelay;
    cocos2d::ccColor3B m_flashMainColor;
    cocos2d::ccColor3B m_flashSecondColor;
    double m_lastSpiderFlipTime;
    bool m_unkBool5;
    bool m_maybeIsVehicleGlowing;
    bool m_switchWaveTrailColor;
    bool m_practiceDeathEffect;
    double m_accelerationOrSpeed;
    double m_snapDistance;
    bool m_ringJumpRelated;
    std::unordered_set<int> m_ringRelatedSet;
    GameObject* m_objectSnappedTo;
    CheckpointObject* m_pendingCheckpoint;
    int m_onFlyCheckpointTries;
    GJRobotSprite* m_robotSprite;
    GJSpiderSprite* m_spiderSprite;
    bool m_maybeSpriteRelated;
    cocos2d::CCParticleSystemQuad* m_playerGroundParticles;
    cocos2d::CCParticleSystemQuad* m_trailingParticles;
    cocos2d::CCParticleSystemQuad* m_shipClickParticles;
    cocos2d::CCParticleSystemQuad* m_vehicleGroundParticles;
    cocos2d::CCParticleSystemQuad* m_ufoClickParticles;
    cocos2d::CCParticleSystemQuad* m_robotBurstParticles;
    cocos2d::CCParticleSystemQuad* m_dashParticles;
    cocos2d::CCParticleSystemQuad* m_swingBurstParticles1;
    cocos2d::CCParticleSystemQuad* m_swingBurstParticles2;
    bool m_useLandParticles0;
    cocos2d::CCParticleSystemQuad* m_landParticles0;
    cocos2d::CCParticleSystemQuad* m_landParticles1;
    float m_landParticlesAngle;
    float m_landParticleRelatedY;
    int m_playerStreak;
    float m_streakStrokeWidth;
    bool m_disableStreakTint;
    bool m_alwaysShowStreak;
    ShipStreak m_shipStreakType;
    double m_slopeRotation;
    double m_currentSlopeYVelocity;
    double m_unk3d0;
    double m_blackOrbRelated;
    bool m_unk3e0;
    bool m_unk3e1;
    bool m_isAccelerating;
    bool m_isCurrentSlopeTop;
    double m_collidedTopMinY;
    double m_collidedBottomMaxY;
    double m_collidedLeftMaxX;
    double m_collidedRightMinX;
    bool m_fadeOutStreak;
    bool m_canPlaceCheckpoint;
    cocos2d::ccColor3B m_originalMainColor;
    cocos2d::ccColor3B m_originalSecondColor;
    bool m_hasCustomGlowColor;
    cocos2d::ccColor3B m_glowColor;
    bool m_maybeIsColliding;
    bool m_jumpBuffered;
    bool m_stateRingJump;
    bool m_wasJumpBuffered;
    bool m_wasRobotJump;
    unsigned char m_stateJumpBuffered;
    bool m_stateRingJump2;
    bool m_touchedRing;
    bool m_touchedCustomRing;
    bool m_touchedGravityPortal;
    bool m_maybeTouchedBreakableBlock;
    geode::SeedValueRSV m_jumpRelatedAC2;
    bool m_touchedPad;
    double m_yVelocity;
    double m_fallSpeed;
    bool m_isOnSlope;
    bool m_wasOnSlope;
    float m_slopeVelocity;
    bool m_maybeUpsideDownSlope;
    bool m_isShip;
    bool m_isBird;
    bool m_isBall;
    bool m_isDart;
    bool m_isRobot;
    bool m_isSpider;
    bool m_isUpsideDown;
    bool m_isDead;
    bool m_isOnGround;
    bool m_isGoingLeft;
    bool m_isSideways;
    bool m_isSwing;
    int m_reverseRelated;
    double m_maybeReverseSpeed;
    double m_maybeReverseAcceleration;
    float m_xVelocityRelated2;
    bool m_isDashing;
    int m_dashFireFrame;
    int m_groundObjectMaterial;
    float m_vehicleSize;
    float m_playerSpeed;
    cocos2d::CCPoint m_shipRotation;
    cocos2d::CCPoint m_lastPortalPos;
    float m_unkUnused3;
    bool m_isOnGround2;
    double m_lastLandTime;
    float m_platformerVelocityRelated;
    bool m_maybeIsBoosted;
    double m_scaleXRelatedTime;
    bool m_decreaseBoostSlide;
    bool m_unkA29;
    bool m_isLocked;
    bool m_controlsDisabled;
    cocos2d::CCPoint m_lastGroundedPos;
    cocos2d::CCArray* m_touchingRings;
    std::unordered_set<int> m_touchedRings;
    GameObject* m_lastActivatedPortal;
    bool m_hasEverJumped;
    bool m_hasEverHitRing;
    cocos2d::ccColor3B m_playerColor1;
    cocos2d::ccColor3B m_playerColor2;
    cocos2d::CCPoint m_position;
    bool m_isSecondPlayer;
    bool m_unkA99;
    double m_totalTime;
    bool m_isBeingSpawnedByDualPortal;
    float m_audioScale;
    float m_unkAngle1;
    float m_yVelocityRelated3;
    bool m_defaultMiniIcon;
    bool m_swapColors;
    bool m_switchDashFireColor;
    int m_followRelated;
    std::vector<float> m_playerFollowFloats;
    float m_unk838;
    int m_stateOnGround;
    unsigned char m_stateUnk;
    unsigned char m_stateNoStickX;
    unsigned char m_stateNoStickY;
    unsigned char m_stateUnk2;
    int m_stateBoostX;
    int m_stateBoostY;
    int m_maybeStateForce2;
    int m_stateScale;
    double m_platformerXVelocity;
    bool m_holdingRight;
    bool m_holdingLeft;
    bool m_leftPressedFirst;
    double m_scaleXRelated;
    bool m_maybeHasStopped;
    float m_xVelocityRelated;
    bool m_maybeGoingCorrectSlopeDirection;
    bool m_isSliding;
    double m_maybeSlopeForce;
    bool m_isOnIce;
    double m_physDeltaRelated;
    bool m_isOnGround4;
    int m_maybeSlidingTime;
    double m_maybeSlidingStartTime;
    double m_changedDirectionsTime;
    double m_slopeEndTime;
    bool m_isMoving;
    bool m_platformerMovingLeft;
    bool m_platformerMovingRight;
    bool m_isSlidingRight;
    double m_maybeChangedDirectionAngle;
    double m_unkUnused2;
    bool m_isPlatformer;
    int m_stateNoAutoJump;
    int m_stateDartSlide;
    int m_stateHitHead;
    int m_stateFlipGravity;
    float m_gravityMod;
    int m_stateForce;
    cocos2d::CCPoint m_stateForceVector;
    bool m_affectedByForces;
    std::map<int, bool> m_jumpPadRelated;
    union {
        float m_lastMovedTime{};
        float m_somethingPlayerSpeedTime;
    };
    float m_playerSpeedAC;
    bool m_fixRobotJump;
    std::map<int, bool> m_holdingButtons;
    bool m_inputsLocked;
    std::string m_currentRobotAnimation;
    bool m_gv0123;
    int m_iconRequestID;
    cocos2d::CCSpriteBatchNode* m_robotBatchNode;
    cocos2d::CCSpriteBatchNode* m_spiderBatchNode;
    cocos2d::CCArray* m_unk958;
    PlayerFireBoostSprite* m_robotFire;
    int m_unkUnused;
    GJBaseGameLayer* m_gameLayer;
    cocos2d::CCLayer* m_parentLayer;
    GJActionManager* m_actionManager;
    bool m_isOutOfBounds;
    float m_fallStartY;
    bool m_disablePlayerSqueeze;
    bool m_robotAnimation1Enabled;
    bool m_robotAnimation2Enabled;
    bool m_spiderAnimationEnabled;
    bool m_ignoreDamage;
    bool m_enable22Changes;
    bool m_enableImpulseFix;
};
