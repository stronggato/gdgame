#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/map.hpp>

class ObjectToolbox : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "ObjectToolbox";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ObjectToolbox, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x49e970
     * @note[short] Android: Rebinded
     */
    virtual  ~ObjectToolbox();

    /**
     * @note[short] MacOS (ARM): 0x653f20
     * @note[short] MacOS (Intel): 0x7473b0
     * @note[short] Windows: 0x49e9f0
     * @note[short] iOS: 0x314320
     * @note[short] Android
     */
    static ObjectToolbox* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x654048
     * @note[short] MacOS (Intel): 0x7474f0
     * @note[short] Windows: 0x49eab0
     * @note[short] iOS: 0x314404
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x6fcd10
     * @note[short] MacOS (Intel): 0x7f73e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* allKeys();

    /**
     * @note[short] MacOS (ARM): 0x6fcdfc
     * @note[short] MacOS (Intel): 0x7f74c0
     * @note[short] Windows: 0x4c6910
     * @note[short] iOS: 0x347fd0
     * @note[short] Android
     */
    float gridNodeSizeForKey(int key);

    /**
     * @note[short] MacOS (ARM): 0x6fcd18
     * @note[short] MacOS (Intel): 0x7f73f0
     * @note[short] Windows: 0x4c68e0
     * @note[short] iOS: 0x347f7c
     * @note[short] Android
     */
    const char* intKeyToFrame(int key);

    /**
     * @note[short] MacOS (Intel): 0x7fae80
     * @note[short] Windows: 0x4c7330
     * @note[short] iOS: 0x348340
     * @note[short] Android
     */
    const char* perspectiveBlockFrame(int key);
    std::map<int, std::string> m_allKeys;
};
