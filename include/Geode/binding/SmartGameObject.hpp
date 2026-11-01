#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GameObject.hpp>
#include <Geode/mapping/vector.hpp>

class SmartGameObject : public GameObject {
public:
    static constexpr auto CLASS_NAME = "SmartGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SmartGameObject, GameObject)

    /**
     * @note[short] Windows: 0x633820
     * @note[short] Android: Rebinded
     */
    virtual  ~SmartGameObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SmartGameObject();

    /**
     * @note[short] MacOS (ARM): 0x151c10
     * @note[short] MacOS (Intel): 0x191110
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x424428
     * @note[short] Android
     */
    static SmartGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x152434
     * @note[short] MacOS (Intel): 0x191a30
     * @note[short] Windows: 0x63da60
     * @note[short] iOS: 0x4247bc
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] Windows: 0x63d910
     * @note[short] iOS: 0x424624
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x151cd8
     * @note[short] MacOS (Intel): 0x1911e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4244cc
     * @note[short] Android
     */
    bool init(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x151d28
     * @note[short] MacOS (Intel): 0x191230
     * @note[short] Windows: 0x63d710
     * @note[short] iOS: 0x42451c
     * @note[short] Android
     */
    void updateSmartFrame();
    bool m_referenceOnly;
    std::string m_baseFrame;
    std::string m_smartFrame;
};
