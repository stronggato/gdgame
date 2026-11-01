#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class OptionsObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "OptionsObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(OptionsObject, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x3971b0
     * @note[short] Android: Rebinded
     */
    virtual  ~OptionsObject();

    /**
     * @note[short] MacOS (ARM): 0x240b7c
     * @note[short] MacOS (Intel): 0x29d8b0
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x37cb74
     * @note[short] Android
     */
    static OptionsObject* create(int id, bool enabled, std::string name, OptionsObjectDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x240c74
     * @note[short] MacOS (Intel): 0x29d9a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(int id, bool enabled, std::string name, OptionsObjectDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x240cb0
     * @note[short] MacOS (Intel): 0x29d9d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x37cc6c
     * @note[short] Android
     */
    void toggleState();
    int m_optionID;
    bool m_enabled;
    std::string m_name;
    OptionsObjectDelegate* m_delegate;
    int m_count;
};
