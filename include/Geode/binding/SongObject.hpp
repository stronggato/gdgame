#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class SongObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "SongObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SongObject, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x87600
     * @note[short] Android: Rebinded
     */
    virtual  ~SongObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SongObject();

    /**
     * @note[short] MacOS (ARM): 0x1e80e8
     * @note[short] MacOS (Intel): 0x23c5f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x136c3c
     * @note[short] Android
     */
    static SongObject* create(int audioID);

    /**
     * @note[short] MacOS (ARM): 0x1e8154
     * @note[short] MacOS (Intel): 0x23c660
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(int audioID);
    int m_audioID;
};
