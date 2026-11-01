#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SmartPrefabResult.hpp>
#include <Geode/mapping/CCNode.hpp>

class GJSmartBlockPreview : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJSmartBlockPreview";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSmartBlockPreview, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x3b4090
     * @note[short] Android: Rebinded
     */
    virtual  ~GJSmartBlockPreview();

    /**
     * @note[short] MacOS (ARM): 0x38d03c
     * @note[short] MacOS (Intel): 0x414f50
     * @note[short] Windows: 0x3b9430
     * @note[short] iOS: 0x888c
     * @note[short] Android
     */
    static GJSmartBlockPreview* create(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x38ddd4
     * @note[short] MacOS (Intel): 0x415c90
     * @note[short] iOS: 0x93e4
     * @note[short] Android
     */
    void addChance(int count, int total);

    /**
     * @note[short] MacOS (ARM): 0x38dcfc
     * @note[short] MacOS (Intel): 0x415bb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x9340
     * @note[short] Android
     */
    void addCount(int count);

    /**
     * @note[short] MacOS (ARM): 0x38db1c
     * @note[short] MacOS (Intel): 0x4159e0
     * @note[short] iOS: 0x9164
     * @note[short] Android
     */
    void addPreview(std::string key, std::string data, LevelEditorLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0xa97f4
     * @note[short] MacOS (Intel): 0x4153d0
     * @note[short] Windows: 0x3b9810
     * @note[short] iOS: 0x8c9c
     * @note[short] Android
     */
    cocos2d::CCArray* addTemplateGuide(SmartPrefabResult result, float opacity);

    /**
     * @note[short] MacOS (ARM): 0x38d1ec
     * @note[short] MacOS (Intel): 0x4150d0
     * @note[short] Windows: 0x3b9570
     * @note[short] iOS: 0x89ec
     * @note[short] Android
     */
    void addTemplateGuide(std::string key, int type);

    /**
     * @note[short] MacOS (ARM): 0x38dca8
     * @note[short] MacOS (Intel): 0x415b60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x92f0
     * @note[short] Android
     */
    void createInfoLabel();

    /**
     * @note[short] MacOS (ARM): 0x38d178
     * @note[short] MacOS (Intel): 0x415060
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8978
     * @note[short] Android
     */
    bool init(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x38df90
     * @note[short] MacOS (Intel): 0x415e50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x9550
     * @note[short] Android
     */
    void toggleSelectItem(bool selected);
    std::string m_prefabKey;
    cocos2d::CCLabelBMFont* m_infoLabel;
    cocos2d::CCSprite* m_selectSprite;
    bool m_selected;
};
