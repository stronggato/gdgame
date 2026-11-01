#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SFXInfoObject.hpp>

class SFXFolderObject : public SFXInfoObject {
public:
    static constexpr auto CLASS_NAME = "SFXFolderObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SFXFolderObject, SFXInfoObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SFXFolderObject();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e1e58
     * @note[short] Android: Rebinded
     */
     ~SFXFolderObject();

    /**
     * @note[short] MacOS (ARM): 0x589f40
     * @note[short] MacOS (Intel): 0x64f620
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1d4850
     * @note[short] Android
     */
    static SFXFolderObject* create(int id, std::string name, int folderID);

    /**
     * @note[short] MacOS (Intel): 0xd9150
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e1eac
     * @note[short] Android
     */
    bool init(int id, std::string name, int folderID);
    cocos2d::CCArray* m_sfxObjects;
};
