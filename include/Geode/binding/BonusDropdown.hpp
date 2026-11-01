#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class BonusDropdown : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "BonusDropdown";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BonusDropdown, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x3f326c
     * @note[short] MacOS (Intel): 0x489df0
     * @note[short] Android
     */
    static BonusDropdown* create(std::string text, int price);

    /**
     * @note[short] MacOS (ARM): 0x3f3344
     * @note[short] MacOS (Intel): 0x489ed0
     * @note[short] Android
     */
    bool init(std::string text, int price);

    /**
     * @note[short] MacOS (ARM): 0x3f35f8
     * @note[short] MacOS (Intel): 0x48a170
     * @note[short] Android
     */
    void show();
    cocos2d::CCLayerColor* m_layerColor;
    float m_yPosition;
    cocos2d::CCScene* m_scene;
};
