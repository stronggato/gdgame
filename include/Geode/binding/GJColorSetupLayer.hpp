#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/ColorSelectDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class GJColorSetupLayer : public FLAlertLayer, public ColorSelectDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJColorSetupLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJColorSetupLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x35beb0
     * @note[short] Android: Rebinded
     */
    virtual  ~GJColorSetupLayer();

    /**
     * @note[short] Android
     */
    static GJColorSetupLayer* create(LevelSettingsObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1a1284
     * @note[short] MacOS (Intel): 0x1ef390
     * @note[short] Windows: 0x35ce00
     * @note[short] iOS: 0x21faf4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1a1278
     * @note[short] MacOS (Intel): 0x1ef360
     * @note[short] Windows: 0x35cd40
     * @note[short] iOS: 0x21fae8
     * @note[short] Android
     */
    virtual void colorSelectClosed(cocos2d::CCNode* popup);

    /**
     * @note[short] MacOS (ARM): 0x1a0758
     * @note[short] MacOS (Intel): 0x1ee800
     * @note[short] Windows: 0x35c110
     * @note[short] iOS: 0x21f12c
     * @note[short] Android
     */
    bool init(LevelSettingsObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1a110c
     * @note[short] MacOS (Intel): 0x1ef200
     * @note[short] Windows: 0x35cdb0
     * @note[short] iOS: 0x21f990
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a0e14
     * @note[short] MacOS (Intel): 0x1eef10
     * @note[short] Windows: 0x35cc70
     * @note[short] iOS: 0x21f78c
     * @note[short] Android
     */
    void onColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a1074
     * @note[short] MacOS (Intel): 0x1ef160
     * @note[short] iOS: 0x21f938
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a116c
     * @note[short] MacOS (Intel): 0x1ef250
     * @note[short] Windows: 0x35cd50
     * @note[short] iOS: 0x21f9f0
     * @note[short] Android
     */
    void showPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x1a11d0
     * @note[short] MacOS (Intel): 0x1ef2c0
     * @note[short] Windows: 0x35cab0
     * @note[short] iOS: 0x21fa54
     * @note[short] Android
     */
    void updateSpriteColor(ColorChannelSprite* sprite, cocos2d::CCLabelBMFont* label, int id);

    /**
     * @note[short] MacOS (ARM): 0x1a0edc
     * @note[short] MacOS (Intel): 0x1eefd0
     * @note[short] Windows: 0x35c990
     * @note[short] iOS: 0x21f818
     * @note[short] Android
     */
    void updateSpriteColors();
    LevelSettingsObject* m_settingsObject;
    cocos2d::CCDictionary* m_unk290;
    cocos2d::CCDictionary* m_unk298;
    cocos2d::CCArray* m_colorLabels;
    cocos2d::CCArray* m_colorSprites;
    int m_page;
    int m_colorsPerPage;
    int m_totalPages;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    bool m_closeOnSelect;
    ColorSetupDelegate* m_delegate;
    int m_colorID;
};
