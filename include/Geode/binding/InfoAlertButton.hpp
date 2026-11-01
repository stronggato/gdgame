#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CCMenuItemSpriteExtra.hpp>

class InfoAlertButton : public CCMenuItemSpriteExtra {
public:
    static constexpr auto CLASS_NAME = "InfoAlertButton";
    GEODE_CUSTOM_CONSTRUCTOR_GD(InfoAlertButton, CCMenuItemSpriteExtra)

    /**
     * @note[short] Windows: 0x3caaf0
     * @note[short] Android: Rebinded
     */
    virtual  ~InfoAlertButton();

    /**
     * @note[short] MacOS (ARM): 0x4f1018
     * @note[short] MacOS (Intel): 0x5a2010
     * @note[short] Windows: 0x3cab70
     * @note[short] iOS: 0x1f7150
     * @note[short] Android
     */
    static InfoAlertButton* create(std::string title, std::string desc, float spriteScale);

    /**
     * @note[short] MacOS (ARM): 0x4f12a8
     * @note[short] MacOS (Intel): 0x5a2290
     * @note[short] Windows: 0x3cad70
     * @note[short] iOS: 0x1f7364
     * @note[short] Android
     */
    virtual void activate();

    /**
     * @note[short] MacOS (ARM): 0x4f1204
     * @note[short] MacOS (Intel): 0x5a21f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f72c0
     * @note[short] Android
     */
    bool init(std::string title, std::string desc, float spriteScale);
    std::string m_title;
    std::string m_description;
    float m_textScale;
    bool m_scroll;
};
