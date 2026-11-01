#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EditorWindowPopup.hpp>

class FindObjectPopup : public EditorWindowPopup {
public:
    static constexpr auto CLASS_NAME = "FindObjectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FindObjectPopup, EditorWindowPopup)

    /**
     * @note[short] Windows: 0x17ec80
     * @note[short] Android: Rebinded
     */
    virtual  ~FindObjectPopup();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     FindObjectPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f5af0
     * @note[short] Android
     */
    static FindObjectPopup* create(EditorUI* p0);

    /**
     * @note[short] Windows: 0x17f400
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] Windows: 0x17ed50
     * @note[short] Android
     */
    virtual void onBuildWindowContent();

    /**
     * @note[short] Windows: 0x17f4b0
     * @note[short] Android
     */
    virtual TodoReturn onFieldEnter();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    bool init(EditorUI* p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onFindObjectID(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFindStep(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn runFind(int p0);
    bool m_unknownBool;
};
