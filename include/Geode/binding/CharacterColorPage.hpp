#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>

class CharacterColorPage : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "CharacterColorPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CharacterColorPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CharacterColorPage();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x46b400
     * @note[short] Android: Rebinded
     */
     ~CharacterColorPage();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x43ef14
     * @note[short] Android
     */
    static CharacterColorPage* create();

    /**
     * @note[short] MacOS (ARM): 0x647d0c
     * @note[short] MacOS (Intel): 0x73a320
     * @note[short] Windows: 0xa0690
     * @note[short] iOS: 0x151a9c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x649bbc
     * @note[short] MacOS (Intel): 0x73c1f0
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x153314
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x649b10
     * @note[short] MacOS (Intel): 0x73c150
     * @note[short] Windows: 0xa2f70
     * @note[short] iOS: 0x1532b8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x9ed50
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x6498ac
     * @note[short] MacOS (Intel): 0x73bf10
     * @note[short] Windows: 0xa1bb0
     * @note[short] iOS: 0x153080
     * @note[short] Android
     */
    int activeColorForMode(int mode);

    /**
     * @note[short] MacOS (ARM): 0x64991c
     * @note[short] MacOS (Intel): 0x73bf70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1530dc
     * @note[short] Android
     */
    bool checkColor(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x6495fc
     * @note[short] MacOS (Intel): 0x73bc30
     * @note[short] Windows: 0xa2820
     * @note[short] iOS: 0x152e3c
     * @note[short] Android
     */
    int colorForIndex(int index);

    /**
     * @note[short] MacOS (ARM): 0x648d0c
     * @note[short] MacOS (Intel): 0x73b300
     * @note[short] Windows: 0xa15a0
     * @note[short] iOS: 0x15278c
     * @note[short] Android
     */
    void createColorMenu();

    /**
     * @note[short] MacOS (ARM): 0x649b0c
     * @note[short] MacOS (Intel): 0x73c140
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x649858
     * @note[short] MacOS (Intel): 0x73bea0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x153034
     * @note[short] Android
     */
    cocos2d::CCPoint offsetForIndex(int index);

    /**
     * @note[short] MacOS (ARM): 0x6488c4
     * @note[short] MacOS (Intel): 0x73aee0
     * @note[short] Windows: 0xa2f30
     * @note[short] iOS: 0x1523b4
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6489e0
     * @note[short] MacOS (Intel): 0x73afe0
     * @note[short] iOS: 0x1524cc
     * @note[short] Android
     */
    void onMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x64961c
     * @note[short] MacOS (Intel): 0x67080
     * @note[short] iOS: 0x152e5c
     * @note[short] Android
     */
    void onPlayerColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6490e4
     * @note[short] MacOS (Intel): 0x73b6e0
     * @note[short] iOS: 0x152ae4
     * @note[short] Android
     */
    void toggleGlow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6495a8
     * @note[short] MacOS (Intel): 0x73bbe0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleGlowItems(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x648918
     * @note[short] MacOS (Intel): 0x73af30
     * @note[short] Windows: 0xa1400
     * @note[short] iOS: 0x152408
     * @note[short] Android
     */
    void toggleShip(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x64911c
     * @note[short] MacOS (Intel): 0x73b720
     * @note[short] iOS: 0x152b1c
     * @note[short] Android
     */
    void updateColorMode(int mode);

    /**
     * @note[short] MacOS (ARM): 0x648bcc
     * @note[short] MacOS (Intel): 0x73b1a0
     * @note[short] Windows: 0xa2d10
     * @note[short] iOS: 0x152650
     * @note[short] Android
     */
    void updateIconColors();
    int m_colorMode;
    float m_height;
    float m_width;
    cocos2d::CCArray* m_playerObjects;
    cocos2d::CCArray* m_modeButtons;
    cocos2d::CCDictionary* m_colorButtons;
    cocos2d::CCArray* m_cursors;
    CharacterColorDelegate* m_delegate;
    CCMenuItemToggler* m_glowToggler;
    cocos2d::CCLabelBMFont* m_glowLabel;
};
