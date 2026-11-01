#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EditorWindowPopup.hpp>

class EditorCommandsPopup : public EditorWindowPopup {
public:
    static constexpr auto CLASS_NAME = "EditorCommandsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorCommandsPopup, EditorWindowPopup)

    /**
     * @note[short] Windows: 0x17bff0
     * @note[short] Android: Rebinded
     */
    virtual  ~EditorCommandsPopup();

    /**
     * @note[short] Android
     */
    static EditorCommandsPopup* create(EditorUI* p0);

    /**
     * @note[short] Windows: 0x17c0c0
     * @note[short] Android
     */
    virtual void onBuildWindowContent();

    /**
     * @note[short] Windows: 0x17c5b0
     * @note[short] Android
     */
    virtual void onWindowResized();

    /**
     * @note[short] Android
     */
    TodoReturn addCommandButton(char const* p0, EditorCommand p1);

    /**
     * @note[short] Android
     */
    bool init(EditorUI* p0);

    /**
     * @note[short] Android
     */
    TodoReturn layoutCommandButtons();

    /**
     * @note[short] Android
     */
    void onCommand(cocos2d::CCObject* sender);
};
