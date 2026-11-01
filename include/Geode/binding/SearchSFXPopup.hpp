#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetTextPopup.hpp>

class SearchSFXPopup : public SetTextPopup {
public:
    static constexpr auto CLASS_NAME = "SearchSFXPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SearchSFXPopup, SetTextPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SearchSFXPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x37dca8
     * @note[short] Android
     */
    static SearchSFXPopup* create(std::string query);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    bool init(std::string query);

    /**
     * @note[short] MacOS (ARM): 0x7b6e38
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: 0x4b6d84
     * @note[short] Android
     */
    void onSearchFolders(cocos2d::CCObject* sender);
};
