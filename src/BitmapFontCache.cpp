#include <Geode/binding/BitmapFontCache.hpp>
#include <Geode/binding/FontObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x3ce90
// Method: BitmapFontCache::fontWithConfigFile
FontObject* BitmapFontCache::fontWithConfigFile(char const* font, float scale) {
    if (!m_cache) {
        m_cache = cocos2d::CCDictionary::create();
        m_cache->retain();
    }
    auto keyStr = cocos2d::CCString::createWithFormat("%s%f", font ? font : "", scale);
    if (!keyStr) return nullptr;
    std::string key = keyStr->getCString();

    auto cached = static_cast<FontObject*>(m_cache->objectForKey(key));
    if (cached) {
        return cached;
    }

    auto newFont = new (std::nothrow) FontObject();
    if (newFont) {
        newFont->autorelease();
        m_cache->setObject(newFont, key);
        return newFont;
    }
    return nullptr;
}
