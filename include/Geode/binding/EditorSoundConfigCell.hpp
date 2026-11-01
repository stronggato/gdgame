#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>

class EditorSoundConfigCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "EditorSoundConfigCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorSoundConfigCell, TableViewCell)

    /**
     * @note[short] Windows: 0x18f0b0
     * @note[short] Android: Rebinded
     */
    virtual  ~EditorSoundConfigCell();

    /**
     * @note[short] Android: Rebinded
     */
     EditorSoundConfigCell(char const* p0, float p1, float p2);

    /**
     * @note[short] Android
     */
    static EditorSoundConfigCell* create(float p0, float p1);

    /**
     * @note[short] Windows: 0x3ff70
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    TodoReturn loadFromConfig(GJEditorSoundConfig* p0);

    /**
     * @note[short] Android
     */
    void onInfoPopup(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onView(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn updateBGColor(int p0);
};
