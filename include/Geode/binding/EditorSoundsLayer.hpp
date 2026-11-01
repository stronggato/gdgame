#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TabbedPopupLayer.hpp>

class EditorSoundsLayer : public TabbedPopupLayer {
public:
    static constexpr auto CLASS_NAME = "EditorSoundsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorSoundsLayer, TabbedPopupLayer)

    /**
     * @note[short] Windows: 0x19b1d0
     * @note[short] Android: Rebinded
     */
    virtual  ~EditorSoundsLayer();

    /**
     * @note[short] Android
     */
    static EditorSoundsLayer* create(EditorUI* p0);

    /**
     * @note[short] Windows: 0x19d1b0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x19d2e0
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x19d3c0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x19d460
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x19cb10
     * @note[short] Android
     */
    virtual void rebuildContent();

    /**
     * @note[short] Windows: 0x19d920
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x19d000
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x19cb20
     * @note[short] Android
     */
    virtual TodoReturn showTab(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn buildContentForTab(int p0);

    /**
     * @note[short] Android
     */
    bool init(EditorUI* p0);

    /**
     * @note[short] Android
     */
    void onActionRow(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onBrowse(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn setupTabs();
};
