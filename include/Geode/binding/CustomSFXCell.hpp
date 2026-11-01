#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>
#include <Geode/binding/CustomSFXDelegate.hpp>

class CustomSFXCell : public TableViewCell, public CustomSFXDelegate {
public:
    static constexpr auto CLASS_NAME = "CustomSFXCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomSFXCell, TableViewCell)

    /**
     * @note[short] Windows: 0x14f2a0
     * @note[short] Android: Rebinded
     */
    virtual  ~CustomSFXCell();

    /**
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     CustomSFXCell(char const* identifier, float width, float height);

    /**
     * @note[short] Windows: 0x14f3d0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x147270
     * @note[short] iOS: 0x137300
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1e8620
     * @note[short] MacOS (Intel): 0x23cdb0
     * @note[short] Windows: 0x14f550
     * @note[short] iOS: 0x137078
     * @note[short] Android
     */
    virtual void sfxObjectSelected(SFXInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1e8870
     * @note[short] MacOS (Intel): 0x23d130
     * @note[short] Windows: 0x14f050
     * @note[short] iOS: 0x1372c8
     * @note[short] Android
     */
    virtual int getActiveSFXID();

    /**
     * @note[short] Windows: 0x14f6b0
     * @note[short] Android
     */
    virtual int getActiveCustomSFXID();

    /**
     * @note[short] Windows: 0x14f590
     * @note[short] Android
     */
    virtual void sfxAddToFolder(SFXInfoObject* p0);

    /**
     * @note[short] Windows: 0x14f5d0
     * @note[short] Android
     */
    virtual void sfxEditCustomObject(SFXInfoObject* p0);

    /**
     * @note[short] Windows: 0x14f610
     * @note[short] Android
     */
    virtual void sfxToggleCustomSelect(SFXInfoObject* p0);

    /**
     * @note[short] Windows: 0x14f650
     * @note[short] Android
     */
    virtual bool isCustomEntrySelected(int p0);

    /**
     * @note[short] Windows: 0x14f670
     * @note[short] Android
     */
    virtual bool inCustomSFXTree();

    /**
     * @note[short] Windows: 0x14f690
     * @note[short] Android
     */
    virtual bool showsSFXInfoButton();

    /**
     * @note[short] MacOS (ARM): 0x1d67c8
     * @note[short] MacOS (Intel): 0x2317b0
     * @note[short] iOS: 0x126e98
     * @note[short] Android
     */
    void loadFromObject(SFXInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1e25c4
     * @note[short] MacOS (Intel): 0x236630
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool shouldReload();

    /**
     * @note[short] MacOS (ARM): 0x1e6714
     * @note[short] MacOS (Intel): 0x23abb0
     * @note[short] iOS: 0x126fdc
     * @note[short] Android
     */
    void updateBGColor(int index);
    SFXInfoObject* m_sfxObject;
    bool m_selected;
    bool m_compactMode;
};
