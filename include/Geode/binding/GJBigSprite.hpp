#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/vector.hpp>

class GJBigSprite : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJBigSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJBigSprite, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x1fb314
     * @note[short] MacOS (Intel): 0x2525d0
     * @note[short] Android
     */
    static GJBigSprite* create();

    /**
     * @note[short] MacOS (ARM): 0x1fc8e0
     * @note[short] MacOS (Intel): 0x253d80
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1fcd80
     * @note[short] MacOS (Intel): 0x254310
     * @note[short] Android
     */
    void finishedLoadingSpriteAsync(cocos2d::CCObject* obj);

    /**
     * @note[short] MacOS (ARM): 0x1fccf0
     * @note[short] MacOS (Intel): 0x254290
     * @note[short] Android
     */
    void loadSpriteAsync(std::string filename, int index);

    /**
     * @note[short] MacOS (ARM): 0x1fbda0
     * @note[short] MacOS (Intel): 0x2530e0
     * @note[short] Android
     */
    void unloadAll();

    /**
     * @note[short] MacOS (ARM): 0x1fcc88
     * @note[short] MacOS (Intel): 0x254230
     * @note[short] Android
     */
    void unloadSprite(std::string filename, int index);

    /**
     * @note[short] MacOS (ARM): 0x1fb3a4
     * @note[short] MacOS (Intel): 0x252650
     * @note[short] Android
     */
    void updateSpriteVisibility();
    std::vector<bool> m_spritesLoaded;
    cocos2d::CCArray* m_spriteNodes;
    float m_scaleX;
    float m_scaleY;
    bool m_loadSprites;
    bool m_unloadingAll;
};
