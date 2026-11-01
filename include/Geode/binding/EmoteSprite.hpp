#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/vector.hpp>

class EmoteSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "EmoteSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(EmoteSprite, cocos2d::CCSprite)

    /**
     * @note[short] Windows: 0x7e610
     * @note[short] Android: Rebinded
     */
    virtual  ~EmoteSprite();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual void setColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn attachToLabel(cocos2d::CCLabelBMFont* p0, cocos2d::CCNode* p1, std::vector<EmoteToken> const& p2, float p3);

    /**
     * @note[short] Android
     */
    TodoReturn characterCount(std::string const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn charIndexForByte(std::string const& p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn createWithDef(EmoteDef const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn createWithName(std::string const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn defAtIndex(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn defCount();

    /**
     * @note[short] Android
     */
    TodoReturn defForName(std::string const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn effectiveLength(std::string const& p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn fitToHeight(float p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn heightFactor();

    /**
     * @note[short] Android
     */
    TodoReturn initWithDef(EmoteDef const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn jumboMaxAspect();

    /**
     * @note[short] Android
     */
    TodoReturn jumboMultiScale();

    /**
     * @note[short] Android
     */
    TodoReturn jumboScale();

    /**
     * @note[short] Android
     */
    TodoReturn maxEmotesComment();

    /**
     * @note[short] Android
     */
    TodoReturn maxEmotesMessage();

    /**
     * @note[short] Android
     */
    TodoReturn parseTokens(std::string const& p0, std::vector<EmoteToken>* p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn replaceTokens(std::string const& p0, std::vector<EmoteToken>& p1, float p2);

    /**
     * @note[short] Android
     */
    TodoReturn translateUnicodeEmoji(std::string const& p0);
};
