#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>

class GraphicsReloadLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GraphicsReloadLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GraphicsReloadLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x4c7b70
     * @note[short] Android: Rebinded
     */
    virtual  ~GraphicsReloadLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GraphicsReloadLayer();

    /**
     * @note[short] MacOS (ARM): 0x77ada0
     * @note[short] MacOS (Intel): 0x8861a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GraphicsReloadLayer* create(cocos2d::TextureQuality quality, cocos2d::CCSize resolution, bool fullscreen, bool borderless, bool fix, bool changedResolution);

    /**
     * @note[short] MacOS (ARM): 0x77ad00
     * @note[short] MacOS (Intel): 0x886120
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(cocos2d::TextureQuality quality, cocos2d::CCSize resolution, bool fullscreen, bool borderless, bool fix, bool changedResolution);

    /**
     * @note[short] MacOS (ARM): 0x77af00
     * @note[short] MacOS (Intel): 0x886330
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(cocos2d::TextureQuality quality, cocos2d::CCSize resolution, bool fullscreen, bool borderless, bool fix, bool changedResolution);

    /**
     * @note[short] MacOS (ARM): 0x77a9ec
     * @note[short] MacOS (Intel): 0x886400
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void performReload();
    cocos2d::TextureQuality m_quality;
    cocos2d::CCSize m_resolution;
    bool m_fullscreen;
    bool m_borderless;
    bool m_fix;
    bool m_changedResolution;
};
