#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>
#include <Geode/mapping/CCPoint.hpp>

class LevelCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "LevelCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelCell, TableViewCell)

    /**
     * @note[short] Windows: 0x147340
     * @note[short] Android: Rebinded
     */
    virtual  ~LevelCell();

    /**
     * @note[short] Windows: 0x147460
     * @note[short] Android: Rebinded
     */
     LevelCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1e2738
     * @note[short] MacOS (Intel): 0x236850
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x131f2c
     * @note[short] Android
     */
    static LevelCell* create(float width, float height);

    /**
     * @note[short] Windows: 0x147520
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1e69c8
     * @note[short] MacOS (Intel): 0x23ae30
     * @note[short] Windows: 0x14c030
     * @note[short] iOS: 0x135cd0
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] Android
     */
    TodoReturn inRecallMode();

    /**
     * @note[short] MacOS (Intel): 0x237330
     * @note[short] Windows: 0x147bf0
     * @note[short] Android
     */
    void loadCustomLevelCell();

    /**
     * @note[short] MacOS (ARM): 0x1d6a6c
     * @note[short] Windows: 0x147550
     * @note[short] iOS: 0x12712c
     * @note[short] Android
     */
    void loadFromLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x1e28ec
     * @note[short] MacOS (Intel): 0x236a60
     * @note[short] Windows: 0x14b2c0
     * @note[short] iOS: 0x132068
     * @note[short] Android
     */
    void loadLocalLevelCell();

    /**
     * @note[short] Windows: 0x14bcd0
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x3028a0
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e698c
     * @note[short] MacOS (Intel): 0x23ae00
     * @note[short] Windows: 0x14bff0
     * @note[short] iOS: 0x135c94
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn playRecallUnlock();

    /**
     * @note[short] Android
     */
    TodoReturn recallChestReady();

    /**
     * @note[short] Android
     */
    TodoReturn recallLevel();

    /**
     * @note[short] Android
     */
    TodoReturn recallSavedLevel();

    /**
     * @note[short] MacOS (ARM): 0x1d6c44
     * @note[short] MacOS (Intel): 0x22a4d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1272d8
     * @note[short] Android
     */
    void updateBGColor(int index);

    /**
     * @note[short] MacOS (ARM): 0x1e2350
     * @note[short] MacOS (Intel): 0x2363f0
     * @note[short] iOS: 0x131cd4
     * @note[short] Android
     */
    void updateCellMode(int mode);

    /**
     * @note[short] MacOS (ARM): 0x1e2334
     * @note[short] MacOS (Intel): 0x2361d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateToggle();
    CCMenuItemSpriteExtra* m_button;
    GJGameLevel* m_level;
    bool m_cellDrawn;
    CCMenuItemToggler* m_toggler;
    cocos2d::CCPoint m_point;
    cocos2d::CCMenu* m_mainMenu;
    bool m_compactView;
    int m_cellMode;
};
