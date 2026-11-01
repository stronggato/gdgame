#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/unordered_map.hpp>

class GJOptionsLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "GJOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJOptionsLayer, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJOptionsLayer();

    /**
     * @note[short] Windows: 0x398080
     * @note[short] Android: Rebinded
     */
     ~GJOptionsLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GJOptionsLayer* create(int background);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x36fa24
     * @note[short] Android
     */
    virtual void setupOptions();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void didToggleGV(std::string variable);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void didToggle(int toggle);

    /**
     * @note[short] MacOS (ARM): 0x330e54
     * @note[short] MacOS (Intel): 0x243970
     * @note[short] Windows: 0x398580
     * @note[short] iOS: 0xa510c
     * @note[short] Android
     */
    void addGVToggle(char const* title, char const* variable, char const* description);

    /**
     * @note[short] MacOS (ARM): 0x22c274
     * @note[short] MacOS (Intel): 0x287770
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x36fe70
     * @note[short] Android
     */
    void addToggle(char const* title, int id, bool initial, char const* description);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x36faf4
     * @note[short] Android
     */
    void addToggleInternal(char const* title, int id, bool initial, char const* description);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x5d3d0
     * @note[short] Android
     */
    int countForPage(int page);

    /**
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] Android
     */
    void incrementCountForPage(int page);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* infoKey(int index);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    bool init(int p0, float p1);

    /**
     * @note[short] Android
     */
    cocos2d::CCLayer* layerForPage(int page);

    /**
     * @note[short] MacOS (Intel): 0x707820
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* layerKey(int page);

    /**
     * @note[short] MacOS (ARM): 0x22c278
     * @note[short] MacOS (Intel): 0x287780
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x36fe74
     * @note[short] Android
     */
    cocos2d::CCPoint nextPosition(int page);

    /**
     * @note[short] MacOS (ARM): 0x7795c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* objectKey(int page);

    /**
     * @note[short] Android
     */
    cocos2d::CCArray* objectsForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x22bb7c
     * @note[short] MacOS (Intel): 0x286f70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void offsetToNextPage();

    /**
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
     * @note[short] MacOS (ARM): 0x22c550
     * @note[short] MacOS (Intel): 0x287a80
     * @note[short] Windows: 0x3996b0
     * @note[short] iOS: 0x37007c
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x779598
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* pageKey(int page);
    float m_gap;
    int m_page;
    int m_togglesPerPage;
    int m_toggleCount;
    int m_maxPage;
    float m_maxLabelScale;
    float m_maxLabelWidth;
    cocos2d::CCDictionary* m_values;
    cocos2d::CCDictionary* m_variables;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    float m_offset;
};
