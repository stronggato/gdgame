#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/ConfigureValuePopupDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>

class SetGroupIDLayer : public FLAlertLayer, public ConfigureValuePopupDelegate {
public:
    static constexpr auto CLASS_NAME = "SetGroupIDLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetGroupIDLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetGroupIDLayer();

    /**
     * @note[short] MacOS (Intel): 0x2fc850
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~SetGroupIDLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetGroupIDLayer* create(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (Intel): 0x3028c0
     * @note[short] Windows: 0x590dc0
     * @note[short] iOS: 0x42a20
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x296590
     * @note[short] MacOS (Intel): 0x3027c0
     * @note[short] Windows: 0x590120
     * @note[short] iOS: 0x429c0
     * @note[short] Android
     */
    virtual void valuePopupClosed(ConfigureValuePopup* popup, float value);

    /**
     * @note[short] MacOS (ARM): 0x29599c
     * @note[short] MacOS (Intel): 0x301ad0
     * @note[short] Windows: 0x1250a0
     * @note[short] iOS: 0x4217c
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x2959b8
     * @note[short] MacOS (Intel): 0x301b10
     * @note[short] Windows: 0x58e110
     * @note[short] iOS: 0x42198
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] Windows: 0x58eed0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x58ef70
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x58f050
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x58f0f0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x2964a4
     * @note[short] MacOS (Intel): 0x3026d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x428dc
     * @note[short] Android
     */
    void addGroupID(int id);

    /**
     * @note[short] MacOS (Intel): 0x64cd0
     * @note[short] Windows: 0x58f190
     * @note[short] Android
     */
    void callRemoveFromGroup(float dt);

    /**
     * @note[short] MacOS (ARM): 0x293420
     * @note[short] MacOS (Intel): 0x2ff240
     * @note[short] Windows: 0x58d040
     * @note[short] iOS: 0x404e0
     * @note[short] Android
     */
    CCTextInputNode* createTextInput(cocos2d::CCPoint position, int tag, int length, std::string placeholder, float width, int arrow);

    /**
     * @note[short] MacOS (ARM): 0x293ae0
     * @note[short] MacOS (Intel): 0x2ff900
     * @note[short] iOS: 0x40a94
     * @note[short] Android
     */
    void determineStartValues();

    /**
     * @note[short] MacOS (Intel): 0x2fca40
     * @note[short] Windows: 0x172760
     * @note[short] Android
     */
    bool init(GameObject* obj, cocos2d::CCArray* objs);

