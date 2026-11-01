#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GameObjectEditorState.hpp>
#include <Geode/binding/GJTransformState.hpp>
#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/ColorSelectDelegate.hpp>
#include <Geode/binding/GJRotationControlDelegate.hpp>
#include <Geode/binding/GJScaleControlDelegate.hpp>
#include <Geode/binding/GJTransformControlDelegate.hpp>
#include <Geode/binding/MusicDownloadDelegate.hpp>
#include <Geode/binding/SetIDPopupDelegate.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>
#include <Geode/mapping/unordered_map.hpp>

class EditorUI : public cocos2d::CCLayer, public FLAlertLayerProtocol, public ColorSelectDelegate, public GJRotationControlDelegate, public GJScaleControlDelegate, public GJTransformControlDelegate, public MusicDownloadDelegate, public SetIDPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "EditorUI";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(EditorUI, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x2d2e28
     * @note[short] MacOS (Intel): 0x1a880
     * @note[short] Windows: 0x1a70d0
     * @note[short] iOS: 0x242a24
     * @note[short] Android: Rebinded
     */
     EditorUI();

    /**
     * @note[short] MacOS (Intel): 0x2864c0
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ~EditorUI();

    /**
     * @note[short] MacOS (Intel): 0x5210
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static EditorUI* create(LevelEditorLayer* editorLayer);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static EditorUI* get();

    /**
     * @note[short] MacOS (ARM): 0x600de8
     * @note[short] MacOS (Intel): 0x6edd20
     * @note[short] Windows: 0x1f6ee0
     * @note[short] iOS: 0x7f7d8
     * @note[short] Android
     */
    static int getRandomStartKey(int specialTemplate);

    /**
     * @note[short] MacOS (ARM): 0x601024
     * @note[short] MacOS (Intel): 0x6edf50
     * @note[short] Windows: 0x1f7180
     * @note[short] iOS: 0x7f9f8
     * @note[short] Android
     */
    static int getSmartObjectKey(int key, GJSmartDirection direction);

    /**
     * @note[short] MacOS (ARM): 0x600dc8
     * @note[short] MacOS (Intel): 0x6edd00
     * @note[short] Windows: 0x1f6e40
     * @note[short] iOS: 0x7f7b8
     * @note[short] Android
     */
    static int smartTypeForKey(int key);

    /**
     * @note[short] MacOS (ARM): 0x16ec4
     * @note[short] MacOS (Intel): 0x1a200
     * @note[short] Windows: 0x1bd7f0
     * @note[short] iOS: 0x47a790
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x548e78
     * @note[short] Windows: 0x1be3b0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (Intel): 0x609200
     * @note[short] Windows: 0x1be960
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Windows: 0x1bf150
     * @note[short] iOS: 0x4922b0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x2459e4
     * @note[short] MacOS (Intel): 0x2a2e90
     * @note[short] Windows: 0x83d80
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (Intel): 0x2a2ed0
     * @note[short] Windows: 0x133890
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x2297a4
     * @note[short] Windows: 0x1bfe60
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1e0154
     * @note[short] Windows: 0x1bfe70
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x1a7630
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual EditorUI* getUI();

    /**
     * @note[short] MacOS (ARM): 0xe818
     * @note[short] MacOS (Intel): 0x10270
     * @note[short] Windows: 0x1af510
     * @note[short] iOS: 0x4740d4
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* popup, int value);

    /**
     * @note[short] MacOS (Intel): 0x10170
     * @note[short] Windows: 0x1af430
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x550e84
     * @note[short] MacOS (Intel): 0x612440
     * @note[short] Windows: 0x2014d0
     * @note[short] iOS: 0x15f18c
     * @note[short] Android
     */
    virtual void updateTransformControl();

    /**
     * @note[short] MacOS (ARM): 0x551114
     * @note[short] Windows: 0x201800
     * @note[short] iOS: 0x15f404
     * @note[short] Android
     */
    virtual void transformChangeBegin();

    /**
     * @note[short] MacOS (ARM): 0x355214
     * @note[short] MacOS (Intel): 0x6127b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15f44c
     * @note[short] Android
     */
    virtual void transformChangeEnded();

    /**
     * @note[short] MacOS (ARM): 0x17450
     * @note[short] MacOS (Intel): 0x1a850
     * @note[short] Windows: 0x1a7640
     * @note[short] Android
     */
    virtual cocos2d::CCNode* getTransformNode();

    /**
     * @note[short] Windows: 0x200810
     * @note[short] Android
     */
    virtual void transformScaleXChanged(float scaleX);

    /**
     * @note[short] Windows: 0x200830
     * @note[short] iOS: 0x15e8dc
     * @note[short] Android
     */
    virtual void transformScaleYChanged(float scaleY);

    /**
     * @note[short] MacOS (Intel): 0x610e40
     * @note[short] Windows: 0x200850
     * @note[short] iOS: 0x15e8f4
     * @note[short] Android
     */
    virtual void transformScaleXYChanged(float scaleX, float scaleY);

    /**
     * @note[short] Windows: 0x200870
     * @note[short] iOS: 0x15e910
     * @note[short] Android
     */
    virtual void transformSkewXChanged(float skewX);

    /**
     * @note[short] Windows: 0x200890
     * @note[short] iOS: 0x15e928
     * @note[short] Android
     */
    virtual void transformSkewYChanged(float skewY);

    /**
     * @note[short] Windows: 0x2008b0
     * @note[short] iOS: 0x15e8c4
     * @note[short] Android
     */
    virtual void transformRotationXChanged(float rotationX);

    /**
     * @note[short] Windows: 0x2008d0
     * @note[short] iOS: 0x15e958
     * @note[short] Android
     */
    virtual void transformRotationYChanged(float rotationY);

    /**
     * @note[short] MacOS (Intel): 0x611530
     * @note[short] Windows: 0x2008f0
     * @note[short] iOS: 0x15e970
     * @note[short] Android
     */
    virtual void transformRotationChanged(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x550298
     * @note[short] MacOS (Intel): 0x6116a0
     * @note[short] Windows: 0x200910
     * @note[short] iOS: 0x15e98c
     * @note[short] Android
     */
    virtual void transformResetRotation();

    /**
     * @note[short] MacOS (ARM): 0x550350
     * @note[short] MacOS (Intel): 0x611790
     * @note[short] Windows: 0x200940
     * @note[short] iOS: 0x15e9d0
     * @note[short] Android
     */
    virtual void transformRestoreRotation();

    /**
     * @note[short] MacOS (Intel): 0x11e20
     * @note[short] Windows: 0x1b2bc0
     * @note[short] iOS: 0x475618
     * @note[short] Android
     */
    virtual void songStateChanged();

    /**
     * @note[short] MacOS (ARM): 0x16a68
     * @note[short] MacOS (Intel): 0x19d80
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x47a558
     * @note[short] Android
     */
    virtual void colorSelectClosed(cocos2d::CCNode* popup);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] Windows: 0x1c32d0
     * @note[short] Android
     */
    virtual bool scrollWheel(float y, float x);

    /**
     * @note[short] MacOS (ARM): 0x54f78c
     * @note[short] MacOS (Intel): 0x6109e0
     * @note[short] Windows: 0x2006e0
     * @note[short] Android
     */
    virtual void angleChangeBegin();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    virtual void angleChangeEnded();

    /**
     * @note[short] Windows: 0x2006f0
     * @note[short] Android
     */
    virtual void angleChanged(float p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x55080c
     * @note[short] MacOS (Intel): 0x611cd0
     * @note[short] Windows: 0x200df0
     * @note[short] iOS: 0x15ecf8
     * @note[short] Android
     */
    virtual void updateScaleControl();

    /**
     * @note[short] MacOS (Intel): 0x6127d0
     * @note[short] Windows: 0x2018d0
     * @note[short] iOS: 0x15f454
     * @note[short] Android
     */
    virtual void anchorPointMoved(cocos2d::CCPoint anchorPoint);

    /**
     * @note[short] MacOS (ARM): 0x550950
     * @note[short] MacOS (Intel): 0x611e90
     * @note[short] Windows: 0x200f50
     * @note[short] iOS: 0x15e774
     * @note[short] Android
     */
    virtual void scaleChangeBegin();

    /**
     * @note[short] MacOS (ARM): 0x55096c
     * @note[short] MacOS (Intel): 0x611ed0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15e790
     * @note[short] Android
     */
    virtual void scaleChangeEnded();

    /**
     * @note[short] MacOS (Intel): 0x611ef0
     * @note[short] Windows: 0x200f60
     * @note[short] Android
     */
    virtual void scaleXChanged(float scaleX, bool lock);

    /**
     * @note[short] MacOS (Intel): 0x612030
     * @note[short] Windows: 0x201060
     * @note[short] Android
     */
    virtual void scaleYChanged(float scaleY, bool lock);

    /**
     * @note[short] MacOS (ARM): 0x550bdc
     * @note[short] MacOS (Intel): 0xac3b0
     * @note[short] Windows: 0x201160
     * @note[short] iOS: 0x15efa0
     * @note[short] Android
     */
    virtual void scaleXYChanged(float scaleX, float scaleY, bool lock);

    /**
     * @note[short] Windows: 0x1bffd0
     * @note[short] Android
     */
    virtual bool handleAction(int p0, bool p1, double p2);

    /**
     * @note[short] MacOS (ARM): 0x54c960
     * @note[short] MacOS (Intel): 0x60d860
     * @note[short] Windows: 0x200530
     * @note[short] iOS: 0x15be6c
     * @note[short] Android
     */
    void activateRotationControl(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x550520
     * @note[short] MacOS (Intel): 0x6119a0
     * @note[short] iOS: 0x15eab0
     * @note[short] Android
     */
    void activateScaleControl(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x201220
     * @note[short] Android
     */
    void activateTransformControl(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x10850
     * @note[short] MacOS (Intel): 0x124f0
     * @note[short] Windows: 0x1b3cc0
     * @note[short] iOS: 0x475ad8
     * @note[short] Android
     */
    void addObjectsToSmartTemplate(GJSmartTemplate* smartTemplate, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x1002c
     * @note[short] MacOS (Intel): 0x11c60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addSnapPosition(cocos2d::CCPoint position);

    /**
     * @note[short] Android
     */
    TodoReturn adjustCustomGridSize(int p0);

    /**
     * @note[short] MacOS (ARM): 0x54e9ec
     * @note[short] Windows: 0x1ff6f0
     * @note[short] iOS: 0x15dba0
     * @note[short] Android
     */
    void alignObjects(cocos2d::CCArray* objects, bool axisY);

    /**
     * @note[short] Android
     */
    TodoReturn alignObjectsOnAxis(cocos2d::CCArray* p0, bool p1);

    /**
     * @note[short] Android
     */
    void applyOffset(GameObject* object);

    /**
     * @note[short] MacOS (Intel): 0x610800
     * @note[short] iOS: 0x15e5d4
     * @note[short] Android
     */
    cocos2d::CCPoint applySpecialOffset(cocos2d::CCPoint position, GameObject* object, cocos2d::CCPoint offset);

    /**
     * @note[short] MacOS (ARM): 0x159e4
     * @note[short] MacOS (Intel): 0x18ad0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x47980c
     * @note[short] Android
     */
    bool arrayContainsClass(cocos2d::CCArray* objects, int classType);

    /**
     * @note[short] MacOS (ARM): 0x13e60
     * @note[short] MacOS (Intel): 0x60d1f0
     * @note[short] iOS: 0x478260
     * @note[short] Android
     */
    void assignNewGroups(bool groupY);

    /**
     * @note[short] MacOS (ARM): 0x15a5c
     * @note[short] MacOS (Intel): 0x18b40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x479884
     * @note[short] Android
     */
    bool canAllowMultiActivate(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x504610
     * @note[short] MacOS (Intel): 0x5b7920
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x1a43e0
     * @note[short] Android
     */
    bool canSelectObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe9e0
     * @note[short] MacOS (Intel): 0x10420
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void centerCameraOnObject(GameObject* object);

    /**
     * @note[short] Android
     */
    TodoReturn centerCameraOnPoint(cocos2d::CCPoint p0);

    /**
     * @note[short] MacOS (ARM): 0x5058fc
     * @note[short] MacOS (Intel): 0x119670
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1a5404
     * @note[short] Android
     */
    void changeSelectedObjects(cocos2d::CCArray* objects, bool ignoreFilter);

    /**
     * @note[short] MacOS (ARM): 0x551290
     * @note[short] MacOS (Intel): 0x612920
     * @note[short] iOS: 0x15f4c8
     * @note[short] Android
     */
    cocos2d::CCPoint checkDiffAfterTransformAnchor(cocos2d::CCPoint diff, cocos2d::CCArray* objects);

    /**
     * @note[short] Windows: 0xd7400
     * @note[short] Android
     */
    void checkLiveColorSelect();

    /**
     * @note[short] MacOS (ARM): 0xae6c
     * @note[short] MacOS (Intel): 0xc6d0
     * @note[short] iOS: 0x471998
     * @note[short] Android
     */
    void clickOnPosition(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (Intel): 0x19b70
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void closeLiveColorSelect();

    /**
     * @note[short] MacOS (ARM): 0x168d8
     * @note[short] MacOS (Intel): 0x19b70
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void closeLiveHSVSelect();

    /**
     * @note[short] MacOS (ARM): 0x16a64
     * @note[short] MacOS (Intel): 0x19d70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void colorSelectClosed(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0xc2fc
     * @note[short] MacOS (Intel): 0xdbc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void constrainGameLayerPosition();

    /**
     * @note[short] MacOS (ARM): 0x8028
     * @note[short] MacOS (Intel): 0x9010
     * @note[short] Windows: 0x1bd470
     * @note[short] iOS: 0x46f37c
     * @note[short] Android
     */
    void constrainGameLayerPosition(float x, float y);

    /**
     * @note[short] MacOS (ARM): 0x6016c0
     * @note[short] MacOS (Intel): 0x6ee610
     * @note[short] Windows: 0x1f7870
     * @note[short] iOS: 0x80014
     * @note[short] Android
     */
    int convertKeyBasedOnNeighbors(int smartKey, int objectID, cocos2d::CCPoint position, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x6015e4
     * @note[short] MacOS (Intel): 0x6ee500
     * @note[short] Windows: 0x1f7770
     * @note[short] iOS: 0x7ff38
     * @note[short] Android
     */
    int convertToBaseKey(int objectID);

    /**
     * @note[short] MacOS (ARM): 0x502420
     * @note[short] MacOS (Intel): 0x5b5070
     * @note[short] iOS: 0x18852c
     * @note[short] Android
     */
    std::string copyObjects(cocos2d::CCArray* objects, bool copyColors, bool sort);

    /**
     * @note[short] MacOS (ARM): 0x4a2ccc
     * @note[short] MacOS (Intel): 0x53a990
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x188ff4
     * @note[short] Android
     */
    std::string copyObjectsDetailed(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x573b54
     * @note[short] MacOS (Intel): 0x6372c0
     * @note[short] iOS: 0x1832f0
     * @note[short] Android
     */
    cocos2d::CCArray* createCustomItems();

    /**
     * @note[short] Android
     */
    TodoReturn createDpadMoveMenu(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x601fa0
     * @note[short] MacOS (Intel): 0x6ef0b0
     * @note[short] Windows: 0x1f80b0
     * @note[short] iOS: 0x808dc
     * @note[short] Android
     */
    GameObject* createEdgeForObject(GameObject* object, int type);

    /**
     * @note[short] MacOS (ARM): 0x605828
     * @note[short] MacOS (Intel): 0x6f3610
     * @note[short] Windows: 0x1fc930
     * @note[short] iOS: 0x84238
     * @note[short] Android
     */
    void createExtraObject(int id, cocos2d::CCPoint position, GameObject* object, cocos2d::CCArray* objects, int zOrder, int editorLayer);

    /**
     * @note[short] MacOS (ARM): 0x586134
     * @note[short] MacOS (Intel): 0x6f0c60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x47698
     * @note[short] Android
     */
    cocos2d::CCArray* createExtras(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x603494
     * @note[short] MacOS (Intel): 0x6f0cf0
     * @note[short] Windows: 0x1f9be0
     * @note[short] iOS: 0x81ea4
     * @note[short] Android
     */
    void createExtrasForObject(int id, GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x13410
     * @note[short] MacOS (Intel): 0x15730
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void createGlow();

    /**
     * @note[short] Android
     */
    TodoReturn createGradientFromSelection();

    /**
     * @note[short] MacOS (ARM): 0x14244
     * @note[short] MacOS (Intel): 0x16860
     * @note[short] Windows: 0x1b77c0
     * @note[short] iOS: 0x2c6b0
     * @note[short] Android
     */
    void createLoop();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x156e38
     * @note[short] Android
     */
    void createMoveMenu();

    /**
     * @note[short] MacOS (ARM): 0x14028
     * @note[short] MacOS (Intel): 0x165d0
     * @note[short] Windows: 0x1b7510
     * @note[short] iOS: 0x4783a8
     * @note[short] Android
     */
    void createNewKeyframeAnim();

    /**
     * @note[short] MacOS (ARM): 0x10074
     * @note[short] MacOS (Intel): 0x11ca0
     * @note[short] iOS: 0x4754bc
     * @note[short] Android
     */
    GameObject* createObject(int objectID, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x6022c8
     * @note[short] MacOS (Intel): 0x6ef420
     * @note[short] Windows: 0x1f86f0
     * @note[short] iOS: 0x80bd4
     * @note[short] Android
     */
    cocos2d::CCArray* createOutlines(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x125cc
     * @note[short] MacOS (Intel): 0x147a0
     * @note[short] iOS: 0x477040
     * @note[short] Android
     */
    void createPrefab(GJSmartTemplate* smartTemplate, std::string key, int id);

    /**
     * @note[short] MacOS (ARM): 0x488c9c
     * @note[short] Windows: 0x1f9140
     * @note[short] iOS: 0x815b4
     * @note[short] Android
     */
    cocos2d::CCArray* createRockBases(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x601c68
     * @note[short] MacOS (Intel): 0x6eed10
     * @note[short] Windows: 0x1f7d40
     * @note[short] iOS: 0x805b4
     * @note[short] Android
     */
    cocos2d::CCArray* createRockEdges(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x11b6c
     * @note[short] Windows: 0x1b4c80
     * @note[short] iOS: 0x476750
     * @note[short] Android
     */
    void createSmartObjectsFromTemplate(GJSmartTemplate* smartTemplate, cocos2d::CCArray* objects, bool useNearby, bool dontDelete, bool referenceOnly, bool dontPaste);

    /**
     * @note[short] MacOS (ARM): 0x12b70
     * @note[short] Windows: 0x1b5cd0
     * @note[short] Android
     */
    void createSmartObjectsFromType(int type, cocos2d::CCArray* objects, bool extras, bool dontDelete);

    /**
     * @note[short] Windows: 0x1b1c40
     * @note[short] iOS: 0x475540
     * @note[short] Android
     */
    UndoObject* createUndoObject(UndoCommand command, bool addToList);

    /**
     * @note[short] MacOS (ARM): 0xbb30
     * @note[short] MacOS (Intel): 0xd470
     * @note[short] Windows: 0x1b1eb0
     * @note[short] iOS: 0x472128
     * @note[short] Android
     */
    void createUndoSelectObject(bool redo);

    /**
     * @note[short] Android
     */
    TodoReturn createViewButton(std::string p0, int p1, std::string p2, cocos2d::CCPoint p3, float p4, cocos2d::CCArray* p5);

    /**
     * @note[short] Android
     */
    TodoReturn cycleCustomGridPreset(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x54f728
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15e710
     * @note[short] Android
     */
    void deactivateRotationControl();

    /**
     * @note[short] MacOS (ARM): 0x55078c
     * @note[short] MacOS (Intel): 0x611c40
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x15ec78
     * @note[short] Android
     */
    void deactivateScaleControl();

    /**
     * @note[short] MacOS (ARM): 0x54ee38
     * @note[short] MacOS (Intel): 0x60ff80
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x15e44c
     * @note[short] Android
     */
    void deactivateTransformControl();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x473e6c
     * @note[short] Android
     */
    void deleteObject(GameObject* object, bool noUndo);

    /**
     * @note[short] MacOS (ARM): 0x12488
     * @note[short] MacOS (Intel): 0x14660
     * @note[short] iOS: 0x476f90
     * @note[short] Android
     */
    void deleteSmartBlocksFromObjects(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x12a78
     * @note[short] MacOS (Intel): 0x14d00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4773b8
     * @note[short] Android
     */
    void deleteTypeFromObjects(int id, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (Intel): 0x10020
     * @note[short] Windows: 0x1c64d0
     * @note[short] iOS: 0x149cc0
     * @note[short] Android
     */
    void deselectAll();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1a4df8
     * @note[short] Android
     */
    void deselectObject();

    /**
     * @note[short] MacOS (ARM): 0x505174
     * @note[short] MacOS (Intel): 0x5b8510
     * @note[short] Windows: 0x1c63f0
     * @note[short] iOS: 0x1a4e48
     * @note[short] Android
     */
    void deselectObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x505a08
     * @note[short] MacOS (Intel): 0x5b8e50
     * @note[short] Windows: 0x1c7a60
     * @note[short] iOS: 0x1a5508
     * @note[short] Android
     */
    void deselectObjectsColor();

    /**
     * @note[short] Windows: 0x1c65c0
     * @note[short] iOS: 0x1a4ecc
     * @note[short] Android
     */
    void deselectTargetPortals();

    /**
     * @note[short] MacOS (ARM): 0xbd88
     * @note[short] MacOS (Intel): 0xd6b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x472374
     * @note[short] Android
     */
    void disableButton(CreateMenuItem* button);

    /**
     * @note[short] MacOS (ARM): 0x503af4
     * @note[short] MacOS (Intel): 0x5b6e30
     * @note[short] Windows: 0x1c3ec0
     * @note[short] iOS: 0x1891fc
     * @note[short] Android
     */
    void doCopyObjects(bool withColor);

    /**
     * @note[short] MacOS (ARM): 0x503f2c
     * @note[short] MacOS (Intel): 0x5b72c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void doPasteInPlace(bool withColor);

    /**
     * @note[short] MacOS (Intel): 0x5b6fb0
     * @note[short] iOS: 0x189348
     * @note[short] Android
     */
    void doPasteObjects(bool withColor);

    /**
     * @note[short] MacOS (ARM): 0x13414
     * @note[short] MacOS (Intel): 0x15740
     * @note[short] Windows: 0x1b6660
     * @note[short] iOS: 0x477b18
     * @note[short] Android
     */
    void dynamicGroupUpdate(bool reGroup);

    /**
     * @note[short] MacOS (ARM): 0x602160
     * @note[short] MacOS (Intel): 0x3804e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x80a84
     * @note[short] Android
     */
    int edgeForObject(int id, int type);

    /**
     * @note[short] MacOS (ARM): 0x15668
     * @note[short] MacOS (Intel): 0x18720
     * @note[short] Windows: 0x1b8fd0
     * @note[short] iOS: 0x4795c8
     * @note[short] Android
     */
    bool editButton2Usable();

    /**
     * @note[short] MacOS (ARM): 0x150b4
     * @note[short] MacOS (Intel): 0x179c0
     * @note[short] Windows: 0x1b8780
     * @note[short] iOS: 0x479054
     * @note[short] Android
     */
    bool editButtonUsable();

    /**
     * @note[short] MacOS (ARM): 0x167b4
     * @note[short] MacOS (Intel): 0x19a00
     * @note[short] iOS: 0x47a300
     * @note[short] Android
     */
    void editColor();

    /**
     * @note[short] MacOS (ARM): 0x16444
     * @note[short] MacOS (Intel): 0x195c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool editColorButtonUsable();

    /**
     * @note[short] MacOS (ARM): 0x9210
     * @note[short] MacOS (Intel): 0x8fec70
     * @note[short] Android
     */
    void editGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void editHSV();

    /**
     * @note[short] MacOS (ARM): 0x83a0
     * @note[short] MacOS (Intel): 0x93f0
     * @note[short] Windows: 0x1b9840
     * @note[short] iOS: 0x46f680
     * @note[short] Android
     */
    void editObject(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8398
     * @note[short] MacOS (Intel): 0x93e0
     * @note[short] iOS: 0x46f678
     * @note[short] Android
     */
    void editObject2(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void editObject3(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    void editObjectSpecial(int type);

    /**
     * @note[short] MacOS (ARM): 0xad80
     * @note[short] MacOS (Intel): 0xc600
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4718fc
     * @note[short] Android
     */
    int editorLayerForArray(cocos2d::CCArray* objects, bool layer2);

    /**
     * @note[short] MacOS (ARM): 0xbc54
     * @note[short] MacOS (Intel): 0xd5a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x472240
     * @note[short] Android
     */
    void enableButton(CreateMenuItem* button);

    /**
     * @note[short] Android
     */
    void findAndSelectObject(int id, bool useUniqueID);

    /**
     * @note[short] Android
     */
    TodoReturn findObject(int p0, bool p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn findPassesFilters(GameObject* p0);

    /**
     * @note[short] MacOS (Intel): 0x1a380
     * @note[short] iOS: 0x47a908
     * @note[short] Android
     */
    void findSnapObject(cocos2d::CCArray* objects, float offset);

    /**
     * @note[short] MacOS (ARM): 0x16f2c
     * @note[short] MacOS (Intel): 0x1a270
     * @note[short] Windows: 0x1bd860
     * @note[short] iOS: 0x47a7f8
     * @note[short] Android
     */
    void findSnapObject(cocos2d::CCPoint position, float offset);

    /**
     * @note[short] MacOS (ARM): 0x13fd8
     * @note[short] MacOS (Intel): 0x16580
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void findTriggerTest();

    /**
     * @note[short] Android
     */
    TodoReturn finishTouchDelay();

    /**
     * @note[short] Android
     */
    void flipObjectsX(cocos2d::CCArray* objects);

    /**
     * @note[short] Android
     */
    void flipObjectsY(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0xbe94
     * @note[short] MacOS (Intel): 0xd790
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getButton(char const* text, int width, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu);

    /**
     * @note[short] MacOS (ARM): 0x1ccad8
     * @note[short] MacOS (Intel): 0x636ca0
     * @note[short] iOS: 0x182e14
     * @note[short] Android
     */
    CreateMenuItem* getCreateBtn(int id, int bg);

    /**
     * @note[short] MacOS (ARM): 0x35b49c
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    CreateMenuItem* getCreateMenuItemButton(cocos2d::CCSprite* sprite, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale, int background, cocos2d::CCPoint offset);

    /**
     * @note[short] MacOS (ARM): 0xe260
     * @note[short] MacOS (Intel): 0xfd20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x473ce0
     * @note[short] Android
     */
    GameObject* getCycledObject(cocos2d::CCArray* objects, bool dontSkipSelected);

    /**
     * @note[short] MacOS (ARM): 0x16474
     * @note[short] MacOS (Intel): 0x195f0
     * @note[short] Windows: 0x1bc350
     * @note[short] iOS: 0x469730
     * @note[short] Android
     */
    void getEditColorTargets(ColorAction*& mainColor, ColorAction*& detailColor, EffectGameObject*& object);

    /**
     * @note[short] MacOS (ARM): 0x33bc4c
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint getGridSnappedPos(cocos2d::CCPoint pos);

    /**
     * @note[short] MacOS (ARM): 0x54ddf4
     * @note[short] MacOS (Intel): 0x60ed20
     * @note[short] Windows: 0x200210
     * @note[short] iOS: 0x15d184
     * @note[short] Android
     */
    cocos2d::CCPoint getGroupCenter(cocos2d::CCArray* objects, bool absolute);

    /**
     * @note[short] MacOS (ARM): 0x15550
     * @note[short] MacOS (Intel): 0x185d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4794b0
     * @note[short] Android
     */
    void getGroupInfo(GameObject* selectedObject, cocos2d::CCArray* selectedObjects, int& objectID, int& classType, int& objectType);

    /**
     * @note[short] MacOS (ARM): 0x54cab0
     * @note[short] MacOS (Intel): 0x60d9e0
     * @note[short] Windows: 0x2004a0
     * @note[short] iOS: 0x15bf84
     * @note[short] Android
     */
    cocos2d::CCPoint getLimitedPosition(cocos2d::CCPoint position);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getModeBtn(char const* frameName, int tag);

    /**
     * @note[short] MacOS (ARM): 0x13328
     * @note[short] MacOS (Intel): 0x15660
     * @note[short] Windows: 0x1b6580
     * @note[short] iOS: 0x477a38
     * @note[short] Android
     */
    cocos2d::CCNode* getNeighbor(int smartKey, cocos2d::CCPoint position, GJSmartDirection direction, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x54f548
     * @note[short] MacOS (Intel): 0x610750
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15e530
     * @note[short] Android
     */
    cocos2d::CCPoint getRelativeOffset(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x505964
     * @note[short] MacOS (Intel): 0x5b8da0
     * @note[short] Windows: 0x1c7850
     * @note[short] iOS: 0x1a546c
     * @note[short] Android
     */
    cocos2d::CCArray* getSelectedObjects();

    /**
     * @note[short] MacOS (ARM): 0xc094
     * @note[short] MacOS (Intel): 0xd970
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getSimpleButton(std::string frameName, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu);

    /**
     * @note[short] MacOS (ARM): 0x11a6c
     * @note[short] MacOS (Intel): 0x13b20
     * @note[short] Windows: 0x1b6450
     * @note[short] iOS: 0x4f198
     * @note[short] Android
     */
    SmartGameObject* getSmartNeighbor(SmartGameObject* object, cocos2d::CCPoint position, GJSmartDirection direction, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x54cf04
     * @note[short] MacOS (Intel): 0x60de60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15c378
     * @note[short] Android
     */
    float getSnapAngle(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x6e34
     * @note[short] MacOS (Intel): 0x7ca0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getSpriteButton(char const* spriteFrameName, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale);

    /**
     * @note[short] Windows: 0x1ac190
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getSpriteButton(char const* spriteFrameName, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale, int buttonKind, cocos2d::CCPoint offset);

    /**
     * @note[short] MacOS (ARM): 0xc184
     * @note[short] MacOS (Intel): 0xda50
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getSpriteButton(cocos2d::CCSprite* sprite, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale, int buttonKind, cocos2d::CCPoint offset);

    /**
     * @note[short] Android
     */
    TodoReturn getSpriteButton(char const* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, int p4, cocos2d::CCPoint p5, float p6);

    /**
     * @note[short] Android
     */
    TodoReturn getSpriteButton(cocos2d::CCSprite* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, int p4, cocos2d::CCPoint p5, float p6);

    /**
     * @note[short] MacOS (ARM): 0x548964
     * @note[short] MacOS (Intel): 0x213b00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15f7a0
     * @note[short] Android
     */
    cocos2d::CCPoint getTouchPoint(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    GJTransformState& getTransformState();

    /**
     * @note[short] Android
     */
    TodoReturn getViewButtonState(int p0);

    /**
     * @note[short] MacOS (ARM): 0xc30c
     * @note[short] MacOS (Intel): 0xdbe0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x472788
     * @note[short] Android
     */
    float getXMin(int offset);

    /**
     * @note[short] Android
     */
    TodoReturn handleEditorAction(int p0, bool p1, double p2);

    /**
     * @note[short] MacOS (Intel): 0x5270
     * @note[short] Windows: 0x1a7920
     * @note[short] Android
     */
    bool init(LevelEditorLayer* editorLayer);

    /**
     * @note[short] Android
     */
    bool isFreeMoveTouch();

    /**
     * @note[short] MacOS (ARM): 0x15b24
     * @note[short] MacOS (Intel): 0x18bf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isLiveColorSelectTrigger(GameObject* object);

    /**
     * @note[short] Android
     */
    bool isSpecialSnapObject(int id);

    /**
     * @note[short] MacOS (ARM): 0x15af4
     * @note[short] MacOS (Intel): 0x18bc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool liveEditColorUsable();

    /**
     * @note[short] MacOS (ARM): 0x57449c
     * @note[short] MacOS (Intel): 0x637cb0
     * @note[short] iOS: 0x183b58
     * @note[short] Android
     */
    CreateMenuItem* menuItemFromObjectString(std::string str, int id);

    /**
     * @note[short] MacOS (ARM): 0x54c590
     * @note[short] MacOS (Intel): 0x60d410
     * @note[short] iOS: 0x15bb1c
     * @note[short] Android
     */
    cocos2d::CCPoint moveForCommand(EditCommand command);

    /**
     * @note[short] MacOS (ARM): 0xce6c
     * @note[short] MacOS (Intel): 0xe840
     * @note[short] Windows: 0x1acd90
     * @note[short] iOS: 0x472f4c
     * @note[short] Android
     */
    void moveGamelayer(cocos2d::CCPoint offset);

    /**
     * @note[short] MacOS (ARM): 0x54c814
     * @note[short] MacOS (Intel): 0x60d730
     * @note[short] Windows: 0x1fcdc0
     * @note[short] iOS: 0x15bd84
     * @note[short] Android
     */
    void moveObject(GameObject* object, cocos2d::CCPoint offset);

    /**
     * @note[short] MacOS (Intel): 0x60d1f0
     * @note[short] iOS: 0x15b92c
     * @note[short] Android
     */
    void moveObjectCall(EditCommand command);

    /**
     * @note[short] MacOS (ARM): 0x82bf78
     * @note[short] iOS: 0x50d7dc
     * @note[short] Android
     */
    void moveObjectCall(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn nextDpadStep();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x1a7494
     * @note[short] Android
     */
    cocos2d::CCPoint offsetForKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x16d7c
     * @note[short] MacOS (Intel): 0x1a0c0
     * @note[short] Windows: 0x15b000
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onAssignNewGroupID();

    /**
     * @note[short] MacOS (ARM): 0xece0
     * @note[short] MacOS (Intel): 0x10710
     * @note[short] iOS: 0x3ee058
     * @note[short] Android
     */
    void onColorFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x268504
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x194f10
     * @note[short] Android
     */
    void onCopyState(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xb4d8
     * @note[short] MacOS (Intel): 0xce30
     * @note[short] iOS: 0x1a35c4
     * @note[short] Android
     */
    bool onCreate();

    /**
     * @note[short] MacOS (ARM): 0xee38
     * @note[short] MacOS (Intel): 0x10880
     * @note[short] Windows: 0x1b0550
     * @note[short] Android
     */
    void onCreateButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x10e30
     * @note[short] iOS: 0x474a50
     * @note[short] Android
     */
    void onCreateObject(int id);

    /**
     * @note[short] iOS: 0x471ad8
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x64d10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onDeleteAll(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x577aa4
     * @note[short] MacOS (Intel): 0x63b580
     * @note[short] iOS: 0x186884
     * @note[short] Android
     */
    void onDeleteCustomItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xe180
     * @note[short] MacOS (Intel): 0x50e130
     * @note[short] Android
     */
    void onDeleteInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1aedf0
     * @note[short] iOS: 0x46e9cc
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] iOS: 0x38a748
     * @note[short] Android
     */
    void onDeleteSelectedType(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDeleteStartPos(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDeselectAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDpadStep(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x502230
     * @note[short] MacOS (Intel): 0x5b4e90
     * @note[short] Windows: 0xf00e0
     * @note[short] iOS: 0x188364
     * @note[short] Android
     */
    void onDuplicate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8320
     * @note[short] MacOS (Intel): 0x9380
     * @note[short] Windows: 0x1bc2e0
     * @note[short] iOS: 0x46f60c
     * @note[short] Android
     */
    void onEditColor(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEditorCommands(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFindObject(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x94cc
     * @note[short] MacOS (Intel): 0xab30
     * @note[short] Windows: 0x1b3b00
     * @note[short] iOS: 0x470650
     * @note[short] Android
     */
    void onGoToBaseLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGoToFreeLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x92fc
     * @note[short] MacOS (Intel): 0xa930
     * @note[short] Windows: 0x1b3850
     * @note[short] Android
     */
    void onGoToLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGridSizeIndicator(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x94b0
     * @note[short] MacOS (Intel): 0xab00
     * @note[short] Windows: 0x1bcf20
     * @note[short] iOS: 0x470634
     * @note[short] Android
     */
    void onGroupDown(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xebb4
     * @note[short] MacOS (Intel): 0x10610
     * @note[short] iOS: 0x4743dc
     * @note[short] Android
     */
    void onGroupIDFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7877fc
     * @note[short] iOS: 0x3ef1c8
     * @note[short] Android
     */
    void onGroupSticky(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x9498
     * @note[short] MacOS (Intel): 0xaae0
     * @note[short] Windows: 0x1bcf00
     * @note[short] iOS: 0x47061c
     * @note[short] Android
     */
    void onGroupUp(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onHideUIBtn(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x957c
     * @note[short] MacOS (Intel): 0xabf0
     * @note[short] iOS: 0x4706d8
     * @note[short] Android
     */
    void onLockLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x577558
     * @note[short] MacOS (Intel): 0x198a0
     * @note[short] Windows: 0x1f3a60
     * @note[short] iOS: 0x18654c
     * @note[short] Android
     */
    void onNewCustomItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8318
     * @note[short] MacOS (Intel): 0x383cb0
     * @note[short] iOS: 0x46f604
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPasteColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x41b160
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onPasteInPlace(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPasteState(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7e54
     * @note[short] Android
     */
    void onPause(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7688
     * @note[short] MacOS (Intel): 0x8540
     * @note[short] iOS: 0x1b3eec
     * @note[short] Android
     */
    void onPlayback(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x787c
     * @note[short] MacOS (Intel): 0x8780
     * @note[short] Windows: 0x1b2bd0
     * @note[short] iOS: 0x46edb0
     * @note[short] Android
     */
    void onPlaytest(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xed38
     * @note[short] MacOS (Intel): 0x10770
     * @note[short] iOS: 0x47453c
     * @note[short] Android
     */
    void onResetSpecialFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectBuildTab(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x828c
     * @note[short] iOS: 0x1a8d2c
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onShowUIBtn(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x8b70
     * @note[short] Android
     */
    void onStickyToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onStopPlaytest(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x16c38
     * @note[short] MacOS (Intel): 0x19f80
     * @note[short] Windows: 0x194130
     * @note[short] iOS: 0x47a65c
     * @note[short] Android
     */
    void onTargetIDChange(int change);

    /**
     * @note[short] MacOS (ARM): 0xccc0
     * @note[short] MacOS (Intel): 0xe6b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x472de0
     * @note[short] Android
     */
    void onToggleGuide(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xcd00
     * @note[short] MacOS (Intel): 0xe6e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x472e20
     * @note[short] Android
     */
    void onToggleSelectedOrder(EffectGameObject* object);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onToggleTraceIn(GameObject* object);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onToggleTraceOut(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x7877fc
     * @note[short] Android
     */
    void onUngroupSticky(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xed98
     * @note[short] MacOS (Intel): 0x107d0
     * @note[short] iOS: 0x47459c
     * @note[short] Android
     */
    void onUpdateDeleteFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onViewButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x63b6e0
     * @note[short] Android
     */
    void orderDownCustomItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x577b2c
     * @note[short] MacOS (Intel): 0x63b620
     * @note[short] iOS: 0x1868c0
     * @note[short] Android
     */
    void orderUpCustomItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5029f8
     * @note[short] Windows: 0x1c4320
     * @note[short] iOS: 0x188874
     * @note[short] Android
     */
    cocos2d::CCArray* pasteObjects(std::string str, bool withColor, bool noUndo);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void playCircleAnim(cocos2d::CCPoint position, float radius, float duration);

    /**
     * @note[short] MacOS (ARM): 0x54a260
     * @note[short] MacOS (Intel): 0x60a270
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void playerTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x54a358
     * @note[short] MacOS (Intel): 0x60a380
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void playerTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Android
     */
    TodoReturn playSoundForCreatedObject(GameObject* p0);

    /**
     * @note[short] MacOS (Intel): 0x11e50
     * @note[short] Windows: 0x1b2e50
     * @note[short] iOS: 0x475624
     * @note[short] Android
     */
    void playtestStopped();

    /**
     * @note[short] MacOS (ARM): 0xff78
     * @note[short] MacOS (Intel): 0x11bc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x475418
     * @note[short] Android
     */
    bool positionIsInSnapped(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x54f58c
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15e574
     * @note[short] Android
     */
    cocos2d::CCPoint positionWithoutOffset(GameObject* object);

    /**
     * @note[short] Android
     */
    TodoReturn processSelectObject(GameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x504df8
     * @note[short] MacOS (Intel): 0x5b8190
     * @note[short] iOS: 0x1a4b40
     * @note[short] Android
     */
    void processSelectObjects(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x13014
     * @note[short] MacOS (Intel): 0x152d0
     * @note[short] Windows: 0x1b61b0
     * @note[short] iOS: 0x4777cc
     * @note[short] Android
     */
    void processSmartObjectsFromType(int type, cocos2d::CCArray* objects, cocos2d::CCArray* objects2, cocos2d::CCArray* objects3, cocos2d::CCArray* objects4);

    /**
     * @note[short] MacOS (Intel): 0x63b7a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void recreateButtonTabs();

    /**
     * @note[short] Android
     */
    void redoLastAction(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn refreshGridWindow();

    /**
     * @note[short] MacOS (ARM): 0x577a38
     * @note[short] MacOS (Intel): 0x63b510
     * @note[short] iOS: 0x186818
     * @note[short] Android
     */
    void reloadCustomItems();

    /**
     * @note[short] MacOS (ARM): 0x54dcf4
     * @note[short] iOS: 0x15d084
     * @note[short] Android
     */
    void removeOffset(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x13b74
     * @note[short] MacOS (Intel): 0x16150
     * @note[short] iOS: 0x631814
     * @note[short] Android
     */
    void replaceGroupID(GameObject* object, int oldID, int newID);

    /**
     * @note[short] MacOS (ARM): 0x503e5c
     * @note[short] MacOS (Intel): 0x5b71f0
     * @note[short] Windows: 0x1c5610
     * @note[short] iOS: 0x189554
     * @note[short] Android
     */
    void repositionObjectsToCenter(cocos2d::CCArray* objects, cocos2d::CCPoint position, bool absolute);

    /**
     * @note[short] MacOS (Intel): 0x612660
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15f340
     * @note[short] Android
     */
    void resetObjectEditorValues(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x16ba8
     * @note[short] MacOS (Intel): 0x19ed0
     * @note[short] Windows: 0x1bd230
     * @note[short] iOS: 0x47a5c8
     * @note[short] Android
     */
    void resetSelectedObjectsColor();

    /**
     * @note[short] MacOS (Intel): 0x8c60
     * @note[short] Android
     */
    void resetUI();

    /**
     * @note[short] Android
     */
    TodoReturn rotateObjects(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2, bool p3);

    /**
     * @note[short] MacOS (ARM): 0x2e62a4
     * @note[short] MacOS (Intel): 0x60de40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float rotationforCommand(EditCommand command);

    /**
     * @note[short] MacOS (ARM): 0x54e010
     * @note[short] MacOS (Intel): 0x60ef30
     * @note[short] Windows: 0x1fe720
     * @note[short] iOS: 0x15d388
     * @note[short] Android
     */
    void scaleObjects(cocos2d::CCArray* objects, float scaleX, float scaleY, cocos2d::CCPoint pivotPoint, ObjectScaleType type, bool lockMove);

    /**
     * @note[short] MacOS (ARM): 0x504ec0
     * @note[short] MacOS (Intel): 0x5b8250
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1a4c08
     * @note[short] Android
     */
    void selectAll();

    /**
     * @note[short] MacOS (ARM): 0x504f7c
     * @note[short] MacOS (Intel): 0x5b8310
     * @note[short] Windows: 0x1c6230
     * @note[short] iOS: 0x1a4cbc
     * @note[short] Android
     */
    void selectAllWithDirection(bool left);

    /**
     * @note[short] MacOS (ARM): 0xee84
     * @note[short] MacOS (Intel): 0x108d0
     * @note[short] Windows: 0x1b3b50
     * @note[short] iOS: 0x474688
     * @note[short] Android
     */
    void selectBuildTab(int tab);

    /**
     * @note[short] Android
     */
    TodoReturn selectedMoveCommand(int p0);

    /**
     * @note[short] MacOS (ARM): 0x504528
     * @note[short] MacOS (Intel): 0x5b7850
     * @note[short] Windows: 0x1c56b0
     * @note[short] iOS: 0x1a42f8
     * @note[short] Android
     */
    void selectObject(GameObject* object, bool ignoreFilter);

    /**
     * @note[short] MacOS (ARM): 0x5047a4
     * @note[short] MacOS (Intel): 0x5b7ad0
     * @note[short] Windows: 0x824e0
     * @note[short] iOS: 0x1a4538
     * @note[short] Android
     */
    void selectObjects(cocos2d::CCArray* objects, bool ignoreFilter);

    /**
     * @note[short] MacOS (Intel): 0x5b8120
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void selectObjectsInRect(cocos2d::CCRect rect);

    /**
     * @note[short] Android
     */
    void setCustomGridEnabled(bool p0);

    /**
     * @note[short] Android
     */
    void setCustomGridNodeSize(float p0);

    /**
     * @note[short] Android
     */
    void setCustomMoveStep(float p0);

    /**
     * @note[short] Android
     */
    void setDpadStep(int p0);

    /**
     * @note[short] MacOS (Intel): 0x619d00
     * @note[short] Windows: 0x1c88e0
     * @note[short] Android
     */
    void setupCreateMenu();

    /**
     * @note[short] MacOS (ARM): 0x5765a0
     * @note[short] MacOS (Intel): 0x639f30
     * @note[short] iOS: 0x1856dc
     * @note[short] Android
     */
    void setupDeleteMenu();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setupEditMenu();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setupTransformControl();

    /**
     * @note[short] Android
     */
    TodoReturn setupViewMenu();

    /**
     * @note[short] MacOS (ARM): 0xe390
     * @note[short] MacOS (Intel): 0xfe30
     * @note[short] iOS: 0x473d94
     * @note[short] Android
     */
    bool shouldDeleteObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x17340
     * @note[short] MacOS (Intel): 0x1a740
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool shouldSnap(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe628
     * @note[short] MacOS (Intel): 0x10090
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void showDeleteConfirmation();

    /**
     * @note[short] Android
     */
    TodoReturn showGridSizeAlert();

    /**
     * @note[short] MacOS (ARM): 0x169e4
     * @note[short] MacOS (Intel): 0x19cc0
     * @note[short] Windows: 0x1bc730
     * @note[short] iOS: 0x47a4d8
     * @note[short] Android
     */
    void showLiveColorSelectForMode(int colorID);

    /**
     * @note[short] MacOS (ARM): 0x16908
     * @note[short] MacOS (Intel): 0x19ba0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x47a454
     * @note[short] Android
     */
    void showLiveColorSelectForModeSpecial(int colorID);

    /**
     * @note[short] Android
     */
    TodoReturn showLockedLayerAlert(int p0);

    /**
     * @note[short] MacOS (ARM): 0xf11c
     * @note[short] MacOS (Intel): 0x10ba0
     * @note[short] Windows: 0x1b3670
     * @note[short] Android
     */
    void showMaxBasicError();

    /**
     * @note[short] MacOS (Intel): 0x10cf0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void showMaxCoinError();

    /**
     * @note[short] MacOS (ARM): 0xefcc
     * @note[short] MacOS (Intel): 0x10a50
     * @note[short] Windows: 0x1b3530
     * @note[short] iOS: 0x4747c8
     * @note[short] Android
     */
    void showMaxError();

    /**
     * @note[short] Android
     */
    TodoReturn showTextAlert(std::string p0, bool p1, bool p2, int p3);

    /**
     * @note[short] Android
     */
    TodoReturn showTransformControl();

    /**
     * @note[short] MacOS (Intel): 0x192020
     * @note[short] Android
     */
    void showUI(bool show);

    /**
     * @note[short] MacOS (ARM): 0x6d4c
     * @note[short] MacOS (Intel): 0x7bb0
     * @note[short] Windows: 0x58070
     * @note[short] iOS: 0x46e47c
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x573ec0
     * @note[short] MacOS (Intel): 0x637630
     * @note[short] Windows: 0x101c90
     * @note[short] iOS: 0x183598
     * @note[short] Android
     */
    cocos2d::CCSprite* spriteFromObjectString(std::string str, bool absoluteCenter, bool useGroup, int objLimit, cocos2d::CCArray* objects, cocos2d::CCArray* group, GameObject* groupParent);

    /**
     * @note[short] Android
     */
    TodoReturn startFreeMoveTouch();

    /**
     * @note[short] Android
     */
    TodoReturn swipeToPosition(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleCustomGridEnabled();

    /**
     * @note[short] MacOS (ARM): 0xa764
     * @note[short] MacOS (Intel): 0xbf60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x47158c
     * @note[short] Android
     */
    void toggleDuplicateButton();

    /**
     * @note[short] MacOS (ARM): 0xa6a0
     * @note[short] MacOS (Intel): 0xbe90
     * @note[short] Windows: 0x1b93b0
     * @note[short] iOS: 0x4714c8
     * @note[short] Android
     */
    void toggleEditObjectButton();

    /**
     * @note[short] MacOS (ARM): 0x7204
     * @note[short] MacOS (Intel): 0x8060
     * @note[short] iOS: 0x46e860
     * @note[short] Android
     */
    void toggleEnableRotate(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void toggleFreeMove(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0xbe80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void toggleLockUI(bool lockUI);

    /**
     * @note[short] MacOS (ARM): 0x6f3c
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    void toggleMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x9e14
     * @note[short] MacOS (Intel): 0xb560
     * @note[short] iOS: 0x470e14
     * @note[short] Android
     */
    void toggleObjectInfoLabel();

    /**
     * @note[short] MacOS (ARM): 0x7180
     * @note[short] MacOS (Intel): 0x7fd0
     * @note[short] iOS: 0x46e7dc
     * @note[short] Android
     */
    void toggleSnap(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn toggleSpecialEditButtons(bool p0);

    /**
     * @note[short] Android
     */
    void toggleSwipe(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn toggleTraceSelected(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleViewOption(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleWindow(int p0);

    /**
     * @note[short] MacOS (ARM): 0x54d68c
     * @note[short] MacOS (Intel): 0x60e630
     * @note[short] Windows: 0x660d70
     * @note[short] iOS: 0x15cac8
     * @note[short] Android
     */
    void transformObject(GameObject* object, EditCommand command, bool noOffset);

    /**
     * @note[short] MacOS (Intel): 0x60d1f0
     * @note[short] iOS: 0x3ee588
     * @note[short] Android
     */
    void transformObjectCall(EditCommand command);

    /**
     * @note[short] iOS: 0x15bff0
     * @note[short] Android
     */
    void transformObjectCall(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x54e590
     * @note[short] MacOS (Intel): 0x60f5d0
     * @note[short] Windows: 0x3fdb90
     * @note[short] iOS: 0x15d758
     * @note[short] Android
     */
    void transformObjects(cocos2d::CCArray* objs, cocos2d::CCPoint anchor, float scaleX, float scaleY, float rotateX, float rotateY, float warpX, float warpY);

    /**
     * @note[short] MacOS (Intel): 0x60f520
     * @note[short] Android
     */
    void transformObjectsActive();

    /**
     * @note[short] MacOS (ARM): 0x54e958
     * @note[short] MacOS (Intel): 0x60fa00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15db18
     * @note[short] Android
     */
    void transformObjectsReset();

    /**
     * @note[short] Android
     */
    void triggerSwipeMode();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void tryUpdateTimeMarkers();

    /**
     * @note[short] Android
     */
    TodoReturn uncheckPortals();

    /**
     * @note[short] Android
     */
    void undoLastAction(cocos2d::CCObject* object);

    /**
     * @note[short] MacOS (ARM): 0x96e4
     * @note[short] MacOS (Intel): 0xad60
     * @note[short] Windows: 0x1ab5c0
     * @note[short] iOS: 0x47083c
     * @note[short] Android
     */
    void updateButtons();

    /**
     * @note[short] Android
     */
    TodoReturn updateControlsAfterAlign();

    /**
     * @note[short] MacOS (Intel): 0x46a650
     * @note[short] Android
     */
    void updateCreateMenu(bool selectTab);

    /**
     * @note[short] MacOS (ARM): 0x576f88
     * @note[short] MacOS (Intel): 0x63a990
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x1860b4
     * @note[short] Android
     */
    void updateDeleteButtons();

    /**
     * @note[short] MacOS (ARM): 0x80a1e0
     * @note[short] MacOS (Intel): 0x927cb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateDeleteMenu();

    /**
     * @note[short] Android
     */
    TodoReturn updateDpadStepLabel();

    /**
     * @note[short] MacOS (ARM): 0x550404
     * @note[short] MacOS (Intel): 0x2417b0
     * @note[short] Windows: 0x200970
     * @note[short] iOS: 0x15ea0c
     * @note[short] Android
     */
    void updateEditButtonColor(int tag, cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x15b60
     * @note[short] MacOS (Intel): 0x18c20
     * @note[short] iOS: 0x47990c
     * @note[short] Android
     */
    void updateEditColorButton();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateEditMenu();

    /**
     * @note[short] MacOS (ARM): 0xc494
     * @note[short] MacOS (Intel): 0xdd90
     * @note[short] iOS: 0x472910
     * @note[short] Android
     */
    void updateGridNodeSize();

    /**
     * @note[short] MacOS (ARM): 0x21a7f4
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateGridNodeSize(int objectID);

    /**
     * @note[short] MacOS (Intel): 0xff0a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateGroupIDBtn2();

    /**
     * @note[short] MacOS (Intel): 0xac40
     * @note[short] Windows: 0x1bcf50
     * @note[short] Android
     */
    void updateGroupIDLabel();

    /**
     * @note[short] MacOS (ARM): 0xcee8
     * @note[short] MacOS (Intel): 0xe8b0
     * @note[short] Windows: 0x1acea0
     * @note[short] iOS: 0x472fc8
     * @note[short] Android
     */
    void updateObjectInfoLabel();

    /**
     * @note[short] Android
     */
    TodoReturn updatePanDecay(float p0);

    /**
     * @note[short] MacOS (ARM): 0xa578
     * @note[short] MacOS (Intel): 0xbd70
     * @note[short] Windows: 0x1b2a90
     * @note[short] iOS: 0x4713b4
     * @note[short] Android
     */
    void updatePlaybackBtn();

    /**
     * @note[short] Android
     */
    TodoReturn updateSelectionUI();

    /**
     * @note[short] MacOS (ARM): 0x81e0
     * @note[short] MacOS (Intel): 0x9200
     * @note[short] Windows: 0x1ac560
     * @note[short] iOS: 0x46f530
     * @note[short] Android
     */
    void updateSlider();

    /**
     * @note[short] MacOS (Intel): 0x33f0f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateSpecialUIElements();

    /**
     * @note[short] MacOS (Intel): 0xb6b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateStickyControls();

    /**
     * @note[short] Android
     */
    TodoReturn updateViewButtons();

    /**
     * @note[short] Android
     */
    TodoReturn updateViewMenu();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    void updateZoom(float zoom);

    /**
     * @note[short] Android
     */
    TodoReturn updateZoom(float p0, cocos2d::CCPoint p1);

    /**
     * @note[short] MacOS (ARM): 0xc404
     * @note[short] MacOS (Intel): 0xdd00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x472880
     * @note[short] Android
     */
    float valueFromXPos(float xPos);

    /**
     * @note[short] Android
     */
    TodoReturn windowClosed(EditorWindowPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0xc280
     * @note[short] MacOS (Intel): 0xdb40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4726fc
     * @note[short] Android
     */
    float xPosFromValue(float value);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void zoomGameLayer(bool zoomingIn);

    /**
     * @note[short] Android
     */
    void zoomIn(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void zoomOut(cocos2d::CCObject* sender);
    std::unordered_map<int, GameObjectEditorState> m_objectEditorStates;
    GJTransformState m_transformState;
    bool m_isPlayingMusic;
    EditButtonBar* m_customTabBar;
    bool m_alertShown;
    cocos2d::CCArray* m_uiItems;
    float m_gridSize;
    int m_playerTouchID1;
    int m_playerTouchID2;
    bool m_playbackActive;
    float m_playbackStartWarp;
    float m_playbackStartTime;
    UndoObject* m_undoObject;
    bool m_spaceSwiping;
    bool m_noSnapUndo;
    bool m_editingObject;
    bool m_increaseScale;
    bool m_refreshPosition;
    int m_rotationTouchID;
    int m_scaleTouchID;
    int m_touchID;
    int m_transformTouchID;
    cocos2d::CCLabelBMFont* m_objectInfoLabel;
    GJRotationControl* m_rotationControl;
    cocos2d::CCPoint m_pivotPoint;
    bool m_canActivateControls;
    GJScaleControl* m_scaleControl;
    GJTransformControl* m_transformControl;
    cocos2d::CCNode* m_transformNode;
    cocos2d::CCNode* m_transformChild;
    cocos2d::CCDictionary* m_editButtonDict;
    EditButtonBar* m_createButtonBar;
    EditButtonBar* m_editButtonBar;
    Slider* m_positionSlider;
    float m_unk308;
    float m_constrainedHeight;
    float m_toolbarHeight;
    bool m_swipeEnabled;
    bool m_swipeActive;
    bool m_swipeSelected;
    bool m_continuousSnap;
    bool m_freeMoveEnabled;
    bool m_snapObjectExists;
    bool m_snapSelected;
    bool m_stickyControlsEnabled;
    bool m_linkControlsDisabled;
    bool m_speedObjectsUpdated;
    cocos2d::CCPoint m_createPosition;
    cocos2d::CCArray* m_snapPositions;
    cocos2d::CCPoint m_snapPosition;
    cocos2d::CCArray* m_selectedObjects;
    cocos2d::CCMenu* m_deleteMenu;
    cocos2d::CCArray* m_customTabControls;
    CCMenuItemSpriteExtra* m_deleteModeBtn;
    CCMenuItemSpriteExtra* m_buildModeBtn;
    CCMenuItemSpriteExtra* m_editModeBtn;
    CCMenuItemSpriteExtra* m_swipeBtn;
    CCMenuItemSpriteExtra* m_freeMoveBtn;
    CCMenuItemSpriteExtra* m_deselectBtn;
    CCMenuItemSpriteExtra* m_snapBtn;
    CCMenuItemSpriteExtra* m_rotateBtn;
    CCMenuItemSpriteExtra* m_playbackBtn;
    CCMenuItemSpriteExtra* m_playtestBtn;
    CCMenuItemSpriteExtra* m_playtestStopBtn;
    CCMenuItemSpriteExtra* m_trashBtn;
    CCMenuItemSpriteExtra* m_linkBtn;
    CCMenuItemSpriteExtra* m_unlinkBtn;
    CCMenuItemSpriteExtra* m_enableLinkBtn;
    CCMenuItemSpriteExtra* m_undoBtn;
    CCMenuItemSpriteExtra* m_redoBtn;
    CCMenuItemSpriteExtra* m_editObjectBtn;
    CCMenuItemSpriteExtra* m_editGroupBtn;
    CCMenuItemSpriteExtra* m_editHSVBtn;
    CCMenuItemSpriteExtra* m_editSpecialBtn;
    cocos2d::CCObject* m_unk3F0;
    CCMenuItemSpriteExtra* m_copyPasteBtn;
    CCMenuItemSpriteExtra* m_copyBtn;
    CCMenuItemSpriteExtra* m_pasteBtn;
    CCMenuItemSpriteExtra* m_copyValuesBtn;
    CCMenuItemSpriteExtra* m_pasteStateBtn;
    CCMenuItemSpriteExtra* m_pasteColorBtn;
    CCMenuItemSpriteExtra* m_goToLayerBtn;
    cocos2d::CCArray* m_createButtonBars;
    cocos2d::CCMenu* m_tabsMenu;
    cocos2d::CCArray* m_tabsArray;
    cocos2d::CCSprite* m_deleteAllSprite;
    cocos2d::CCSprite* m_customDeleteSprite;
    CCMenuItemSpriteExtra* m_deleteButton;
    CCMenuItemSpriteExtra* m_deleteAllButton;
    CCMenuItemSpriteExtra* m_deleteFilterNone;
    CCMenuItemSpriteExtra* m_deleteFilterStatic;
    CCMenuItemSpriteExtra* m_deleteFilterDetails;
    CCMenuItemSpriteExtra* m_deleteFilterCustom;
    cocos2d::CCLabelBMFont* m_currentLayerLabel;
    CCMenuItemSpriteExtra* m_layerNextBtn;
    CCMenuItemSpriteExtra* m_layerPrevBtn;
    CCMenuItemSpriteExtra* m_goToBaseBtn;
    ButtonSprite* m_deleteGroupSprite;
    ButtonSprite* m_deleteColorSprite;
    void* m_unk4b8;
    void* m_unk4c0;
    int m_selectedObjectIndex;
    cocos2d::CCArray* m_createButtonArray;
    cocos2d::CCArray* m_customObjectButtonArray;
    cocos2d::CCArray* m_deleteObjects;
    int m_selectedMode;
    LevelEditorLayer* m_editorLayer;
    cocos2d::CCPoint m_swipeStart;
    cocos2d::CCPoint m_swipeEnd;
    cocos2d::CCPoint m_swipePosition;
    cocos2d::CCPoint m_lastTouchPoint;
    cocos2d::CCPoint m_cameraTest;
    cocos2d::CCPoint m_clickAtPosition;
    GameObject* m_selectedObject;
    GameObject* m_snapObject;
    bool m_isDraggingCamera;
    bool m_continueSwipe;
    bool m_findSnap;
    void* m_unk540;
    int m_selectedTab;
    int m_cycledObjectIndex;
    ColorSelectLiveOverlay* m_colorOverlay;
    HSVLiveOverlay* m_hsvOverlay;
    double m_keyTime;
    double m_keyTime2;
    bool m_swipeModeTriggered;
    cocos2d::CCSprite* m_layerLockSprite;
    void* m_unk580;
    bool m_pressedSpace;
    float m_editorZoom;
    bool m_isPaused;
    bool m_reloadItems;
};
