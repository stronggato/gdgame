#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EnhancedGameObject.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/vector.hpp>

class ParticleGameObject : public EnhancedGameObject {
public:
    static constexpr auto CLASS_NAME = "ParticleGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ParticleGameObject, EnhancedGameObject)

    /**
     * @note[short] Windows: 0x633870
     * @note[short] Android: Rebinded
     */
    virtual  ~ParticleGameObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ParticleGameObject();

    /**
     * @note[short] MacOS (ARM): 0x152490
     * @note[short] MacOS (Intel): 0x191aa0
     * @note[short] Windows: 0x63dab0
     * @note[short] iOS: 0x42480c
     * @note[short] Android
     */
    static ParticleGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x1525f0
     * @note[short] MacOS (Intel): 0x191c80
     * @note[short] Windows: 0x63dbd0
     * @note[short] iOS: 0x42490c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1535f8
     * @note[short] MacOS (Intel): 0x192ce0
     * @note[short] Windows: 0x63ef80
     * @note[short] iOS: 0x425708
     * @note[short] Android
     */
    virtual void setScaleX(float scaleX);

    /**
     * @note[short] MacOS (ARM): 0x15366c
     * @note[short] MacOS (Intel): 0x192d50
     * @note[short] Windows: 0x63f000
     * @note[short] iOS: 0x425758
     * @note[short] Android
     */
    virtual void setScaleY(float scaleY);

