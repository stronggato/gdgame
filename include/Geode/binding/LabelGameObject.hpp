#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/vector.hpp>

class LabelGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "LabelGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LabelGameObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x6342b0
     * @note[short] Android: Rebinded
     */
    virtual  ~LabelGameObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LabelGameObject();

    /**
     * @note[short] MacOS (ARM): 0x15fa68
     * @note[short] MacOS (Intel): 0x1a1600
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x42c96c
     * @note[short] Android
     */
    static LabelGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x15fb38
     * @note[short] MacOS (Intel): 0x1a16f0
     * @note[short] Windows: 0x650b30
     * @note[short] iOS: 0x42ca30
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x15ff3c
     * @note[short] MacOS (Intel): 0x1a1af0
     * @note[short] Windows: 0x650ee0
     * @note[short] iOS: 0x42cd50
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x15fb68
     * @note[short] MacOS (Intel): 0x1a1720
     * @note[short] Windows: 0x650b70
     * @note[short] iOS: 0x42ca60
     * @note[short] Android
     */
    virtual void setupCustomSprites(std::string frameName);

    /**
     * @note[short] MacOS (ARM): 0x1607b8
     * @note[short] MacOS (Intel): 0x1a2460
     * @note[short] Windows: 0x6513a0
     * @note[short] iOS: 0x42d3b4
     * @note[short] Android
     */
    virtual void addMainSpriteToParent(bool reorder);

    /**
     * @note[short] MacOS (ARM): 0x161450
     * @note[short] MacOS (Intel): 0x1a3420
     * @note[short] Windows: 0x651740
     * @note[short] iOS: 0x42d770
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x160574
     * @note[short] MacOS (Intel): 0x1a21f0
     * @note[short] Windows: 0x651180
     * @note[short] iOS: 0x42d1ec
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] Windows: 0x651410
     * @note[short] iOS: 0x42d40c
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x160770
     * @note[short] MacOS (Intel): 0x1a2410
     * @note[short] Windows: 0x651350
     * @note[short] iOS: 0x42d36c
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x15ffc0
     * @note[short] MacOS (Intel): 0x1a1b70
     * @note[short] Windows: 0x650f20
     * @note[short] iOS: 0x42cdd4
     * @note[short] Android
     */
    virtual void updateTextKerning(int kerning);

    /**
     * @note[short] MacOS (ARM): 0x18a8d4
     * @note[short] MacOS (Intel): 0x1d6130
     * @note[short] Windows: 0x6342a0
     * @note[short] iOS: 0x43e5bc
     * @note[short] Android
     */
    virtual int getTextKerning();

    /**
     * @note[short] MacOS (ARM): 0x15fc60
     * @note[short] MacOS (Intel): 0x1a17e0
     * @note[short] iOS: 0x42cb40
     * @note[short] Android
     */
    void createLabel(std::string text);

    /**
     * @note[short] MacOS (ARM): 0x15ff08
     * @note[short] MacOS (Intel): 0x1a1ac0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x42cd1c
     * @note[short] Android
     */
    void queueUpdateLabel(std::string text);

    /**
     * @note[short] MacOS (ARM): 0x62e24
     * @note[short] MacOS (Intel): 0x1a1900
     * @note[short] Windows: 0x650e00
     * @note[short] iOS: 0x42cc0c
     * @note[short] Android
     */
    void removeLabel();

    /**
     * @note[short] MacOS (ARM): 0x161448
     * @note[short] MacOS (Intel): 0x1a3410
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void unlockLabelColor();

    /**
     * @note[short] MacOS (ARM): 0x1603d8
     * @note[short] MacOS (Intel): 0x1a2090
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateLabel(float value);

    /**
     * @note[short] MacOS (ARM): 0x160378
     * @note[short] MacOS (Intel): 0x1a2030
     * @note[short] Windows: 0x6510f0
     * @note[short] iOS: 0x42d0d4
     * @note[short] Android
     */
    void updateLabel(std::string text);

    /**
     * @note[short] MacOS (ARM): 0x15fe98
     * @note[short] MacOS (Intel): 0x1a1a40
     * @note[short] iOS: 0x187b28
     * @note[short] Android
     */
    void updateLabelAlign(int alignment);

    /**
     * @note[short] MacOS (ARM): 0x160480
     * @note[short] MacOS (Intel): 0x1a2120
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d40d4
     * @note[short] Android
     */
    void updateLabelIfDirty();

    /**
     * @note[short] MacOS (ARM): 0x15ffd4
     * @note[short] MacOS (Intel): 0x6cdd0
     * @note[short] Windows: 0x650f40
     * @note[short] iOS: 0x42cde8
     * @note[short] Android
     */
    void updatePreviewLabel();
    cocos2d::CCLabelBMFont* m_label;
    bool m_labelDirty;
    std::string m_labelString;
    bool m_labelColorLocked;
    int m_alignment;
    bool m_showSecondsOnly;
    int m_shownSpecial;
    bool m_isTimeCounter;
    int m_kerning;
    bool m_updateLabel;
};
