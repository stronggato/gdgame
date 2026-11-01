#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EditorWindowPopup.hpp>

class MoveStepPopup : public EditorWindowPopup {
public:
    static constexpr auto CLASS_NAME = "MoveStepPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MoveStepPopup, EditorWindowPopup)

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
    virtual  ~MoveStepPopup();

    /**
     * @note[short] Android
     */
    static MoveStepPopup* create(EditorUI* p0);

    /**
     * @note[short] Windows: 0x2c7040
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x2c7010
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] Windows: 0x2c6fe0
     * @note[short] Android
     */
    virtual float getValue(int p0);

    /**
     * @note[short] Windows: 0x2c6d40
     * @note[short] Android
     */
    virtual void onBuildWindowContent();

    /**
     * @note[short] Android
     */
    bool init(EditorUI* p0);

    /**
     * @note[short] Android
     */
    void onReset(cocos2d::CCObject* sender);
};
