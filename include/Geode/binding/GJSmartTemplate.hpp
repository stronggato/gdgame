#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SmartPrefabResult.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/vector.hpp>

class GJSmartTemplate : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJSmartTemplate";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSmartTemplate, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x3b3f30
     * @note[short] Android: Rebinded
     */
    virtual  ~GJSmartTemplate();

    /**
     * @note[short] MacOS (ARM): 0x38b410
     * @note[short] MacOS (Intel): 0x4130f0
     * @note[short] Windows: 0x3b7160
     * @note[short] iOS: 0x79ac
     * @note[short] Android
     */
    static void applyTransformationsForType(SmartBlockType type, cocos2d::CCSprite* sprite);

    /**
     * @note[short] MacOS (ARM): 0x387374
     * @note[short] MacOS (Intel): 0x40e6e0
     * @note[short] Windows: 0x3b4330
     * @note[short] iOS: 0x4330
     * @note[short] Android
     */
    static GJSmartTemplate* create();

    /**
     * @note[short] MacOS (ARM): 0x38c818
     * @note[short] MacOS (Intel): 0x414770
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x83b8
     * @note[short] Android
     */
    static GJSmartTemplate* createWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x38b65c
     * @note[short] MacOS (Intel): 0x413360
     * @note[short] iOS: 0x7b74
     * @note[short] Android
     */
    static SmartBlockType flipBlockType(SmartBlockType type, bool flipX, bool flipY);

    /**
     * @note[short] MacOS (ARM): 0x38b614
     * @note[short] MacOS (Intel): 0x413320
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7b2c
     * @note[short] Android
     */
    static SmartBlockType flipBlockTypeX(SmartBlockType type);

    /**
     * @note[short] MacOS (ARM): 0x38b638
     * @note[short] MacOS (Intel): 0x413340
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7b50
     * @note[short] Android
     */
    static SmartBlockType flipBlockTypeY(SmartBlockType type);

    /**
     * @note[short] MacOS (ARM): 0x38a598
     * @note[short] MacOS (Intel): 0x412320
     * @note[short] Windows: 0x3b8070
     * @note[short] iOS: 0x6dcc
     * @note[short] Android
     */
    static std::string flipKey(std::string key, bool flipX, bool flipY);

    /**
     * @note[short] MacOS (ARM): 0x38b8f8
     * @note[short] MacOS (Intel): 0x413640
     * @note[short] Android
     */
    static cocos2d::CCDictionary* generateRemapDict();

    /**
     * @note[short] MacOS (ARM): 0x388030
     * @note[short] MacOS (Intel): 0x40f5e0
     * @note[short] iOS: 0x4e04
     * @note[short] Android
     */
    static std::string getSimplifiedKey(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x388bd0
     * @note[short] MacOS (Intel): 0x4100d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static SmartBlockType getSimplifiedType(SmartBlockType type, bool& changed);

    /**
     * @note[short] MacOS (ARM): 0x38899c
     * @note[short] MacOS (Intel): 0x40ff10
     * @note[short] Windows: 0x220880
     * @note[short] iOS: 0x55e8
     * @note[short] Android
     */
    static std::string getVerySimplifiedKey(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x388c00
     * @note[short] MacOS (Intel): 0x410100
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x56d0
     * @note[short] Android
     */
    static std::string keyFromNeighbors(SmartBlockType type, SmartBlockType left, SmartBlockType right, SmartBlockType top, SmartBlockType bottom, SmartBlockType topLeft, SmartBlockType topRight, SmartBlockType bottomLeft, SmartBlockType bottomRight);

    /**
     * @note[short] MacOS (ARM): 0x38a988
     * @note[short] MacOS (Intel): 0x4126c0
     * @note[short] Windows: 0x3b7530
     * @note[short] iOS: 0x710c
     * @note[short] Android
     */
    static std::string keyFromNeighbors(cocos2d::CCPoint position, SmartGameObject* object, SmartGameObject* left, SmartGameObject* right, SmartGameObject* top, SmartGameObject* bottom, SmartGameObject* topLeft, SmartGameObject* topRight, SmartGameObject* bottomLeft, SmartGameObject* bottomRight);

    /**
     * @note[short] MacOS (ARM): 0x38b6c0
     * @note[short] MacOS (Intel): 0x4133d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static std::string keyFromNeighborsOld(bool left, bool right, bool top, bool bottom, bool topLeft, bool topRight, bool bottomLeft, bool bottomRight);

    /**
     * @note[short] MacOS (ARM): 0x38ad90
     * @note[short] MacOS (Intel): 0x412b50
     * @note[short] Windows: 0x3b6f70
     * @note[short] iOS: 0x7460
     * @note[short] Android
     */
    static cocos2d::CCPoint offsetForDir(GJSmartDirection direction, int key);

    /**
     * @note[short] MacOS (ARM): 0x38af1c
     * @note[short] MacOS (Intel): 0x412c40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x756c
     * @note[short] Android
     */
    static cocos2d::CCPoint offsetForObject(SmartGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x38b2e8
     * @note[short] MacOS (Intel): 0x412f60
     * @note[short] Windows: 0x3b7070
     * @note[short] iOS: 0x78a0
     * @note[short] Android
     */
    static cocos2d::CCPoint offsetForType(SmartBlockType type);

    /**
     * @note[short] MacOS (ARM): 0x38b5c0
     * @note[short] MacOS (Intel): 0x413270
     * @note[short] Windows: 0x3b7920
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static SmartBlockType rotateBlockType(SmartBlockType type, int degrees);

    /**
     * @note[short] MacOS (ARM): 0x38b594
     * @note[short] MacOS (Intel): 0x413240
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7b00
     * @note[short] Android
     */
    static SmartBlockType rotateBlockType90(SmartBlockType type);

    /**
     * @note[short] MacOS (ARM): 0x389834
     * @note[short] MacOS (Intel): 0x410f30
     * @note[short] Windows: 0x3b7d10
     * @note[short] iOS: 0x6248
     * @note[short] Android
     */
    static std::string rotateKey(std::string key, int degrees);

    /**
     * @note[short] MacOS (ARM): 0x38b350
     * @note[short] MacOS (Intel): 0x413030
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7904
     * @note[short] Android
     */
    static bool shouldDiscardObject(SmartBlockType type, GJSmartDirection direction);

    /**
     * @note[short] MacOS (ARM): 0x38af88
     * @note[short] MacOS (Intel): 0x412ca0
     * @note[short] Windows: 0x3b72a0
     * @note[short] iOS: 0x75d8
     * @note[short] Android
     */
    static SmartBlockType smartObjectToType(SmartGameObject* object, cocos2d::CCPoint point);

    /**
     * @note[short] MacOS (ARM): 0x38b570
     * @note[short] MacOS (Intel): 0x413220
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7adc
     * @note[short] Android
     */
    static int smartTypeToObjectKey(SmartBlockType type);

    /**
     * @note[short] MacOS (ARM): 0x38cbb4
     * @note[short] MacOS (Intel): 0x414b40
     * @note[short] Windows: 0x3b9270
     * @note[short] iOS: 0x8618
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x38c810
     * @note[short] MacOS (Intel): 0x414760
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x83b0
     * @note[short] Android
     */
    virtual bool canEncode();

    /**
     * @note[short] MacOS (ARM): 0x38c8b0
     * @note[short] MacOS (Intel): 0x414820
     * @note[short] Windows: 0x3b8fa0
     * @note[short] iOS: 0x83e8
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x38884c
     * @note[short] MacOS (Intel): 0x40fdd0
     * @note[short] Windows: 0x3b5330
     * @note[short] iOS: 0x5508
     * @note[short] Android
     */
    std::string getNoCornerKey(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x389c38
     * @note[short] MacOS (Intel): 0x411780
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x658c
     * @note[short] Android
     */
    GJSmartPrefab* getPrefab(std::string key, bool flipX, bool flipY);

    /**
     * @note[short] MacOS (ARM): 0x38a8a4
     * @note[short] MacOS (Intel): 0x412600
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    GJSmartPrefab* getPrefab(cocos2d::CCPoint position, SmartGameObject* object, SmartGameObject* left, SmartGameObject* right, SmartGameObject* top, SmartGameObject* bottom, SmartGameObject* topLeft, SmartGameObject* topRight, SmartGameObject* bottomLeft, SmartGameObject* bottomRight);

    /**
     * @note[short] MacOS (ARM): 0x38a89c
     * @note[short] MacOS (Intel): 0x4125f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7104
     * @note[short] Android
     */
    cocos2d::CCArray* getPrefabs(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x38ac54
     * @note[short] MacOS (Intel): 0x412a50
     * @note[short] Windows: 0x3b6eb0
     * @note[short] iOS: 0x7338
     * @note[short] Android
     */
    GJSmartPrefab* getPrefabWithID(std::string key, int id);

    /**
     * @note[short] MacOS (ARM): 0x389660
     * @note[short] MacOS (Intel): 0x410d90
     * @note[short] Windows: 0x9a7e0
     * @note[short] iOS: 0x608c
     * @note[short] Android
     */
    GJSmartPrefab* getRandomPrefab(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x38c274
     * @note[short] MacOS (Intel): 0x4140f0
     * @note[short] Windows: 0x3b8970
     * @note[short] iOS: 0x7fc8
     * @note[short] Android
     */
    void getTemplateState(std::vector<SmartPrefabResult>& results);

    /**
     * @note[short] MacOS (ARM): 0x38a7a8
     * @note[short] MacOS (Intel): 0x412530
     * @note[short] Windows: 0x3b6310
     * @note[short] iOS: 0x7020
     * @note[short] Android
     */
    int getTotalChanceForPrefab(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x3873fc
     * @note[short] MacOS (Intel): 0x40e780
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x43b8
     * @note[short] Android
     */
    bool init();

    /**
     * @note[short] MacOS (ARM): 0x38c110
     * @note[short] MacOS (Intel): 0x413fb0
     * @note[short] iOS: 0x7e64
     * @note[short] Android
     */
    bool isUnrequired(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x38bd2c
     * @note[short] MacOS (Intel): 0x413ad0
     * @note[short] Windows: 0x3b83a0
     * @note[short] iOS: 0x7bbc
     * @note[short] Android
     */
    std::string logTemplateStatus(bool unused);

    /**
     * @note[short] MacOS (ARM): 0x38acf4
     * @note[short] MacOS (Intel): 0x412ac0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x73c4
     * @note[short] Android
     */
    void removePrefab(std::string prefabKey, int prefabID);

    /**
     * @note[short] MacOS (ARM): 0x388ce4
     * @note[short] MacOS (Intel): 0x4101c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x57c8
     * @note[short] Android
     */
    void resetScannedPrefabs();

    /**
     * @note[short] MacOS (ARM): 0x387494
     * @note[short] MacOS (Intel): 0x40e830
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4478
     * @note[short] Android
     */
    void savePrefab(std::string key, std::string data);

    /**
     * @note[short] MacOS (ARM): 0x3876fc
     * @note[short] MacOS (Intel): 0x40eaa0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x4698
     * @note[short] Android
     */
    void saveRemap(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x388680
     * @note[short] MacOS (Intel): 0x40fbe0
     * @note[short] Windows: 0x3b4890
     * @note[short] iOS: 0x5420
     * @note[short] Android
     */
    void saveRemapToDict(std::string key, std::string remap, cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x388d14
     * @note[short] MacOS (Intel): 0x4101f0
     * @note[short] iOS: 0x57f8
     * @note[short] Android
     */
    SmartPrefabResult scanForPrefab(std::string key);
    cocos2d::CCDictionary* m_prefabArrays;
    cocos2d::CCDictionary* m_remapDict1;
    cocos2d::CCDictionary* m_remapDict2;
    cocos2d::CCDictionary* m_remapDict3;
    cocos2d::CCDictionary* m_remapDict4;
    cocos2d::CCDictionary* m_remapDict5;
    cocos2d::CCDictionary* m_remapDict6;
    std::map<std::string, SmartPrefabResult> m_prefabResults;
    bool m_allowFlipX;
    bool m_allowFlipY;
    bool m_allowRotation;
    bool m_ignoreCorners;
    std::string m_templateName;
    std::string m_unk0a8;
    int m_nameIndex;
    int m_prefabIndex;
};
