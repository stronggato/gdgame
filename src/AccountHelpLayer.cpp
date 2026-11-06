#include <Geode/binding/AccountHelpLayer.hpp>
#include <Geode/binding/AccountLoginLayer.hpp>
#include <Geode/binding/AccountLayer.hpp>
#include <Geode/binding/ButtonSprite.hpp>
#include <Geode/binding/CCMenuItemSpriteExtra.hpp>
#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/GJAccountManager.hpp>
#include <Geode/binding/TextArea.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>

using namespace cocos2d;

void AccountHelpLayer::customSetup() {
    auto winSize = cocos2d::CCDirector::sharedDirector()->getWinSize();

    m_loginStatusLabel = cocos2d::CCLabelBMFont::create("", "goldFont.fnt");
    m_loginStatusLabel->retain();
    m_mainLayer->addChild(m_loginStatusLabel);
    m_loginStatusLabel->setPosition(cocos2d::CCPoint(winSize.width * 0.5f, winSize.height * 0.5f + 90.0f));

    m_textArea = TextArea::create(" ", "goldFont.fnt", 1.0f, 1000.0f, cocos2d::CCPoint(0.5f, 1.0f), 32.0f, false, 0);
    m_textArea->retain();
    m_mainLayer->addChild(m_textArea);
    m_textArea->setPosition(m_loginStatusLabel->getPosition() + cocos2d::CCPoint(0.0f, -18.0f));

    auto refreshBtnSprite = ButtonSprite::create("Refresh Login", 160, 0, 1.0f, true, "goldFont.fnt", "GJ_button_01.png", 0.0f);
    m_refreshLoginButton = CCMenuItemSpriteExtra::create(refreshBtnSprite, nullptr, this, menu_selector(AccountHelpLayer::onReLogin));
    m_buttonMenu->addChild(m_refreshLoginButton);

    auto manageBtnSprite = ButtonSprite::create("Manage Account", 160, 0, 1.0f, true, "goldFont.fnt", "GJ_button_01.png", 0.0f);
    auto manageBtn = CCMenuItemSpriteExtra::create(manageBtnSprite, nullptr, this, menu_selector(AccountHelpLayer::onAccountManagement));
    m_buttonMenu->addChild(manageBtn);

    auto unlinkBtnSprite = ButtonSprite::create("Unlink Account", 160, 0, 1.0f, true, "goldFont.fnt", "GJ_button_01.png", 0.0f);
    m_unlinkAccountButton = CCMenuItemSpriteExtra::create(unlinkBtnSprite, nullptr, this, menu_selector(AccountHelpLayer::onUnlink));
    m_buttonMenu->addChild(m_unlinkAccountButton);

    auto pos1 = m_mainLayer->convertToWorldSpace(cocos2d::CCPoint(winSize.width * 0.5f, winSize.height * 0.5f + 30.0f));
    auto nodePos = m_buttonMenu->convertToNodeSpace(pos1);
    m_refreshLoginButton->setPosition(nodePos + cocos2d::CCPoint(0.0f, 0.0f));
    manageBtn->setPosition(nodePos + cocos2d::CCPoint(0.0f, -45.0f));
    m_unlinkAccountButton->setPosition(nodePos + cocos2d::CCPoint(0.0f, -90.0f));

    this->updatePage();
    GJAccountManager::sharedState()->m_accountDelegate = this;
    m_unk290 = true;
}

void AccountHelpLayer::layerHidden() {
    if (m_unk290) {
        auto layer = AccountLayer::create();
        if (auto parent = this->getParent()) {
            parent->addChild(layer, 100);
        }
        layer->showLayer(false);
    }
    this->setVisible(false);
    if (m_closeOnHide) {
        this->removeFromParentAndCleanup(true);
    }
}

void AccountHelpLayer::accountStatusChanged() {
    this->updatePage();
}

void AccountHelpLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) {
    if (!layer) return;
    int tag = layer->getTag();
    if (tag == 3) {
        if (btn2) {
            this->verifyUnlink();
        }
    } else if (tag == 4) {
        if (btn2) {
            this->doUnlink();
        }
    } else if (tag == 5) {
        if (btn2) {
            cocos2d::CCApplication::sharedApplication()->openURL("https://www.boomlings.com/database/accounts/accountManagement.php");
        }
    }
}

void AccountHelpLayer::onAccountManagement(cocos2d::CCObject* sender) {
    auto alert = FLAlertLayer::create(
        this,
        "Account Management",
        "Manage your account settings, change password, or unlink account on the Boomlings website.",
        "Cancel",
        "Open",
        300.0f
    );
    alert->setTag(5);
    alert->show();
}

void AccountHelpLayer::onReLogin(cocos2d::CCObject* sender) {
    auto layer = AccountLoginLayer::create("");
    layer->show();
}

void AccountHelpLayer::onUnlink(cocos2d::CCObject* sender) {
    auto alert = FLAlertLayer::create(
        this,
        "Unlink Account",
        "Are you sure you want to <cr>unlink</c> this account?",
        "Cancel",
        "Unlink",
        300.0f
    );
    alert->setTag(3);
    alert->show();
}

void AccountHelpLayer::updatePage() {
    auto gjam = GJAccountManager::sharedState();
    bool isLoggedIn = (gjam && gjam->m_accountID != 0 && !gjam->m_username.empty());

    if (m_textArea) {
        m_textArea->colorAllCharactersTo(cocos2d::ccWHITE);
    }

    if (isLoggedIn) {
        if (m_loginStatusLabel) {
            m_loginStatusLabel->setString(cocos2d::CCString::createWithFormat("Linked to account: %s", gjam->m_username.c_str())->getCString());
        }
        if (m_textArea) {
            m_textArea->setString("Create an account to backup\nand sync your data");
        }
    } else if (gjam && gjam->m_accountID == 0) {
        if (m_loginStatusLabel) {
            m_loginStatusLabel->setString("Not logged in");
        }
        if (m_textArea) {
            m_textArea->setString("Create an account to backup\nand sync your data");
        }
    } else {
        if (m_loginStatusLabel && gjam) {
            m_loginStatusLabel->setString(cocos2d::CCString::createWithFormat("Linked to account: %s", gjam->m_username.c_str())->getCString());
        }
        if (m_textArea) {
            m_textArea->setString("Login required");
        }
    }

    if (m_unlinkAccountButton && gjam) {
        m_unlinkAccountButton->setEnabled(gjam->m_accountID != 0);
    }
}
