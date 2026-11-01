#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/ConfigureValuePopupDelegate.hpp>
#include <Geode/binding/SliderDelegate.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>
#include <Geode/mapping/map.hpp>

class SetupTriggerPopup : public FLAlertLayer, public ConfigureValuePopupDelegate, public SliderDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTriggerPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x9a980
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupTriggerPopup();

    /**
     * @note[short] Windows: 0x606ea0
     * @note[short] Android: Rebinded
     */
     ~SetupTriggerPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static SetupTriggerPopup* create(float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1c8944
     * @note[short] MacOS (Intel): 0x2193f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static SetupTriggerPopup* create(EffectGameObject* trigger, cocos2d::CCArray* triggers, float width, float height, int background);

    /**
     * @note[short] MacOS (ARM): 0x1d29bc
     * @note[short] MacOS (Intel): 0x2254d0
     * @note[short] Windows: 0x611e80
     * @note[short] iOS: 0x1b1b54
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x4f504c
     * @note[short] Windows: 0xa6410
     * @note[short] iOS: 0x487444
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1fdab8
     * @note[short] MacOS (Intel): 0x255140
     * @note[short] Windows: 0x3a5900
     * @note[short] iOS: 0x44ec0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void pageChanged();

    /**
     * @note[short] MacOS (ARM): 0x1c971c
     * @note[short] MacOS (Intel): 0x21a240
     * @note[short] Windows: 0x607c40
     * @note[short] iOS: 0x1ab0f8
     * @note[short] Android
     */
    virtual void toggleGroup(int group, bool visible);

    /**
     * @note[short] MacOS (ARM): 0x1ca79c
     * @note[short] MacOS (Intel): 0x21b440
     * @note[short] Windows: 0x608ab0
     * @note[short] iOS: 0x1abe6c
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] Windows: 0x6090f0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1caa9c
     * @note[short] MacOS (Intel): 0x21b7c0
     * @note[short] Windows: 0x1250a0
     * @note[short] iOS: 0x1ac078
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x1caab8
     * @note[short] MacOS (Intel): 0x21b800
     * @note[short] Windows: 0x608f30
     * @note[short] iOS: 0x1ac094
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] Windows: 0x5b9a0
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* node, float yOffset);

    /**
     * @note[short] Windows: 0x5bb00
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateInputValue(int tag, float& value);

    /**
     * @note[short] MacOS (ARM): 0x1cbd20
     * @note[short] MacOS (Intel): 0x21dd60
     * @note[short] Windows: 0x609320
     * @note[short] Android
     */
    virtual void sliderBegan(Slider* slider);

    /**
     * @note[short] MacOS (ARM): 0x1cbe48
     * @note[short] MacOS (Intel): 0x21de90
     * @note[short] Windows: 0x609460
     * @note[short] Android
     */
    virtual void sliderEnded(Slider* slider);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void onCustomButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ceae0
     * @note[short] MacOS (Intel): 0x220be0
     * @note[short] Windows: 0x60b150
     * @note[short] iOS: 0x1aef1c
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] Windows: 0x60b650
     * @note[short] iOS: 0x50e24
     * @note[short] Android
     */
    virtual void updateInputNode(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x1d056c
     * @note[short] MacOS (Intel): 0x2231a0
     * @note[short] Windows: 0x60ba50
     * @note[short] iOS: 0x1afde0
     * @note[short] Android
     */
    virtual void updateToggleItem(int value, bool toggled);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x1d0624
     * @note[short] MacOS (Intel): 0x223260
     * @note[short] Windows: 0x60bad0
     * @note[short] iOS: 0x1afe50
     * @note[short] Android
     */
    virtual float getValue(int tag);

    /**
     * @note[short] MacOS (ARM): 0x1d09f0
     * @note[short] MacOS (Intel): 0x223620
     * @note[short] Windows: 0x60fc60
     * @note[short] iOS: 0x1b0070
     * @note[short] Android
     */
    virtual float triggerValueFromSliderValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x1d0a7c
     * @note[short] MacOS (Intel): 0x2236a0
     * @note[short] Windows: 0x60fcf0
     * @note[short] iOS: 0x1b00dc
     * @note[short] Android
     */
    virtual float triggerSliderValueFromValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1d199c
     * @note[short] MacOS (Intel): 0x224580
     * @note[short] Windows: 0x610f90
     * @note[short] iOS: 0x1b0e24
     * @note[short] Android
     */
    virtual void valuePopupClosed(ConfigureValuePopup* popup, float value);

    /**
     * @note[short] Windows: 0x609310
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0, double p1);

    /**
     * @note[short] MacOS (ARM): 0x1c9bc4
     * @note[short] MacOS (Intel): 0x21a740
     * @note[short] Windows: 0x607f90
     * @note[short] iOS: 0x1ab37c
     * @note[short] Android
     */
    void addCloseButton(std::string text);

    /**
     * @note[short] MacOS (ARM): 0x1ce944
     * @note[short] MacOS (Intel): 0x220a50
     * @note[short] Windows: 0x1907d0
     * @note[short] Android
     */
    void addCustomButton(int tag, ButtonSprite* sprite, cocos2d::CCPoint position, int page, int group);

    /**
     * @note[short] Android
     */
    TodoReturn addEasePreviewButton(cocos2d::CCLabelBMFont* p0, float p1, int p2, int p3, int p4, int p5);

    /**
     * @note[short] MacOS (ARM): 0x1c9c44
     * @note[short] MacOS (Intel): 0x21a7c0
     * @note[short] iOS: 0x1ab3f8
     * @note[short] Android
     */
    void addHelpButton(std::string title, std::string desc, float scale);

    /**
     * @note[short] MacOS (ARM): 0x1ce310
     * @note[short] MacOS (Intel): 0x220400
     * @note[short] Windows: 0x60aca0
     * @note[short] iOS: 0x1ae9f4
     * @note[short] Android
     */
    void addInfoLabel(std::string text, float scale, cocos2d::CCPoint position, int page, int group);

    /**
     * @note[short] MacOS (ARM): 0x1c9a10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ab284
     * @note[short] Android
     */
    void addObjectsToGroup(cocos2d::CCArray* objects, int group);

    /**
     * @note[short] MacOS (ARM): 0x1c98bc
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ab208
     * @note[short] Android
     */
    void addObjectsToPage(cocos2d::CCArray* objects, int page);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ab25c
     * @note[short] Android
     */
    void addObjectToGroup(cocos2d::CCObject* object, int group);

    /**
     * @note[short] iOS: 0x1ab1e0
     * @note[short] Android
     */
    void addObjectToPage(cocos2d::CCObject* object, int page);

    /**
     * @note[short] MacOS (ARM): 0x1c9af4
     * @note[short] MacOS (Intel): 0x21a670
     * @note[short] Windows: 0x2c47d0
     * @note[short] iOS: 0x1ab2ac
     * @note[short] Android
     */
    void addTitle(std::string title);

    /**
     * @note[short] MacOS (ARM): 0x1cbc40
     * @note[short] MacOS (Intel): 0x21dc40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void closeInputNodes();

    /**
     * @note[short] MacOS (ARM): 0x1ce60c
     * @note[short] MacOS (Intel): 0x220700
     * @note[short] iOS: 0x1aec1c
     * @note[short] Android
     */
    void createCustomButton(int tag, std::string text, std::string frame, cocos2d::CCPoint position, float buttonScale, float labelScale, bool vertical, int page, int group);

    /**
     * @note[short] Windows: 0x611050
     * @note[short] iOS: 0x1b0fa0
     * @note[short] Android
     */
    void createCustomEasingControls(std::string text, cocos2d::CCPoint position, float scale, int typeProperty, int rateProperty, int page, int group);

    /**
     * @note[short] MacOS (ARM): 0x1ce018
     * @note[short] MacOS (Intel): 0x220120
     * @note[short] Windows: 0x60aa40
     * @note[short] iOS: 0x1ae7f0
     * @note[short] Android
     */
    cocos2d::CCArray* createCustomToggleValueControl(int property, bool toggled, bool notClickable, std::string text, cocos2d::CCPoint position, bool vertical, int page, int group);

    /**
     * @note[short] Android
     */
    void createEasingControls(cocos2d::CCPoint position, float scale, int page, int group);

    /**
     * @note[short] MacOS (ARM): 0x1ca014
     * @note[short] MacOS (Intel): 0x21abb0
     * @note[short] iOS: 0x1ab794
     * @note[short] Android
     */
    void createMultiTriggerItems(cocos2d::CCPoint touchPos, cocos2d::CCPoint spawnPos, cocos2d::CCPoint multiPos);

    /**
     * @note[short] Android
     */
    void createMultiTriggerItemsCorner();

    /**
     * @note[short] Android
     */
    void createMultiTriggerItemsDefault();

    /**
     * @note[short] Android
     */
    void createMultiTriggerItemsDefaultHorizontal();

    /**
     * @note[short] Android
     */
    void createMultiTriggerItemsDefaultVertical();

    /**
     * @note[short] MacOS (ARM): 0x1c8ef8
     * @note[short] MacOS (Intel): 0x219a10
     * @note[short] iOS: 0x1aa99c
     * @note[short] Android
     */
    void createPageButtons(float offset, int arrow);

    /**
     * @note[short] MacOS (ARM): 0x1ce450
     * @note[short] MacOS (Intel): 0x220550
     * @note[short] Windows: 0x60ad90
     * @note[short] iOS: 0x1aeacc
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* createPlusButton(int tag, cocos2d::CCPoint position, float scale, std::string frame, int page, int group);

    /**
     * @note[short] MacOS (ARM): 0x1c9df8
     * @note[short] MacOS (Intel): 0x21a970
     * @note[short] iOS: 0x1ab584
     * @note[short] Android
     */
    CCMenuItemToggler* createToggleButton(std::string text, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x1cdc24
     * @note[short] MacOS (Intel): 0x21fd50
     * @note[short] Windows: 0x60a680
     * @note[short] iOS: 0x1ae480
     * @note[short] Android
     */
    cocos2d::CCArray* createToggleValueControl(int property, std::string label, cocos2d::CCPoint position, bool vertical, int page, int group, float scale);

    /**
     * @note[short] MacOS (ARM): 0x1cdd78
     * @note[short] MacOS (Intel): 0x21fe80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ae5c0
     * @note[short] Android
     */
    cocos2d::CCArray* createToggleValueControlAdvanced(int property, std::string label, cocos2d::CCPoint position, bool vertical, int page, int group, float buttonScale, float labelScale, float labelWidth, cocos2d::CCPoint offset);

    /**
     * @note[short] MacOS (ARM): 0x1cc708
     * @note[short] MacOS (Intel): 0x21e7b0
     * @note[short] Windows: 0x609800
     * @note[short] iOS: 0x1ad4f0
     * @note[short] Android
     */
    void createValueControl(int property, std::string label, cocos2d::CCPoint position, float scale, float sliderMin, float sliderMax);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x289a2c
     * @note[short] Android
     */
    cocos2d::CCArray* createValueControlAdvanced(int property, std::string label, cocos2d::CCPoint position, float scale, bool noSlider, InputValueType valueType, int length, bool arrows, float sliderMin, float sliderMax, int page, int group, GJInputStyle inputStyle, int decimalPlaces, bool allowDisable);

    /**
     * @note[short] Android
     */
    TodoReturn createValueControlAdvanced(ValueControlSettings& p0);

    /**
     * @note[short] MacOS (ARM): 0x1cc9e4
     * @note[short] MacOS (Intel): 0x21ead0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void createValueControlWArrows(int property, std::string label, cocos2d::CCPoint position, float scale);

    /**
     * @note[short] MacOS (ARM): 0x1c96b8
     * @note[short] MacOS (Intel): 0x21a1e0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x1ab09c
     * @note[short] Android
     */
    cocos2d::CCArray* getGroupContainer(int group);

    /**
     * @note[short] MacOS (ARM): 0x1d09c0
     * @note[short] MacOS (Intel): 0x2235f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getMaxSliderValue(int property);

    /**
     * @note[short] MacOS (ARM): 0x1d0990
     * @note[short] MacOS (Intel): 0x2235c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getMinSliderValue(int property);

    /**
     * @note[short] MacOS (ARM): 0x1ca750
     * @note[short] MacOS (Intel): 0x21b400
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1abe2c
     * @note[short] Android
     */
    cocos2d::CCArray* getObjects();

    /**
     * @note[short] MacOS (ARM): 0x1c94a0
     * @note[short] MacOS (Intel): 0x219fa0
     * @note[short] Windows: 0x607940
     * @note[short] iOS: 0x1aaf08
     * @note[short] Android
     */
    cocos2d::CCArray* getPageContainer(int page);

    /**
     * @note[short] MacOS (ARM): 0x1cee64
     * @note[short] MacOS (Intel): 0x220ff0
     * @note[short] Windows: 0x60e040
     * @note[short] iOS: 0x1af1f0
     * @note[short] Android
     */
    float getTriggerValue(int property, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1cac54
     * @note[short] MacOS (Intel): 0x21b9c0
     * @note[short] Windows: 0x60b530
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getTruncatedValue(float value, int decimals);

    /**
     * @note[short] MacOS (ARM): 0x1cc0b4
     * @note[short] MacOS (Intel): 0x21e120
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ad1e8
     * @note[short] Android
     */
    float getTruncatedValueByTag(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x1c92a0
     * @note[short] MacOS (Intel): 0x219d90
     * @note[short] Windows: 0x6079c0
     * @note[short] iOS: 0x1aad28
     * @note[short] Android
     */
    void goToPage(int page, bool hideAll);

    /**
     * @note[short] MacOS (ARM): 0x1c9504
     * @note[short] MacOS (Intel): 0x21a000
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4caaa0
     * @note[short] Android
     */
    void hideAll();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1, float p2, float p3, int p4, float p5);

    /**
     * @note[short] MacOS (ARM): 0x1d2918
     * @note[short] MacOS (Intel): 0x225430
     * @note[short] Windows: 0x611940
     * @note[short] iOS: 0x1b1ab0
     * @note[short] Android
     */
    void onCustomEaseArrow(int property, bool up);

    /**
     * @note[short] MacOS (ARM): 0x1d25e8
     * @note[short] MacOS (Intel): 0x225170
     * @note[short] iOS: 0x1ad250
     * @note[short] Android
     */
    void onCustomEaseArrowDown(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1d2534
     * @note[short] MacOS (Intel): 0x2250d0
     * @note[short] iOS: 0x1b17f8
     * @note[short] Android
     */
    void onCustomEaseArrowUp(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1d23f4
     * @note[short] MacOS (Intel): 0x224fe0
     * @note[short] Windows: 0x6117c0
     * @note[short] iOS: 0x1b16d0
     * @note[short] Android
     */
    void onCustomEaseRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1cd928
     * @note[short] MacOS (Intel): 0x21fab0
     * @note[short] Windows: 0x60a570
     * @note[short] iOS: 0x1ae274
     * @note[short] Android
     */
    void onDisableValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1d15a8
     * @note[short] MacOS (Intel): 0x2241c0
     * @note[short] iOS: 0x1b0ad4
     * @note[short] Android
     */
    void onEase(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEasePreview(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1d1284
     * @note[short] MacOS (Intel): 0x223ef0
     * @note[short] Windows: 0x610b80
     * @note[short] iOS: 0x1b0840
     * @note[short] Android
     */
    void onEaseRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x653530
     * @note[short] MacOS (Intel): 0x21b2f0
     * @note[short] iOS: 0x34a504
     * @note[short] Android
     */
    void onMultiTrigger(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c91b4
     * @note[short] MacOS (Intel): 0x219cb0
     * @note[short] Windows: 0x6078d0
     * @note[short] iOS: 0x1aac3c
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x21b2a0
     * @note[short] Android
     */
    void onSpawnedByTrigger(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1cdf9c
     * @note[short] MacOS (Intel): 0x2200b0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x1ae774
     * @note[short] Android
     */
    void onToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x21b250
     * @note[short] Android
     */
    void onTouchTriggered(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x220bc0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void postSetup();

    /**
     * @note[short] MacOS (ARM): 0x1ceaa0
     * @note[short] MacOS (Intel): 0x220ba0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1aeedc
     * @note[short] Android
     */
    void preSetup();

    /**
     * @note[short] MacOS (ARM): 0x1c9510
     * @note[short] MacOS (Intel): 0x21a020
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void refreshGroupVisibility();

    /**
     * @note[short] Android
     */
    TodoReturn registerIDNameInput(int p0, IDNameInput* p1);

    /**
     * @note[short] MacOS (ARM): 0x1c9a80
     * @note[short] MacOS (Intel): 0x21a5f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void removeObjectFromGroup(cocos2d::CCObject* object, int group);

    /**
     * @note[short] MacOS (ARM): 0x1c992c
     * @note[short] MacOS (Intel): 0x21a470
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ab230
     * @note[short] Android
     */
    void removeObjectFromPage(cocos2d::CCObject* object, int page);

    /**
     * @note[short] MacOS (ARM): 0x1cda28
     * @note[short] MacOS (Intel): 0x21fb90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ae328
     * @note[short] Android
     */
    void resetDisabledValues();

    /**
     * @note[short] Android
     */
    void setCustomBGColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x1cd8a8
     * @note[short] MacOS (Intel): 0x21fa30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ae214
     * @note[short] Android
     */
    void setMaxSliderValue(float value, int property);

    /**
     * @note[short] MacOS (ARM): 0x1cd828
     * @note[short] MacOS (Intel): 0x21f9b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setMinSliderValue(float value, int property);

    /**
     * @note[short] Android
     */
    TodoReturn shouldLimitArrowValue(int p0);

    /**
     * @note[short] MacOS (ARM): 0x1cc490
     * @note[short] MacOS (Intel): 0x21e540
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool shouldLimitValue(int property);

    /**
     * @note[short] MacOS (ARM): 0x1c8e34
     * @note[short] MacOS (Intel): 0x3b2650
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1aa8d8
     * @note[short] Android
     */
    void toggleBG(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x1d27dc
     * @note[short] MacOS (Intel): 0x225310
     * @note[short] Windows: 0x611d00
     * @note[short] iOS: 0x1b1998
     * @note[short] Android
     */
    void toggleCustomEaseRateVisibility(int property, int tag);

    /**
     * @note[short] MacOS (ARM): 0x1cdb0c
     * @note[short] MacOS (Intel): 0x21fc50
     * @note[short] Windows: 0x368390
     * @note[short] iOS: 0x1ae3c4
     * @note[short] Android
     */
    void toggleDisableButtons(bool visible);

    /**
     * @note[short] Android
     */
    void toggleEaseRateVisibility();

    /**
     * @note[short] Android
     */
    TodoReturn toggleLimitArrowValue(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x1cc550
     * @note[short] MacOS (Intel): 0x21e600
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ad41c
     * @note[short] Android
     */
    void toggleLimitValue(int property, bool limit);

    /**
     * @note[short] MacOS (ARM): 0x1c9228
     * @note[short] MacOS (Intel): 0x219d20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1aacb0
     * @note[short] Android
     */
    void togglePageArrows(bool visible);

    /**
     * @note[short] Windows: 0x6096f0
     * @note[short] Android
     */
    void triggerArrowChanged(int property, bool isRight);

    /**
     * @note[short] Windows: 0x609690
     * @note[short] iOS: 0x41aac
     * @note[short] Android
     */
    void triggerArrowLeft(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x6096c0
     * @note[short] iOS: 0x41aac
     * @note[short] Android
     */
    void triggerArrowRight(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x81530
     * @note[short] Android
     */
    void triggerSliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1d269c
     * @note[short] MacOS (Intel): 0x225210
     * @note[short] iOS: 0x1b1868
     * @note[short] Android
     */
    void updateCustomEaseLabel(int property, int easingType);

    /**
     * @note[short] MacOS (ARM): 0x1d1a60
     * @note[short] MacOS (Intel): 0x224630
     * @note[short] Windows: 0x611be0
     * @note[short] iOS: 0x1b0ee4
     * @note[short] Android
     */
    void updateCustomEaseRateLabel(int property, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x1ce26c
     * @note[short] MacOS (Intel): 0x220370
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ae9b8
     * @note[short] Android
     */
    void updateCustomToggleTrigger(int tag, bool toggled);

    /**
     * @note[short] MacOS (ARM): 0x1d1614
     * @note[short] MacOS (Intel): 0x224230
     * @note[short] iOS: 0x1b0b40
     * @note[short] Android
     */
    void updateEaseLabel();

    /**
     * @note[short] Android
     */
    void updateEaseRateLabel();

    /**
     * @note[short] MacOS (ARM): 0x1ca894
     * @note[short] MacOS (Intel): 0x21b560
     * @note[short] iOS: 0x1abf20
     * @note[short] Android
     */
    void updateEditorLabel();

    /**
     * @note[short] MacOS (ARM): 0x1d07f0
     * @note[short] MacOS (Intel): 0x223430
     * @note[short] Windows: 0x60fbe0
     * @note[short] iOS: 0x1aff50
     * @note[short] Android
     */
    void updateInputNodeLabel(int property, std::string text);

    /**
     * @note[short] MacOS (ARM): 0x1ce2a8
     * @note[short] MacOS (Intel): 0x2203b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateLabel(int property, std::string text);

    /**
     * @note[short] MacOS (ARM): 0x1ca6d8
     * @note[short] MacOS (Intel): 0x21b380
     * @note[short] Windows: 0x608e10
     * @note[short] iOS: 0x1abdb8
     * @note[short] Android
     */
    void updateMultiTriggerBtn();

    /**
     * @note[short] MacOS (ARM): 0x1d04fc
     * @note[short] MacOS (Intel): 0x223140
     * @note[short] Windows: 0x60b9e0
     * @note[short] iOS: 0x165a20
     * @note[short] Android
     */
    void updateSlider(int property);

    /**
     * @note[short] MacOS (ARM): 0x1cba08
     * @note[short] MacOS (Intel): 0x21d9e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1acdb0
     * @note[short] Android
     */
    void updateSlider(int property, float value);

    /**
     * @note[short] MacOS (ARM): 0x1ca90c
     * @note[short] MacOS (Intel): 0x21b5e0
     * @note[short] iOS: 0x1abf98
     * @note[short] Android
     */
    void updateSpawnedByTrigger();

    /**
     * @note[short] MacOS (ARM): 0x1ca9d4
     * @note[short] MacOS (Intel): 0x21b6d0
     * @note[short] iOS: 0x1ac008
     * @note[short] Android
     */
    void updateTouchTriggered();

    /**
     * @note[short] MacOS (ARM): 0x1cd9b0
     * @note[short] MacOS (Intel): 0x21fb20
     * @note[short] Windows: 0x60fb50
     * @note[short] iOS: 0x1ae2b0
     * @note[short] Android
     */
    void updateValue(int property, float value);

    /**
     * @note[short] MacOS (ARM): 0x1cc614
     * @note[short] MacOS (Intel): 0x21e6c0
     * @note[short] iOS: 0x1ad46c
     * @note[short] Android
     */
    void updateValueControls(int property, float value);

    /**
     * @note[short] MacOS (Intel): 0x21ba30
     * @note[short] Windows: 0x1fd250
     * @note[short] iOS: 0x1ac1cc
     * @note[short] Android
     */
    void valueChanged(int property, float value);
    EffectGameObject* m_gameObject;
    cocos2d::CCArray* m_gameObjects;
    bool m_touchTriggered;
    bool m_spawnTriggered;
    CCMenuItemToggler* m_touchToggle;
    CCMenuItemToggler* m_spawnToggle;
    cocos2d::CCArray* m_multiTriggerContainer;
    bool m_multiTriggered;
    float m_width;
    float m_height;
    bool m_disableTextDelegate;
    cocos2d::CCDictionary* m_valueToggles;
    cocos2d::CCDictionary* m_inputNodes;
    cocos2d::CCDictionary* m_valueControls;
    cocos2d::CCDictionary* m_customValueToggles;
    cocos2d::CCDictionary* m_disableButtons;
    cocos2d::CCLabelBMFont* m_easingLabel;
    cocos2d::CCLabelBMFont* m_easingRateLabel;
    CCMenuItemSpriteExtra* m_easingRateButton;
    EasingType m_easingType;
    float m_easingRate;
    cocos2d::CCDictionary* m_inputLabels;
    cocos2d::CCDictionary* m_triggerValues;
    cocos2d::CCDictionary* m_minSliderValues;
    cocos2d::CCDictionary* m_maxSliderValues;
    std::map<int, bool> m_shouldLimitValues;
    std::map<int, bool> m_shouldLimitArrowValues;
    bool m_disableSliderDelegate;
    bool m_effectObjects;
    cocos2d::CCArray* m_pageContainers;
    int m_page;
    float m_easingControlScale;
    cocos2d::CCArray* m_groupContainers;
    cocos2d::CCDictionary* m_customEasingTags;
    cocos2d::CCDictionary* m_customEasingLabels;
    cocos2d::CCDictionary* m_customEasingButtons;
    cocos2d::CCDictionary* m_customEasingScales;
    cocos2d::CCDictionary* m_disabledEasingButtons;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    bool m_hideAll;
    cocos2d::CCDictionary* m_unk3d8;
    int m_unk3e0;
};
