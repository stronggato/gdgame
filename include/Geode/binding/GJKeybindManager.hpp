#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCKeyboardActionManager.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class GJKeybindManager : public cocos2d::CCKeyboardActionManager {
public:
    static constexpr auto CLASS_NAME = "GJKeybindManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJKeybindManager, cocos2d::CCKeyboardActionManager)

    /**
     * @note[short] Windows: 0x385980
     * @note[short] Android: Rebinded
     */
    virtual  ~GJKeybindManager();

    /**
     * @note[short] Android
     */
    static GJKeybindManager* sharedState();

    /**
     * @note[short] Windows: 0x385ab0
     * @note[short] Android
     */
    virtual TodoReturn actionsForKey(cocos2d::enumKeyCodes p0, bool p1, bool p2, bool p3);

    /**
     * @note[short] Windows: 0x385870
     * @note[short] Android
     */
    virtual bool handleGlobalAction(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn actionsForChord(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn actionToString(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn applyImportBlob(std::string const& p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn applyMovementOverride(KeybindSource* p0, KeybindSource* p1);

    /**
     * @note[short] Android
     */
    TodoReturn applyNewDefaults(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn bindChord(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn bindKey(cocos2d::enumKeyCodes p0, bool p1, bool p2, bool p3, int p4);

    /**
     * @note[short] Android
     */
    TodoReturn buildBindsBlob();

    /**
     * @note[short] Android
     */
    TodoReturn chordsForAction(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn chordToString(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn clearMovementOverride();

    /**
     * @note[short] Android
     */
    TodoReturn dataLoaded(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn encodeChord(cocos2d::enumKeyCodes p0, bool p1, bool p2, bool p3);

    /**
     * @note[short] Android
     */
    TodoReturn encodeDataTo(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn exportBindingsToFile();

    /**
     * @note[short] Android
     */
    TodoReturn firstSetup();

    /**
     * @note[short] Android
     */
    TodoReturn globalChordsForAction(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn groupForAction(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn groupsConflict(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn handleGlobalAudioAction(int p0, bool p1);

    /**
     * @note[short] Android
     */
    bool init();

    /**
     * @note[short] Android
     */
    bool isControllerChord(int p0);

    /**
     * @note[short] Android
     */
    bool isExclusive(int p0);

    /**
     * @note[short] Android
     */
    bool isKnownAction(int p0);

    /**
     * @note[short] Android
     */
    bool isMovementAction(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn loadDefaults();

    /**
     * @note[short] Android
     */
    TodoReturn parseBindsBlob(std::string const& p0, bool p1, int* p2, int* p3);

    /**
     * @note[short] Android
     */
    TodoReturn parseImportFile(std::string& p0, int& p1, int& p2, int& p3);

    /**
     * @note[short] Android
     */
    TodoReturn unbindChord(int p0, int p1);
};
