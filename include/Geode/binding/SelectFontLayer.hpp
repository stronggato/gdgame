#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class SelectFontLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectFontLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectFontLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SelectFontLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~SelectFontLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x36a690
     * @note[short] Android
     */
    static SelectFontLayer* create(LevelEditorLayer* editorLayer);

    /**
     * @note[short] MacOS (ARM): 0x22a634
     * @note[short] MacOS (Intel): 0x285750
     * @note[short] Windows: 0x99e20
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x229e84
     * @note[short] MacOS (Intel): 0x284f80
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    bool init(LevelEditorLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x22a4a0
     * @note[short] MacOS (Intel): 0x285590
     * @note[short] Android
     */
    void onChangeFont(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22a464
     * @note[short] MacOS (Intel): 0x285560
     * @note[short] Windows: 0x99df0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x65cd8
     * @note[short] MacOS (Intel): 0x285630
     * @note[short] Windows: 0x1943f0
     * @note[short] Android
     */
    void updateFontLabel();
    int m_font;
    LevelEditorLayer* m_editorLayer;
    cocos2d::CCLabelBMFont* m_fontLabel;
};
