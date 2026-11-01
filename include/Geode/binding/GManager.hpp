#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class GManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x5a030
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GManager();

    /**
     * @note[short] Windows: 0x771d0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x40b938
     * @note[short] MacOS (Intel): 0x4a4990
     * @note[short] Windows: 0x771f0
     * @note[short] iOS: 0x2e55a0
     * @note[short] Android
     */
    virtual void setup();

    /**
     * @note[short] MacOS (ARM): 0x40bfd0
     * @note[short] MacOS (Intel): 0x4a5050
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e5ba8
     * @note[short] Android
     */
    virtual void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x40c678
     * @note[short] MacOS (Intel): 0x4a56e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e5fdc
     * @note[short] Android
     */
    virtual void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x40c67c
     * @note[short] MacOS (Intel): 0x4a56f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e5fe0
     * @note[short] Android
     */
    virtual void firstLoad();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual TodoReturn didEncodeForSave();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual TodoReturn saveFinished(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x40b9d4
     * @note[short] MacOS (Intel): 0x4a4a60
     * @note[short] Windows: 0x77210
     * @note[short] iOS: 0x2e5634
     * @note[short] Android
     */
    std::string getCompressedSaveString();

    /**
     * @note[short] MacOS (ARM): 0x40b950
     * @note[short] MacOS (Intel): 0x4a49d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd39fc
     * @note[short] Android
     */
    std::string getSaveString();

    /**
     * @note[short] MacOS (ARM): 0x40b948
     * @note[short] MacOS (Intel): 0x4a49b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void load();

    /**
     * @note[short] MacOS (ARM): 0x40bfd4
     * @note[short] MacOS (Intel): 0x4a5060
     * @note[short] Windows: 0x776e0
     * @note[short] iOS: 0x2e5bac
     * @note[short] Android
     */
    void loadDataFromFile(std::string const& filename);

    /**
     * @note[short] MacOS (ARM): 0x40bb00
     * @note[short] MacOS (Intel): 0x6be20
     * @note[short] Windows: 0x772e0
     * @note[short] iOS: 0x2e5750
     * @note[short] Android
     */
    void loadFromCompressedString(std::string& str);

    /**
     * @note[short] MacOS (ARM): 0x40ba54
     * @note[short] MacOS (Intel): 0x4a4ad0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e56a4
     * @note[short] Android
     */
    void loadFromString(std::string& str);

    /**
     * @note[short] MacOS (ARM): 0x40bba4
     * @note[short] MacOS (Intel): 0x4a4c00
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    void save(bool p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void saveData(DS_Dictionary* dict, std::string filename);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void saveGMTo(std::string p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x40c290
     * @note[short] MacOS (Intel): 0x4a52d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e5d3c
     * @note[short] Android
     */
    bool tryLoadData(DS_Dictionary* dict, std::string const& filename);

    /**
     * @note[short] Android
     */
    TodoReturn waitForSave(double p0);
    std::string m_fileName;
    bool m_setup;
    bool m_saved;
    bool m_quickSave;
};