    /**
     * @note[short] MacOS (ARM): 0x29393c
     * @note[short] MacOS (Intel): 0x2ff730
     * @note[short] Windows: 0x58f590
     * @note[short] iOS: 0x40958
     * @note[short] Android
     */
    void onAddGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onAddGroupParent(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x294edc
     * @note[short] MacOS (Intel): 0x300ea0
     * @note[short] iOS: 0x41994
     * @note[short] Android
     */
    void onAnim(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x301970
     * @note[short] Android
     */
    void onArrow(int tag, int increment);

    /**
     * @note[short] MacOS (ARM): 0x294fbc
     * @note[short] MacOS (Intel): 0x300f90
     * @note[short] iOS: 0x41a74
     * @note[short] Android
     */
    void onArrowLeft(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1cc128
     * @note[short] MacOS (Intel): 0x21e510
     * @note[short] Android
     */
    void onArrowRight(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x292e88
     * @note[short] MacOS (Intel): 0x2fec30
     * @note[short] Windows: 0x3cd870
     * @note[short] iOS: 0x400a0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x294cdc
     * @note[short] MacOS (Intel): 0x300c40
     * @note[short] iOS: 0x418a8
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x294de4
     * @note[short] MacOS (Intel): 0x300d60
     * @note[short] Windows: 0x58dde0
     * @note[short] iOS: 0x41944
     * @note[short] Android
     */
    void onExtra(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2da6b8
     * @note[short] Windows: 0x381340
     * @note[short] iOS: 0x4196c
     * @note[short] Android
     */
    void onExtra2(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x293244
     * @note[short] MacOS (Intel): 0x2ff080
     * @note[short] iOS: 0x4036c
     * @note[short] Android
     */
    void onGroupIDOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29306c
     * @note[short] iOS: 0x40284
     * @note[short] Android
     */
    void onNextFreeEditorLayer1(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x293158
     * @note[short] iOS: 0x402f8
     * @note[short] Android
     */
    void onNextFreeEditorLayer2(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x294114
     * @note[short] MacOS (Intel): 0x2fffe0
     * @note[short] iOS: 0x40fe4
     * @note[short] Android
     */
    void onNextFreeOrderChannel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x295d44
     * @note[short] MacOS (Intel): 0x301f40
     * @note[short] Android
     */
    void onNextGroupID1(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x294d04
     * @note[short] MacOS (Intel): 0x300c70
     * @note[short] Windows: 0x58dc30
     * @note[short] iOS: 0x418d0
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x379db0
     * @note[short] Android
     */
    void onRemoveFromGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x3028a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onSmoothEase(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x294f0c
     * @note[short] MacOS (Intel): 0x300ed0
     * @note[short] iOS: 0x419c4
     * @note[short] Android
     */
    void onToggleGuide(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x294f38
     * @note[short] MacOS (Intel): 0x300f00
     * @note[short] iOS: 0x419f0
     * @note[short] Android
     */
    void onToggleSelectedOrder(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x294f90
     * @note[short] MacOS (Intel): 0x300f60
     * @note[short] iOS: 0x41a48
     * @note[short] Android
     */
    void onToggleTraceIn(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x294f64
     * @note[short] MacOS (Intel): 0x300f30
     * @note[short] iOS: 0x41a1c
     * @note[short] Android
     */
    void onToggleTraceOut(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2939d8
     * @note[short] MacOS (Intel): 0x2ff7e0
     * @note[short] Windows: 0x58f880
     * @note[short] iOS: 0x409f4
     * @note[short] Android
     */
    void onZLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x293dc8
     * @note[short] MacOS (Intel): 0x2ffca0
     * @note[short] Windows: 0x58f940
     * @note[short] iOS: 0x40d70
     * @note[short] Android
     */
    void onZLayerShift(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x302600
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removeGroupID(int id);

    /**
     * @note[short] Android
     */
    void updateEditorLabel();

    /**
     * @note[short] Android
     */
    void updateEditorLabel2();

    /**
     * @note[short] MacOS (ARM): 0x295448
     * @note[short] MacOS (Intel): 0x3014a0
     * @note[short] iOS: 0x41d1c
     * @note[short] Android
     */
    void updateEditorLayerID();

    /**
     * @note[short] MacOS (ARM): 0x2954b8
     * @note[short] MacOS (Intel): 0x301520
     * @note[short] iOS: 0x41d84
     * @note[short] Android
     */
    void updateEditorLayerID2();

    /**
     * @note[short] MacOS (Intel): 0x3015a0
     * @note[short] Android
     */
    void updateEditorOrder();

    /**
     * @note[short] Android
     */
    void updateEditorOrderLabel();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    void updateGroupIDButtons();

    /**
     * @note[short] Android
     */
    void updateGroupIDLabel();

    /**
     * @note[short] MacOS (ARM): 0x1738c
     * @note[short] MacOS (Intel): 0x301650
     * @note[short] iOS: 0x47ab94
     * @note[short] Android
     */
    void updateOrderChannel();

    /**
     * @note[short] Android
     */
    void updateOrderChannelLabel();

    /**
     * @note[short] MacOS (ARM): 0x29470c
     * @note[short] MacOS (Intel): 0x3005e0
     * @note[short] iOS: 0x41318
     * @note[short] Android
     */
    void updateZLayerButtons();

    /**
     * @note[short] Android
     */
    void updateZOrder();

    /**
     * @note[short] Android
     */
    void updateZOrderLabel();
    GameObject* m_targetObject;
    cocos2d::CCArray* m_targetObjects;
    cocos2d::CCArray* m_zLayerButtons;
    cocos2d::CCArray* m_groupIDObjects;
    CCTextInputNode* m_editorLayerInput;
    CCTextInputNode* m_editorLayer2Input;
    CCTextInputNode* m_zOrderInput;
    CCTextInputNode* m_groupIDInput;
    CCTextInputNode* m_orderInput;
    CCTextInputNode* m_channelInput;
    bool m_showChannelOrder;
    int m_channelValue;
    bool m_channelUpdated;
    int m_groupIDValue;
    int m_editorLayerValue;
    int m_editorLayer2Value;
    int m_zOrderValue;
    ZLayer m_zLayerValue;
    int m_orderValue;
    bool m_channelOrderEdited;
    bool m_editorLayerEdited;
    bool m_removeGroupsLock;
    int m_groupToRemove;
    bool m_addedGroup;
    bool m_reverseChanged;
    bool m_hasTargetObjects;
    bool m_unk2ff;
    bool m_unk300;
    int m_nextFreeID;
    cocos2d::CCDictionary* m_parentGroups;
};
