#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/DialogDelegate.hpp>

class SecretLayer3 : public cocos2d::CCLayer, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretLayer3";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer3, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SecretLayer3();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a8658
     * @note[short] Android: Rebinded
     */
     ~SecretLayer3();

    /**
     * @note[short] MacOS (Intel): 0x49bff0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SecretLayer3* create();

    /**
     * @note[short] MacOS (Intel): 0x4997d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a6f70
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x24b280
     * @note[short] MacOS (Intel): 0x49c0c0
     * @note[short] Windows: 0x57bd30
     * @note[short] iOS: 0x3a87a0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x40888c
     * @note[short] MacOS (Intel): 0x4a0f40
     * @note[short] Windows: 0x581280
     * @note[short] iOS: 0x3ac2b4
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x408880
     * @note[short] MacOS (Intel): 0x4a0f10
     * @note[short] Windows: 0x581270
     * @note[short] iOS: 0x3ac2a8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x408548
     * @note[short] MacOS (Intel): 0x4a0bf0
     * @note[short] Windows: 0x580c50
     * @note[short] iOS: 0x3ac04c
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x4054e8
     * @note[short] MacOS (Intel): 0x49d760
     * @note[short] Windows: 0x57d700
     * @note[short] iOS: 0x3a9a10
     * @note[short] Android
     */
    void animateEyes();

    /**
     * @note[short] MacOS (ARM): 0x406624
     * @note[short] MacOS (Intel): 0x49eac0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3aa818
     * @note[short] Android
     */
    void firstInteractionStep1();

    /**
     * @note[short] MacOS (ARM): 0x4066e0
     * @note[short] MacOS (Intel): 0x49eb80
     * @note[short] Windows: 0x443110
     * @note[short] Android
     */
    void firstInteractionStep2();

    /**
     * @note[short] MacOS (ARM): 0x406ab8
     * @note[short] MacOS (Intel): 0x49efa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3aabc0
     * @note[short] Android
     */
    void firstInteractionStep3();

    /**
     * @note[short] MacOS (ARM): 0x406c28
     * @note[short] MacOS (Intel): 0x49f110
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    void firstInteractionStep4();

    /**
     * @note[short] MacOS (ARM): 0x4064d4
     * @note[short] MacOS (Intel): 0x49e980
     * @note[short] Windows: 0x581100
     * @note[short] iOS: 0x3aa794
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4062fc
     * @note[short] MacOS (Intel): 0x49e7e0
     * @note[short] iOS: 0x3aa5bc
     * @note[short] Android
     */
    void onChest01(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4063e8
     * @note[short] MacOS (Intel): 0x49e8b0
     * @note[short] iOS: 0x3aa6a8
     * @note[short] Android
     */
    void onChest02(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4055dc
     * @note[short] MacOS (Intel): 0x49d850
     * @note[short] Windows: 0x59470
     * @note[short] iOS: 0x3a9af8
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x406fec
     * @note[short] MacOS (Intel): 0x49f4e0
     * @note[short] Windows: 0x57f930
     * @note[short] iOS: 0x3ab010
     * @note[short] Android
     */
    void revealStep1();

    /**
     * @note[short] MacOS (ARM): 0x4075c0
     * @note[short] MacOS (Intel): 0x49faf0
     * @note[short] iOS: 0x3ab4fc
     * @note[short] Android
     */
    void revealStep2();

    /**
     * @note[short] MacOS (ARM): 0x4078c8
     * @note[short] MacOS (Intel): 0x49fe10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ab74c
     * @note[short] Android
     */
    void revealStep3();

    /**
     * @note[short] MacOS (ARM): 0x407964
     * @note[short] MacOS (Intel): 0x49feb0
     * @note[short] Windows: 0x3fc4c0
     * @note[short] iOS: 0x3ab7e8
     * @note[short] Android
     */
    void revealStep4();

    /**
     * @note[short] MacOS (ARM): 0x408090
     * @note[short] MacOS (Intel): 0x4a06c0
     * @note[short] Windows: 0x580690
     * @note[short] iOS: 0x3abccc
     * @note[short] Android
     */
    void revealStep5();

    /**
     * @note[short] MacOS (ARM): 0x407054
     * @note[short] MacOS (Intel): 0x49f540
     * @note[short] Windows: 0xdc220
     * @note[short] iOS: 0x3ab078
     * @note[short] Android
     */
    void showUnlockDialog();
    DungeonBarsSprite* m_dungeonBars;
    bool m_lockInput;
    cocos2d::CCArray* m_locksArray;
    cocos2d::CCSprite* m_demonEyes;
    cocos2d::CCSprite* m_demonBody;
    CCMenuItemSpriteExtra* m_secretChest;
};