    /**
     * @note[short] MacOS (ARM): 0x1536e0
     * @note[short] MacOS (Intel): 0x192dc0
     * @note[short] Windows: 0x63f080
     * @note[short] iOS: 0x4257a8
     * @note[short] Android
     */
    virtual void setScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x153508
     * @note[short] MacOS (Intel): 0x192c20
     * @note[short] Windows: 0x63eb60
     * @note[short] iOS: 0x425618
     * @note[short] Android
     */
    virtual void setRotation(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x153558
     * @note[short] MacOS (Intel): 0x192c60
     * @note[short] Windows: 0x63ebb0
     * @note[short] iOS: 0x425668
     * @note[short] Android
     */
    virtual void setRotationX(float rotationX);

    /**
     * @note[short] MacOS (ARM): 0x1535a8
     * @note[short] MacOS (Intel): 0x192ca0
     * @note[short] Windows: 0x63ed20
     * @note[short] iOS: 0x4256b8
     * @note[short] Android
     */
    virtual void setRotationY(float rotationY);

    /**
     * @note[short] MacOS (ARM): 0x153850
     * @note[short] MacOS (Intel): 0x192f20
     * @note[short] Windows: 0x63f230
     * @note[short] iOS: 0x4258f4
     * @note[short] Android
     */
    virtual void setChildColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x152810
     * @note[short] MacOS (Intel): 0x191f50
     * @note[short] Windows: 0x63de40
     * @note[short] iOS: 0x424aec
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x1528c0
     * @note[short] MacOS (Intel): 0x192020
     * @note[short] Windows: 0x63df10
     * @note[short] iOS: 0x424b9c
     * @note[short] Android
     */
    virtual void addMainSpriteToParent(bool reorder);

    /**
     * @note[short] MacOS (ARM): 0x153a0c
     * @note[short] MacOS (Intel): 0x1930f0
     * @note[short] Windows: 0x63f480
     * @note[short] iOS: 0x425ab0
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x1539d0
     * @note[short] MacOS (Intel): 0x1930b0
     * @note[short] Windows: 0x63f440
     * @note[short] iOS: 0x425a74
     * @note[short] Android
     */
    virtual void deactivateObject(bool deactivate);

    /**
     * @note[short] MacOS (ARM): 0x152628
     * @note[short] MacOS (Intel): 0x191cb0
     * @note[short] Windows: 0x63dc30
     * @note[short] iOS: 0x424944
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x153c18
     * @note[short] MacOS (Intel): 0x1932f0
     * @note[short] Windows: 0x63f6e0
     * @note[short] iOS: 0x425ca0
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1529a4
     * @note[short] MacOS (Intel): 0x192100
     * @note[short] Windows: 0x63e000
     * @note[short] iOS: 0x424c80
     * @note[short] Android
     */
    virtual void claimParticle();

    /**
     * @note[short] MacOS (ARM): 0x152f30
     * @note[short] MacOS (Intel): 0x192670
     * @note[short] Windows: 0x63e580
     * @note[short] iOS: 0x4251e4
     * @note[short] Android
     */
    virtual void unclaimParticle();

    /**
     * @note[short] MacOS (ARM): 0x152f98
     * @note[short] MacOS (Intel): 0x1926f0
     * @note[short] Windows: 0x63e660
     * @note[short] iOS: 0x1acffc
     * @note[short] Android
     */
    virtual void particleWasActivated();

    /**
     * @note[short] MacOS (ARM): 0x153754
     * @note[short] MacOS (Intel): 0x192e30
     * @note[short] Windows: 0x63f100
     * @note[short] iOS: 0x4257f8
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x15288c
     * @note[short] MacOS (Intel): 0x191fe0
     * @note[short] Windows: 0x63ded0
     * @note[short] iOS: 0x424b68
     * @note[short] Android
     */
    virtual void blendModeChanged();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateParticleColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateParticleOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x15394c
     * @note[short] MacOS (Intel): 0x193010
     * @note[short] Windows: 0x63f360
     * @note[short] iOS: 0x4259f0
     * @note[short] Android
     */
    virtual void updateMainParticleOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x153990
     * @note[short] MacOS (Intel): 0x193060
     * @note[short] Windows: 0x63f3e0
     * @note[short] iOS: 0x425a34
     * @note[short] Android
     */
    virtual void updateSecondaryParticleOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x153a74
     * @note[short] MacOS (Intel): 0x193150
     * @note[short] Windows: 0x63f4e0
     * @note[short] iOS: 0x425b18
     * @note[short] Android
     */
    virtual void updateSyncedAnimation(float totalTime, int frameIndex);

    /**
     * @note[short] MacOS (ARM): 0x153bc0
     * @note[short] MacOS (Intel): 0x1932a0
     * @note[short] Windows: 0x63f660
     * @note[short] iOS: 0x425c48
     * @note[short] Android
     */
    virtual void updateAnimateOnTrigger(bool animate);

    /**
     * @note[short] MacOS (ARM): 0x152afc
     * @note[short] MacOS (Intel): 0x192280
     * @note[short] Windows: 0x63e1f0
     * @note[short] iOS: 0x424dd8
     * @note[short] Android
     */
    void applyParticleSettings(cocos2d::CCParticleSystemQuad* particle);

    /**
     * @note[short] MacOS (ARM): 0x1527b8
     * @note[short] MacOS (Intel): 0x191ee0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x424a94
     * @note[short] Android
     */
    void createAndAddCustomParticle();

    /**
     * @note[short] MacOS (ARM): 0x153300
     * @note[short] MacOS (Intel): 0x192a40
     * @note[short] iOS: 0x425470
     * @note[short] Android
     */
    void createParticlePreviewArt();

    /**
     * @note[short] MacOS (ARM): 0x1530f0
     * @note[short] MacOS (Intel): 0x192830
     * @note[short] Windows: 0x63e720
     * @note[short] iOS: 0x4252ec
     * @note[short] Android
     */
    void setParticleString(std::string str);

    /**
     * @note[short] MacOS (ARM): 0x153184
     * @note[short] MacOS (Intel): 0x1928c0
     * @note[short] Windows: 0x63e7b0
     * @note[short] iOS: 0x42532c
     * @note[short] Android
     */
    void updateParticle();

    /**
     * @note[short] MacOS (ARM): 0x152e14
     * @note[short] MacOS (Intel): 0x192560
     * @note[short] Windows: 0x2e3e70
     * @note[short] iOS: 0x4250d0
     * @note[short] Android
     */
    void updateParticleAngle(float angle, cocos2d::CCParticleSystemQuad* particle);

    /**
     * @note[short] MacOS (ARM): 0x153484
     * @note[short] MacOS (Intel): 0x192ba0
     * @note[short] Windows: 0x63eae0
     * @note[short] iOS: 0x425594
     * @note[short] Android
     */
    void updateParticlePreviewArtOpacity(float opacity);

    /**
     * @note[short] MacOS (ARM): 0x1532ac
     * @note[short] MacOS (Intel): 0x1929f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x42541c
     * @note[short] Android
     */
    void updateParticleScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x152980
     * @note[short] MacOS (Intel): 0x1920d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x424c5c
     * @note[short] Android
     */
    void updateParticleStruct();
    std::string m_particleData;
    bool m_updatedParticleData;
    cocos2d::ParticleStruct m_particleStruct;
    bool m_hasUniformObjectColor;
    int m_popupPage;
    bool m_shouldQuickStart;
    float m_respawnResult;
    bool m_startingRespawn;
    bool m_notPreviewing;
};
