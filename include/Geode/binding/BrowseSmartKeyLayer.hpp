#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/BrowseSmartTemplateLayer.hpp>

class BrowseSmartKeyLayer : public BrowseSmartTemplateLayer {
public:
    static constexpr auto CLASS_NAME = "BrowseSmartKeyLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(BrowseSmartKeyLayer, BrowseSmartTemplateLayer)

    /**
     * @note[short] Windows: 0x5e8370
     * @note[short] Android: Rebinded
     */
    virtual  ~BrowseSmartKeyLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     BrowseSmartKeyLayer();

    /**
     * @note[short] MacOS (ARM): 0x23408c
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x374e14
     * @note[short] Android
     */
    static BrowseSmartKeyLayer* create(GJSmartTemplate* smartTemplate, std::string prefabKey);

    /**
     * @note[short] MacOS (ARM): 0x444f18
     * @note[short] MacOS (Intel): 0x4e65e0
     * @note[short] Windows: 0x5ee3e0
     * @note[short] iOS: 0x7bd24
     * @note[short] Android
     */
    virtual void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x444a90
     * @note[short] MacOS (Intel): 0x4e6150
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7b984
     * @note[short] Android
     */
    void addChanceToSelected(int chance, bool zero);

    /**
     * @note[short] MacOS (ARM): 0x4446dc
     * @note[short] MacOS (Intel): 0x4e5e20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7b684
     * @note[short] Android
     */
    void createTemplateObjects();

    /**
     * @note[short] MacOS (ARM): 0x44490c
     * @note[short] MacOS (Intel): 0x4e5fc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7b81c
     * @note[short] Android
     */
    void deletedSelectedItems();

    /**
     * @note[short] MacOS (ARM): 0x444c74
     * @note[short] MacOS (Intel): 0x4e6330
     * @note[short] Windows: 0x1b5ba0
     * @note[short] iOS: 0x7bab0
     * @note[short] Android
     */
    cocos2d::CCArray* getAllSelectedBlocks();

    /**
     * @note[short] MacOS (ARM): 0x443c4c
     * @note[short] MacOS (Intel): 0x4e5260
     * @note[short] Windows: 0x4472f0
     * @note[short] iOS: 0x7acbc
     * @note[short] Android
     */
    bool init(GJSmartTemplate* smartTemplate, std::string prefabKey);

    /**
     * @note[short] MacOS (ARM): 0x444638
     * @note[short] MacOS (Intel): 0x4e5d90
     * @note[short] iOS: 0x7b5e8
     * @note[short] Android
     */
    void onButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x44460c
     * @note[short] MacOS (Intel): 0x4e5d60
     * @note[short] iOS: 0x7b5bc
     * @note[short] Android
     */
    void onPrefabObject(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x444d3c
     * @note[short] MacOS (Intel): 0x4e6400
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x7bb6c
     * @note[short] Android
     */
    void updateChanceValues();
    std::string m_prefabKey;
    int m_templatePage;
};
