#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class KeybindingsManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "KeybindingsManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(KeybindingsManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x3d7aec
     * @note[short] MacOS (Intel): 0x46c290
     * @note[short] iOS: 0x454ac
     * @note[short] Android
     */
    static KeybindingsManager* sharedState();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    bool commandForKey(cocos2d::enumKeyCodes key, GJKeyGroup group, bool control, bool alt, bool shift);

    /**
     * @note[short] MacOS (ARM): 0x5982dc
     * @note[short] MacOS (Intel): 0x65ed50
     * @note[short] Android
     */
    bool commandForKeyMods(cocos2d::enumKeyCodes key, GJKeyGroup group);

    /**
     * @note[short] Android
     */
    bool commandForKeyNoMods(cocos2d::enumKeyCodes key, GJKeyGroup group);

    /**
     * @note[short] Android
     */
    cocos2d::CCDictionary* commandToKeyForGroup(GJKeyGroup group);

    /**
     * @note[short] MacOS (Intel): 0x2d9160
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (Intel): 0xa2a20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x5e0ce8
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25d194
     * @note[short] Android
     */
    void firstSetup();

    /**
     * @note[short] Android
     */
    GJKeyGroup groupForCommand(GJKeyCommand command);

    /**
     * @note[short] Android
     */
    cocos2d::enumKeyCodes keyForCommand(GJKeyCommand command);

    /**
     * @note[short] Android
     */
    cocos2d::CCDictionary* keyToCommandForGroup(GJKeyGroup group);
    cocos2d::CCDictionary* m_keyToCommandDict;
    cocos2d::CCDictionary* m_commandToKeyDict;
};
