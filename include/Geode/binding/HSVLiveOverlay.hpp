#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/HSVWidgetDelegate.hpp>
#include <Geode/mapping/ccTypes.hpp>

class HSVLiveOverlay : public FLAlertLayer, public HSVWidgetDelegate {
public:
    static constexpr auto CLASS_NAME = "HSVLiveOverlay";
    GEODE_CUSTOM_CONSTRUCTOR_GD(HSVLiveOverlay, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     HSVLiveOverlay();

    /**
     * @note[short] MacOS (ARM): 0x4286a8
     * @note[short] MacOS (Intel): 0x5945e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x52bb0
     * @note[short] Android: Rebinded
     */
     ~HSVLiveOverlay();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static HSVLiveOverlay* create(GameObject* p0, cocos2d::CCArray* p1, cocos2d::ccColor3B p2, cocos2d::ccColor3B p3);

    /**
     * @note[short] Windows: 0x3be970
     * @note[short] iOS: 0x2330f4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1fdab8
     * @note[short] MacOS (Intel): 0x255140
     * @note[short] Windows: 0x124dc0
     * @note[short] iOS: 0x233108
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x1fdb6c
     * @note[short] MacOS (Intel): 0x255210
     * @note[short] Windows: 0x3be9c0
     * @note[short] iOS: 0x233154
     * @note[short] Android
     */
    virtual void hsvChanged(ConfigureHSVWidget* widget);

    /**
     * @note[short] MacOS (Intel): 0x254d70
     * @note[short] Android
     */
    void closeColorSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1fd87c
     * @note[short] MacOS (Intel): 0x254ef0
     * @note[short] iOS: 0x232f74
     * @note[short] Android
     */
    void createHSVWidget(int tab);

    /**
     * @note[short] MacOS (Intel): 0x254dc0
     * @note[short] Android
     */
    void determineStartValues();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    bool init(GameObject* p0, cocos2d::CCArray* p1, cocos2d::ccColor3B p2, cocos2d::ccColor3B p3);

    /**
     * @note[short] MacOS (ARM): 0x1fd830
     * @note[short] MacOS (Intel): 0x254eb0
     * @note[short] Windows: 0x3be780
     * @note[short] iOS: 0x232f28
     * @note[short] Android
     */
    void onSelectTab(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1fdb04
     * @note[short] MacOS (Intel): 0x2551a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleControls(bool visible);
    GameObject* m_object;
    cocos2d::CCArray* m_objects;
    cocos2d::CCArray* m_controls;
    cocos2d::CCArray* m_unkArray;
    ColorSelectDelegate* m_delegate;
    int m_activeTab;
    ConfigureHSVWidget* m_widget;
    bool m_unkBool1;
    bool m_unkBool2;
    bool m_unkBool3;
};
