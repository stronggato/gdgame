#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/SFXBrowserDelegate.hpp>

class EditorSFXActionConfigLayer : public SetupTriggerPopup, public SFXBrowserDelegate {
public:
    static constexpr auto CLASS_NAME = "EditorSFXActionConfigLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorSFXActionConfigLayer, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x181e50
     * @note[short] Android: Rebinded
     */
    virtual  ~EditorSFXActionConfigLayer();

    /**
     * @note[short] Android
     */
    static EditorSFXActionConfigLayer* create(int p0, EditorSoundsLayer* p1);

    /**
     * @note[short] Windows: 0x183800
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x183930
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x183a10
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x183ab0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x183660
     * @note[short] Android
     */
    virtual void rebuildContent();

    /**
     * @note[short] Windows: 0x183670
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] Windows: 0x183240
     * @note[short] Android
     */
    virtual float getValue(int p0);

    /**
     * @note[short] Windows: 0x1833b0
     * @note[short] Android
     */
    virtual void sfxBrowserClosed(SFXBrowser* p0);

    /**
     * @note[short] Android
     */
    bool init(int p0, EditorSoundsLayer* p1);

    /**
     * @note[short] Android
     */
    void onAddSound(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDeleteSound(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEditSound(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onOpenSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPreviewSound(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn refreshModeButtons();

    /**
     * @note[short] Android
     */
    TodoReturn refreshRows();

    /**
     * @note[short] Android
     */
    TodoReturn refreshRowsAddedDeferred(float p0);
};
