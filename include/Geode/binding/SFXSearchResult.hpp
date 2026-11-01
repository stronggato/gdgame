#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/MusicSearchResult.hpp>

class SFXSearchResult : public MusicSearchResult {
public:
    static constexpr auto CLASS_NAME = "SFXSearchResult";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SFXSearchResult, MusicSearchResult)

    /**
     * @note[short] Windows: 0x47dd00
     * @note[short] Android: Rebinded
     */
    virtual  ~SFXSearchResult();

    /**
     * @note[short] MacOS (Intel): 0x6675e0
     * @note[short] Windows: 0x497b60
     * @note[short] Android
     */
    static SFXSearchResult* create(int folderID);

    /**
     * @note[short] Windows: 0x497c80
     * @note[short] Android
     */
    virtual void updateObjects(AudioSortType type);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    SFXFolderObject* getActiveFolder();

    /**
     * @note[short] Android
     */
    int getSelectedPage(int id, int count);

    /**
     * @note[short] MacOS (Intel): 0x667690
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(int folderID);

    /**
     * @note[short] MacOS (ARM): 0x59fddc
     * @note[short] MacOS (Intel): 0x6676b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e3504
     * @note[short] Android
     */
    void setActiveFolder(SFXFolderObject* folder);
    int m_folderID;
    SFXFolderObject* m_folderObject;
};
