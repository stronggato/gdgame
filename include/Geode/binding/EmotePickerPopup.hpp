#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EditorWindowPopup.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class EmotePickerPopup : public EditorWindowPopup {
public:
    static constexpr auto CLASS_NAME = "EmotePickerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EmotePickerPopup, EditorWindowPopup)

    /**
     * @note[short] Windows: 0x1221b0
     * @note[short] Android: Rebinded
     */
    virtual  ~EmotePickerPopup();

    /**
     * @note[short] Android
     */
    static EmotePickerPopup* create(CCTextInputNode* p0, cocos2d::CCPoint p1, int p2, int p3);

    /**
     * @note[short] Windows: 0x122e60
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x123500
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0, double p1);

    /**
     * @note[short] Windows: 0x1235d0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] Windows: 0x1235e0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x122730
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x122740
     * @note[short] Android
     */
    virtual void onBuildWindowContent();

    /**
     * @note[short] Windows: 0x122e50
     * @note[short] Android
     */
    virtual void onWindowResized();

    /**
     * @note[short] Android
     */
    TodoReturn addCell(EmoteDef const* p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn buttonAnchor(cocos2d::CCNode* p0);

    /**
     * @note[short] Android
     */
    TodoReturn canAddEmote();

    /**
     * @note[short] Android
     */
    TodoReturn createPicker(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    bool init(CCTextInputNode* p0, cocos2d::CCPoint p1, int p2, int p3);

    /**
     * @note[short] Android
     */
    TodoReturn layoutEmoteGrid();

    /**
     * @note[short] Android
     */
    void onPickEmote(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn openAt(EmotePickerPopup* p0, EmotePickerDelegate* p1, cocos2d::CCNode* p2);

    /**
     * @note[short] Android
     */
    TodoReturn refreshEnabled();

    /**
     * @note[short] Android
     */
    TodoReturn toggle(EmotePickerPopup* p0, EmotePickerDelegate* p1, cocos2d::CCNode* p2, CCTextInputNode* p3, int p4, int p5);

    /**
     * @note[short] Android
     */
    TodoReturn togglePicker(EmotePickerPopup* p0, EmotePickerDelegate* p1, cocos2d::CCNode* p2);
};
