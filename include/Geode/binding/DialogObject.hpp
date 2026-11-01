#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/ccTypes.hpp>

class DialogObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "DialogObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DialogObject, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x1732b0
     * @note[short] Android: Rebinded
     */
    virtual  ~DialogObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     DialogObject();

    /**
     * @note[short] MacOS (ARM): 0x336b50
     * @note[short] MacOS (Intel): 0x3afbb0
     * @note[short] Windows: 0x9ef80
     * @note[short] iOS: 0x8f4a4
     * @note[short] Android
     */
    static DialogObject* create(std::string character, std::string text, int characterFrame, float textScale, bool unskippable, cocos2d::ccColor3B nameColor);

    /**
     * @note[short] MacOS (ARM): 0x336d08
     * @note[short] MacOS (Intel): 0x3afd40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(std::string character, std::string text, int characterFrame, float textScale, bool unskippable, cocos2d::ccColor3B nameColor);
    std::string m_text;
    std::string m_character;
    int m_characterFrame;
    cocos2d::ccColor3B m_nameColor;
    float m_textScale;
    bool m_unskippable;
};
