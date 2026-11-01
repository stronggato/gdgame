#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class CCAnimateFrameCache : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "CCAnimateFrameCache";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCAnimateFrameCache, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x44f00
     * @note[short] Android: Rebinded
     */
    virtual  ~CCAnimateFrameCache();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CCAnimateFrameCache* get();

    /**
     * @note[short] MacOS (ARM): 0x4e6734
     * @note[short] MacOS (Intel): 0x596f80
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x2435b0
     * @note[short] Android
     */
    static CCAnimateFrameCache* sharedSpriteFrameCache();

    /**
     * @note[short] MacOS (ARM): 0x4e6938
     * @note[short] MacOS (Intel): 0x5971c0
     * @note[short] Android
     */
    void addCustomSpriteFramesWithFile(char const* filename);

    /**
     * @note[short] MacOS (ARM): 0x4e7b84
     * @note[short] MacOS (Intel): 0x5984e0
     * @note[short] Windows: 0x45240
     * @note[short] Android
     */
    cocos2d::CCDictionary* addDict(DS_Dictionary* dict, char const* filename);

    /**
     * @note[short] MacOS (ARM): 0x4e74d8
     * @note[short] MacOS (Intel): 0x597e30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2436cc
     * @note[short] Android
     */
    cocos2d::CCDictionary* addDict(cocos2d::CCDictionary* dict, char const* filename);

    /**
     * @note[short] MacOS (ARM): 0x4e7928
     * @note[short] MacOS (Intel): 0x598280
     * @note[short] Windows: 0x45080
     * @note[short] iOS: 0x2438c4
     * @note[short] Android
     */
    cocos2d::CCDictionary* addSpriteFramesWithFile(char const* filename);

    /**
     * @note[short] MacOS (ARM): 0x4e67c8
     * @note[short] MacOS (Intel): 0x597020
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x24361c
     * @note[short] Android
     */
    bool init();

    /**
     * @note[short] MacOS (ARM): 0x4e680c
     * @note[short] MacOS (Intel): 0x597070
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void purgeSharedSpriteFrameCache();

    /**
     * @note[short] MacOS (ARM): 0x4e82d8
     * @note[short] MacOS (Intel): 0x598c50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xad57c
     * @note[short] Android
     */
    void removeSpriteFrames();

    /**
     * @note[short] MacOS (Intel): 0x598c80
     * @note[short] Windows: 0x45860
     * @note[short] iOS: 0x243a24
     * @note[short] Android
     */
    cocos2d::CCArray* spriteFrameByName(char const* name);
    cocos2d::CCDictionary* m_animateFrames;
    cocos2d::CCDictionary* m_unk040;
    cocos2d::CCDictionary* m_animateDescriptions;
};
