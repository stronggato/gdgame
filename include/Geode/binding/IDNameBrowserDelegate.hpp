#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>


class IDNameBrowserDelegate {
public:
    static constexpr auto CLASS_NAME = "IDNameBrowserDelegate";

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual void idNameBrowserClosed(IDNameBrowserPopup* p0, int p1);
};
