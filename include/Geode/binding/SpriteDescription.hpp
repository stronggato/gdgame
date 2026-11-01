#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>

class SpriteDescription : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "SpriteDescription";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SpriteDescription, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x243dd8
     * @note[short] Android: Out of line
     */
     SpriteDescription();

    /**
     * @note[short] MacOS (ARM): 0x4e8ab8
     * @note[short] MacOS (Intel): 0x5993a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x243d84
     * @note[short] Android: Rebinded
     */
     ~SpriteDescription();

    /**
     * @note[short] MacOS (ARM): 0x4e8238
     * @note[short] MacOS (Intel): 0x598ba0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SpriteDescription* createDescription(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4e7ae4
     * @note[short] MacOS (Intel): 0x598430
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24399c
     * @note[short] Android
     */
    static SpriteDescription* createDescription(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4e840c
     * @note[short] MacOS (Intel): 0x598d60
     * @note[short] Windows: 0x45930
     * @note[short] Android
     */
    bool initDescription(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x5fd8c
     * @note[short] MacOS (Intel): 0x598fe0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x243a90
     * @note[short] Android
     */
    bool initDescription(cocos2d::CCDictionary* dict);
    cocos2d::CCPoint m_position;
    cocos2d::CCPoint m_scale;
    cocos2d::CCPoint m_flipped;
    float m_rotation;
    int m_zValue;
    int m_tag;
    bool m_usesCustomTag;
    cocos2d::CCSpriteFrame* m_texture;
};
