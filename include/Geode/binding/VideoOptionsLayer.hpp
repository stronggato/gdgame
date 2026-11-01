#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>

class VideoOptionsLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "VideoOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(VideoOptionsLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x4c7720
     * @note[short] Android: Rebinded
     */
    virtual  ~VideoOptionsLayer();

    /**
     * @note[short] iOS: 0x43ef14
     * @note[short] Android
     */
    static VideoOptionsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x7735e8
     * @note[short] MacOS (Intel): 0x87e240
     * @note[short] Windows: 0x4c96c0
     * @note[short] iOS: 0x112f1c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x774f68
     * @note[short] MacOS (Intel): 0x87fdb0
     * @note[short] Windows: 0x4cb550
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x774424
     * @note[short] MacOS (Intel): 0x87f170
     * @note[short] Windows: 0x4cb560
     * @note[short] iOS: 0x113cac
     * @note[short] Android
     */
    CCMenuItemToggler* createToggleButton(std::string label, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position, float scale, float width, bool center, cocos2d::CCArray* nodes);

    /**
     * @note[short] MacOS (ARM): 0x774b70
     * @note[short] MacOS (Intel): 0x87f930
     * @note[short] Windows: 0x4caa20
     * @note[short] iOS: 0x1142f0
     * @note[short] Android
     */
    void onAdvanced(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x774800
     * @note[short] MacOS (Intel): 0x87f590
     * @note[short] Windows: 0x4caff0
     * @note[short] iOS: 0x113fc0
     * @note[short] Android
     */
    void onApply(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x87f3c0
     * @note[short] Android
     */
    void onBorderless(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x87f3e0
     * @note[short] Android
     */
    void onBorderlessFix(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7747a8
     * @note[short] MacOS (Intel): 0x87f530
     * @note[short] iOS: 0xdbae4
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x87f3a0
     * @note[short] Android
     */
    void onFullscreen(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x774e84
     * @note[short] MacOS (Intel): 0x87fcf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7746bc
     * @note[short] MacOS (Intel): 0x87f410
     * @note[short] iOS: 0x113f44
     * @note[short] Android
     */
    void onResolutionNext(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7746b0
     * @note[short] MacOS (Intel): 0x87f3f0
     * @note[short] iOS: 0x113f38
     * @note[short] Android
     */
    void onResolutionPrev(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x774738
     * @note[short] MacOS (Intel): 0x87f4b0
     * @note[short] iOS: 0x113f5c
     * @note[short] Android
     */
    void onTextureQualityNext(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7746c8
     * @note[short] MacOS (Intel): 0x87f430
     * @note[short] iOS: 0x113f50
     * @note[short] Android
     */
    void onTextureQualityPrev(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x774f38
     * @note[short] MacOS (Intel): 0x87fd80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void reloadMenu();

    /**
     * @note[short] MacOS (ARM): 0x774d04
     * @note[short] MacOS (Intel): 0x87fb50
     * @note[short] iOS: 0x1143d0
     * @note[short] Android
     */
    void toggleResolution();

    /**
     * @note[short] MacOS (ARM): 0x774ab0
     * @note[short] MacOS (Intel): 0x87f860
     * @note[short] iOS: 0x114230
     * @note[short] Android
     */
    void updateResolution(int resolution);

    /**
     * @note[short] MacOS (ARM): 0x774a44
     * @note[short] MacOS (Intel): 0x87f7f0
     * @note[short] Windows: 0x4cabd0
     * @note[short] iOS: 0x1141c4
     * @note[short] Android
     */
    void updateTextureQuality(int quality);
    CCMenuItemSpriteExtra* m_prevResolutionBtn;
    CCMenuItemSpriteExtra* m_nextResolutionBtn;
    cocos2d::CCLabelBMFont* m_windowedResolutionLabel;
    cocos2d::CCLabelBMFont* m_selectedResolutionLabel;
    cocos2d::CCLabelBMFont* m_qualityLabel;
    int m_textureQuality;
    cocos2d::CCArray* m_availableResolutions;
    CCMenuItemToggler* m_borderlessToggle;
    cocos2d::CCLabelBMFont* m_borderlessLabel;
    CCMenuItemToggler* m_fixToggle;
    cocos2d::CCLabelBMFont* m_fixLabel;
    bool m_fullscreen;
    bool m_borderless;
    bool m_fix;
    int m_currentResolution;
};
