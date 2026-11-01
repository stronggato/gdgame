#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class GJHttpResult : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJHttpResult";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJHttpResult, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x216e30
     * @note[short] Android: Rebinded
     */
    virtual  ~GJHttpResult();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJHttpResult();

    /**
     * @note[short] MacOS (ARM): 0x47b3dc
     * @note[short] MacOS (Intel): 0x521d70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GJHttpResult* create(bool success, std::string response, std::string tag, GJHttpType type);

    /**
     * @note[short] MacOS (ARM): 0x4ddc48
     * @note[short] MacOS (Intel): 0x58d8b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(bool success, std::string response, std::string tag, GJHttpType type);
    bool m_success;
    std::string m_response;
    std::string m_requestTag;
    GJHttpType m_httpType;
};
