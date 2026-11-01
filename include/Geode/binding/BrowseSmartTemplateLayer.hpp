#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SmartPrefabResult.hpp>
#include <Geode/binding/FLAlertLayer.hpp>

class BrowseSmartTemplateLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "BrowseSmartTemplateLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(BrowseSmartTemplateLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     BrowseSmartTemplateLayer();

    /**
     * @note[short] Windows: 0x5eb9d0
     * @note[short] iOS: 0x46b400
     * @note[short] Android: Rebinded
     */
     ~BrowseSmartTemplateLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x36a690
     * @note[short] Android
     */
    static BrowseSmartTemplateLayer* create(GJSmartTemplate* smartTemplate, SmartBrowseFilter browseFilter);

    /**
     * @note[short] MacOS (ARM): 0x443aa4
     * @note[short] MacOS (Intel): 0x4e4fd0
     * @note[short] Windows: 0x5ed150
     * @note[short] iOS: 0x7abb8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x443ac8
     * @note[short] MacOS (Intel): 0x4e5010
     * @note[short] Windows: 0x5ed170
     * @note[short] iOS: 0x7abdc
     * @note[short] Android
     */
    virtual void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x443440
     * @note[short] MacOS (Intel): 0x4e4930
     * @note[short] iOS: 0x7a650
     * @note[short] Android
     */
    void addObjectToPage(cocos2d::CCObject* object, int page);

    /**
     * @note[short] MacOS (ARM): 0x442aa0
     * @note[short] MacOS (Intel): 0x4e3f80
     * @note[short] iOS: 0x79ebc
     * @note[short] Android
     */
    void addPrefabMenuItem(SmartPrefabResult result, int index);

    /**
     * @note[short] MacOS (ARM): 0x442780
     * @note[short] MacOS (Intel): 0x4e3c40
     * @note[short] Windows: 0x100f80
     * @note[short] iOS: 0x79b94
     * @note[short] Android
     */
    void baseSetup();

    /**
     * @note[short] MacOS (ARM): 0x443530
     * @note[short] MacOS (Intel): 0x4e4a00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7a728
     * @note[short] Android
     */
    void createDots();

    /**
     * @note[short] MacOS (ARM): 0x443784
     * @note[short] MacOS (Intel): 0x4e4c60
     * @note[short] Windows: 0x5ecd60
     * @note[short] iOS: 0x7a974
     * @note[short] Android
     */
    void createPrefab(std::string key, int id);

    /**
     * @note[short] MacOS (ARM): 0x442f44
     * @note[short] MacOS (Intel): 0x4e44a0
     * @note[short] Windows: 0x5ecbf0
     * @note[short] iOS: 0x7a2cc
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x4420b8
     * @note[short] MacOS (Intel): 0x4e3400
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x79678
     * @note[short] Android
     */
    bool init(GJSmartTemplate* smartTemplate, SmartBrowseFilter browseFilter);

    /**
     * @note[short] MacOS (ARM): 0x4434bc
     * @note[short] MacOS (Intel): 0x4e49b0
     * @note[short] Windows: 0x5ed100
     * @note[short] iOS: 0x7a6c8
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x443844
     * @note[short] MacOS (Intel): 0x4e4d10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7aa20
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x443118
     * @note[short] MacOS (Intel): 0x4e4690
     * @note[short] Windows: 0x5ece30
     * @note[short] iOS: 0x7a40c
     * @note[short] Android
     */
    void onTemplateObject(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x443610
     * @note[short] MacOS (Intel): 0x4e4ad0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7a804
     * @note[short] Android
     */
    void updateDots();
    GJSmartTemplate* m_template;
    cocos2d::CCArray* m_pages;
    int m_page;
    cocos2d::CCNode* m_nextPageBtn;
    cocos2d::CCNode* m_prevPageBtn;
    cocos2d::CCArray* m_dotsArray;
};
