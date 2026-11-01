#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class GJRewardObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJRewardObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJRewardObject, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x14d3b0
     * @note[short] Android: Rebinded
     */
    virtual  ~GJRewardObject();

    /**
     * @note[short] MacOS (ARM): 0x4f32c
     * @note[short] MacOS (Intel): 0x55750
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GJRewardObject* create();

    /**
     * @note[short] MacOS (ARM): 0x317a0
     * @note[short] MacOS (Intel): 0x37a70
     * @note[short] Windows: 0x2f60e0
     * @note[short] iOS: 0x3ceef8
     * @note[short] Android
     */
    static GJRewardObject* create(SpecialRewardItem type, int total, int itemID);

    /**
     * @note[short] MacOS (ARM): 0x31728
     * @note[short] MacOS (Intel): 0x37a00
     * @note[short] Windows: 0x2f6070
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GJRewardObject* createItemUnlock(UnlockType type, int id);

    /**
     * @note[short] MacOS (ARM): 0x4f3b4
     * @note[short] MacOS (Intel): 0x557f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3dc374
     * @note[short] Android
     */
    static GJRewardObject* createWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4f4d4
     * @note[short] MacOS (Intel): 0x55900
     * @note[short] Windows: 0x2f6150
     * @note[short] iOS: 0x3dc420
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4f554
     * @note[short] MacOS (Intel): 0x55980
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3dc4a0
     * @note[short] Android
     */
    virtual bool canEncode();

    /**
     * @note[short] MacOS (ARM): 0x4f464
     * @note[short] MacOS (Intel): 0x558a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3dc3b0
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4f388
     * @note[short] MacOS (Intel): 0x557b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(SpecialRewardItem specialRewardItem, int total, int itemID);

    /**
     * @note[short] MacOS (ARM): 0x4f398
     * @note[short] MacOS (Intel): 0x557d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3dc358
     * @note[short] Android
     */
    bool isSpecialType();
    SpecialRewardItem m_specialRewardItem;
    UnlockType m_unlockType;
    int m_itemID;
    int m_total;
};
