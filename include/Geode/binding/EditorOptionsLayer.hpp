#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJOptionsLayer.hpp>

class EditorOptionsLayer : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "EditorOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorOptionsLayer, GJOptionsLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     EditorOptionsLayer();

    /**
     * @note[short] MacOS (ARM): 0x2422e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x165fe8
     * @note[short] Android
     */
    static EditorOptionsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x22ceb0
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x22d8f4
     * @note[short] MacOS (Intel): 0x288e20
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x165c1c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22ced4
     * @note[short] MacOS (Intel): 0x288440
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual void setupOptions();

    /**
     * @note[short] MacOS (ARM): 0x22d874
     * @note[short] MacOS (Intel): 0x288db0
     * @note[short] iOS: 0x165050
     * @note[short] Android
     */
    void onButtonRows(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22d7ec
     * @note[short] MacOS (Intel): 0x288d30
     * @note[short] iOS: 0x164fc8
     * @note[short] Android
     */
    void onButtonsPerRow(cocos2d::CCObject* sender);
    int m_buttonsPerRow;
    int m_buttonRows;
    cocos2d::CCLabelBMFont* m_buttonsPerRowLabel;
    cocos2d::CCLabelBMFont* m_buttonRowsLabel;
};
