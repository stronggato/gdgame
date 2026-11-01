#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CCSpritePlus.hpp>

class CCSpritePart : public CCSpritePlus {
public:
    static constexpr auto CLASS_NAME = "CCSpritePart";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CCSpritePart, CCSpritePlus)

    /**
     * @note[short] Windows: 0x495f0
     * @note[short] Android: Rebinded
     */
    virtual  ~CCSpritePart();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x49580
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCSpritePart();

    /**
     * @note[short] MacOS (ARM): 0x2ec214
     * @note[short] MacOS (Intel): 0x35d520
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x86df4
     * @note[short] Android
     */
    static CCSpritePart* create(cocos2d::CCTexture2D* texture);

    /**
     * @note[short] MacOS (ARM): 0x2ec0b4
     * @note[short] MacOS (Intel): 0x35d3a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x86d08
     * @note[short] Android
     */
    static CCSpritePart* createWithSpriteFrameName(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x2ed5b0
     * @note[short] MacOS (Intel): 0x35e860
     * @note[short] Windows: 0x4a7c0
     * @note[short] iOS: 0x879bc
     * @note[short] Android
     */
    virtual void setVisible(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x2ec44c
     * @note[short] MacOS (Intel): 0x35d750
     * @note[short] Windows: 0x4a710
     * @note[short] iOS: 0x87020
     * @note[short] Android
     */
    void frameChanged(std::string frame);

    /**
     * @note[short] MacOS (ARM): 0x2ed5a8
     * @note[short] MacOS (Intel): 0x35e850
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool getBeingUsed();

    /**
     * @note[short] MacOS (ARM): 0x2ecbdc
     * @note[short] MacOS (Intel): 0x35dee0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void hideInactive();

    /**
     * @note[short] MacOS (ARM): 0x2ecbd4
     * @note[short] MacOS (Intel): 0x35ded0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void markAsNotBeingUsed();

    /**
     * @note[short] MacOS (ARM): 0x2ec8c4
     * @note[short] MacOS (Intel): 0x35dbe0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetTextureRect();

    /**
     * @note[short] MacOS (ARM): 0x2ec55c
     * @note[short] MacOS (Intel): 0x35d870
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setBeingUsed(bool beingUsed);

    /**
     * @note[short] MacOS (ARM): 0x2ec8d8
     * @note[short] MacOS (Intel): 0x35dc00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateDisplayFrame(std::string frame);
    bool m_isBeingUsed;
    std::string m_spriteFrameName;
    SpritePartDelegate* m_delegate;
};
