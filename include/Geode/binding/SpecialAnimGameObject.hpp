#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EnhancedGameObject.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/vector.hpp>

class SpecialAnimGameObject : public EnhancedGameObject {
public:
    static constexpr auto CLASS_NAME = "SpecialAnimGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SpecialAnimGameObject, EnhancedGameObject)

    /**
     * @note[short] Windows: 0x2861a0
     * @note[short] Android: Rebinded
     */
    virtual  ~SpecialAnimGameObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SpecialAnimGameObject();

    /**
     * @note[short] MacOS (ARM): 0x1545b0
     * @note[short] MacOS (Intel): 0x193ee0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x425f50
     * @note[short] Android
     */
    static SpecialAnimGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x1546f4
     * @note[short] MacOS (Intel): 0x194060
     * @note[short] Windows: 0x63f9b0
     * @note[short] iOS: 0x42600c
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x154700
     * @note[short] MacOS (Intel): 0x194080
     * @note[short] Windows: 0x63f9c0
     * @note[short] iOS: 0x426018
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] Windows: 0x63fa30
     * @note[short] iOS: 0x426078
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1546d4
     * @note[short] MacOS (Intel): 0x194020
     * @note[short] Windows: 0x63f970
     * @note[short] iOS: 0x425fec
     * @note[short] Android
     */
    virtual void updateMainColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x1546e4
     * @note[short] MacOS (Intel): 0x194040
     * @note[short] Windows: 0x63f990
     * @note[short] iOS: 0x425ffc
     * @note[short] Android
     */
    virtual void updateSecondaryColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x1f0e10
     * @note[short] MacOS (Intel): 0x247680
     * @note[short] Windows: 0x2a48b0
     * @note[short] iOS: 0x3e4fe8
     * @note[short] Android
     */
    virtual void updateSyncedAnimation(float totalTime, int frameIndex);

    /**
     * @note[short] MacOS (ARM): 0x1546ac
     * @note[short] MacOS (Intel): 0x194000
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    bool m_skipMainColorUpdate;
    bool m_skipSecondaryColorUpdate;
};
