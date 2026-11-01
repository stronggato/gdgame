#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CCSpritePlus.hpp>
#include <Geode/mapping/CCPoint.hpp>

class CurrencySprite : public CCSpritePlus {
public:
    static constexpr auto CLASS_NAME = "CurrencySprite";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CurrencySprite, CCSpritePlus)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x138540
     * @note[short] iOS: 0x3be1d4
     * @note[short] Android: Out of line
     */
     CurrencySprite();

    /**
     * @note[short] MacOS (ARM): 0x77f6c4
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3bd650
     * @note[short] Android: Rebinded
     */
     ~CurrencySprite();

    /**
     * @note[short] MacOS (ARM): 0x77d9e4
     * @note[short] MacOS (Intel): 0x889010
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3bbd54
     * @note[short] Android
     */
    static CurrencySprite* create(CurrencySpriteType type, bool burst);

    /**
     * @note[short] MacOS (ARM): 0x77e6cc
     * @note[short] MacOS (Intel): 0x889e20
     * @note[short] iOS: 0x3bc920
     * @note[short] Android
     */
    static CurrencySprite* createWithSprite(cocos2d::CCSprite* sprite);

    /**
     * @note[short] MacOS (ARM): 0x780224
     * @note[short] MacOS (Intel): 0x88bc20
     * @note[short] Windows: 0x13d8c0
     * @note[short] iOS: 0x3be0e8
     * @note[short] Android
     */
    static CurrencySpriteType rewardToSpriteType(int rewardType);

    /**
     * @note[short] MacOS (Intel): 0x888f10
     * @note[short] Windows: 0x13d970
     * @note[short] iOS: 0x3bbd24
     * @note[short] Android
     */
    static std::string spriteTypeToStat(CurrencySpriteType type);

    /**
     * @note[short] MacOS (ARM): 0x77f7ac
     * @note[short] MacOS (Intel): 0x88b130
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x3bd6b4
     * @note[short] Android
     */
    bool init(CurrencySpriteType type, bool burst);

    /**
     * @note[short] MacOS (ARM): 0x780074
     * @note[short] MacOS (Intel): 0x8bc00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3bdf3c
     * @note[short] Android
     */
    bool initWithSprite(cocos2d::CCSprite* sprite);
    float m_unkFloat1;
    float m_unkFloat2;
    float m_unkFloat3;
    float m_remaining;
    int m_count;
    cocos2d::CCParticleSystemQuad* m_particleSystem;
    CurrencySpriteType m_spriteType;
    cocos2d::CCPoint m_position;
    cocos2d::CCSprite* m_burstSprite;
};
