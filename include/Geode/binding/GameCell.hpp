#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>

class GameCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "GameCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameCell, TableViewCell)

    /**
     * @note[short] Windows: 0x89ba0
     * @note[short] Android: Rebinded
     */
    virtual  ~GameCell();

    /**
     * @note[short] MacOS (ARM): 0x28c24c
     * @note[short] MacOS (Intel): 0x2f7950
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     GameCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x28c298
     * @note[short] MacOS (Intel): 0x2f79d0
     * @note[short] Windows: 0x400c0
     * @note[short] iOS: 0x2668b8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x28c36c
     * @note[short] MacOS (Intel): 0x2f7a90
     * @note[short] Windows: 0x404f0
     * @note[short] iOS: 0x2668fc
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x28be58
     * @note[short] MacOS (Intel): 0x2f74a0
     * @note[short] iOS: 0x266574
     * @note[short] Android
     */
    void loadFromString(std::string str);

    /**
     * @note[short] MacOS (ARM): 0x28c2a4
     * @note[short] MacOS (Intel): 0x2f79f0
     * @note[short] iOS: 0x2668c4
     * @note[short] Android
     */
    void onTouch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x28c2f0
     * @note[short] MacOS (Intel): 0x2f7a30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateBGColor(int index);
    void* m_unk230;
    std::string m_gameLink;
};
