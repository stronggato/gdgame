#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class GJSmartPrefab : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJSmartPrefab";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSmartPrefab, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x3b4030
     * @note[short] Android: Rebinded
     */
    virtual  ~GJSmartPrefab();

    /**
     * @note[short] MacOS (ARM): 0x387680
     * @note[short] MacOS (Intel): 0x40ea20
     * @note[short] Windows: 0x3b9350
     * @note[short] iOS: 0x461c
     * @note[short] Android
     */
    static GJSmartPrefab* create();

    /**
     * @note[short] MacOS (ARM): 0x38cdc8
     * @note[short] MacOS (Intel): 0x414d00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8740
     * @note[short] Android
     */
    static GJSmartPrefab* createWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x38cf08
     * @note[short] MacOS (Intel): 0x414e40
     * @note[short] Windows: 0x3b93d0
     * @note[short] iOS: 0x87e0
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x38cdc0
     * @note[short] MacOS (Intel): 0x414cf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8738
     * @note[short] Android
     */
    virtual bool canEncode();

    /**
     * @note[short] MacOS (ARM): 0x38ce98
     * @note[short] MacOS (Intel): 0x414dd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8770
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x38cda4
     * @note[short] MacOS (Intel): 0x414cd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init();
    std::string m_prefabKey;
    std::string m_prefabData;
    int m_prefabID;
    int m_prefabChance;
};
