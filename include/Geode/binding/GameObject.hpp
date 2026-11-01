#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CCSpritePlus.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/array.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/vector.hpp>

class GameObject : public CCSpritePlus {
public:
    static constexpr auto CLASS_NAME = "GameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameObject, CCSpritePlus)

    /**
     * @note[short] MacOS (ARM): 0x18ad34
     * @note[short] MacOS (Intel): 0x1d6740
     * @note[short] Windows: 0x2068c0
     * @note[short] iOS: 0x2c9994
     * @note[short] Android: Rebinded
     */
     GameObject();

    /**
     * @note[short] MacOS (ARM): 0x5a4534
     * @note[short] MacOS (Intel): 0x47e310
     * @note[short] Windows: 0x2861a0
     * @note[short] iOS: 0x2eefc4
     * @note[short] Android: Rebinded
     */
     ~GameObject();

    /**
     * @note[short] MacOS (ARM): 0x5a4ae0
     * @note[short] MacOS (Intel): 0x671720
     * @note[short] Windows: 0x288730
     * @note[short] iOS: 0x2ef924
     * @note[short] Android
     */
    static GameObject* createWithFrame(char const* name);

    /**
     * @note[short] MacOS (ARM): 0x5a460c
     * @note[short] MacOS (Intel): 0x66cbb0
     * @note[short] Windows: 0x2862c0
     * @note[short] iOS: 0x2ef08c
     * @note[short] Android
     */
    static GameObject* createWithKey(int key);

    /**
     * @note[short] MacOS (ARM): 0x5b91a8
     * @note[short] MacOS (Intel): 0x69b490
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fdd38
     * @note[short] Android
     */
    static bool isBasicEnterEffect(int id);

    /**
     * @note[short] MacOS (ARM): 0x5af5ac
     * @note[short] MacOS (Intel): 0x68f3f0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x2f8ef4
     * @note[short] Android
     */
    static GameObject* objectFromVector(std::vector<std::string>& propValues, std::vector<void*>& propIsPresent, GJBaseGameLayer* gameLayer, bool lowDetail);

    /**
     * @note[short] MacOS (ARM): 0x5a4524
     * @note[short] MacOS (Intel): 0x66ca80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2eefb4
     * @note[short] Android
     */
    static void resetMID();

    /**
     * @note[short] MacOS (ARM): 0x5a6c94
     * @note[short] MacOS (Intel): 0x679be0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f15ac
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] Windows: 0x292db0
     * @note[short] Android
     */
    virtual void setScaleX(float scaleX);

    /**
     * @note[short] Windows: 0x292ea0
     * @note[short] Android
     */
    virtual void setScaleY(float scaleY);

