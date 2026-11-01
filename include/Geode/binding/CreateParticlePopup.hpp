#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/ColorSelectDelegate.hpp>
#include <Geode/binding/SliderDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>

class CreateParticlePopup : public FLAlertLayer, public ColorSelectDelegate, public SliderDelegate {
public:
    static constexpr auto CLASS_NAME = "CreateParticlePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CreateParticlePopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x5bd270
     * @note[short] Android: Rebinded
     */
    virtual  ~CreateParticlePopup();

    /**
     * @note[short] MacOS (ARM): 0x3cec48
     * @note[short] MacOS (Intel): 0x462570
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static CreateParticlePopup* create(std::string str);

    /**
     * @note[short] MacOS (ARM): 0x3ceb1c
     * @note[short] MacOS (Intel): 0x462480
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x366da4
     * @note[short] Android
     */
    static CreateParticlePopup* create(ParticleGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (Intel): 0x4624a0
     * @note[short] Windows: 0x5bd440
     * @note[short] Android
     */
    static CreateParticlePopup* create(ParticleGameObject* object, cocos2d::CCArray* objects, std::string str);

    /**
     * @note[short] MacOS (ARM): 0x3d6308
     * @note[short] MacOS (Intel): 0x46a830
     * @note[short] Windows: 0x5c40f0
     * @note[short] iOS: 0x36d534
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x3d6cfc
     * @note[short] MacOS (Intel): 0x46b300
     * @note[short] Windows: 0x5c6e30
     * @note[short] iOS: 0x36dd84
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3d6dec
     * @note[short] MacOS (Intel): 0x46b410
     * @note[short] Windows: 0x5c6f30
     * @note[short] iOS: 0x36de74
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3d7180
     * @note[short] MacOS (Intel): 0x46b7f0
     * @note[short] Windows: 0x5c7360
     * @note[short] iOS: 0x36e20c
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3d71bc
     * @note[short] MacOS (Intel): 0x46b840
     * @note[short] Windows: 0x83d80
     * @note[short] iOS: 0x36e248
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Windows: 0x5c6e20
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3d6ba0
     * @note[short] MacOS (Intel): 0x46b190
     * @note[short] Windows: 0x5c6540
     * @note[short] iOS: 0x36dc48
     * @note[short] Android
     */
    virtual void sliderBegan(Slider* slider);

    /**
     * @note[short] MacOS (ARM): 0x3d6cb8
     * @note[short] MacOS (Intel): 0x6bc10
     * @note[short] Windows: 0x5c6600
     * @note[short] iOS: 0x36dd60
     * @note[short] Android
     */
    virtual void sliderEnded(Slider* slider);

    /**
     * @note[short] MacOS (ARM): 0x3d5e70
     * @note[short] MacOS (Intel): 0x46a370
     * @note[short] Windows: 0x5c3750
     * @note[short] iOS: 0x36d0c0
     * @note[short] Android
     */
    virtual void colorSelectClosed(cocos2d::CCNode* popup);

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
     * @note[short] MacOS (ARM): 0x3d6508
     * @note[short] MacOS (Intel): 0x46aa60
     * @note[short] Windows: 0x1250a0
     * @note[short] iOS: 0x36d71c
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3d6524
     * @note[short] MacOS (Intel): 0x46aaa0
     * @note[short] Windows: 0x5c4420
     * @note[short] iOS: 0x36d738
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] Android
     */
    TodoReturn applyTexturePage();

    /**
     * @note[short] MacOS (ARM): 0x3d34d0
     * @note[short] MacOS (Intel): 0x467560
     * @note[short] iOS: 0x36aa9c
     * @note[short] Android
     */
    void centerAlignParticle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d3c44
     * @note[short] MacOS (Intel): 0x467cc0
     * @note[short] Windows: 0x5c21c0
     * @note[short] iOS: 0x36b1c8
     * @note[short] Android
     */
    void createParticleSlider(gjParticleValue value, int page, bool centerLabel, cocos2d::CCPoint position, cocos2d::CCArray* displayNodes);

