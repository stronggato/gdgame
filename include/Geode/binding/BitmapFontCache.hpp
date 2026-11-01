#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class BitmapFontCache : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "BitmapFontCache";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BitmapFontCache, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     BitmapFontCache();

    /**
     * @note[short] MacOS (ARM): 0x1b42a0
     * @note[short] MacOS (Intel): 0x2035a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38d990
     * @note[short] Android: Rebinded
     */
     ~BitmapFontCache();

    /**
     * @note[short] MacOS (ARM): 0x1b4274
     * @note[short] MacOS (Intel): 0x203570
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38d964
     * @note[short] Android
     */
    static void purgeSharedFontCache();

    /**
     * @note[short] MacOS (ARM): 0x1b41d0
     * @note[short] MacOS (Intel): 0x2034c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38d8f8
     * @note[short] Android
     */
    static BitmapFontCache* sharedFontCache();

    /**
     * @note[short] MacOS (ARM): 0x1b4358
     * @note[short] MacOS (Intel): 0x203660
     * @note[short] Windows: 0x3de90
     * @note[short] iOS: 0x38d9e4
     * @note[short] Android
     */
    FontObject* fontWithConfigFile(char const* font, float scale);

    /**
     * @note[short] MacOS (ARM): 0x1b4248
     * @note[short] MacOS (Intel): 0x203540
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init();
    cocos2d::CCDictionary* m_cache;
};
