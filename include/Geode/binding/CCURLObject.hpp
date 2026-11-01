#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class CCURLObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "CCURLObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCURLObject, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x273c00
     * @note[short] Android: Rebinded
     */
    virtual  ~CCURLObject();

    /**
     * @note[short] MacOS (ARM): 0x2ee284
     * @note[short] MacOS (Intel): 0x35f700
     * @note[short] Windows: 0x273a70
     * @note[short] iOS: 0x3ac5d0
     * @note[short] Android
     */
    static CCURLObject* create(std::string name, std::string url);

    /**
     * @note[short] MacOS (ARM): 0x2ee400
     * @note[short] MacOS (Intel): 0x35f870
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(std::string name, std::string url);
    std::string m_name;
    std::string m_url;
};
