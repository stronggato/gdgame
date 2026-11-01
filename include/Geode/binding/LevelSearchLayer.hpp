#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/TextInputDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/DemonFilterDelegate.hpp>

class LevelSearchLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public DemonFilterDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelSearchLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelSearchLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LevelSearchLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~LevelSearchLayer();

    /**
     * @note[short] MacOS (ARM): 0x3968a8
     * @note[short] MacOS (Intel): 0x702460
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2fc1c
     * @note[short] Android
     */
    static LevelSearchLayer* create(int type);

    /**
     * @note[short] MacOS (ARM): 0x3967bc
     * @note[short] MacOS (Intel): 0x702330
     * @note[short] Windows: 0x4311e0
     * @note[short] iOS: 0x47f9b8
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(int type);

    /**
     * @note[short] MacOS (ARM): 0x6189dc
     * @note[short] MacOS (Intel): 0x707840
     * @note[short] Windows: 0x438490
     * @note[short] iOS: 0x5d458
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x434e20
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] Windows: 0x434f80
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (Intel): 0x706f50
     * @note[short] Windows: 0x434f80
     * @note[short] iOS: 0x5ce78
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x617e64
     * @note[short] MacOS (Intel): 0x23e6f0
     * @note[short] Windows: 0x434de0
     * @note[short] iOS: 0x5cc74
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x6179a8
     * @note[short] MacOS (Intel): 0x7067c0
     * @note[short] Windows: 0x433740
     * @note[short] iOS: 0x5c918
     * @note[short] Android
     */
    virtual void demonFilterSelectClosed(int filter);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x5d348
     * @note[short] Android
     */
    bool checkDiff(int diff);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x5d3d0
     * @note[short] Android
     */
    bool checkTime(int time);

    /**
     * @note[short] MacOS (ARM): 0x6172d4
     * @note[short] iOS: 0x5cac0
     * @note[short] Android
     */
    void clearFilters();

    /**
     * @note[short] MacOS (ARM): 0x615fa4
     * @note[short] MacOS (Intel): 0x704d60
     * @note[short] iOS: 0x5b3a8
     * @note[short] Android
     */
    void confirmClearFilters(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61780c
     * @note[short] MacOS (Intel): 0x7065a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    char const* getDiffKey(int diff);

    /**
     * @note[short] MacOS (ARM): 0x61865c
     * @note[short] MacOS (Intel): 0x7074f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x5d28c
     * @note[short] Android
     */
    std::string getLevelLenKey();

    /**
     * @note[short] MacOS (ARM): 0x618564
     * @note[short] MacOS (Intel): 0x707400
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x5d194
     * @note[short] Android
     */
    std::string getSearchDiffKey();

    /**
     * @note[short] MacOS (ARM): 0x514c2c
     * @note[short] MacOS (Intel): 0x57ef70
     * @note[short] Windows: 0x435420
     * @note[short] iOS: 0x5cef8
     * @note[short] Android
     */
    GJSearchObject* getSearchObject(SearchType type, std::string query);

    /**
     * @note[short] MacOS (ARM): 0x6189b4
     * @note[short] MacOS (Intel): 0x707820
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    char const* getTimeKey(int time);

    /**
     * @note[short] MacOS (ARM): 0x3e6a30
     * @note[short] MacOS (Intel): 0x702570
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x289a2c
     * @note[short] Android
     */
    bool init(int type);

    /**
     * @note[short] MacOS (ARM): 0x6174a0
     * @note[short] MacOS (Intel): 0x706240
     * @note[short] Windows: 0x4371e0
     * @note[short] iOS: 0x5c5f0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6166d8
     * @note[short] MacOS (Intel): 0x7054d0
     * @note[short] Windows: 0x4371a0
     * @note[short] iOS: 0x5b930
     * @note[short] Android
     */
    void onClearFreeSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6181fc
     * @note[short] MacOS (Intel): 0x707020
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFollowed(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x616b2c
     * @note[short] MacOS (Intel): 0x705900
     * @note[short] Android
     */
    void onFriends(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onHyped(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onLatestStars(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMagic(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x616084
     * @note[short] MacOS (Intel): 0x704e40
     * @note[short] iOS: 0x5b45c
     * @note[short] Android
     */
    void onMoreOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMostDownloaded(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMostLikes(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMostRecent(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x616418
     * @note[short] MacOS (Intel): 0x705230
     * @note[short] iOS: 0x5b6b0
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6160a0
     * @note[short] MacOS (Intel): 0x704e60
     * @note[short] Windows: 0x4339b0
     * @note[short] iOS: 0x5b478
     * @note[short] Android
     */
    void onSearchMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6165a0
     * @note[short] MacOS (Intel): 0x7053a0
     * @note[short] iOS: 0x5b7f4
     * @note[short] Android
     */
    void onSearchUser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6170f4
     * @note[short] MacOS (Intel): 0x705ec0
     * @note[short] Android
     */
    void onSpecialDemon(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x616b98
     * @note[short] MacOS (Intel): 0x705970
     * @note[short] iOS: 0x5bf98
     * @note[short] Android
     */
    void onStarAward(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSuggested(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTrending(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x616c04
     * @note[short] MacOS (Intel): 0x7059e0
     * @note[short] Windows: 0x437ac0
     * @note[short] iOS: 0x5c03c
     * @note[short] Android
     */
    void toggleDifficulty(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6174f8
     * @note[short] MacOS (Intel): 0x706290
     * @note[short] iOS: 0x5c648
     * @note[short] Android
     */
    void toggleDifficultyNum(int diff, bool enabled);

    /**
     * @note[short] Android
     */
    TodoReturn toggleNoStar(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (Intel): 0x2ec420
     * @note[short] Windows: 0x502550
     * @note[short] Android
     */
    void toggleStar(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x617130
     * @note[short] MacOS (Intel): 0x705f00
     * @note[short] iOS: 0x5c304
     * @note[short] Android
     */
    void toggleTime(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61767c
     * @note[short] MacOS (Intel): 0x706410
     * @note[short] iOS: 0x5c748
     * @note[short] Android
     */
    void toggleTimeNum(int time, bool enabled);

    /**
     * @note[short] MacOS (ARM): 0x6160e4
     * @note[short] MacOS (Intel): 0x704eb0
     * @note[short] Windows: 0x435060
     * @note[short] iOS: 0x5b4bc
     * @note[short] Android
     */
    void updateSearchLabel(char const* label);
    int m_type;
    CCTextInputNode* m_searchInput;
    cocos2d::CCSprite* m_starsSprite;
    cocos2d::CCArray* m_difficultySprites;
    cocos2d::CCArray* m_lengthSprites;
    cocos2d::CCDictionary* m_difficultyDict;
    cocos2d::CCSprite* m_lastDifficultySprite;
    CCMenuItemSpriteExtra* m_demonTypeButton;
};
