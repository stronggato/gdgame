#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>

class CurrencyRewardLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "CurrencyRewardLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CurrencyRewardLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x1384a0
     * @note[short] Android: Rebinded
     */
    virtual  ~CurrencyRewardLayer();

    /**
     * @note[short] MacOS (ARM): 0x77b930
     * @note[short] MacOS (Intel): 0x886f10
     * @note[short] Windows: 0x138680
     * @note[short] iOS: 0x3ba0d8
     * @note[short] Android
     */
    static CurrencyRewardLayer* create(int orbs, int stars, int moons, int diamonds, CurrencySpriteType demonKey, int keyCount, CurrencySpriteType shardType, int shardsCount, cocos2d::CCPoint position, CurrencyRewardType rewardType, float yOffset, float time);

    /**
     * @note[short] MacOS (ARM): 0x77e7b4
     * @note[short] MacOS (Intel): 0x889f20
     * @note[short] Windows: 0x13b4b0
     * @note[short] iOS: 0x3bc994
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x77dae0
     * @note[short] MacOS (Intel): 0x889120
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3bbdd8
     * @note[short] Android
     */
    void createObjects(CurrencySpriteType type, int count, cocos2d::CCPoint position, float time);

    /**
     * @note[short] MacOS (ARM): 0x77dba4
     * @note[short] MacOS (Intel): 0x8891c0
     * @note[short] Windows: 0xa5510
     * @note[short] iOS: 0x400098
     * @note[short] Android
     */
    void createObjectsFull(CurrencySpriteType type, int count, cocos2d::CCSprite* sprite, cocos2d::CCPoint position, float time);

    /**
     * @note[short] MacOS (ARM): 0x77db48
     * @note[short] MacOS (Intel): 0x889170
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3bbe40
     * @note[short] Android
     */
    void createUnlockObject(cocos2d::CCSprite* sprite, cocos2d::CCPoint position, float time);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementCount(int count);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementDiamondsCount(int count);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementMoonsCount(int count);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementSpecialCount1(int count);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementSpecialCount2(int count);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementStarsCount(int count);

    /**
     * @note[short] MacOS (ARM): 0x1cc7f4
     * @note[short] MacOS (Intel): 0x886ff0
     * @note[short] Windows: 0xe0730
     * @note[short] iOS: 0x3ba1e0
     * @note[short] Android
     */
    bool init(int orbs, int stars, int moons, int diamonds, CurrencySpriteType demonKey, int keyCount, CurrencySpriteType shardType, int shardsCount, cocos2d::CCPoint position, CurrencyRewardType rewardType, float yOffset, float time);

    /**
     * @note[short] MacOS (ARM): 0x77f5e4
     * @note[short] MacOS (Intel): 0x88af50
     * @note[short] Windows: 0x13be50
     * @note[short] iOS: 0x3bd578
     * @note[short] Android
     */
    void pulseSprite(cocos2d::CCSprite* sprite);
    CurrencyRewardDelegate* m_delegate;
    cocos2d::CCArray* m_objects;
    cocos2d::CCLabelBMFont* m_orbsLabel;
    cocos2d::CCLabelBMFont* m_starsLabel;
    cocos2d::CCLabelBMFont* m_moonsLabel;
    cocos2d::CCLabelBMFont* m_diamondsLabel;
    cocos2d::CCLabelBMFont* m_keysLabel;
    cocos2d::CCLabelBMFont* m_shardsLabel;
    cocos2d::CCSprite* m_orbsSprite;
    cocos2d::CCSprite* m_starsSprite;
    cocos2d::CCSprite* m_moonsSprite;
    cocos2d::CCSprite* m_diamondsSprite;
    CurrencySprite* m_keysSprite;
    CurrencySprite* m_shardsSprite;
    cocos2d::CCSpriteBatchNode* m_currencyBatchNode;
    cocos2d::CCSpriteBatchNode* m_orbBatchNode;
    int m_orbs;
    int m_stars;
    int m_moons;
    int m_diamonds;
    int m_keys;
    int m_shards;
    float m_elapsed;
    float m_unknown;
    float m_time;
    cocos2d::CCPoint m_orbsPosition;
    cocos2d::CCPoint m_starsPosition;
    cocos2d::CCPoint m_moonsPosition;
    cocos2d::CCPoint m_diamondsPosition;
    cocos2d::CCPoint m_keysPosition;
    cocos2d::CCPoint m_shardsPosition;
    bool m_particlesAdded;
    bool m_objectsAdded;
    cocos2d::CCNode* m_mainNode;
    int m_rewardCount;
    CurrencyRewardType m_rewardType;
};
