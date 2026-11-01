#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class KeyframeGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "KeyframeGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(KeyframeGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     KeyframeGameObject();

    /**
     * @note[short] MacOS (ARM): 0x164a88
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x42ef74
     * @note[short] Android: Rebinded
     */
     ~KeyframeGameObject();

    /**
     * @note[short] MacOS (ARM): 0x164b70
     * @note[short] MacOS (Intel): 0x1a6fa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x42efd8
     * @note[short] Android
     */
    static KeyframeGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x164c60
     * @note[short] MacOS (Intel): 0x1a70a0
     * @note[short] Windows: 0x652a40
     * @note[short] iOS: 0x42f084
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x164f4c
     * @note[short] MacOS (Intel): 0x1a7380
     * @note[short] Windows: 0x652d20
     * @note[short] iOS: 0x42f348
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x165088
     * @note[short] MacOS (Intel): 0x1a74e0
     * @note[short] Windows: 0x652de0
     * @note[short] iOS: 0x42f3ec
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] Windows: 0x6532f0
     * @note[short] iOS: 0x42f8a4
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x164cc4
     * @note[short] MacOS (Intel): 0x1a7110
     * @note[short] Windows: 0x652ad0
     * @note[short] iOS: 0x42f0e8
     * @note[short] Android
     */
    void updateShadowObjects(GJBaseGameLayer* layer, EditorUI* ui);
    cocos2d::CCArray* m_shadowObjects;
    cocos2d::CCSprite* m_previewSprite;
    int m_keyframeGroup;
    int m_keyframeIndex;
    bool m_referenceOnly;
    bool m_proximity;
    bool m_curve;
    bool m_closeLoop;
    int m_timeMode;
    float m_unk760;
    float m_spawnDelay;
    bool m_previewArt;
    bool m_keyframeActive;
    bool m_autoLayer;
    int m_direction;
    int m_revolutions;
    float m_lineOpacity;
};
