#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/vector.hpp>

class GameToolbox {
public:
    static constexpr auto CLASS_NAME = "GameToolbox";

    /**
     * @note[short] MacOS (ARM): 0x449a98
     * @note[short] MacOS (Intel): 0x4eba80
     * @note[short] Windows: 0x5b230
     * @note[short] iOS: 0x497e0
     * @note[short] Android
     */
    static void addBackButton(cocos2d::CCLayer* parent, cocos2d::CCMenuItem* menuItem);

    /**
     * @note[short] Android
     */
    static TodoReturn addProgressBarFill(cocos2d::CCSprite* p0, int p1, cocos2d::ccColor3B p2, int p3);

    /**
     * @note[short] MacOS (ARM): 0x449b80
     * @note[short] MacOS (Intel): 0x4ebb50
     * @note[short] Windows: 0x6ef90
     * @note[short] iOS: 0x498c4
     * @note[short] Android
     */
    static void addRThumbScrollButton(cocos2d::CCLayer* parent);

    /**
     * @note[short] MacOS (ARM): 0x446f80
     * @note[short] MacOS (Intel): 0x4e8c40
     * @note[short] Windows: 0x6c5d0
     * @note[short] iOS: 0x4772c
     * @note[short] Android
     */
    static void alignItemsHorisontally(cocos2d::CCArray* items, float gap, cocos2d::CCPoint position, bool skipSize);