    /**
     * @note[short] MacOS (ARM): 0x3d38d8
     * @note[short] MacOS (Intel): 0x467940
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCNode* getPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x3d4bd4
     * @note[short] MacOS (Intel): 0x468cd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getPageButton(int page);

    /**
     * @note[short] MacOS (ARM): 0x3d38e4
     * @note[short] MacOS (Intel): 0x467960
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getPageContainer(int page);

    /**
     * @note[short] MacOS (ARM): 0x3d3c34
     * @note[short] MacOS (Intel): 0x467c80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCDictionary* getPageInputNodes(int page);

    /**
     * @note[short] MacOS (ARM): 0x3d38d0
     * @note[short] MacOS (Intel): 0x467930
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCMenu* getPageMenu(int page);

    /**
     * @note[short] MacOS (ARM): 0x3d3c3c
     * @note[short] MacOS (Intel): 0x467ca0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCDictionary* getPageSliders(int page);

    /**
     * @note[short] MacOS (ARM): 0x3cece8
     * @note[short] MacOS (Intel): 0x4625f0
     * @note[short] iOS: 0x366f08
     * @note[short] Android
     */
    bool init(ParticleGameObject* object, cocos2d::CCArray* objects, std::string str);

    /**
     * @note[short] MacOS (ARM): 0x3d6b80
     * @note[short] MacOS (Intel): 0x46b160
     * @note[short] Windows: 0x5c5640
     * @note[short] iOS: 0x36dc28
     * @note[short] Android
     */
    float maxSliderValueForType(gjParticleValue type);

    /**
     * @note[short] MacOS (ARM): 0x3d6b60
     * @note[short] MacOS (Intel): 0x46b140
     * @note[short] Windows: 0x5c5710
     * @note[short] iOS: 0x36dc08
     * @note[short] Android
     */
    float minSliderValueForType(gjParticleValue type);

