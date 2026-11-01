#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/SeedValue.hpp>

class GJStoreItem : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJStoreItem";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJStoreItem, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x2d3f10
     * @note[short] Android: Rebinded
     */
    virtual  ~GJStoreItem();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJStoreItem();

    /**
     * @note[short] MacOS (ARM): 0x261a8
     * @note[short] MacOS (Intel): 0x2be90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3c796c
     * @note[short] Android
     */
    static GJStoreItem* create(int index, int typeID, int unlockType, int price, ShopType shopType);

    /**
     * @note[short] MacOS (ARM): 0x2658c
     * @note[short] MacOS (Intel): 0x2c260
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3c7c48
     * @note[short] Android
     */
    std::string getCurrencyKey();

    /**
     * @note[short] MacOS (ARM): 0x5015c
     * @note[short] MacOS (Intel): 0x565a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3dce30
     * @note[short] Android
     */
    bool init(int index, int typeID, int unlockType, int price, ShopType shopType);
    geode::SeedValueRSV m_index;
    geode::SeedValueRSV m_typeID;
    geode::SeedValueRSV m_unlockType;
    geode::SeedValueRSV m_price;
    ShopType m_shopType;
};
