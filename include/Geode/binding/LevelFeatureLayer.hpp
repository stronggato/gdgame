#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class LevelFeatureLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "LevelFeatureLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelFeatureLayer, FLAlertLayer)

    /**
     * @note[short] Android
     */
    static LevelFeatureLayer* create(int levelID);

    /**
     * @note[short] MacOS (ARM): 0x45f918
     * @note[short] MacOS (Intel): 0x26e3c0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x45ee74
     * @note[short] MacOS (Intel): 0x503560
     * @note[short] Android
     */
    bool init(int levelID);

    /**
     * @note[short] MacOS (ARM): 0x45f5d8
     * @note[short] MacOS (Intel): 0x503d10
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45f6c8
     * @note[short] MacOS (Intel): 0x503df0
     * @note[short] Android
     */
    void onDown(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45f774
     * @note[short] MacOS (Intel): 0x503ea0
     * @note[short] Android
     */
    void onDown2(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45f86c
     * @note[short] MacOS (Intel): 0x503fa0
     * @note[short] Android
     */
    void onRemoveValues(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45f674
     * @note[short] MacOS (Intel): 0x503da0
     * @note[short] Android
     */
    void onSetEpicOnly(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45f614
     * @note[short] MacOS (Intel): 0x503d40
     * @note[short] Android
     */
    void onSetFeatured(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x21d940
     * @note[short] MacOS (Intel): 0x503ff0
     * @note[short] Android
     */
    void onToggleEpic(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45f720
     * @note[short] MacOS (Intel): 0x503e50
     * @note[short] Android
     */
    void onUp(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45f7cc
     * @note[short] MacOS (Intel): 0x503f00
     * @note[short] Android
     */
    void onUp2(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45f820
     * @note[short] MacOS (Intel): 0x503f50
     * @note[short] Android
     */
    void updateStars();
    cocos2d::CCLabelBMFont* m_featureLabel;
    int m_levelID;
    int m_featurePosition;
    bool m_epicOnly;
    cocos2d::CCSprite* m_epicSprite;
};
