#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class SelectSettingLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectSettingLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectSettingLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x4546f0
     * @note[short] Android: Rebinded
     */
    virtual  ~SelectSettingLayer();

    /**
     * @note[short] Android
     */
    static SelectSettingLayer* create(SelectSettingType type, int value);

    /**
     * @note[short] MacOS (ARM): 0x202fd0
     * @note[short] MacOS (Intel): 0x25af40
     * @note[short] Windows: 0x4599f0
     * @note[short] iOS: 0x20ce20
     * @note[short] Android
     */
    static std::string frameForItem(SelectSettingType type, int index);

    /**
     * @note[short] MacOS (ARM): 0x200b00
     * @note[short] MacOS (Intel): 0x258500
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x20b388
     * @note[short] Android
     */
    static std::string frameForValue(SelectSettingType type, int value);

    /**
     * @note[short] MacOS (ARM): 0x203334
     * @note[short] MacOS (Intel): 0x25b250
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static int idxToValue(SelectSettingType type, int idx);

    /**
     * @note[short] MacOS (ARM): 0x202fa4
     * @note[short] MacOS (Intel): 0x25af10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static int valueToIdx(SelectSettingType type, int value);

    /**
     * @note[short] MacOS (ARM): 0x203360
     * @note[short] MacOS (Intel): 0x25b280
     * @note[short] Windows: 0x459f70
     * @note[short] iOS: 0x20cfa0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x201014
     * @note[short] MacOS (Intel): 0x258b00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x20b75c
     * @note[short] Android
     */
    std::string getSelectedFrame();

    /**
     * @note[short] MacOS (ARM): 0x200fe4
     * @note[short] MacOS (Intel): 0x258ad0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x20b72c
     * @note[short] Android
     */
    int getSelectedValue();

    /**
     * @note[short] MacOS (ARM): 0x2029f8
     * @note[short] MacOS (Intel): 0x25a960
     * @note[short] Windows: 0x4592c0
     * @note[short] iOS: 0x20c904
     * @note[short] Android
     */
    bool init(SelectSettingType type, int value);

    /**
     * @note[short] MacOS (ARM): 0x2032d4
     * @note[short] MacOS (Intel): 0x25b200
     * @note[short] iOS: 0x20cf40
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2031fc
     * @note[short] MacOS (Intel): 0x25b150
     * @note[short] Windows: 0x458f70
     * @note[short] iOS: 0x20ce80
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);
    cocos2d::CCArray* m_settingSprites;
    int m_settingID;
    SelectSettingType m_type;
    SelectSettingDelegate* m_delegate;
};
