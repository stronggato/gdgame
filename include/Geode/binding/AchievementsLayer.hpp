#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJDropDownLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class AchievementsLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "AchievementsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AchievementsLayer, GJDropDownLayer)

    /**
     * @note[short] Windows: 0x974b0
     * @note[short] Android: Rebinded
     */
    virtual  ~AchievementsLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4a22b8
     * @note[short] Android: Rebinded
     */
     AchievementsLayer();

    /**
     * @note[short] MacOS (ARM): 0x2eaf74
     * @note[short] MacOS (Intel): 0x35c010
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4a1a38
     * @note[short] Android
     */
    static AchievementsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x2eb48c
     * @note[short] MacOS (Intel): 0x35c5c0
     * @note[short] Windows: 0x97810
     * @note[short] iOS: 0x4a20e8
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x2eb030
     * @note[short] MacOS (Intel): 0x35c100
     * @note[short] Windows: 0x97550
     * @note[short] iOS: 0x4a1ae4
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x2eb2bc
     * @note[short] MacOS (Intel): 0x35c3e0
     * @note[short] Windows: 0x978b0
     * @note[short] iOS: 0x4a1da0
     * @note[short] Android
     */
    void loadPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x2eb2b0
     * @note[short] MacOS (Intel): 0x35c3c0
     * @note[short] iOS: 0x4a1d94
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2eb2a4
     * @note[short] MacOS (Intel): 0x35c3a0
     * @note[short] iOS: 0x4a1d88
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2eb5f0
     * @note[short] MacOS (Intel): 0x35c6f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4a2194
     * @note[short] Android
     */
    void setupLevelBrowser(cocos2d::CCArray* arr);

    /**
     * @note[short] MacOS (ARM): 0x2eb678
     * @note[short] MacOS (Intel): 0x35c770
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4a221c
     * @note[short] Android
     */
    void setupPageInfo(int itemCount, int pageStartIdx, int pageEndIdx);
    int m_currentPage;
    CCMenuItemSpriteExtra* m_nextPageButton;
    CCMenuItemSpriteExtra* m_prevPageButton;
    cocos2d::CCLabelBMFont* m_pageLabel;
    cocos2d::CCPoint m_unkPoint;
};