    /**
     * @note[short] MacOS (ARM): 0x447238
     * @note[short] MacOS (Intel): 0x4e8f70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x478f4
     * @note[short] Android
     */
    static void alignItemsVertically(cocos2d::CCArray* items, float gap, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x450d6c
     * @note[short] MacOS (Intel): 0x4f3b90
     * @note[short] Windows: 0x73010
     * @note[short] iOS: 0x4da38
     * @note[short] Android
     */
    static float bounceTime(float time);

    /**
     * @note[short] MacOS (ARM): 0x44a1f0
     * @note[short] MacOS (Intel): 0x4ec1d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static cocos2d::ccColor3B colorToSepia(cocos2d::ccColor3B color, float factor);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void contentScaleClipRect(cocos2d::CCRect& rect);

    /**
     * @note[short] MacOS (ARM): 0x44b8d4
     * @note[short] MacOS (Intel): 0x4ed900
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static std::string createHashString(std::string const& str, int length);

    /**
     * @note[short] Android
     */
    static TodoReturn createInputNode(float p0, float p1, char const* p2, int p3);

    /**
     * @note[short] Android
     */
    static TodoReturn createNotifyToggles(cocos2d::CCNode* p0, cocos2d::CCMenu* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3, cocos2d::SEL_MenuHandler p4, cocos2d::CCPoint p5, float p6, float p7);

    /**
     * @note[short] Android
     */
    static TodoReturn createOnOffSprite(char const* p0, bool p1, cocos2d::ccColor3B p2, unsigned char p3);

    /**
     * @note[short] Android
     */
    static TodoReturn createOnOffSprite(char const* p0, bool p1);

    /**
     * @note[short] Android
     */
    static TodoReturn createProgressBar(float p0, int p1, cocos2d::ccColor3B p2);

    /**
     * @note[short] MacOS (ARM): 0x448fac
     * @note[short] MacOS (Intel): 0x4eaf60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x48fdc
     * @note[short] Android
     */
    static CCMenuItemToggler* createToggleButton(std::string label, cocos2d::SEL_MenuHandler selector, bool state, cocos2d::CCMenu* menu, cocos2d::CCPoint position, cocos2d::CCNode* parent, cocos2d::CCNode* labelParent, cocos2d::CCArray* container);

    /**
     * @note[short] MacOS (ARM): 0x4490e8
     * @note[short] MacOS (Intel): 0x4eb090
     * @note[short] Windows: 0x1208c0
     * @note[short] iOS: 0x49110
     * @note[short] Android
     */
    static CCMenuItemToggler* createToggleButton(std::string label, cocos2d::SEL_MenuHandler selector, bool state, cocos2d::CCMenu* menu, cocos2d::CCPoint position, cocos2d::CCNode* parent, cocos2d::CCNode* labelParent, float buttonScale, float maxLabelScale, float maxLabelWidth, cocos2d::CCPoint labelOffset, char const* font, bool labelTop, int labelTag, cocos2d::CCArray* container);

    /**
     * @note[short] Android
     */
    static TodoReturn directoryExists(std::string const& p0);

    /**
     * @note[short] MacOS (ARM): 0x4473c8
     * @note[short] MacOS (Intel): 0x4e9130
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x47a84
     * @note[short] Android
     */
    static bool doWeHaveInternet();

    /**
     * @note[short] MacOS (ARM): 0x450a58
     * @note[short] MacOS (Intel): 0x4f38f0
     * @note[short] Windows: 0x72b00
     * @note[short] iOS: 0x4da08
     * @note[short] Android
     */
    static std::string easeToText(int easingType);

    /**
     * @note[short] Android
     */
    static TodoReturn extractServerPopup(std::string& p0);

    /**
     * @note[short] MacOS (ARM): 0x44cbb0
     * @note[short] MacOS (Intel): 0x4eed00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static uint64_t fast_rand();

    /**
     * @note[short] MacOS (ARM): 0x44cbd8
     * @note[short] MacOS (Intel): 0x4eed30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4b858
     * @note[short] Android
     */
    static float fast_rand_0_1();

    /**
     * @note[short] MacOS (ARM): 0x44cc14
     * @note[short] MacOS (Intel): 0x4eed70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4b890
     * @note[short] Android
     */
    static float fast_rand_minus1_1();

    /**
     * @note[short] MacOS (ARM): 0x44cb98
     * @note[short] MacOS (Intel): 0x4eece0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4b84c
     * @note[short] Android
     */
    static void fast_srand(uint64_t seed);

    /**
     * @note[short] Android
     */
    static TodoReturn gameVersionToString(int p0);

    /**
     * @note[short] MacOS (Intel): 0x949c90
     * @note[short] iOS: 0x505d40
     * @note[short] Android
     */
    static std::string gen_random(int length);

    /**
     * @note[short] MacOS (ARM): 0x446af4
     * @note[short] MacOS (Intel): 0x4e87f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static cocos2d::CCSequence* getDropActionWDelay(float delay, float duration, float scale, cocos2d::CCNode* target, cocos2d::SEL_CallFunc selector);

    /**
     * @note[short] MacOS (ARM): 0x446bb0
     * @note[short] MacOS (Intel): 0x4e88b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static cocos2d::CCSequence* getDropActionWEnd(float delay, float duration, float scale, cocos2d::CCAction* action, float actionDelay);

    /**
     * @note[short] MacOS (ARM): 0x44c8cc
     * @note[short] MacOS (Intel): 0x4ee9b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static cocos2d::CCActionInterval* getEasedAction(cocos2d::CCActionInterval* action, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x450e54
     * @note[short] MacOS (Intel): 0x4f3c50
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x4dae8
     * @note[short] Android
     */
    static float getEasedValue(float value, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x44cba4
     * @note[short] MacOS (Intel): 0x4eecf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static uint64_t getfast_srand();

    /**
     * @note[short] MacOS (ARM): 0x44c94c
     * @note[short] MacOS (Intel): 0x4eeab0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static int getInvertedEasing(int easingType);

    /**
     * @note[short] MacOS (ARM): 0x449584
     * @note[short] MacOS (Intel): 0x4eb520
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static cocos2d::CCDictionary* getLargestMergedIntDicts(cocos2d::CCDictionary* dict1, cocos2d::CCDictionary* dict2);

    /**
     * @note[short] MacOS (ARM): 0x44a37c
     * @note[short] MacOS (Intel): 0x4ec360
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x49eec
     * @note[short] Android
     */
    static cocos2d::ccHSVValue getMultipliedHSV(cocos2d::ccHSVValue const& value, float factor);

    /**
     * @note[short] MacOS (ARM): 0x44938c
     * @note[short] MacOS (Intel): 0x4eb2f0
     * @note[short] Windows: 0x6e740
     * @note[short] iOS: 0x493b4
     * @note[short] Android
     */
    static cocos2d::CCPoint getRelativeOffset(GameObject* object, cocos2d::CCPoint offset);

    /**
     * @note[short] MacOS (ARM): 0x447680
     * @note[short] MacOS (Intel): 0x4e93e0
     * @note[short] iOS: 0x47bd8
     * @note[short] Android
     */
    static std::string getResponse(cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] Android
     */
    static TodoReturn getSaveDirectory();

    /**
     * @note[short] MacOS (ARM): 0x44b9a4
     * @note[short] MacOS (Intel): 0x4ed9c0
     * @note[short] Windows: 0x6fdc0
     * @note[short] iOS: 0x4aa54
     * @note[short] Android
     */
    static std::string getTimeString(int seconds, bool noSeconds);

    /**
     * @note[short] Android
     */
    static TodoReturn highestChildZ(cocos2d::CCNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x44a3e8
     * @note[short] MacOS (Intel): 0x4ec400
     * @note[short] iOS: 0x49f58
     * @note[short] Android
     */
    static cocos2d::ccHSVValue hsvFromString(std::string const& str, char const* delim);

    /**
     * @note[short] MacOS (Intel): 0x4f4ec0
     * @note[short] Android
     */
    static TodoReturn intToShortString(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x451580
     * @note[short] MacOS (Intel): 0x4f4360
     * @note[short] Windows: 0x735f0
     * @note[short] iOS: 0x4defc
     * @note[short] Android
     */
    static std::string intToString(int value);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static bool isIOS();

    /**
     * @note[short] MacOS (ARM): 0x44c978
     * @note[short] MacOS (Intel): 0x4eeae0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4b678
     * @note[short] Android
     */
    static bool isRateEasing(int easingType);

    /**
     * @note[short] Android
     */
    static TodoReturn keepLastPathSegments(std::string const& p0, char const* p1, int p2);

    /**
     * @note[short] Android
     */
    static TodoReturn lastResponseHadServerPopup();

    /**
     * @note[short] Android
     */
    static TodoReturn lastServerPopupTitle();

    /**
     * @note[short] Android
     */
    static TodoReturn listFiles(std::string const& p0, std::vector<std::string>& p1, std::string const& p2, std::vector<long>* p3);

    /**
     * @note[short] Android
     */
    static TodoReturn lowercaseASCII(std::string const& p0);

    /**
     * @note[short] MacOS (Intel): 0x4eb570
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x49594
     * @note[short] Android
     */
    static void mergeDictsSaveLargestInt(cocos2d::CCDictionary* toDict, cocos2d::CCDictionary* fromDict);

    /**
     * @note[short] MacOS (Intel): 0x4eb800
     * @note[short] iOS: 0x496cc
     * @note[short] Android
     */
    static void mergeDictsSkipConflict(cocos2d::CCDictionary* toDict, cocos2d::CCDictionary* fromDict);

    /**
     * @note[short] MacOS (ARM): 0x452a90
     * @note[short] MacOS (Intel): 0x4f5950
     * @note[short] iOS: 0x4edcc
     * @note[short] Android
     */
    static std::string msToTimeString(int milliseconds, int formattingMode);

    /**
     * @note[short] MacOS (ARM): 0x44a11c
     * @note[short] MacOS (Intel): 0x4ec100
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x49e30
     * @note[short] Android
     */
    static cocos2d::ccColor3B multipliedColorValue(cocos2d::ccColor3B minColor, cocos2d::ccColor3B maxColor, float factor);

    /**
     * @note[short] MacOS (ARM): 0x44765c
     * @note[short] MacOS (Intel): 0x4e93c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x47bd4
     * @note[short] Android
     */
    static void openAppPage();

    /**
     * @note[short] MacOS (ARM): 0x447564
     * @note[short] MacOS (Intel): 0x4e92c0
     * @note[short] Android
     */
    static void openRateURL(std::string str1, std::string str2);

    /**
     * @note[short] MacOS (ARM): 0x4504b0
     * @note[short] MacOS (Intel): 0x4f32d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4d478
     * @note[short] Android
     */
    static cocos2d::CCParticleSystemQuad* particleFromString(std::string const& str, cocos2d::CCParticleSystemQuad* system, bool dontUpdate);

    /**
     * @note[short] MacOS (ARM): 0x3fd604
     * @note[short] MacOS (Intel): 0x4f33e0
     * @note[short] Windows: 0x72590
     * @note[short] iOS: 0x4d54c
     * @note[short] Android
     */
    static cocos2d::CCParticleSystemQuad* particleFromStruct(cocos2d::ParticleStruct const& particleStruct, cocos2d::CCParticleSystemQuad* system, bool dontUpdate);

    /**
     * @note[short] MacOS (ARM): 0x44f678
     * @note[short] MacOS (Intel): 0x4f2380
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x4cad8
     * @note[short] Android
     */
    static void particleStringToStruct(std::string const& str, cocos2d::ParticleStruct& particleStruct);

    /**
     * @note[short] Android
     */
    static TodoReturn pathSegmentCount(std::string const& p0, char const* p1);

    /**
     * @note[short] MacOS (ARM): 0x452be4
     * @note[short] MacOS (Intel): 0x4f5aa0
     * @note[short] Windows: 0x74770
     * @note[short] iOS: 0x4ef20
     * @note[short] Android
     */
    static std::string pointsToString(int points);

    /**
     * @note[short] MacOS (Intel): 0x46ba50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x48918
     * @note[short] Android
     */
    static void postClipVisit();

    /**
     * @note[short] MacOS (ARM): 0x4487d4
     * @note[short] MacOS (Intel): 0x278740
     * @note[short] iOS: 0x39c24c
     * @note[short] Android
     */
    static void preVisitWithClippingRect(cocos2d::CCNode* node, cocos2d::CCRect rect);

    /**
     * @note[short] MacOS (ARM): 0x4488a8
     * @note[short] MacOS (Intel): 0x4ea7c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x488e0
     * @note[short] Android
     */
    static void preVisitWithClipRect(cocos2d::CCRect rect);

    /**
     * @note[short] MacOS (ARM): 0x44cc5c
     * @note[short] MacOS (Intel): 0x4eedb0
     * @note[short] Windows: 0x6f7d0
     * @note[short] iOS: 0x4b8d4
     * @note[short] Android
     */
    static std::string saveParticleToString(cocos2d::CCParticleSystemQuad* system);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static bool saveStringToFile(std::string const& p0, std::string const& p1, bool p2, bool p3);

    /**
     * @note[short] Android
     */
    static TodoReturn serverPopupWillSwitchToScene(cocos2d::CCScene* p0);

    /**
     * @note[short] Android
     */
    static void setOnOffSprite(cocos2d::CCNode* p0, bool p1);

    /**
     * @note[short] Android
     */
    static TodoReturn showFolderDialog(char const* p0, std::string& p1);

    /**
     * @note[short] Android
     */
    static TodoReturn showOpenFileDialog(char const* p0, char const* p1, std::string const& p2, std::string& p3);

    /**
     * @note[short] Android
     */
    static TodoReturn showOpenFileDialogMulti(char const* p0, char const* p1, std::vector<std::string>& p2);

    /**
     * @note[short] Android
     */
    static TodoReturn showSaveFileDialog(char const* p0, char const* p1, char const* p2, std::string const& p3, std::string& p4);

    /**
     * @note[short] Android
     */
    static TodoReturn singleLineSnippet(std::string const& p0, unsigned long p1);

    /**
     * @note[short] Android
     */
    static TodoReturn stringEndsWith(std::string const& p0, std::string const& p1);

    /**
     * @note[short] MacOS (ARM): 0x44a980
     * @note[short] MacOS (Intel): 0x4ec920
     * @note[short] Windows: 0x4836d0
     * @note[short] iOS: 0x4a294
     * @note[short] Android
     */
    static std::string stringFromHSV(cocos2d::ccHSVValue value, char const* separator);

    /**
     * @note[short] MacOS (ARM): 0x44b20c
     * @note[short] MacOS (Intel): 0x4ed290
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x4a694
     * @note[short] Android
     */
    static cocos2d::CCDictionary* stringSetupToDict(std::string const& str, char const* separator);

    /**
     * @note[short] MacOS (ARM): 0x44ae6c
     * @note[short] MacOS (Intel): 0x4ecf40
     * @note[short] iOS: 0x4a460
     * @note[short] Android
     */
    static void stringSetupToMap(std::string const& str, char const* separator, std::map<std::string, std::string>& setup);

    /**
     * @note[short] Android
     */
    static TodoReturn stripNonBreakingSpaces(std::string& p0);

    /**
     * @note[short] MacOS (ARM): 0x44b83c
     * @note[short] MacOS (Intel): 0x4ed860
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4a9bc
     * @note[short] Android
     */
    static cocos2d::ccColor3B strongColor(cocos2d::ccColor3B color);

    /**
     * @note[short] Android
     */
    static TodoReturn timestampToDateString(long p0);

    /**
     * @note[short] Android
     */
    static TodoReturn timestampToDayString(long p0);

    /**
     * @note[short] MacOS (ARM): 0x4523f0
     * @note[short] MacOS (Intel): 0x4f5340
     * @note[short] Windows: 0x74010
     * @note[short] iOS: 0x4e88c
     * @note[short] Android
     */
    static TodoReturn timestampToHumanReadable(long p0);

    /**
     * @note[short] Android
     */
    static TodoReturn touchUnitsForMM(float p0);

    /**
     * @note[short] MacOS (ARM): 0x449f60
     * @note[short] MacOS (Intel): 0x4ebf00
     * @note[short] Windows: 0x6f370
     * @note[short] iOS: 0x49c98
     * @note[short] Android
     */
    static cocos2d::ccColor3B transformColor(cocos2d::ccColor3B const& color, cocos2d::ccHSVValue hsv);

    /**
     * @note[short] MacOS (ARM): 0x449f44
     * @note[short] MacOS (Intel): 0x4ebed0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x49c7c
     * @note[short] Android
     */
    static cocos2d::ccColor3B transformColor(cocos2d::ccColor3B const& color, float h, float s, float v);

    /**
     * @note[short] Android
     */
    static TodoReturn worldClipRect(cocos2d::CCNode* p0, cocos2d::CCRect p1);
};