    /**
     * @note[short] MacOS (ARM): 0x5abd54
     * @note[short] MacOS (Intel): 0x68bae0
     * @note[short] Windows: 0x292f90
     * @note[short] iOS: 0x2f65cc
     * @note[short] Android
     */
    virtual void setScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x5ab684
     * @note[short] MacOS (Intel): 0x68b480
     * @note[short] Windows: 0x2926a0
     * @note[short] iOS: 0x2f5f94
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& position);

    /**
     * @note[short] MacOS (ARM): 0x5ac38c
     * @note[short] MacOS (Intel): 0x68c1d0
     * @note[short] Windows: 0x2936a0
     * @note[short] iOS: 0x2f6b30
     * @note[short] Android
     */
    virtual void setVisible(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x5ab908
     * @note[short] MacOS (Intel): 0x68b6f0
     * @note[short] Windows: 0x292950
     * @note[short] iOS: 0x2f61a0
     * @note[short] Android
     */
    virtual void setRotation(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x5ab9f0
     * @note[short] MacOS (Intel): 0x68b7c0
     * @note[short] Windows: 0x292ab0
     * @note[short] iOS: 0x2f6278
     * @note[short] Android
     */
    virtual void setRotationX(float rotationX);

    /**
     * @note[short] MacOS (ARM): 0x5abacc
     * @note[short] MacOS (Intel): 0x68b880
     * @note[short] Windows: 0x292c00
     * @note[short] iOS: 0x2f6344
     * @note[short] Android
     */
    virtual void setRotationY(float rotationY);

    /**
     * @note[short] MacOS (ARM): 0x5ac070
     * @note[short] MacOS (Intel): 0x68be30
     * @note[short] Windows: 0x293250
     * @note[short] iOS: 0x2f6848
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] Windows: 0x2887c0
     * @note[short] iOS: 0x2efb78
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* texture);

    /**
     * @note[short] MacOS (ARM): 0x5b6bd4
     * @note[short] MacOS (Intel): 0x6987d0
     * @note[short] Windows: 0x29b6b0
     * @note[short] iOS: 0x2fc12c
     * @note[short] Android
     */
    virtual void setChildColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x5abb8c
     * @note[short] MacOS (Intel): 0x68b940
     * @note[short] Windows: 0x292d20
     * @note[short] iOS: 0x2f6404
     * @note[short] Android
     */
    virtual void setFlipX(bool flipX);

    /**
     * @note[short] MacOS (ARM): 0x5abbd8
     * @note[short] MacOS (Intel): 0x68b980
     * @note[short] Windows: 0x292d60
     * @note[short] iOS: 0x2f6450
     * @note[short] Android
     */
    virtual void setFlipY(bool flipY);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0x5a6c98
     * @note[short] MacOS (Intel): 0x679bf0
     * @note[short] Windows: 0x28b9b0
     * @note[short] iOS: 0x2f15b0
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x3ae4bc
     * @note[short] MacOS (Intel): 0x438350
     * @note[short] Windows: 0x2aa720
     * @note[short] Android
     */
    virtual void setupCustomSprites(std::string frameName);

    /**
     * @note[short] MacOS (ARM): 0x5ad840
     * @note[short] MacOS (Intel): 0x68d520
     * @note[short] Windows: 0x2967b0
     * @note[short] iOS: 0x2f7bfc
     * @note[short] Android
     */
    virtual void addMainSpriteToParent(bool reorder);

    /**
     * @note[short] MacOS (ARM): 0x5a6288
     * @note[short] MacOS (Intel): 0x6790a0
     * @note[short] Windows: 0x28b210
     * @note[short] iOS: 0x2f0c34
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x5a674c
     * @note[short] MacOS (Intel): 0x6796d0
     * @note[short] Windows: 0x28b660
     * @note[short] iOS: 0x2f1070
     * @note[short] Android
     */
    virtual void activateObject();

    /**
     * @note[short] MacOS (ARM): 0x5a6ac0
     * @note[short] MacOS (Intel): 0x679a30
     * @note[short] Windows: 0x28b710
     * @note[short] iOS: 0x2f13f4
     * @note[short] Android
     */
    virtual void deactivateObject(bool deactivate);

    /**
     * @note[short] MacOS (ARM): 0x5ab054
     * @note[short] MacOS (Intel): 0x68ada0
     * @note[short] Windows: 0x292160
     * @note[short] iOS: 0x2f5a28
     * @note[short] Android
     */
    virtual void transferObjectRect(cocos2d::CCRect& rect);

    /**
     * @note[short] MacOS (ARM): 0x5ab0d4
     * @note[short] MacOS (Intel): 0x68ae10
     * @note[short] Windows: 0x2921b0
     * @note[short] iOS: 0x2f5aa8
     * @note[short] Android
     */
    virtual cocos2d::CCRect const& getObjectRect();

    /**
     * @note[short] MacOS (ARM): 0x5ab0e8
     * @note[short] MacOS (Intel): 0x68ae40
     * @note[short] Windows: 0x2921d0
     * @note[short] iOS: 0x2f5abc
     * @note[short] Android
     */
    virtual cocos2d::CCRect getObjectRect(float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x5ab2d0
     * @note[short] MacOS (Intel): 0x68b070
     * @note[short] Windows: 0x292370
     * @note[short] iOS: 0x2f5c94
     * @note[short] Android
     */
    virtual cocos2d::CCRect const& getObjectRect2(float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x5ab3a4
     * @note[short] MacOS (Intel): 0xd4b0
     * @note[short] Windows: 0x292420
     * @note[short] iOS: 0x2f5d24
     * @note[short] Android
     */
    virtual cocos2d::CCRect const& getObjectTextureRect();

    /**
     * @note[short] MacOS (ARM): 0x5ab5f4
     * @note[short] MacOS (Intel): 0x68b3c0
     * @note[short] Windows: 0x292660
     * @note[short] iOS: 0x2f5f14
     * @note[short] Android
     */
    virtual cocos2d::CCPoint getRealPosition();

    /**
     * @note[short] MacOS (ARM): 0x5a6178
     * @note[short] MacOS (Intel): 0x678f90
     * @note[short] Windows: 0x28b090
     * @note[short] iOS: 0x2f0b24
     * @note[short] Android
     */
    virtual void setStartPos(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x5a65dc
     * @note[short] MacOS (Intel): 0x679500
     * @note[short] Windows: 0x28b520
     * @note[short] iOS: 0x2f0f80
     * @note[short] Android
     */
    virtual void updateStartValues();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x5b0f44
     * @note[short] MacOS (Intel): 0x533740
     * @note[short] Windows: 0x299b90
     * @note[short] iOS: 0x2fa5b0
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x5ac4d8
     * @note[short] MacOS (Intel): 0x68c330
     * @note[short] Windows: 0x2937c0
     * @note[short] iOS: 0x2f6c7c
     * @note[short] Android
     */
    virtual void claimParticle();

    /**
     * @note[short] MacOS (ARM): 0x5acab0
     * @note[short] MacOS (Intel): 0x68c940
     * @note[short] Windows: 0x293ce0
     * @note[short] iOS: 0x2f7140
     * @note[short] Android
     */
    virtual void unclaimParticle();

    /**
     * @note[short] MacOS (ARM): 0x5acb20
     * @note[short] MacOS (Intel): 0x68c9b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f7198
     * @note[short] Android
     */
    virtual void particleWasActivated();

    /**
     * @note[short] MacOS (ARM): 0x5abb7c
     * @note[short] MacOS (Intel): 0x68b920
     * @note[short] Windows: 0x292d00
     * @note[short] iOS: 0x2f63f4
     * @note[short] Android
     */
    virtual bool isFlipX();

    /**
     * @note[short] MacOS (ARM): 0x5abb84
     * @note[short] MacOS (Intel): 0x68b930
     * @note[short] Windows: 0x292d10
     * @note[short] iOS: 0x2f63fc
     * @note[short] Android
     */
    virtual bool isFlipY();

    /**
     * @note[short] MacOS (ARM): 0x5abdec
     * @note[short] MacOS (Intel): 0x68bb70
     * @note[short] Windows: 0x293080
     * @note[short] iOS: 0x2f6664
     * @note[short] Android
     */
    virtual void setRScaleX(float scaleX);

    /**
     * @note[short] MacOS (ARM): 0x5abe20
     * @note[short] MacOS (Intel): 0x68bbb0
     * @note[short] Windows: 0x2930c0
     * @note[short] iOS: 0x2f6698
     * @note[short] Android
     */
    virtual void setRScaleY(float scaleY);

    /**
     * @note[short] MacOS (ARM): 0x5abe54
     * @note[short] MacOS (Intel): 0x68bbf0
     * @note[short] Windows: 0x293100
     * @note[short] iOS: 0x2f66cc
     * @note[short] Android
     */
    virtual void setRScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x5abed8
     * @note[short] MacOS (Intel): 0x68bc70
     * @note[short] Windows: 0x293140
     * @note[short] iOS: 0x2f6710
     * @note[short] Android
     */
    virtual float getRScaleX();

    /**
     * @note[short] MacOS (ARM): 0x5abf10
     * @note[short] MacOS (Intel): 0x68bca0
     * @note[short] Windows: 0x293180
     * @note[short] iOS: 0x2f6748
     * @note[short] Android
     */
    virtual float getRScaleY();

    /**
     * @note[short] MacOS (ARM): 0x5ab878
     * @note[short] MacOS (Intel): 0x68b670
     * @note[short] Windows: 0x2928c0
     * @note[short] iOS: 0x2977b4
     * @note[short] Android
     */
    virtual void setRRotation(float rotation);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void triggerActivated(float xPosition);

    /**
     * @note[short] MacOS (ARM): 0x5b6890
     * @note[short] MacOS (Intel): 0x6984f0
     * @note[short] Windows: 0x29b370
     * @note[short] iOS: 0x2fbe20
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x5b6b80
     * @note[short] MacOS (Intel): 0x698780
     * @note[short] Windows: 0x29b660
     * @note[short] iOS: 0x2fc0d4
     * @note[short] Android
     */
    virtual void setGlowColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x5acb40
     * @note[short] MacOS (Intel): 0x68c9f0
     * @note[short] Windows: 0x293dd0
     * @note[short] iOS: 0x2f71b8
     * @note[short] Android
     */
    virtual void restoreObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void animationTriggered();

    /**
     * @note[short] MacOS (ARM): 0x5b6c58
     * @note[short] MacOS (Intel): 0x698840
     * @note[short] Windows: 0x29b730
     * @note[short] iOS: 0x2fc1b8
     * @note[short] Android
     */
    virtual void selectObject(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void activatedByPlayer(PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool hasBeenActivatedByPlayer(PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool hasBeenActivated();

    /**
     * @note[short] MacOS (ARM): 0x5b745c
     * @note[short] MacOS (Intel): 0x699270
     * @note[short] Windows: 0x29bda0
     * @note[short] iOS: 0x2fc7e8
     * @note[short] Android
     */
    virtual OBB2D* getOrientedBox();

    /**
     * @note[short] MacOS (ARM): 0x5b74f4
     * @note[short] MacOS (Intel): 0x6992f0
     * @note[short] Windows: 0x29be00
     * @note[short] iOS: 0x1208f0
     * @note[short] Android
     */
    virtual void updateOrientedBox();

    /**
     * @note[short] MacOS (ARM): 0x5bd310
     * @note[short] MacOS (Intel): 0x6a1e20
     * @note[short] Windows: 0x29bd80
     * @note[short] iOS: 0x3005e4
     * @note[short] Android
     */
    virtual float getObjectRotation();

    /**
     * @note[short] MacOS (ARM): 0x5b7f0c
     * @note[short] MacOS (Intel): 0x699e70
     * @note[short] Windows: 0x29c8b0
     * @note[short] iOS: 0x2fd0f8
     * @note[short] Android
     */
    virtual void updateMainColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x5b8410
     * @note[short] MacOS (Intel): 0x69a360
     * @note[short] Windows: 0x29c8c0
     * @note[short] iOS: 0x2fd2d8
     * @note[short] Android
     */
    virtual void updateSecondaryColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x5adf28
     * @note[short] MacOS (Intel): 0x68dc00
     * @note[short] Windows: 0x297160
     * @note[short] iOS: 0x2f8234
     * @note[short] Android
     */
    virtual int addToGroup(int id);

    /**
     * @note[short] MacOS (ARM): 0x5adff8
     * @note[short] MacOS (Intel): 0x68dcb0
     * @note[short] Windows: 0x297290
     * @note[short] iOS: 0x2f82e0
     * @note[short] Android
     */
    virtual void removeFromGroup(int id);

    /**
     * @note[short] MacOS (ARM): 0x5b66cc
     * @note[short] MacOS (Intel): 0x698330
     * @note[short] Windows: 0x29b1c0
     * @note[short] iOS: 0x2fbcc8
     * @note[short] Android
     */
    virtual void saveActiveColors();

    /**
     * @note[short] MacOS (ARM): 0x18a750
     * @note[short] MacOS (Intel): 0x1d5f40
     * @note[short] Windows: 0x206d00
     * @note[short] iOS: 0x2c9578
     * @note[short] Android
     */
    virtual float spawnXPosition();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool canAllowMultiActivate();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void blendModeChanged();

    /**
     * @note[short] MacOS (ARM): 0x5b6ab8
     * @note[short] MacOS (Intel): 0x6986c0
     * @note[short] Windows: 0x29b550
     * @note[short] iOS: 0x2fc00c
     * @note[short] Android
     */
    virtual void updateParticleColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x5ac304
     * @note[short] MacOS (Intel): 0x68c140
     * @note[short] Windows: 0x2934f0
     * @note[short] iOS: 0x2f6aa8
     * @note[short] Android
     */
    virtual void updateParticleOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateMainParticleOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateSecondaryParticleOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool canReverse();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool isSpecialSpawnObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool canBeOrdered();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual cocos2d::CCLabelBMFont* getObjectLabel();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void setObjectLabel(cocos2d::CCLabelBMFont* label);

    /**
     * @note[short] MacOS (ARM): 0x5b91e4
     * @note[short] MacOS (Intel): 0x2bf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fdd74
     * @note[short] Android
     */
    virtual bool shouldDrawEditorHitbox();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool getHasSyncedAnimation();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool getHasRotateAction();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool canMultiActivate(bool multiActivate);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateTextKerning(int kerning);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual int getTextKerning();

    /**
     * @note[short] MacOS (ARM): 0x18a770
     * @note[short] MacOS (Intel): 0x1d5f60
     * @note[short] Windows: 0x206d20
     * @note[short] iOS: 0x2c9598
     * @note[short] Android
     */
    virtual bool getObjectRectDirty() const ;

    /**
     * @note[short] MacOS (ARM): 0x18a778
     * @note[short] MacOS (Intel): 0x1d5f70
     * @note[short] Windows: 0x206d30
     * @note[short] iOS: 0x2c95a0
     * @note[short] Android
     */
    virtual void setObjectRectDirty(bool dirty);

    /**
     * @note[short] MacOS (ARM): 0x18a780
     * @note[short] MacOS (Intel): 0x1d5f80
     * @note[short] Windows: 0x206d40
     * @note[short] iOS: 0x2c95a8
     * @note[short] Android
     */
    virtual bool getOrientedRectDirty() const ;

    /**
     * @note[short] MacOS (ARM): 0x18a788
     * @note[short] MacOS (Intel): 0x1d5f90
     * @note[short] Windows: 0x206d50
     * @note[short] iOS: 0x2c95b0
     * @note[short] Android
     */
    virtual void setOrientedRectDirty(bool dirty);

    /**
     * @note[short] MacOS (ARM): 0x18a790
     * @note[short] MacOS (Intel): 0x1d5fa0
     * @note[short] Windows: 0x206d60
     * @note[short] iOS: 0x2c95b8
     * @note[short] Android
     */
    virtual GameObjectType getType() const ;

    /**
     * @note[short] MacOS (ARM): 0x18a798
     * @note[short] MacOS (Intel): 0x1d5fb0
     * @note[short] Windows: 0x206d70
     * @note[short] iOS: 0x2c95c0
     * @note[short] Android
     */
    virtual void setType(GameObjectType type);

    /**
     * @note[short] MacOS (ARM): 0x18a7a0
     * @note[short] MacOS (Intel): 0x1d5fc0
     * @note[short] Windows: 0x206d80
     * @note[short] iOS: 0x2c95c8
     * @note[short] Android
     */
    virtual cocos2d::CCPoint getStartPos() const ;

    /**
     * @note[short] MacOS (ARM): 0x5a56c8
     * @note[short] MacOS (Intel): 0x674140
     * @note[short] Windows: 0x526950
     * @note[short] iOS: 0x2f02c0
     * @note[short] Android
     */
    void addColorSprite(std::string frame);

    /**
     * @note[short] MacOS (ARM): 0x5a689c
     * @note[short] MacOS (Intel): 0x679820
     * @note[short] iOS: 0x2f11cc
     * @note[short] Android
     */
    void addColorSpriteToParent(bool reorder);

    /**
     * @note[short] MacOS (ARM): 0x5ad9cc
     * @note[short] MacOS (Intel): 0x68d690
     * @note[short] Windows: 0x296bb0
     * @note[short] iOS: 0x2f7d68
     * @note[short] Android
     */
    void addColorSpriteToSelf();

    /**
     * @note[short] MacOS (ARM): 0x5aaa34
     * @note[short] MacOS (Intel): 0x68a7e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCSprite* addCustomBlackChild(std::string frame, float opacity, bool color);

    /**
     * @note[short] MacOS (ARM): 0x5aac1c
     * @note[short] MacOS (Intel): 0x68a980
     * @note[short] Windows: 0x291db0
     * @note[short] iOS: 0x2f5760
     * @note[short] Android
     */
    cocos2d::CCSprite* addCustomChild(std::string frame, cocos2d::CCPoint offset, int zOrder);

    /**
     * @note[short] MacOS (ARM): 0x5aacc4
     * @note[short] MacOS (Intel): 0x68aa20
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x2f5808
     * @note[short] Android
     */
    cocos2d::CCSprite* addCustomColorChild(std::string frame);

    /**
     * @note[short] MacOS (ARM): 0x5a5570
     * @note[short] MacOS (Intel): 0x673fd0
     * @note[short] Windows: 0x289210
     * @note[short] iOS: 0x2f0208
     * @note[short] Android
     */
    void addEmptyGlow();

    /**
     * @note[short] MacOS (ARM): 0x5a4e7c
     * @note[short] MacOS (Intel): 0x671ab0
     * @note[short] Windows: 0x493b90
     * @note[short] iOS: 0x1db52c
     * @note[short] Android
     */
    void addGlow(std::string frame);

    /**
     * @note[short] MacOS (ARM): 0x5aae60
     * @note[short] MacOS (Intel): 0x68abc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCSprite* addInternalChild(cocos2d::CCSprite* parent, std::string frame, cocos2d::CCPoint offset, int zOrder);

    /**
     * @note[short] MacOS (ARM): 0x5aad9c
     * @note[short] MacOS (Intel): 0x68ab10
     * @note[short] Windows: 0x291fa0
     * @note[short] iOS: 0x2f58a0
     * @note[short] Android
     */
    cocos2d::CCSprite* addInternalCustomColorChild(std::string frame, cocos2d::CCPoint offset, int zOrder);

    /**
     * @note[short] MacOS (ARM): 0x5aaf04
     * @note[short] MacOS (Intel): 0x68ac50
     * @note[short] Windows: 0x292080
     * @note[short] iOS: 0x2f5950
     * @note[short] Android
     */
    cocos2d::CCSprite* addInternalGlowChild(std::string frame, cocos2d::CCPoint offset);

    /**
     * @note[short] MacOS (ARM): 0x5b8c08
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fd8a8
     * @note[short] Android
     */
    void addNewSlope01(bool dontDraw);

    /**
     * @note[short] MacOS (ARM): 0x5b8d10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fd954
     * @note[short] Android
     */
    void addNewSlope01Glow(bool dontDraw);

    /**
     * @note[short] MacOS (ARM): 0x5b8e54
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fda6c
     * @note[short] Android
     */
    void addNewSlope02(bool dontDraw);

    /**
     * @note[short] MacOS (ARM): 0x5b8f5c
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fdb18
     * @note[short] Android
     */
    void addNewSlope02Glow(bool dontDraw);

    /**
     * @note[short] Windows: 0x292820
     * @note[short] iOS: 0x2d5f98
     * @note[short] Android
     */
    void addRotation(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x5ab80c
     * @note[short] MacOS (Intel): 0x68b610
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addRotation(float rotationX, float rotationY);

    /**
     * @note[short] MacOS (ARM): 0x5ae1b8
     * @note[short] MacOS (Intel): 0x68de70
     * @note[short] iOS: 0x2f842c
     * @note[short] Android
     */
    void addToColorGroup(int group);

    /**
     * @note[short] MacOS (ARM): 0x5abf48
     * @note[short] MacOS (Intel): 0x68bcd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f6780
     * @note[short] Android
     */
    void addToCustomScaleX(float scale);

    /**
     * @note[short] MacOS (ARM): 0x5abf70
     * @note[short] MacOS (Intel): 0x68bd10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f67a8
     * @note[short] Android
     */
    void addToCustomScaleY(float scale);

    /**
     * @note[short] MacOS (ARM): 0x5ae2f8
     * @note[short] MacOS (Intel): 0x68dfc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f84f4
     * @note[short] Android
     */
    void addToOpacityGroup(int group);

    /**
     * @note[short] MacOS (ARM): 0x5ab570
     * @note[short] MacOS (Intel): 0x68b300
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f5ec0
     * @note[short] Android
     */
    void addToTempOffset(double offsetX, double offsetY);

    /**
     * @note[short] MacOS (ARM): 0x5a4da8
     * @note[short] MacOS (Intel): 0x6719d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2efbac
     * @note[short] Android
     */
    void assignUniqueID();

    /**
     * @note[short] MacOS (ARM): 0x5ae124
     * @note[short] MacOS (Intel): 0x68ddd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f83f8
     * @note[short] Android
     */
    bool belongsToGroup(int group);

    /**
     * @note[short] MacOS (ARM): 0x5b74b8
     * @note[short] MacOS (Intel): 0x6992c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fc844
     * @note[short] Android
     */
    void calculateOrientedBox();

    /**
     * @note[short] MacOS (ARM): 0x5b7984
     * @note[short] MacOS (Intel): 0x6997b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fcc88
     * @note[short] Android
     */
    bool canChangeCustomColor();

    /**
     * @note[short] MacOS (ARM): 0x5b79b8
     * @note[short] MacOS (Intel): 0x6997e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fccbc
     * @note[short] Android
     */
    bool canChangeMainColor();

    /**
     * @note[short] MacOS (ARM): 0x5b79cc
     * @note[short] MacOS (Intel): 0x699800
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fccd0
     * @note[short] Android
     */
    bool canChangeSecondaryColor();

    /**
     * @note[short] MacOS (ARM): 0x5ade80
     * @note[short] MacOS (Intel): 0x68db40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f81ec
     * @note[short] Android
     */
    bool canRotateFree();

    /**
     * @note[short] MacOS (ARM): 0x5b8010
     * @note[short] MacOS (Intel): 0x699f80
     * @note[short] Windows: 0x29c8d0
     * @note[short] iOS: 0x2fd158
     * @note[short] Android
     */
    const cocos2d::ccColor3B& colorForMode(int id, bool mainColor);

    /**
     * @note[short] MacOS (ARM): 0x5a9b6c
     * @note[short] MacOS (Intel): 0x684c00
     * @note[short] Windows: 0x291880
     * @note[short] iOS: 0x2f455c
     * @note[short] Android
     */
    void commonInteractiveSetup();

    /**
     * @note[short] MacOS (Intel): 0xd4d60
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x525ec0
     * @note[short] Android
     */
    void commonSetup();

    /**
     * @note[short] MacOS (ARM): 0x5ae0ac
     * @note[short] MacOS (Intel): 0x68dd60
     * @note[short] Windows: 0x297320
     * @note[short] iOS: 0x2f8384
     * @note[short] Android
     */
    void copyGroups(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x58afb8
     * @note[short] MacOS (Intel): 0x684cc0
     * @note[short] Windows: 0x293570
     * @note[short] iOS: 0x2f460c
     * @note[short] Android
     */
    cocos2d::CCParticleSystemQuad* createAndAddParticle(int objectType, char const* plistName, int tag, cocos2d::tCCPositionType positionType);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void createColorGroupContainer(int size);

    /**
     * @note[short] MacOS (ARM): 0x5a54dc
     * @note[short] MacOS (Intel): 0x673f30
     * @note[short] iOS: 0x2f0174
     * @note[short] Android
     */
    void createGlow(std::string frame);

    /**
     * @note[short] MacOS (ARM): 0x5adec8
     * @note[short] MacOS (Intel): 0x68dba0
     * @note[short] Windows: 0x297090
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void createGroupContainer(int size);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void createOpacityGroupContainer(int size);

    /**
     * @note[short] MacOS (ARM): 0x5a4dc4
     * @note[short] MacOS (Intel): 0x6719f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2efbc8
     * @note[short] Android
     */
    void createSpriteColor(int type);

    /**
     * @note[short] MacOS (ARM): 0x5b7124
     * @note[short] MacOS (Intel): 0x698c50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fc55c
     * @note[short] Android
     */
    void deselectObject();

    /**
     * @note[short] MacOS (ARM): 0x5acb24
     * @note[short] MacOS (Intel): 0x68c9c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f719c
     * @note[short] Android
     */
    void destroyObject();

    /**
     * @note[short] MacOS (ARM): 0x5adac0
     * @note[short] MacOS (Intel): 0x68d790
     * @note[short] Windows: 0x296cb0
     * @note[short] iOS: 0x2f7e58
     * @note[short] Android
     */
    void determineSlopeDirection();

    /**
     * @note[short] MacOS (ARM): 0x5abf98
     * @note[short] MacOS (Intel): 0x68bd50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool didScaleXChange();

    /**
     * @note[short] MacOS (ARM): 0x5abfc8
     * @note[short] MacOS (Intel): 0x68bd80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool didScaleYChange();

    /**
     * @note[short] MacOS (ARM): 0x5ab044
     * @note[short] MacOS (Intel): 0x68ad90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f5a18
     * @note[short] Android
     */
    void dirtifyObjectPos();

    /**
     * @note[short] MacOS (ARM): 0x5ab038
     * @note[short] MacOS (Intel): 0x68ad80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f5a0c
     * @note[short] Android
     */
    void dirtifyObjectRect();

    /**
     * @note[short] MacOS (ARM): 0x5acb8c
     * @note[short] MacOS (Intel): 0x68ca80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f7204
     * @note[short] Android
     */
    void disableObject();

    /**
     * @note[short] MacOS (Intel): 0x6853c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool dontCountTowardsLimit();

    /**
     * @note[short] MacOS (ARM): 0x5b7bd4
     * @note[short] MacOS (Intel): 0x699a90
     * @note[short] Windows: 0x29c520
     * @note[short] iOS: 0x2fce68
     * @note[short] Android
     */
    void duplicateAttributes(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x5b7b3c
     * @note[short] MacOS (Intel): 0x6999e0
     * @note[short] Windows: 0x29c440
     * @note[short] iOS: 0x2fcdd0
     * @note[short] Android
     */
    void duplicateColorMode(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x5b7c78
     * @note[short] MacOS (Intel): 0x699b70
     * @note[short] Windows: 0x29c660
     * @note[short] iOS: 0x2fceec
     * @note[short] Android
     */
    void duplicateValues(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x5b6fec
     * @note[short] MacOS (Intel): 0x698b80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fc43c
     * @note[short] Android
     */
    cocos2d::ccColor3B editorColorForCustomMode(int id);

    /**
     * @note[short] MacOS (ARM): 0x5b6e18
     * @note[short] MacOS (Intel): 0x698a20
     * @note[short] Windows: 0x29b8fb
     * @note[short] iOS: 0x2fc374
     * @note[short] Android
     */
    cocos2d::ccColor3B editorColorForMode(int id);

    /**
     * @note[short] MacOS (ARM): 0x5b7744
     * @note[short] MacOS (Intel): 0x699590
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fcabc
     * @note[short] Android
     */
    void fastRotateObject(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x5b8640
     * @note[short] MacOS (Intel): 0x69a5b0
     * @note[short] Windows: 0x29ca00
     * @note[short] iOS: 0x2fd350
     * @note[short] Android
     */
    cocos2d::ccColor3B const& getActiveColorForMode(int id, bool mainColor);

    /**
     * @note[short] MacOS (ARM): 0x5b6694
     * @note[short] MacOS (Intel): 0x698300
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fbc90
     * @note[short] Android
     */
    const char* getBallFrame(int index);

    /**
     * @note[short] MacOS (ARM): 0x5aafd4
     * @note[short] MacOS (Intel): 0x68ad10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCRect getBoundingRect();

    /**
     * @note[short] MacOS (ARM): 0x5ab1e0
     * @note[short] MacOS (Intel): 0x68af70
     * @note[short] Windows: 0x29c070
     * @note[short] iOS: 0x2f5bb4
     * @note[short] Android
     */
    cocos2d::CCPoint const& getBoxOffset();

    /**
     * @note[short] iOS: 0x2f09dc
     * @note[short] Android
     */
    std::string getColorFrame(std::string frame);

    /**
     * @note[short] MacOS (ARM): 0x5b8a50
     * @note[short] MacOS (Intel): 0x69ad70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fd6f0
     * @note[short] Android
     */
    int getColorIndex();

    /**
     * @note[short] MacOS (ARM): 0x5aec24
     * @note[short] MacOS (Intel): 0x4ee2f0
     * @note[short] iOS: 0x2f89e0
     * @note[short] Android
     */
    std::string getColorKey(bool isMainColor, bool colorGroups);

    /**
     * @note[short] MacOS (ARM): 0x5adeb0
     * @note[short] MacOS (Intel): 0x68db70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f821c
     * @note[short] Android
     */
    ZLayer getCustomZLayer();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x2f0a90
     * @note[short] Android
     */
    std::string getGlowFrame(std::string frame);

    /**
     * @note[short] MacOS (ARM): 0x5ae3a8
     * @note[short] MacOS (Intel): 0x68e060
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f858c
     * @note[short] Android
     */
    bool getGroupDisabled();

    /**
     * @note[short] MacOS (ARM): 0x5ae08c
     * @note[short] MacOS (Intel): 0x68dd40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f8364
     * @note[short] Android
     */
    int getGroupID(int index);

    /**
     * @note[short] MacOS (ARM): 0x5ae3e4
     * @note[short] MacOS (Intel): 0x68e0b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f85c8
     * @note[short] Android
     */
    std::string getGroupString();

    /**
     * @note[short] MacOS (ARM): 0x5b8800
     * @note[short] MacOS (Intel): 0x69a790
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fd4a8
     * @note[short] Android
     */
    cocos2d::CCPoint const& getLastPosition();

    /**
     * @note[short] MacOS (ARM): 0x5b7974
     * @note[short] MacOS (Intel): 0x699790
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fcc78
     * @note[short] Android
     */
    GJSpriteColor* getMainColor();

    /**
     * @note[short] MacOS (ARM): 0x5af56c
     * @note[short] MacOS (Intel): 0x68f3b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f8eb4
     * @note[short] Android
     */
    int getMainColorMode();

    /**
     * @note[short] MacOS (ARM): 0x5add14
     * @note[short] MacOS (Intel): 0x68d9f0
     * @note[short] Windows: 0x296ef0
     * @note[short] iOS: 0x2f80ac
     * @note[short] Android
     */
    int getObjectDirection();

    /**
     * @note[short] MacOS (ARM): 0x5b8b64
     * @note[short] MacOS (Intel): 0x69ae70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fd804
     * @note[short] Android
     */
    float getObjectRadius();

    /**
     * @note[short] MacOS (ARM): 0x5ab098
     * @note[short] MacOS (Intel): 0x68ade0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f5a6c
     * @note[short] Android
     */
    cocos2d::CCRect* getObjectRectPointer();

    /**
     * @note[short] MacOS (ARM): 0x5a6884
     * @note[short] MacOS (Intel): 0x679800
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f11b4
     * @note[short] Android
     */
    ZLayer getObjectZLayer();

    /**
     * @note[short] MacOS (ARM): 0x5ad9b4
     * @note[short] MacOS (Intel): 0x68d670
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f7d50
     * @note[short] Android
     */
    int getObjectZOrder();

    /**
     * @note[short] MacOS (ARM): 0x5ab360
     * @note[short] MacOS (Intel): 0x68b100
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCRect getOuterObjectRect();

    /**
     * @note[short] MacOS (ARM): 0x5aca2c
     * @note[short] MacOS (Intel): 0x68c8d0
     * @note[short] Windows: 0x295510
     * @note[short] iOS: 0x2f70dc
     * @note[short] Android
     */
    int getParentMode();

    /**
     * @note[short] MacOS (ARM): 0x5b79ec
     * @note[short] MacOS (Intel): 0x699820
     * @note[short] Windows: 0x29c350
     * @note[short] iOS: 0x2fccf0
     * @note[short] Android
     */
    GJSpriteColor* getRelativeSpriteColor(int type);

    /**
     * @note[short] MacOS (ARM): 0x5add60
     * @note[short] MacOS (Intel): 0x68da30
     * @note[short] Windows: 0x296f70
     * @note[short] iOS: 0x2f80f0
     * @note[short] Android
     */
    cocos2d::CCPoint getScalePosDelta();

    /**
     * @note[short] MacOS (ARM): 0x5b797c
     * @note[short] MacOS (Intel): 0x6997a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fcc80
     * @note[short] Android
     */
    GJSpriteColor* getSecondaryColor();

    /**
     * @note[short] MacOS (ARM): 0x5af58c
     * @note[short] MacOS (Intel): 0x68f3d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f8ed4
     * @note[short] Android
     */
    int getSecondaryColorMode();

    /**
     * @note[short] MacOS (ARM): 0x5adcdc
     * @note[short] MacOS (Intel): 0x68d9b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f8074
     * @note[short] Android
     */
    float getSlopeAngle();

    /**
     * @note[short] MacOS (ARM): 0x5ab594
     * @note[short] MacOS (Intel): 0x68b330
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f5ee4
     * @note[short] Android
     */
    cocos2d::CCPoint getUnmodifiedPosition();

    /**
     * @note[short] MacOS (ARM): 0x5b8728
     * @note[short] MacOS (Intel): 0x69a6a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fd424
     * @note[short] Android
     */
    cocos2d::ccColor3B const& groupColor(cocos2d::ccColor3B const& color, bool mainColor);

    /**
     * @note[short] MacOS (ARM): 0x5aea9c
     * @note[short] MacOS (Intel): 0x68e690
     * @note[short] Windows: 0x2976c0
     * @note[short] iOS: 0x160f68
     * @note[short] Android
     */
    float groupOpacityMod();

    /**
     * @note[short] MacOS (ARM): 0x5ae3cc
     * @note[short] MacOS (Intel): 0x68e090
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f85b0
     * @note[short] Android
     */
    void groupWasDisabled();

    /**
     * @note[short] MacOS (ARM): 0x5ae3b0
     * @note[short] MacOS (Intel): 0x68e070
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f8594
     * @note[short] Android
     */
    void groupWasEnabled();

    /**
     * @note[short] MacOS (ARM): 0x5b7b2c
     * @note[short] MacOS (Intel): 0x6999c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fcdc0
     * @note[short] Android
     */
    bool hasSecondaryColor();

    /**
     * @note[short] MacOS (ARM): 0x5aa238
     * @note[short] MacOS (Intel): 0x685a80
     * @note[short] Windows: 0x29da30
     * @note[short] iOS: 0x2f4c04
     * @note[short] Android
     */
    bool ignoreEditorDuration();

    /**
     * @note[short] MacOS (ARM): 0x5aafcc
     * @note[short] MacOS (Intel): 0x68ad00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f5a04
     * @note[short] Android
     */
    bool ignoreEnter();

    /**
     * @note[short] MacOS (ARM): 0x5aafc4
     * @note[short] MacOS (Intel): 0x68acf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f59fc
     * @note[short] Android
     */
    bool ignoreFade();

    /**
     * @note[short] MacOS (ARM): 0x5a4b70
     * @note[short] MacOS (Intel): 0x671790
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ef9a8
     * @note[short] Android
     */
    bool init(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x5b90b8
     * @note[short] MacOS (Intel): 0x69b3b0
     * @note[short] Windows: 0x29df20
     * @note[short] iOS: 0x2fdc48
     * @note[short] Android
     */
    bool isBasicTrigger();

    /**
     * @note[short] MacOS (ARM): 0x5b7a64
     * @note[short] MacOS (Intel): 0x699890
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fcd60
     * @note[short] Android
     */
    bool isColorObject();

    /**
     * @note[short] MacOS (ARM): 0x5b89fc
     * @note[short] MacOS (Intel): 0x69ad20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fd69c
     * @note[short] Android
     */
    bool isColorTrigger();

    /**
     * @note[short] MacOS (ARM): 0x5b912c
     * @note[short] MacOS (Intel): 0x69b420
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fdcbc
     * @note[short] Android
     */
    bool isConfigurablePortal();

    /**
     * @note[short] MacOS (ARM): 0x5aa448
     * @note[short] MacOS (Intel): 0x6865d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f4e58
     * @note[short] Android
     */
    bool isEditorSpawnableTrigger();

    /**
     * @note[short] MacOS (ARM): 0x5b7834
     * @note[short] MacOS (Intel): 0x699670
     * @note[short] Windows: 0x29c1b0
     * @note[short] iOS: 0x2fcb38
     * @note[short] Android
     */
    bool isFacingDown();

    /**
     * @note[short] MacOS (ARM): 0x5b78c4
     * @note[short] MacOS (Intel): 0x6996f0
     * @note[short] Windows: 0x29c270
     * @note[short] iOS: 0x2fcbc8
     * @note[short] Android
     */
    bool isFacingLeft();

    /**
     * @note[short] MacOS (ARM): 0x5b90a0
     * @note[short] MacOS (Intel): 0x69b390
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fdc30
     * @note[short] Android
     */
    bool isSettingsObject();

    /**
     * @note[short] MacOS (ARM): 0x5b8810
     * @note[short] MacOS (Intel): 0x69a7c0
     * @note[short] Windows: 0x29cfe0
     * @note[short] iOS: 0x2fd4b8
     * @note[short] Android
     */
    bool isSpawnableTrigger();

    /**
     * @note[short] MacOS (ARM): 0x5b8b90
     * @note[short] MacOS (Intel): 0x69aec0
     * @note[short] Windows: 0x29d3f0
     * @note[short] iOS: 0x2fd830
     * @note[short] Android
     */
    bool isSpecialObject();

    /**
     * @note[short] MacOS (ARM): 0x5b8adc
     * @note[short] MacOS (Intel): 0x69adf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fd77c
     * @note[short] Android
     */
    bool isSpeedObject();

    /**
     * @note[short] MacOS (ARM): 0x5aa0dc
     * @note[short] MacOS (Intel): 0x685940
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f4aa8
     * @note[short] Android
     */
    bool isStoppableTrigger();

    /**
     * @note[short] MacOS (ARM): 0x5a9ee0
     * @note[short] MacOS (Intel): 0x6853d0
     * @note[short] Windows: 0x29cb70
     * @note[short] iOS: 0x2f48b0
     * @note[short] Android
     */
    bool isTrigger();

    /**
     * @note[short] MacOS (ARM): 0x5ae640
     * @note[short] MacOS (Intel): 0x68e380
     * @note[short] iOS: 0x2f8708
     * @note[short] Android
     */
    void loadGroupsFromString(std::string groupList);

    /**
     * @note[short] MacOS (ARM): 0x5acb58
     * @note[short] MacOS (Intel): 0x68ca20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f71d0
     * @note[short] Android
     */
    void makeInvisible();

    /**
     * @note[short] MacOS (ARM): 0x5acb74
     * @note[short] MacOS (Intel): 0x68ca50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f71ec
     * @note[short] Android
     */
    void makeVisible();

    /**
     * @note[short] MacOS (ARM): 0x5b8320
     * @note[short] MacOS (Intel): 0x69a2a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fd260
     * @note[short] Android
     */
    float opacityModForMode(int id, bool mainColor);

    /**
     * @note[short] MacOS (ARM): 0x30630
     * @note[short] MacOS (Intel): 0x6797a0
     * @note[short] Windows: 0x2968e0
     * @note[short] iOS: 0x2f1150
     * @note[short] Android
     */
    cocos2d::CCNode* parentForZLayer(int zLayer, bool blending, int parentMode);

    /**
     * @note[short] MacOS (ARM): 0x3ae440
     * @note[short] MacOS (Intel): 0x4382e0
     * @note[short] Windows: 0x2aa6f0
     * @note[short] iOS: 0x34afb4
     * @note[short] Android
     */
    std::string perspectiveColorFrame(char const* prefix, int index);

    /**
     * @note[short] MacOS (ARM): 0x3ae148
     * @note[short] MacOS (Intel): 0x437f70
     * @note[short] Windows: 0x2aa5e0
     * @note[short] iOS: 0x34ae98
     * @note[short] Android
     */
    std::string perspectiveFrame(char const* prefix, int index);

    /**
     * @note[short] MacOS (ARM): 0x1f1878
     * @note[short] MacOS (Intel): 0x248410
     * @note[short] Windows: 0x2a5410
     * @note[short] iOS: 0x3e5898
     * @note[short] Android
     */
    void playDestroyObjectAnim(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1f13a8
     * @note[short] MacOS (Intel): 0x247f10
     * @note[short] Windows: 0x2a4e40
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void playPickupAnimation(cocos2d::CCSprite* target, float offset, float duration, float randomValue1, float randomValue2);

    /**
     * @note[short] MacOS (ARM): 0x1f1430
     * @note[short] MacOS (Intel): 0x247fa0
     * @note[short] Windows: 0x2a4f30
     * @note[short] iOS: 0x3e545c
     * @note[short] Android
     */
    void playPickupAnimation(cocos2d::CCSprite* target, float xOffset, float yOffset, float controlYOffset1, float controlYOffset2, float endYOffset, float duration, float fadeDelay, float fadeDuration, bool rotate, float randomValue1, float randomValue2);

    /**
     * @note[short] MacOS (ARM): 0x304b5c
     * @note[short] MacOS (Intel): 0x68cac0
     * @note[short] iOS: 0x1bde4c
     * @note[short] Android
     */
    void playShineEffect();

    /**
     * @note[short] MacOS (ARM): 0x5ab60c
     * @note[short] MacOS (Intel): 0x68b3f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f5f2c
     * @note[short] Android
     */
    void quickUpdatePosition();

    /**
     * @note[short] MacOS (ARM): 0x5ab674
     * @note[short] MacOS (Intel): 0x68b460
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void quickUpdatePosition2();

    /**
     * @note[short] MacOS (ARM): 0x5a569c
     * @note[short] MacOS (Intel): 0x674110
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void removeColorSprite();

    /**
     * @note[short] MacOS (ARM): 0x5a5660
     * @note[short] MacOS (Intel): 0x6740d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f0284
     * @note[short] Android
     */
    void removeGlow();

    /**
     * @note[short] MacOS (ARM): 0x5adabc
     * @note[short] MacOS (Intel): 0x68d780
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void reorderColorSprite();

    /**
     * @note[short] MacOS (ARM): 0x5ae268
     * @note[short] MacOS (Intel): 0x68df10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f84c4
     * @note[short] Android
     */
    void resetColorGroups();

    /**
     * @note[short] MacOS (ARM): 0x5a6510
     * @note[short] MacOS (Intel): 0x6793e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f0eb4
     * @note[short] Android
     */
    void resetGroupDisabled();

    /**
     * @note[short] MacOS (ARM): 0x5ae084
     * @note[short] MacOS (Intel): 0x68dd30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f835c
     * @note[short] Android
     */
    void resetGroups();

    /**
     * @note[short] MacOS (ARM): 0x5b7ae4
     * @note[short] MacOS (Intel): 0x699940
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetMainColorMode();

    /**
     * @note[short] MacOS (ARM): 0x5a673c
     * @note[short] MacOS (Intel): 0x6796b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f1060
     * @note[short] Android
     */
    void resetMoveOffset();

    /**
     * @note[short] MacOS (ARM): 0x5abe98
     * @note[short] MacOS (Intel): 0x68bc30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetRScaleForced();

    /**
     * @note[short] MacOS (ARM): 0x5b7b08
     * @note[short] MacOS (Intel): 0x699980
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetSecondaryColorMode();

    /**
     * @note[short] MacOS (ARM): 0x5abff8
     * @note[short] MacOS (Intel): 0x68bdb0
     * @note[short] Windows: 0x2931c0
     * @note[short] iOS: 0x2f67d0
     * @note[short] Android
     */
    void setAreaOpacity(float step, float value, int index);

    /**
     * @note[short] MacOS (ARM): 0x5adeb8
     * @note[short] MacOS (Intel): 0x68db80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f8224
     * @note[short] Android
     */
    void setCustomZLayer(int zLayer);

    /**
     * @note[short] MacOS (ARM): 0x5a9b4c
     * @note[short] MacOS (Intel): 0x684bd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f453c
     * @note[short] Android
     */
    void setDefaultMainColorMode(int id);

    /**
     * @note[short] MacOS (ARM): 0x5a603c
     * @note[short] MacOS (Intel): 0x678e50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f0a70
     * @note[short] Android
     */
    void setDefaultSecondaryColorMode(int id);

    /**
     * @note[short] MacOS (ARM): 0x5ac2a0
     * @note[short] MacOS (Intel): 0x68c0c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f6a40
     * @note[short] Android
     */
    void setGlowOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x5b8808
     * @note[short] MacOS (Intel): 0x69a7a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fd4b0
     * @note[short] Android
     */
    void setLastPosition(cocos2d::CCPoint const& position);

    /**
     * @note[short] MacOS (ARM): 0x5b7aa4
     * @note[short] MacOS (Intel): 0x6998e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fcda0
     * @note[short] Android
     */
    void setMainColorMode(int id);

    /**
     * @note[short] MacOS (ARM): 0x5b7ac4
     * @note[short] MacOS (Intel): 0x699910
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setSecondaryColorMode(int id);

    /**
     * @note[short] MacOS (ARM): 0x5b6854
     * @note[short] MacOS (Intel): 0x6984c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setupColorSprite(int id, bool mainColor);

    /**
     * @note[short] MacOS (ARM): 0x3cd2cc
     * @note[short] MacOS (Intel): 0x45df60
     * @note[short] iOS: 0x3664e0
     * @note[short] Android
     */
    void setupPixelScale();

    /**
     * @note[short] MacOS (ARM): 0x5aa5fc
     * @note[short] MacOS (Intel): 0x686930
     * @note[short] Windows: 0x29dfd0
     * @note[short] iOS: 0x2f5008
     * @note[short] Android
     */
    void setupSpriteSize();

    /**
     * @note[short] MacOS (ARM): 0x5ad748
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x2f14fc
     * @note[short] Android
     */
    bool shouldBlendColor(GJSpriteColor* color, bool mainColor);

    /**
     * @note[short] MacOS (ARM): 0x5a9cfc
     * @note[short] MacOS (Intel): 0x684d90
     * @note[short] Windows: 0x291940
     * @note[short] iOS: 0x2f46dc
     * @note[short] Android
     */
    bool shouldLockX();

    /**
     * @note[short] MacOS (ARM): 0x1f1350
     * @note[short] MacOS (Intel): 0x247ea0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool shouldNotHideAnimFreeze();

    /**
     * @note[short] MacOS (ARM): 0x1f1630
     * @note[short] MacOS (Intel): 0x2481e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e5654
     * @note[short] Android
     */
    bool shouldShowPickupEffects();

    /**
     * @note[short] MacOS (ARM): 0x5b7228
     * @note[short] MacOS (Intel): 0x699060
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fc660
     * @note[short] Android
     */
    bool slopeFloorTop();

    /**
     * @note[short] MacOS (ARM): 0x5b720c
     * @note[short] MacOS (Intel): 0x699040
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fc644
     * @note[short] Android
     */
    bool slopeWallLeft();

    /**
     * @note[short] MacOS (ARM): 0x5b7244
     * @note[short] MacOS (Intel): 0x699080
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    double slopeYPos(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x5b72e4
     * @note[short] MacOS (Intel): 0x6990f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fc67c
     * @note[short] Android
     */
    double slopeYPos(cocos2d::CCRect rect);

    /**
     * @note[short] MacOS (ARM): 0x5b7354
     * @note[short] MacOS (Intel): 0x699140
     * @note[short] Windows: 0x29bc40
     * @note[short] iOS: 0x2fc6e0
     * @note[short] Android
     */
    double slopeYPos(float x);

    /**
     * @note[short] MacOS (ARM): 0x1f16a0
     * @note[short] MacOS (Intel): 0x248240
     * @note[short] Windows: 0x2a51d0
     * @note[short] iOS: 0x3e56c8
     * @note[short] Android
     */
    void spawnDefaultPickupParticle(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (Intel): 0x236630
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f7b98
     * @note[short] Android
     */
    void updateBlendMode();

    /**
     * @note[short] MacOS (ARM): 0x5b87ac
     * @note[short] MacOS (Intel): 0x69a730
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateCustomColorType(short type);

    /**
     * @note[short] MacOS (ARM): 0x5a651c
     * @note[short] MacOS (Intel): 0x679400
     * @note[short] iOS: 0x2f0ec0
     * @note[short] Android
     */
    void updateCustomScaleX(float scaleX);

    /**
     * @note[short] MacOS (ARM): 0x5a657c
     * @note[short] MacOS (Intel): 0x679480
     * @note[short] iOS: 0x2f0f20
     * @note[short] Android
     */
    void updateCustomScaleY(float scaleY);

    /**
     * @note[short] MacOS (ARM): 0x5aeb34
     * @note[short] MacOS (Intel): 0x68e720
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f88f0
     * @note[short] Android
     */
    void updateHSVState();

    /**
     * @note[short] MacOS (ARM): 0x5b7678
     * @note[short] MacOS (Intel): 0x699490
     * @note[short] Windows: 0x29bfd0
     * @note[short] iOS: 0x2fc9f0
     * @note[short] Android
     */
    void updateIsOriented();

    /**
     * @note[short] MacOS (ARM): 0x5b7f18
     * @note[short] MacOS (Intel): 0x699e90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fd104
     * @note[short] Android
     */
    void updateMainColor();

    /**
     * @note[short] MacOS (ARM): 0x5b82d0
     * @note[short] MacOS (Intel): 0x69a250
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateMainColorOnly();

    /**
     * @note[short] MacOS (ARM): 0x5b81f8
     * @note[short] MacOS (Intel): 0x69a180
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateMainOpacity();

    /**
     * @note[short] MacOS (ARM): 0x5b712c
     * @note[short] MacOS (Intel): 0x698c70
     * @note[short] Windows: 0x29bb80
     * @note[short] iOS: 0x2fc564
     * @note[short] Android
     */
    void updateObjectEditorColor();

    /**
     * @note[short] MacOS (ARM): 0x5b841c
     * @note[short] MacOS (Intel): 0x69a380
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fd2e4
     * @note[short] Android
     */
    void updateSecondaryColor();

    /**
     * @note[short] MacOS (ARM): 0x5b85f0
     * @note[short] MacOS (Intel): 0x69a560
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateSecondaryColorOnly();

    /**
     * @note[short] MacOS (ARM): 0x5b8518
     * @note[short] MacOS (Intel): 0x69a490
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateSecondaryOpacity();

    /**
     * @note[short] MacOS (ARM): 0x5a61e8
     * @note[short] MacOS (Intel): 0x679010
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x2f0b94
     * @note[short] Android
     */
    void updateStartPos();

    /**
     * @note[short] MacOS (ARM): 0x5ab5c4
     * @note[short] MacOS (Intel): 0x68b380
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateUnmodifiedPositions();

    /**
     * @note[short] MacOS (ARM): 0x1f12a8
     * @note[short] MacOS (Intel): 0x247b00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e5378
     * @note[short] Android
     */
    bool usesFreezeAnimation();

    /**
     * @note[short] MacOS (ARM): 0x1f1360
     * @note[short] MacOS (Intel): 0x247ec0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e5414
     * @note[short] Android
     */
    bool usesSpecialAnimation();
    int m_someOtherIndex;
    int m_innerSectionIndex;
    int m_outerSectionIndex;
    int m_middleSectionIndex;
    bool m_hasExtendedCollision;
    cocos2d::ccColor3B m_groupColor;
    bool m_isColorSpriteBlack;
    bool m_isObjectBlack;
    float m_blackChildOpacity;
    bool m_blackChildOpacityLocked;
    bool m_editorEnabled;
    bool m_isGroupDisabled;
    bool m_isGroupDisabledTemp;
    bool m_unk28c;
    int m_activeMainColorID;
    int m_activeDetailColorID;
    bool m_baseUsesHSV;
    bool m_detailUsesHSV;
    float m_positionXOffset;
    float m_positionYOffset;
    float m_rotationXOffset;
    float m_unk2A8;
    float m_rotationYOffset;
    float m_unk2B0;
    float m_scaleXOffset;
    float m_scaleYOffset;
    float m_unk2BC;
    float m_unk2C0;
    bool m_tempOffsetXRelated;
    bool m_isFlipX;
    bool m_isFlipY;
    cocos2d::CCPoint m_customBoxOffset;
    bool m_boxOffsetCalculated;
    cocos2d::CCPoint m_boxOffset;
    OBB2D* m_orientedBox;
    bool m_shouldUseOuterOb;
    cocos2d::CCSprite* m_glowSprite;
    bool m_isRingPoweredOn;
    float m_width;
    float m_height;
    bool m_addToNodeContainer;
    bool m_isActivated;
    bool m_isDisabled2;
    cocos2d::CCParticleSystemQuad* m_particle;
    std::string m_particleString;
    bool m_hasParticles;
    bool m_particleUseObjectColor;
    bool m_hasColorSprite;
    cocos2d::CCPoint m_particleOffset;
    bool m_isParticleSpriteLocked;
    cocos2d::CCRect m_textureRect;
    bool m_isDirty;
    bool m_isObjectPosDirty;
    bool m_isUnmodifiedPosDirty;
    float m_fadeMargin;
    cocos2d::CCRect m_objectRect;
    bool m_isObjectRectDirty;
    bool m_isOrientedBoxDirty;
    bool m_colorSpriteLocked;
    bool m_unk353;
    bool m_canRotateFree;
    bool m_isMirroredByScale;
    int m_linkedGroup;
    int m_unk35C;
    short m_colorType;
    short m_childColorType;
    bool m_shouldBlendBase;
    bool m_shouldBlendDetail;
    bool m_hasCustomChild;
    union {
        bool m_hasAnimatedChild{};
        bool m_unk367;
    };
    cocos2d::CCSprite* m_colorSprite;
    bool m_unk370;
    float m_objectRadius;
    bool m_isRotationAligned;
    float m_spriteWidthScale;
    float m_spriteHeightScale;
    int m_uniqueID;
    GameObjectType m_objectType;
    GameObjectType m_savedObjectType;
    int m_unk390;
    float m_unmodifiedPositionX;
    float m_unmodifiedPositionY;
    double m_positionX;
    double m_positionY;
    cocos2d::CCPoint m_startPosition;
    bool m_usesAudioScale;
    bool m_hasNoAudioScale;
    bool m_isDisabled;
    float m_startRotationX;
    float m_startRotationY;
    float m_startScaleX;
    float m_startScaleY;
    float m_customScaleX;
    float m_customScaleY;
    bool m_startFlipX;
    bool m_startFlipY;
    bool m_unk3ee;
    bool m_isInvisible;
    int m_unk3D8;
    short m_varianceIndex;
    bool m_unk3DE;
    short m_enterType;
    short m_exitType;
    short m_enterChannel;
    short m_objectMaterial;
    bool m_unk3E8;
    short m_parentMode;
    bool m_hasNoGlow;
    int m_targetColor;
    int m_objectID;
    bool m_unk3F8;
    bool m_intrinsicDontFade;
    bool m_ignoreEnter;
    bool m_ignoreFade;
    bool m_isSolidColorBlock;
    bool m_unk3FD;
    bool m_customSpriteColor;
    short m_customColorType;
    bool m_isDontEnter;
    bool m_isDontFade;
    bool m_hasNoEffects;
    bool m_hasNoParticles;
    int m_defaultZOrder;
    bool m_unk40C;
    bool m_colorZLayerRelated;
    bool m_customAudioScale;
    float m_minAudioScale;
    float m_maxAudioScale;
    bool m_particleLocked;
    int m_property53;
    bool m_isInvisibleBlock;
    bool m_customGlowColor;
    bool m_glowColorIsLBG;
    bool m_cantColorGlow;
    float m_opacityMod;
    bool m_slopeUphill;
    int m_slopeDirection;
    bool m_slopeIsHazard;
    float m_opacityMod2;
    GJSpriteColor* m_baseColor;
    GJSpriteColor* m_detailColor;
    bool m_baseOrDetailBlending;
    ZLayer m_defaultZLayer;
    bool m_zFixedZLayer;
    ZLayer m_zLayer;
    int m_zOrder;
    bool m_wasSelected;
    bool m_isSelected;
    union {
        int m_cycleIndex{};
        int m_unk460;
    };
    cocos2d::CCPoint m_unk464;
    bool m_updateParents;
    bool m_updateEditorColor;
    bool m_hasGroupParent;
    bool m_hasAreaParent;
    float m_scaleX;
    float m_scaleY;
    std::array<short, 10>* m_groups;
    short m_groupCount;
    bool m_hasGroupParentsString;
    std::array<short, 10>* m_colorGroups;
    short m_colorGroupCount;
    std::array<short, 10>* m_opacityGroups;
    short m_opacityGroupCount;
    short m_editorLayer;
    short m_editorLayer2;
    int m_enabledGroupsCounter;
    union {
        bool m_useObjectRect{};
        bool m_updateCustomContentSize;
    };
    bool m_hasContentSize;
    bool m_isNoTouch;
    union {
        cocos2d::CCSize m_contentSize{};
        cocos2d::CCSize m_lastSize;
    };
    cocos2d::CCPoint m_lastPosition;
    int m_unk4C0;
    int m_unk4C4;
    int m_unk4C8;
    int m_unk4CC;
    GameObjectClassType m_classType;
    bool m_isTrigger;
    bool m_isSpawnOrderTrigger;
    bool m_isColorTrigger;
    bool m_dontIgnoreDuration;
    bool m_canBeControlled;
    bool m_activateTriggerInEditor;
    bool m_isStartPos;
    bool m_isHighDetail;
    ColorActionSprite* m_mainActionSprite;
    ColorActionSprite* m_detailActionSprite;
    GJEffectManager* m_goEffectManager;
    union {
        bool m_useTextureRectForSelection{};
        bool m_unk4F8;
    };
    bool m_isDecoration;
    bool m_isDecoration2;
    bool m_unk4fb;
    bool m_maybeNotColorable;
    bool m_isPassable;
    bool m_isHide;
    bool m_isNonStickX;
    bool m_isNonStickY;
    bool m_isIceBlock;
    bool m_isGripSlope;
    bool m_isScaleStick;
    bool m_isExtraSticky;
    bool m_isDontBoostY;
    bool m_isDontBoostX;
    bool m_unk507;
    bool m_unk508;
    float m_unk50C;
    float m_pixelScaleX;
    float m_pixelScaleY;
    int m_mainColorKeyIndex;
    int m_detailColorKeyIndex;
    uint8_t m_areaOpacityRelated;
    float m_areaOpacityValue;
    int m_areaOpacityIndex;
    int m_unk52C;
    bool m_hasDynamicallySaved;
    bool m_isUIObject;
    bool m_greenDebugDraw;
};
