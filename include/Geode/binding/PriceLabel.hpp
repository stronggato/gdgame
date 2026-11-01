#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/ccTypes.hpp>

class PriceLabel : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "PriceLabel";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(PriceLabel, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x41c5e8
     * @note[short] MacOS (Intel): 0x4b81d0
     * @note[short] Android
     */
    static PriceLabel* create(int price);

    /**
     * @note[short] MacOS (ARM): 0x41c70c
     * @note[short] MacOS (Intel): 0x4b82f0
     * @note[short] Android
     */
    bool init(int price);

    /**
     * @note[short] MacOS (ARM): 0x41c928
     * @note[short] MacOS (Intel): 0x4b8530
     * @note[short] Android
     */
    void setColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x41c980
     * @note[short] MacOS (Intel): 0x4b8580
     * @note[short] Android
     */
    void setOpacity(float opacity);

    /**
     * @note[short] MacOS (ARM): 0x41c7f4
     * @note[short] MacOS (Intel): 0x4b83d0
     * @note[short] Android
     */
    void setPrice(int price);
    cocos2d::CCLabelBMFont* m_priceLabel;
    cocos2d::CCSprite* m_coinSprite;
};
