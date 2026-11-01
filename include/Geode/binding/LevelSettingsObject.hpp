#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class LevelSettingsObject : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "LevelSettingsObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelSettingsObject, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x3ea290
     * @note[short] Android: Rebinded
     */
    virtual  ~LevelSettingsObject();

    /**
     * @note[short] Android
     */
    static LevelSettingsObject* create();

    /**
     * @note[short] MacOS (Intel): 0x904be0
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    static LevelSettingsObject* objectFromDict(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x9cc58
     * @note[short] MacOS (Intel): 0xae8c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f7208
     * @note[short] Android
     */
    static LevelSettingsObject* objectFromString(std::string const& str);

    /**
     * @note[short] MacOS (ARM): 0xbfcc4
     * @note[short] MacOS (Intel): 0x63fe0
     * @note[short] Windows: 0x40bcb0
     * @note[short] iOS: 0x40bdb4
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    TodoReturn findIDByName(std::string const& p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn getCustomSFXPathRaw(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn getIDName(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn getIDNames(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getIDUseOrder(int p0);

    /**
     * @note[short] MacOS (Intel): 0xb3220
     * @note[short] Windows: 0x40bfc0
     * @note[short] Android
     */
    std::string getSaveString();

    /**
     * @note[short] Android
     */
    TodoReturn removeFromIDUseOrder(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn sanitizeIDName(std::string const& p0);

    /**
     * @note[short] Android
     */
    void setIDName(int p0, std::string const& p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0xc340c
     * @note[short] MacOS (Intel): 0xddb60
     * @note[short] iOS: 0x40dd0c
     * @note[short] Android
     */
    void setupColorsFromLegacyMode(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (Intel): 0xd9eb0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool shouldUseYSection();

    /**
     * @note[short] Android
     */
    TodoReturn touchIDUsage(int p0, int p1);
    GJEffectManager* m_effectManager;
    int m_startMode;
    Speed m_startSpeed;
    bool m_startMini;
    bool m_startDual;
    bool m_mirrorMode;
    bool m_rotateGameplay;
    bool m_twoPlayerMode;
    bool m_platformerMode;
    float m_songOffset;
    bool m_fadeIn;
    bool m_fadeOut;
    bool m_dontReset;
    int m_backgroundIndex;
    int m_groundIndex;
    int m_fontIndex;
    int m_middleGroundIndex;
    bool m_startsWithStartPos;
    bool m_isFlipped;
    bool m_reverseGameplay;
    bool m_disableStartPos;
    int m_targetOrder;
    int m_targetChannel;
    GJGameLevel* m_level;
    std::string m_guidelineString;
    bool m_guidelinesUpdated;
    int m_colorPage;
    int m_groundLineIndex;
    bool m_propertykA23;
    bool m_propertykA24;
    bool m_noTimePenalty;
    int m_propertykA44;
    int m_nextFreeID;
    bool m_resetCamera;
    int m_spawnGroup;
    bool m_allowMultiRotation;
    bool m_enablePlayerSqueeze;
    bool m_fixGravityBug;
    bool m_fixNegativeScale;
    bool m_fixRobotJump;
    bool m_dynamicLevelHeight;
    bool m_sortGroups;
    bool m_fixRadiusCollision;
    bool m_enable22Changes;
    bool m_allowStaticRotate;
    bool m_reverseSync;
    bool m_decreaseBoostSlide;
    bool m_enableImpulseFix;
};
