#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CCAnimatedSprite.hpp>

class AnimatedShopKeeper : public CCAnimatedSprite {
public:
    static constexpr auto CLASS_NAME = "AnimatedShopKeeper";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AnimatedShopKeeper, CCAnimatedSprite)

    /**
     * @note[short] Windows: 0x3acd10
     * @note[short] Android: Rebinded
     */
    virtual  ~AnimatedShopKeeper();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     AnimatedShopKeeper();

    /**
     * @note[short] MacOS (ARM): 0x2a23c0
     * @note[short] MacOS (Intel): 0x30f860
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c875c
     * @note[short] Android
     */
    static AnimatedShopKeeper* create(ShopType type);

    /**
     * @note[short] MacOS (ARM): 0x2a5d7c
     * @note[short] MacOS (Intel): 0x313960
     * @note[short] Windows: 0x3b3810
     * @note[short] iOS: 0x1cb3e0
     * @note[short] Android
     */
    virtual void animationFinished(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x2a5cc8
     * @note[short] MacOS (Intel): 0x3138b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1cb340
     * @note[short] Android
     */
    bool init(ShopType type);

    /**
     * @note[short] MacOS (ARM): 0x2a4c5c
     * @note[short] MacOS (Intel): 0x3125b0
     * @note[short] iOS: 0x1ca650
     * @note[short] Android
     */
    void playReactAnimation();

    /**
     * @note[short] MacOS (ARM): 0x2a2504
     * @note[short] MacOS (Intel): 0x30f9d0
     * @note[short] Windows: 0x33c2f0
     * @note[short] iOS: 0x11836c
     * @note[short] Android
     */
    void startAnimating();
    ShopType m_type;
    int m_idleInt1;
    int m_idleInt2;
    bool m_looking;
    bool m_reacting;
    int m_reactCount;
    int m_gruntIndex;
};
