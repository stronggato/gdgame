#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class GJRewardItem : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJRewardItem";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJRewardItem, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x2d3e60
     * @note[short] Android: Rebinded
     */
    virtual  ~GJRewardItem();

    /**
     * @note[short] MacOS (ARM): 0x4f614
     * @note[short] MacOS (Intel): 0x55a50
     * @note[short] Windows: 0x2f61e0
     * @note[short] iOS: 0x3dc4fc
     * @note[short] Android
     */
    static GJRewardItem* create();

    /**
     * @note[short] MacOS (ARM): 0x3199c
     * @note[short] MacOS (Intel): 0x37c50
     * @note[short] Windows: 0x2f6520
     * @note[short] iOS: 0x3cf070
     * @note[short] Android
     */
    static GJRewardItem* create(int chestID, int timeRemaining, std::string rewardStr);

    /**
     * @note[short] MacOS (ARM): 0x37570
     * @note[short] MacOS (Intel): 0x3d980
     * @note[short] Windows: 0x2f6330
     * @note[short] iOS: 0x3d2568
     * @note[short] Android
     */
    static GJRewardItem* createSpecial(GJRewardType rewardType, int orbs, int diamonds, SpecialRewardItem specialType1, int specialCount1, SpecialRewardItem specialType2, int specialCount2, int unlockType, int itemID);

    /**
     * @note[short] MacOS (ARM): 0x4f914
     * @note[short] MacOS (Intel): 0x55d70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3dc758
     * @note[short] Android
     */
    static GJRewardItem* createWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4cee4
     * @note[short] MacOS (Intel): 0x52ed0
     * @note[short] Windows: 0x2f6220
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GJRewardItem* createWithObject(GJRewardType type, GJRewardObject* object);

    /**
     * @note[short] MacOS (ARM): 0x31810
     * @note[short] MacOS (Intel): 0x37ae0
     * @note[short] Windows: 0x2f62b0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GJRewardItem* createWithObjects(GJRewardType type, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4f898
     * @note[short] MacOS (Intel): 0x55d00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3dc6e0
     * @note[short] Android
     */
    static SpecialRewardItem getNextShardType(SpecialRewardItem type);

    /**
     * @note[short] MacOS (ARM): 0x33f58
     * @note[short] MacOS (Intel): 0x3a120
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3d0614
     * @note[short] Android
     */
    static SpecialRewardItem getRandomNonMaxShardType();

    /**
     * @note[short] MacOS (ARM): 0x4f8bc
     * @note[short] MacOS (Intel): 0x55d20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3dc704
     * @note[short] Android
     */
    static SpecialRewardItem getRandomShardType();

    /**
     * @note[short] MacOS (ARM): 0x322b0
     * @note[short] MacOS (Intel): 0x38580
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static bool isShardType(SpecialRewardItem type);

    /**
     * @note[short] MacOS (Intel): 0x385a0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x3cf628
     * @note[short] Android
     */
    static std::string rewardItemToStat(SpecialRewardItem rewardItem);

    /**
     * @note[short] MacOS (ARM): 0x4fa48
     * @note[short] MacOS (Intel): 0x55e80
     * @note[short] Windows: 0x2f6ce0
     * @note[short] iOS: 0x3dc7ec
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4fab4
     * @note[short] MacOS (Intel): 0x55ee0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3dc858
     * @note[short] Android
     */
    virtual bool canEncode();

    /**
     * @note[short] MacOS (ARM): 0x4f9c0
     * @note[short] MacOS (Intel): 0x55e00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3dc788
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x36990
     * @note[short] MacOS (Intel): 0x3ce90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3d1ed8
     * @note[short] Android
     */
    int getRewardCount(SpecialRewardItem type);

    /**
     * @note[short] MacOS (ARM): 0x3246c
     * @note[short] MacOS (Intel): 0x386a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3cf658
     * @note[short] Android
     */
    GJRewardObject* getRewardObjectForType(SpecialRewardItem type);

    /**
     * @note[short] MacOS (ARM): 0x4f644
     * @note[short] MacOS (Intel): 0x55a80
     * @note[short] Windows: 0x2f65f0
     * @note[short] iOS: 0x3dc570
     * @note[short] Android
     */
    bool init(int chestID, int timeRemaining, std::string rewardStr);
    int m_chestID;
    int m_timeRemaining;
    GJRewardType m_rewardType;
    cocos2d::CCArray* m_rewardObjects;
    bool m_unk;
};
