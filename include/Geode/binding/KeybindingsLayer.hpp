#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TabbedPopupLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class KeybindingsLayer : public TabbedPopupLayer {
public:
    static constexpr auto CLASS_NAME = "KeybindingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(KeybindingsLayer, TabbedPopupLayer)

    /**
     * @note[short] Windows: 0x3d28e0
     * @note[short] Android: Rebinded
     */
    virtual  ~KeybindingsLayer();

    /**
     * @note[short] Android
     */
    static KeybindingsLayer* create(GameSettingsLayer* p0);

    /**
     * @note[short] Windows: 0xa6410
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x3d5b70
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x3d5ca0
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x3d5d80
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x3d5e20
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x19cb10
     * @note[short] Android
     */
    virtual void rebuildContent();

    /**
     * @note[short] Windows: 0x3d59c0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x3d4d20
     * @note[short] Android
     */
    virtual TodoReturn showTab(int p0);

    /**
     * @note[short] Windows: 0x3d3590
     * @note[short] Android
     */
    virtual TodoReturn setupTabs();

    /**
     * @note[short] Windows: 0x3d52f0
     * @note[short] Android
     */
    virtual TodoReturn actionsToShow(int p0);

    /**
     * @note[short] Windows: 0x3d55e0
     * @note[short] Android
     */
    virtual TodoReturn nameForAction(int p0);

    /**
     * @note[short] Windows: 0x3d5630
     * @note[short] Android
     */
    virtual TodoReturn openBindingEditor(int p0, int p1);

    /**
     * @note[short] Windows: 0x3d5660
     * @note[short] Android
     */
    virtual TodoReturn showControllerChords();

    /**
     * @note[short] Windows: 0x3d5680
     * @note[short] Android
     */
    virtual TodoReturn settingsEntries();

    /**
     * @note[short] Windows: 0x5a230
     * @note[short] Android
     */
    virtual TodoReturn crossCheckGlobalConflicts();

    /**
     * @note[short] MacOS (ARM): 0x347868
     * @note[short] Android
     */
    cocos2d::CCLabelBMFont* addKeyPair(char const* action, char const* key);

    /**
     * @note[short] Android
     */
    TodoReturn buildContentForTab(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn buildControllerGlyph(int p0, bool& p1);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    int countForPage(int page);

    /**
     * @note[short] Android
     */
    TodoReturn getActionTable(int& p0);

    /**
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementCountForPage(int page);

    /**
     * @note[short] MacOS (Intel): 0x649760
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    const char* infoKey(int index);

    /**
     * @note[short] Android
     */
    bool init(GameSettingsLayer* p0);

    /**
     * @note[short] Android
     */
    cocos2d::CCLayer* layerForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x7795c0
     * @note[short] MacOS (Intel): 0x649740
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    const char* layerKey(int page);

    /**
     * @note[short] MacOS (ARM): 0x1fba1c
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint nextPosition(int page);

    /**
     * @note[short] MacOS (ARM): 0x779598
     * @note[short] MacOS (Intel): 0x884830
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    const char* objectKey(int page);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* objectsForPage(int page);

    /**
     * @note[short] Android
     */
    void onAddBinding(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3d5ec0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEditBinding(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2db5c
     * @note[short] MacOS (Intel): 0x5612b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    const char* pageKey(int page);

    /**
     * @note[short] Android
     */
    TodoReturn tintGlyph(cocos2d::CCSprite* p0, cocos2d::ccColor3B p1);
    int m_page;
    int m_keyCount;
    int m_maxPage;
    cocos2d::CCDictionary* m_values;
    cocos2d::CCDictionary* m_variables;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
};
