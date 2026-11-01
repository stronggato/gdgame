#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/ObjectDecoderDelegate.hpp>

class GJObjectDecoder : public cocos2d::CCNode, public ObjectDecoderDelegate {
public:
    static constexpr auto CLASS_NAME = "GJObjectDecoder";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJObjectDecoder, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x80c50
     * @note[short] Android: Rebinded
     */
    virtual  ~GJObjectDecoder();

    /**
     * @note[short] MacOS (ARM): 0x701f80
     * @note[short] MacOS (Intel): 0x801860
     * @note[short] Windows: 0x38f1c0
     * @note[short] iOS: 0x2b14cc
     * @note[short] Android
     */
    static GJObjectDecoder* sharedDecoder();

    /**
     * @note[short] MacOS (ARM): 0x702028
     * @note[short] MacOS (Intel): 0x8018e0
     * @note[short] Windows: 0x8aef0
     * @note[short] iOS: 0x2b1568
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x70202c
     * @note[short] MacOS (Intel): 0x557610
     * @note[short] Windows: 0x38f260
     * @note[short] iOS: 0x2b156c
     * @note[short] Android
     */
    virtual cocos2d::CCObject* getDecodedObject(int type, DS_Dictionary* dict);
};
