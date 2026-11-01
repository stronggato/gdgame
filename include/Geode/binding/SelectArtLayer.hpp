#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class SelectArtLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectArtLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectArtLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x454610
     * @note[short] Android: Rebinded
     */
    virtual  ~SelectArtLayer();

    /**
     * @note[short] Android
     */
    static SelectArtLayer* create(SelectArtType type, int index);

    /**
     * @note[short] MacOS (ARM): 0x2026e4
     * @note[short] MacOS (Intel): 0x25a540
     * @note[short] Windows: 0x459150
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x201b5c
     * @note[short] MacOS (Intel): 0x259930
     * @note[short] iOS: 0x20bd7c
     * @note[short] Android
     */
    bool init(SelectArtType type, int index);

    /**
     * @note[short] MacOS (ARM): 0x2025dc
     * @note[short] MacOS (Intel): 0x25a430
     * @note[short] iOS: 0x20c744
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x20263c
     * @note[short] MacOS (Intel): 0x25a480
     * @note[short] Windows: 0x459040
     * @note[short] iOS: 0x20c7a4
     * @note[short] Android
     */
    void onSelectCustom(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2024f4
     * @note[short] MacOS (Intel): 0x25a360
     * @note[short] iOS: 0x20c674
     * @note[short] Android
     */
    void selectArt(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x201630
     * @note[short] MacOS (Intel): 0x259230
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x20baa0
     * @note[short] Android
     */
    void updateSelectedCustom(int idx);
    cocos2d::CCArray* m_artSprites;
    cocos2d::CCArray* m_lineSprites;
    int m_art;
    int m_line;
    SelectArtType m_type;
    SelectArtDelegate* m_delegate;
};
