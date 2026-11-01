#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SFXTriggerGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class SongTriggerGameObject : public SFXTriggerGameObject {
public:
    static constexpr auto CLASS_NAME = "SongTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SongTriggerGameObject, SFXTriggerGameObject)

    /**
     * @note[short] Windows: 0x634720
     * @note[short] Android: Rebinded
     */
    virtual  ~SongTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SongTriggerGameObject();

    /**
     * @note[short] MacOS (Intel): 0x1b1480
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SongTriggerGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x16d55c
     * @note[short] MacOS (Intel): 0x1b1f90
     * @note[short] Windows: 0x655ab0
     * @note[short] iOS: 0x4322b4
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] Windows: 0x655890
     * @note[short] iOS: 0x432064
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    bool m_unk7a9;
    bool m_prep;
    bool m_loadPrep;
    int m_songChannel;
};
