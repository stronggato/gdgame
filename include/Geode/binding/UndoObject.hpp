#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJTransformState.hpp>
#include <Geode/mapping/CCObject.hpp>

class UndoObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "UndoObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(UndoObject, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x40eb88
     * @note[short] Android: Out of line
     */
     UndoObject();

    /**
     * @note[short] MacOS (ARM): 0xbcd80
     * @note[short] MacOS (Intel): 0xd6350
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x409ae8
     * @note[short] Android: Rebinded
     */
     ~UndoObject();

    /**
     * @note[short] MacOS (ARM): 0x9d468
     * @note[short] MacOS (Intel): 0xaf1c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f772c
     * @note[short] Android
     */
    static UndoObject* create(GameObject* object, UndoCommand command);

    /**
     * @note[short] MacOS (ARM): 0x9ffd8
     * @note[short] MacOS (Intel): 0xb2060
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f97b4
     * @note[short] Android
     */
    static UndoObject* createWithArray(cocos2d::CCArray* array, UndoCommand command);

    /**
     * @note[short] MacOS (ARM): 0xbce98
     * @note[short] MacOS (Intel): 0xd6470
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x409b48
     * @note[short] Android
     */
    static UndoObject* createWithTransformObjects(cocos2d::CCArray* objects, UndoCommand command);

    /**
     * @note[short] MacOS (ARM): 0xbce5c
     * @note[short] MacOS (Intel): 0xd6440
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(GameObject* object, UndoCommand command);

    /**
     * @note[short] MacOS (ARM): 0xbcff4
     * @note[short] MacOS (Intel): 0xd65e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x409c34
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* array, UndoCommand command);

    /**
     * @note[short] MacOS (ARM): 0xbcf70
     * @note[short] MacOS (Intel): 0xd6560
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x409bb0
     * @note[short] Android
     */
    bool initWithTransformObjects(cocos2d::CCArray* objects, UndoCommand command);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setObjects(cocos2d::CCArray* objects);
    GameObjectCopy* m_objectCopy;
    UndoCommand m_command;
    cocos2d::CCArray* m_objects;
    bool m_redo;
    bool m_undoTransform;
    GJTransformState m_transformState;
};
