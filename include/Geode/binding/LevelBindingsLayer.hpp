#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/KeybindingsLayer.hpp>

class LevelBindingsLayer : public KeybindingsLayer {
public:
    static constexpr auto CLASS_NAME = "LevelBindingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelBindingsLayer, KeybindingsLayer)

    /**
     * @note[short] Windows: 0x3d28e0
     * @note[short] Android: Rebinded
     */
    virtual  ~LevelBindingsLayer();

    /**
     * @note[short] Android
     */
    static LevelBindingsLayer* create(KeybindSet* p0, bool p1);

    /**
     * @note[short] Windows: 0x44a060
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4495f0
     * @note[short] Android
     */
    virtual TodoReturn setupTabs();

    /**
     * @note[short] Windows: 0x449770
     * @note[short] Android
     */
    virtual TodoReturn actionsToShow(int p0);

    /**
     * @note[short] Windows: 0x4497e0
     * @note[short] Android
     */
    virtual TodoReturn openBindingEditor(int p0, int p1);

    /**
     * @note[short] Windows: 0x3ff70
     * @note[short] Android
     */
    virtual TodoReturn showControllerChords();

    /**
     * @note[short] Windows: 0x449300
     * @note[short] Android
     */
    virtual TodoReturn settingsEntries();

    /**
     * @note[short] Windows: 0x3ff70
     * @note[short] Android
     */
    virtual TodoReturn crossCheckGlobalConflicts();

    /**
     * @note[short] Android
     */
    bool init(KeybindSet* p0, bool p1);

    /**
     * @note[short] Android
     */
    void onApplyGlobal(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClear(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onReset(cocos2d::CCObject* sender);
};