    /**
     * @note[short] MacOS (ARM): 0x3d4728
     * @note[short] iOS: 0x36bc5c
     * @note[short] Android
     */
    void onAnimateActiveOnly(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x298268
     * @note[short] iOS: 0x440ec
     * @note[short] Android
     */
    void onAnimateOnTrigger(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d5440
     * @note[short] MacOS (Intel): 0x4695b0
     * @note[short] iOS: 0x36c694
     * @note[short] Android
     */
    void onCalcEmission(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d30c4
     * @note[short] MacOS (Intel): 0x4670f0
     * @note[short] Windows: 0x5c6ce0
     * @note[short] iOS: 0x1f249c
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d3258
     * @note[short] MacOS (Intel): 0x4672c0
     * @note[short] iOS: 0x36a894
     * @note[short] Android
     */
    void onCopySettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d3ae8
     * @note[short] MacOS (Intel): 0x467b50
     * @note[short] Windows: 0x5c3200
     * @note[short] iOS: 0x36b07c
     * @note[short] Android
     */
    void onDuplicateColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d53b0
     * @note[short] MacOS (Intel): 0x469510
     * @note[short] iOS: 0x36c604
     * @note[short] Android
     */
    void onDurationForever(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d4818
     * @note[short] MacOS (Intel): 0x4688e0
     * @note[short] Windows: 0x5c2ed0
     * @note[short] iOS: 0x36bd4c
     * @note[short] Android
     */
    void onDynamicColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d4690
     * @note[short] MacOS (Intel): 0x468700
     * @note[short] iOS: 0x36bbc4
     * @note[short] Android
     */
    void onDynamicRotation(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d38f0
     * @note[short] MacOS (Intel): 0x467980
     * @note[short] Windows: 0x5c6960
     * @note[short] iOS: 0x36ae90
     * @note[short] Android
     */
    void onEmitterMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d49ec
     * @note[short] MacOS (Intel): 0x468b20
     * @note[short] iOS: 0x36bf1c
     * @note[short] Android
     */
    void onEndRGBVarSync(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d53f8
     * @note[short] MacOS (Intel): 0x469560
     * @note[short] iOS: 0x36c64c
     * @note[short] Android
     */
    void onMaxEmission(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d3418
     * @note[short] MacOS (Intel): 0x4674a0
     * @note[short] Windows: 0x5c3a30
     * @note[short] iOS: 0x36a9e4
     * @note[short] Android
     */
    void onMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d49ac
     * @note[short] MacOS (Intel): 0x468ac0
     * @note[short] iOS: 0x36bedc
     * @note[short] Android
     */
    void onOrderSensitive(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d3630
     * @note[short] MacOS (Intel): 0x467690
     * @note[short] iOS: 0x36abfc
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d3370
     * @note[short] MacOS (Intel): 0x4673e0
     * @note[short] Windows: 0x5c35c0
     * @note[short] iOS: 0x36a984
     * @note[short] Android
     */
    void onPasteSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d3840
     * @note[short] MacOS (Intel): 0x4678b0
     * @note[short] Windows: 0x5c68e0
     * @note[short] iOS: 0x36ae00
     * @note[short] Android
     */
    void onPosType(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x298360
     * @note[short] MacOS (Intel): 0x468850
     * @note[short] iOS: 0x441d4
     * @note[short] Android
     */
    void onQuickStart(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d3520
     * @note[short] MacOS (Intel): 0x4675b0
     * @note[short] Windows: 0x5c30d0
     * @note[short] iOS: 0x36aaec
     * @note[short] Android
     */
    void onSelectColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d4a0c
     * @note[short] MacOS (Intel): 0x468b50
     * @note[short] iOS: 0x36bf3c
     * @note[short] Android
     */
    void onSelectParticleTexture(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d49cc
     * @note[short] MacOS (Intel): 0x468af0
     * @note[short] iOS: 0x36befc
     * @note[short] Android
     */
    void onStartRGBVarSync(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTexturePage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d45b0
     * @note[short] MacOS (Intel): 0x4685f0
     * @note[short] iOS: 0x36bae4
     * @note[short] Android
     */
    void onToggleBlending(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d3970
     * @note[short] MacOS (Intel): 0x467a00
     * @note[short] iOS: 0x36af10
     * @note[short] Android
     */
    void onTogglePerfLog(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d4630
     * @note[short] MacOS (Intel): 0x468690
     * @note[short] iOS: 0x36bb64
     * @note[short] Android
     */
    void onToggleStartRadiusEqualToEnd(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d4650
     * @note[short] MacOS (Intel): 0x4686c0
     * @note[short] iOS: 0x36bb84
     * @note[short] Android
     */
    void onToggleStartRotationIsDir(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d45f0
     * @note[short] MacOS (Intel): 0x468630
     * @note[short] iOS: 0x36bb24
     * @note[short] Android
     */
    void onToggleStartSizeEqualToEnd(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d4610
     * @note[short] MacOS (Intel): 0x468660
     * @note[short] iOS: 0x36bb44
     * @note[short] Android
     */
    void onToggleStartSpinEqualToEnd(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d48f0
     * @note[short] MacOS (Intel): 0x4689e0
     * @note[short] Windows: 0x5c2ff0
     * @note[short] iOS: 0x36be20
     * @note[short] Android
     */
    void onUniformColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d6cd0
     * @note[short] MacOS (Intel): 0x46b2b0
     * @note[short] Windows: 0x5c66c0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool particleValueIsInt(gjParticleValue type);

    /**
     * @note[short] MacOS (ARM): 0x3d5220
     * @note[short] MacOS (Intel): 0x469350
     * @note[short] Windows: 0x5c6610
     * @note[short] iOS: 0x36c474
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d4ff0
     * @note[short] MacOS (Intel): 0x469130
     * @note[short] iOS: 0x36c2f4
     * @note[short] Android
     */
    std::string titleForParticleValue(gjParticleValue type);

    /**
     * @note[short] MacOS (ARM): 0x3d4be0
     * @note[short] MacOS (Intel): 0x468cf0
     * @note[short] Windows: 0x5c69e0
     * @note[short] iOS: 0x36c104
     * @note[short] Android
     */
    void toggleGravityMode(bool gravityMode);

    /**
     * @note[short] MacOS (ARM): 0x3d39c8
     * @note[short] MacOS (Intel): 0x467a60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x36af68
     * @note[short] Android
     */
    void updateColorSprite(int tag);

    /**
     * @note[short] MacOS (ARM): 0x3d501c
     * @note[short] MacOS (Intel): 0x469170
     * @note[short] iOS: 0x36c320
     * @note[short] Android
     */
    void updateInputNodeStringForType(gjParticleValue type);

    /**
     * @note[short] MacOS (ARM): 0x3d54dc
     * @note[short] MacOS (Intel): 0x469660
     * @note[short] Windows: 0x12a730
     * @note[short] iOS: 0x36c730
     * @note[short] Android
     */
    void updateParticleValueForType(float value, gjParticleValue type, cocos2d::CCParticleSystemQuad* particle);

    /**
     * @note[short] MacOS (ARM): 0x3d52f0
     * @note[short] MacOS (Intel): 0x469440
     * @note[short] iOS: 0x36c544
     * @note[short] Android
     */
    void updateSliderForType(gjParticleValue type);

    /**
     * @note[short] MacOS (ARM): 0x3d660c
     * @note[short] MacOS (Intel): 0x46ab80
     * @note[short] Windows: 0x38faf0
     * @note[short] iOS: 0x36d820
     * @note[short] Android
     */
    float valueForParticleValue(gjParticleValue type);

    /**
     * @note[short] MacOS (ARM): 0x3d5e08
     * @note[short] MacOS (Intel): 0x46a300
     * @note[short] Windows: 0x5c6c50
     * @note[short] iOS: 0x36d058
     * @note[short] Android
     */
    void willClose();
    ParticleGameObject* m_targetObject;
    cocos2d::CCArray* m_targetObjects;
    cocos2d::CCArray* m_particles;
    bool m_disableTextDelegate;
    cocos2d::CCParticleSystemQuad* m_particle;
    cocos2d::CCParticleSystemQuad* m_standaloneParticle;
    int m_touchID;
    cocos2d::CCPoint m_touchDelta;
    cocos2d::CCArray* m_inputDicts;
    cocos2d::CCArray* m_sliderDicts;
    cocos2d::CCArray* m_pageNodes;
    cocos2d::CCArray* m_pageButtons;
    cocos2d::CCArray* m_pageMenus;
    cocos2d::CCArray* m_pageObjectArrays;
    ParticlePreviewLayer* m_previewLayer;
    CCMenuItemSpriteExtra* m_mode1Button;
    CCMenuItemSpriteExtra* m_mode2Button;
    CCMenuItemSpriteExtra* m_mode3Button;
    float m_elapsed;
    int m_selectedMode;
    CCMenuItemToggler* m_freeToggler;
    CCMenuItemToggler* m_relativeToggler;
    CCMenuItemToggler* m_groupedToggler;
    CCMenuItemToggler* m_objColorToggler;
    CCMenuItemToggler* m_uniformColorToggler;
    CCMenuItemToggler* m_gravityToggler;
    CCMenuItemToggler* m_radiusToggler;
    cocos2d::CCSprite* m_selectSprite;
    cocos2d::CCSprite* m_particleColorSprite;
    cocos2d::CCSprite* m_startColorSprite;
    cocos2d::CCSprite* m_endColorSprite;
    cocos2d::CCArray* m_gravityObjects;
    cocos2d::CCArray* m_radiusObjects;
    bool m_perfLogEnabled;
    float m_perfLogElapsed;
    cocos2d::CCLabelBMFont* m_perfLogLabel;
    int m_particleIndex;
    int m_page;
    bool m_useObjectColor;
    bool m_animateOnTrigger;
    bool m_onlyAnimateActive;
    bool m_quickStart;
    float m_respawnResult;
};
