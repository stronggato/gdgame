#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>
#include <Geode/mapping/CCPoint.hpp>

class MultilineBitmapFont : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "MultilineBitmapFont";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MultilineBitmapFont, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     MultilineBitmapFont();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~MultilineBitmapFont();

    /**
     * @note[short] MacOS (ARM): 0x3e8098
     * @note[short] MacOS (Intel): 0x47dec0
     * @note[short] Windows: 0x79990
     * @note[short] iOS: 0x2cfe20
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x5e5e8
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static MultilineBitmapFont* createWithFont(char const* font, std::string text, float scale, float width, cocos2d::CCPoint anchor, int height, bool disableColor, bool p7, int p8, float p9);

    /**
     * @note[short] MacOS (ARM): 0x4f902c
     * @note[short] Windows: 0x78cb0
     * @note[short] Android
     */
    bool initWithFont(char const* font, std::string text, float scale, float width, cocos2d::CCPoint anchor, int height, bool disableColor, bool p7, int p8, float p9);

    /**
     * @note[short] MacOS (ARM): 0x3e81f4
     * @note[short] MacOS (Intel): 0x47e040
     * @note[short] Windows: 0x7ac10
     * @note[short] iOS: 0x2cfe98
     * @note[short] Android
     */
    void moveSpecialDescriptors(int index, int size);

    /**
     * @note[short] Android
     */
    std::string readColorInfo(std::string text);

    /**
     * @note[short] Android
     */
    TodoReturn readEmoteInfo(std::string p0);

    /**
     * @note[short] MacOS (Intel): 0x886ff0
     * @note[short] iOS: 0x378d18
     * @note[short] Android
     */
    std::string stringWithMaxWidth(std::string text, float width, float scale);
    FontObject* m_fontObject;
    bool m_unk260;
    int m_unk264;
    float m_unk268;
    cocos2d::CCNode* m_emoteNode;
    cocos2d::CCArray* m_specialDescriptors;
    cocos2d::CCArray* m_characters;
    cocos2d::CCArray* m_lines;
    int m_lineMetric;
    bool m_metricWritten;
    void* m_unkPtr;
    int m_height;
    int m_width;
    cocos2d::CCPoint m_position;
    float m_maxWidth;
    bool m_disableColor;
};
