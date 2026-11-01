#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GameObject.hpp>
#include <Geode/mapping/vector.hpp>

class TextGameObject : public GameObject {
public:
    static constexpr auto CLASS_NAME = "TextGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TextGameObject, GameObject)

    /**
     * @note[short] Windows: 0x2861a0
     * @note[short] Android: Rebinded
     */
    virtual  ~TextGameObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     TextGameObject();

    /**
     * @note[short] MacOS (ARM): 0x5a4928
     * @note[short] MacOS (Intel): 0x671550
     * @note[short] Windows: 0x2a1dd0
     * @note[short] iOS: 0x2ef808
     * @note[short] Android
     */
    static TextGameObject* create(cocos2d::CCTexture2D* texture);

    /**
     * @note[short] MacOS (ARM): 0x5bca84
     * @note[short] MacOS (Intel): 0x6a13e0
     * @note[short] Windows: 0x2a2650
     * @note[short] iOS: 0x300228
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x5bcbf0
     * @note[short] MacOS (Intel): 0x6a1510
     * @note[short] Windows: 0x2a27f0
     * @note[short] iOS: 0x300368
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (Intel): 0xc5f10
     * @note[short] Windows: 0x2a1eb0
     * @note[short] Android
     */
    virtual void updateTextKerning(int kerning);

    /**
     * @note[short] MacOS (ARM): 0x5bd3d8
     * @note[short] MacOS (Intel): 0x6a1f00
     * @note[short] Windows: 0x286140
     * @note[short] iOS: 0x3006b8
     * @note[short] Android
     */
    virtual int getTextKerning();

    /**
     * @note[short] MacOS (ARM): 0x5bc5dc
     * @note[short] MacOS (Intel): 0x6a0f40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(cocos2d::CCTexture2D* texture);

    /**
     * @note[short] iOS: 0x4478
     * @note[short] Android
     */
    void updateTextObject(std::string text, bool defaultFont);
    std::string m_text;
    int m_kerning;
};
