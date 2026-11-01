#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class ObjectManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "ObjectManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ObjectManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x76a2dc
     * @note[short] MacOS (Intel): 0x874190
     * @note[short] Windows: 0x7bd50
     * @note[short] iOS: 0x2e8010
     * @note[short] Android
     */
    static ObjectManager* instance();

    /**
     * @note[short] MacOS (ARM): 0x76b078
     * @note[short] MacOS (Intel): 0x874fc0
     * @note[short] iOS: 0x2e87c8
     * @note[short] Android
     */
    static cocos2d::CCDictionary* replaceAllOccurencesOfString(cocos2d::CCString* target, cocos2d::CCString* replacement, cocos2d::CCDictionary* dict);

    /**
     * @note[short] Windows: 0x7bcd0
     * @note[short] Android: Rebinded
     */
    virtual  ~ObjectManager();

    /**
     * @note[short] MacOS (ARM): 0x76a3a4
     * @note[short] MacOS (Intel): 0x874270
     * @note[short] Windows: 0x7bde0
     * @note[short] iOS: 0x2e80a4
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x76bdc4
     * @note[short] MacOS (Intel): 0x875ea0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e8d70
     * @note[short] Android
     */
    bool animLoaded(char const* anim);

    /**
     * @note[short] MacOS (Intel): 0x875cd0
     * @note[short] iOS: 0x2e8c84
     * @note[short] Android
     */
    cocos2d::CCDictionary* getDefinition(char const* definitionKey);

    /**
     * @note[short] MacOS (ARM): 0x76af38
     * @note[short] MacOS (Intel): 0x874eb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e8720
     * @note[short] Android
     */
    cocos2d::CCDictionary* getGlobalAnimCopy(char const* anim);

    /**
     * @note[short] MacOS (ARM): 0x76a3f4
     * @note[short] MacOS (Intel): 0x8742d0
     * @note[short] iOS: 0x2e80f4
     * @note[short] Android
     */
    void loadCopiedAnimations();

    /**
     * @note[short] MacOS (ARM): 0x76a860
     * @note[short] MacOS (Intel): 0x874740
     * @note[short] iOS: 0x2e8308
     * @note[short] Android
     */
    void loadCopiedSets();

    /**
     * @note[short] MacOS (ARM): 0x76a378
     * @note[short] MacOS (Intel): 0x874240
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e8078
     * @note[short] Android
     */
    void purgeObjectManager();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e8cf0
     * @note[short] Android
     */
    void setLoaded(char const* objectName);

    /**
     * @note[short] MacOS (ARM): 0x76abac
     * @note[short] MacOS (Intel): 0x874ae0
     * @note[short] iOS: 0x2e8510
     * @note[short] Android
     */
    void setup();
    cocos2d::CCDictionary* m_objectDefinitions;
    cocos2d::CCDictionary* m_loadedAnimations;
};
