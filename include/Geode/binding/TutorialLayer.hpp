#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class TutorialLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "TutorialLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TutorialLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x66b230
     * @note[short] Android: Rebinded
     */
    virtual  ~TutorialLayer();

    /**
     * @note[short] iOS: 0x43ef14
     * @note[short] Android
     */
    static TutorialLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x437e40
     * @note[short] MacOS (Intel): 0x4d7320
     * @note[short] Windows: 0x66b400
     * @note[short] iOS: 0x250fdc
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x4388d8
     * @note[short] MacOS (Intel): 0x4d7d50
     * @note[short] Windows: 0x66c050
     * @note[short] iOS: 0x2518d8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x438410
     * @note[short] MacOS (Intel): 0x4d78a0
     * @note[short] Windows: 0x66b980
     * @note[short] iOS: 0x2514cc
     * @note[short] Android
     */
    void loadPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x4382c8
     * @note[short] MacOS (Intel): 0x4d7780
     * @note[short] Windows: 0x66bfd0
     * @note[short] iOS: 0x25145c
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x43835c
     * @note[short] MacOS (Intel): 0x4d7800
     * @note[short] Windows: 0x66b960
     * @note[short] iOS: 0x2514b4
     * @note[short] Android
     */
    void onNext(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x43888c
     * @note[short] MacOS (Intel): 0x4d7d10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25188c
     * @note[short] Android
     */
    void removeTutorialTexture();
    cocos2d::CCLayer* m_tutorialLayer;
    int m_page;
    CCMenuItemSpriteExtra* m_nextButton;
    CCMenuItemSpriteExtra* m_exitButton;
};
