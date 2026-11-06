#include <Geode/binding/ArtistCell.hpp>
#include <Geode/binding/SongInfoObject.hpp>
#include <Geode/binding/CCMenuItemSpriteExtra.hpp>
#include <Geode/binding/ButtonSprite.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x14f060
// Method: ArtistCell::~ArtistCell
ArtistCell::~ArtistCell() {
}

// [2/2] Address: 0x14f0f0
// Method: ArtistCell::loadFromObject
void ArtistCell::loadFromObject(SongInfoObject* object) {
    if (!object) return;
    this->m_songInfo = object;

    auto label = cocos2d::CCLabelBMFont::create(object->m_artistName.c_str(), "bigFont.fnt");
    if (label) {
        label->limitLabelWidth(200.0f, 0.8f, 0.0f);
        label->setAnchorPoint(cocos2d::CCPoint(0.0f, 0.5f));
        if (this->m_mainLayer) {
            this->m_mainLayer->addChild(label);
            label->setPosition(cocos2d::CCPoint(20.0f, this->m_height * 0.5f));
        }
    }

    auto menu = cocos2d::CCMenu::create();
    if (this->m_mainLayer) {
        this->m_mainLayer->addChild(menu, 3);
    }

    auto viewBtnSprite = ButtonSprite::create("View", 100, 0, 0.8f, false, "goldFont.fnt", "GJ_button_01.png", 30.0f);
    auto viewBtn = CCMenuItemSpriteExtra::create(viewBtnSprite, nullptr, this, menu_selector(ArtistCell::onNewgrounds));
    if (viewBtn && menu) {
        menu->addChild(viewBtn);
        viewBtn->setPosition(cocos2d::CCPoint(this->m_width - 50.0f, this->m_height * 0.5f));
    }

    if (!object->m_songUrl.empty()) {
        auto ytSprite = cocos2d::CCSprite::createWithSpriteFrameName("gj_ytIcon_001.png");
        auto ytBtn = CCMenuItemSpriteExtra::create(ytSprite, nullptr, this, menu_selector(ArtistCell::onYouTube));
        if (ytBtn && menu && viewBtn) {
            menu->addChild(ytBtn);
            ytBtn->setPosition(cocos2d::CCPoint(viewBtn->getPositionX() - 52.0f, viewBtn->getPositionY()));
        }
    }
}
