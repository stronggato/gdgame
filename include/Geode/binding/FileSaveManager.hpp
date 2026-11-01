#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GManager.hpp>

class FileSaveManager : public GManager {
public:
    static constexpr auto CLASS_NAME = "FileSaveManager";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FileSaveManager, GManager)

    /**
     * @note[short] MacOS (ARM): 0x2b0c
     * @note[short] MacOS (Intel): 0x2f00
     * @note[short] Android
     */
    static FileSaveManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x2b94
     * @note[short] MacOS (Intel): 0x2f90
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x2bc4
     * @note[short] MacOS (Intel): 0x2fc0
     * @note[short] Android
     */
    virtual void firstLoad();

    /**
     * @note[short] MacOS (ARM): 0x308c
     * @note[short] MacOS (Intel): 0x34c0
     * @note[short] Android
     */
    cocos2d::CCDictionary* getStoreData();

    /**
     * @note[short] MacOS (ARM): 0x2bb8
     * @note[short] MacOS (Intel): 0x2fb0
     * @note[short] Android
     */
    void loadDataFromFile(char const* filename);
    cocos2d::CCDictionary* m_storeData;
};
