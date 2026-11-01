#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class TextArea : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "TextArea";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(TextArea, cocos2d::CCSprite)

    /**
     * @note[short] Windows: 0x89c40
     * @note[short] Android: Rebinded
     */
    virtual  ~TextArea();

    /**
     * @note[short] MacOS (ARM): 0x29f584
     * @note[short] MacOS (Intel): 0x30c6b0
     * @note[short] Windows: 0x89cc0
     * @note[short] Android
     */
    static TextArea* create(std::string str, char const* font, float scale, float width, cocos2d::CCPoint anchor, float lineHeight, bool disableColor, int p7);

    /**
     * @note[short] MacOS (ARM): 0x2a0520
     * @note[short] MacOS (Intel): 0x30d740
     * @note[short] Windows: 0x8a7d0
     * @note[short] iOS: 0x11acd4
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x2a051c
     * @note[short] MacOS (Intel): 0x30d730
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x11acd0
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x2a0378
     * @note[short] MacOS (Intel): 0x30d590
     * @note[short] Windows: 0x8a6e0
     * @note[short] iOS: 0x11ab34
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x2a03e4
     * @note[short] MacOS (Intel): 0x30d600
     * @note[short] Windows: 0x8a720
     * @note[short] iOS: 0x11aba0
     * @note[short] Android
     */
    void colorAllCharactersTo(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x2a04a8
     * @note[short] MacOS (Intel): 0x30d6b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x11ac5c
     * @note[short] Android
     */
    void colorAllLabels(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x2a00a8
     * @note[short] MacOS (Intel): 0x30d2d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float fadeIn(float duration, bool unused);

    /**
     * @note[short] MacOS (ARM): 0x2a0660
     * @note[short] MacOS (Intel): 0x30d8e0
     * @note[short] Windows: 0x8a9d0
     * @note[short] iOS: 0x11ae0c
     * @note[short] Android
     */
    float fadeInCharacters(float duration, float charDuration, bool fadeOut, TextFadeInStyle style);

    /**
     * @note[short] MacOS (ARM): 0x2a0278
     * @note[short] MacOS (Intel): 0x30d490
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void fadeOut(float duration);

    /**
     * @note[short] MacOS (ARM): 0x2a0208
     * @note[short] MacOS (Intel): 0x30d430
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void fadeOutAndRemove();

    /**
     * @note[short] MacOS (ARM): 0x2a01e4
     * @note[short] MacOS (Intel): 0x30d400
     * @note[short] Windows: 0x8a6c0
     * @note[short] iOS: 0x11ab10
     * @note[short] Android
     */
    void finishFade();

    /**
     * @note[short] Android
     */
    TodoReturn fitString(std::string p0, float p1, float p2, float p3, float p4);

    /**
     * @note[short] MacOS (ARM): 0x29fb30
     * @note[short] MacOS (Intel): 0x30ccf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void hideAll();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(std::string str, char const* font, float scale, float width, cocos2d::CCPoint anchor, float lineHeight, bool disableColor, int p7);

    /**
     * @note[short] Android
     */
    void setEmoteMaxAspect(float p0);

    /**
     * @note[short] MacOS (ARM): 0x29fb0c
     * @note[short] MacOS (Intel): 0x30ccb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setIgnoreColorCode(bool ignore);

    /**
     * @note[short] Android
     */
    void setParseEmotes(int p0);

    /**
     * @note[short] MacOS (ARM): 0x29f850
     * @note[short] MacOS (Intel): 0x30c990
     * @note[short] Windows: 0x89f20
     * @note[short] iOS: 0x11a4a4
     * @note[short] Android
     */
    void setString(std::string text);

    /**
     * @note[short] MacOS (ARM): 0x29ffcc
     * @note[short] MacOS (Intel): 0x30d1f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x11aad4
     * @note[short] Android
     */
    void showAll();

    /**
     * @note[short] MacOS (ARM): 0x29ff0c
     * @note[short] MacOS (Intel): 0x30d130
     * @note[short] Windows: 0x8a600
     * @note[short] iOS: 0x11aa1c
     * @note[short] Android
     */
    void stopAllCharacterActions();
    bool m_disableColor;
    bool m_unk259;
    int m_unk25c;
    float m_unk260;
    MultilineBitmapFont* m_label;
    float m_width;
    float m_unknown;
    std::string m_fontFile;
    float m_height;
    bool m_onTimerUnused;
    cocos2d::CCPoint m_anchorPoint;
    bool m_allShown;
    float m_scale;
    int m_rectHeight;
    int m_rectWidth;
    float m_maxWidth;
    cocos2d::CCPoint m_textPos;
    TextAreaDelegate* m_delegate;
    cocos2d::CCDictionary* m_shakeCharacters;
    float m_shakeElapsed;
};
