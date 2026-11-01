#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>

class PlayerFireBoostSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "PlayerFireBoostSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(PlayerFireBoostSprite, cocos2d::CCSprite)

    /**
     * @note[short] Windows: 0x7e610
     * @note[short] Android: Rebinded
     */
    virtual  ~PlayerFireBoostSprite();

    /**
     * @note[short] MacOS (ARM): 0x366718
     * @note[short] MacOS (Intel): 0x3e8ac0
     * @note[short] Windows: 0x4fea60
     * @note[short] iOS: 0x2b3694
     * @note[short] Android
     */
    static PlayerFireBoostSprite* create();

    /**
     * @note[short] MacOS (ARM): 0x383d90
     * @note[short] MacOS (Intel): 0x40a480
     * @note[short] Windows: 0x4feb00
     * @note[short] iOS: 0x2c950c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x37eb10
     * @note[short] MacOS (Intel): 0x404650
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c5350
     * @note[short] Android
     */
    void animateFireIn();

    /**
     * @note[short] MacOS (ARM): 0x37eb90
     * @note[short] MacOS (Intel): 0x4046c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2c53c8
     * @note[short] Android
     */
    void animateFireOut();

    /**
     * @note[short] MacOS (ARM): 0x37e840
     * @note[short] MacOS (Intel): 0x404370
     * @note[short] Windows: 0x4feb60
     * @note[short] iOS: 0x2c5108
     * @note[short] Android
     */
    void loopFireAnimation();
    float m_size;
};
