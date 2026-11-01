#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/BoomScrollLayerDelegate.hpp>
#include <Geode/binding/DynamicScrollDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class LevelSelectLayer : public cocos2d::CCLayer, public BoomScrollLayerDelegate, public DynamicScrollDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelSelectLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x43e270
     * @note[short] Android: Rebinded
     */
    virtual  ~LevelSelectLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LevelSelectLayer();

    /**
     * @note[short] MacOS (ARM): 0x315cb4
     * @note[short] MacOS (Intel): 0x41ed60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26c6e4
     * @note[short] Android
     */
    static LevelSelectLayer* create(int page);

    /**
     * @note[short] MacOS (Intel): 0x41ec30
     * @note[short] Windows: 0x43e420
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(int page);

    /**
     * @note[short] MacOS (ARM): 0x3995e8
     * @note[short] MacOS (Intel): 0x421be0
     * @note[short] Windows: 0x43fd30
     * @note[short] iOS: 0x481ae4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x39967c
     * @note[short] MacOS (Intel): 0x421c80
     * @note[short] Windows: 0x43fd80
     * @note[short] iOS: 0x481af0
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x397884
     * @note[short] MacOS (Intel): 0x41fed0
     * @note[short] Windows: 0x43f470
     * @note[short] iOS: 0x480650
     * @note[short] Android
     */
    virtual void updatePageWithObject(cocos2d::CCObject* layer, cocos2d::CCObject* object);

    /**
     * @note[short] Windows: 0x43f4e0
     * @note[short] Android
     */
    virtual void scrollLayerMoved(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x399558
     * @note[short] MacOS (Intel): 0x421b60
     * @note[short] Windows: 0x43f820
     * @note[short] iOS: 0x481a58
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x3992b4
     * @note[short] MacOS (Intel): 0x4218b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x481928
     * @note[short] Android
     */
    cocos2d::ccColor3B getColorValue(int page1, int page2, float progress);

    /**
     * @note[short] MacOS (ARM): 0x396974
     * @note[short] MacOS (Intel): 0x41ee60
     * @note[short] Windows: 0x43e560
     * @note[short] iOS: 0x47fac4
     * @note[short] Android
     */
    bool init(int page);

    /**
     * @note[short] MacOS (ARM): 0x397700
     * @note[short] MacOS (Intel): 0x41fd40
     * @note[short] Windows: 0x43fce0
     * @note[short] iOS: 0x480540
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDeathTracker(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x397648
     * @note[short] MacOS (Intel): 0x41fc90
     * @note[short] Windows: 0x43f410
     * @note[short] iOS: 0x480488
     * @note[short] Android
     */
    void onDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x41fd90
     * @note[short] Windows: 0x43fe60
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3976d0
     * @note[short] MacOS (Intel): 0x41fd10
     * @note[short] Windows: 0x43fbe0
     * @note[short] iOS: 0x480510
     * @note[short] Android
     */
    void onNext(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x399774
     * @note[short] MacOS (Intel): 0x421e30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x481bb8
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3976a0
     * @note[short] MacOS (Intel): 0x41fce0
     * @note[short] Windows: 0x43fc60
     * @note[short] iOS: 0x4804e0
     * @note[short] Android
     */
    void onPrev(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x397864
     * @note[short] MacOS (Intel): 0x41feb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void tryShowAd();

    /**
     * @note[short] Android
     */
    TodoReturn updateDeathButton(int p0);
    float m_width;
    cocos2d::CCSprite* m_backgroundSprite;
    GJGroundLayer* m_groundLayer;
    BoomScrollLayer* m_scrollLayer;
    int m_unknown;
    int m_scrolls;
    bool m_masterDetectiveUnlocked;
};
