#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>

class LevelControlConfig : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "LevelControlConfig";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelControlConfig, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x447180
     * @note[short] Android: Rebinded
     */
    virtual  ~LevelControlConfig();

    /**
     * @note[short] Android
     */
    static LevelControlConfig* create();

    /**
     * @note[short] Android
     */
    TodoReturn bindDefaultController(KeybindSource* p0);

    /**
     * @note[short] Android
     */
    TodoReturn bindDefaultKeyboard(KeybindSource* p0);

    /**
     * @note[short] Android
     */
    TodoReturn bindGlobalBinds(KeybindSource* p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn createFromB64(std::string const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn createFromGlobal(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn decode(std::string const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn encode();

    /**
     * @note[short] Android
     */
    TodoReturn encodeB64();

    /**
     * @note[short] Android
     */
    bool init();

    /**
     * @note[short] Android
     */
    TodoReturn keepClasses(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn presentClasses();

    /**
     * @note[short] Android
     */
    TodoReturn resolveSlot(LevelTouchSlot const& p0, cocos2d::CCSize const& p1);

    /**
     * @note[short] Android
     */
    TodoReturn seedBase();

    /**
     * @note[short] Android
     */
    TodoReturn seedDefaults();

    /**
     * @note[short] Android
     */
    TodoReturn slotFromConfig(UIButtonConfig const& p0, cocos2d::CCSize const& p1, int p2, int p3, bool p4, bool p5);
};
