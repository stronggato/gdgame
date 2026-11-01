#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class ShaderGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ShaderGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShaderGameObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x633e20
     * @note[short] Android: Rebinded
     */
    virtual  ~ShaderGameObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ShaderGameObject();

    /**
     * @note[short] MacOS (Intel): 0x17cd70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ShaderGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x142164
     * @note[short] MacOS (Intel): 0x17ced0
     * @note[short] Windows: 0x637b40
     * @note[short] iOS: 0x41e3a0
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x145c88
     * @note[short] Windows: 0x638aa0
     * @note[short] iOS: 0x2fe178
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] Windows: 0x637ba0
     * @note[short] iOS: 0x41e3fc
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x14211c
     * @note[short] MacOS (Intel): 0x17ce80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    float m_speed;
    float m_strength;
    float m_outer;
    float m_timeOff;
    float m_waveWidth;
    float m_targetX;
    float m_targetY;
    float m_fadeIn;
    float m_fadeOut;
    float m_screenOffsetX;
    float m_screenOffsetY;
    bool m_invert;
    float m_inner;
    float m_maxSize;
    bool m_flip;
    bool m_rotate;
    bool m_dual;
    bool m_useX;
    bool m_useY;
    bool m_snapGrid;
    bool m_hardEdges;
    bool m_disableAll;
    int m_zLayerMin;
    int m_zLayerMax;
    bool m_animate;
    bool m_relative;
    bool m_editorDisabled;
};
