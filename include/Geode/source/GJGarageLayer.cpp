
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJGarageLayer.hpp>
#include <Geode/cocos/platform/win32/CCFileUtilsWin32.h>

using namespace geode;
using namespace geode::modifier;

#if !defined(GEODE_WRAP_FUNCTION)
#define GEODE_WRAP_FUNCTION
template <class F>
static auto wrapFunction(uintptr_t address, tulip::hook::TulipConvention convention) {
	auto wrapped = geode::hook::createWrapper(reinterpret_cast<void*>(address), tulip::hook::WrapperMetadata{
		.m_convention = geode::hook::createConvention(convention),
		.m_abstract = tulip::hook::AbstractFunction::from(F(nullptr)),
	});
	if (wrapped.isErr()) {
		throw std::runtime_error(wrapped.unwrapErr());
	}
	return wrapped.unwrap();
}
#endif

auto GJGarageLayer::scene() -> decltype(scene()) {
	using FunctionType = decltype(scene())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x378bb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJGarageLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJGarageLayer::init), this);
	using FunctionType = decltype(init())(*)(GJGarageLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x378d70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJGarageLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJGarageLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(GJGarageLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37f110, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJGarageLayer::textInputOpened(CCTextInputNode* node) -> decltype(textInputOpened(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&GJGarageLayer::textInputOpened), this);
	using FunctionType = decltype(textInputOpened(node))(*)(GJGarageLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37aa50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto GJGarageLayer::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&GJGarageLayer::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(GJGarageLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37ac50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto GJGarageLayer::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&GJGarageLayer::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(GJGarageLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x163910, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto GJGarageLayer::listButtonBarSwitchedPage(ListButtonBar* bar, int page) -> decltype(listButtonBarSwitchedPage(bar, page)) {
	auto self = addresser::thunkAdjust(Resolve<ListButtonBar*, int>::func(&GJGarageLayer::listButtonBarSwitchedPage), this);
	using FunctionType = decltype(listButtonBarSwitchedPage(bar, page))(*)(GJGarageLayer*, ListButtonBar*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1639d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, bar, page);
}

auto GJGarageLayer::showUnlockPopup(int id, UnlockType type) -> decltype(showUnlockPopup(id, type)) {
	auto self = addresser::thunkAdjust(Resolve<int, UnlockType>::func(&GJGarageLayer::showUnlockPopup), this);
	using FunctionType = decltype(showUnlockPopup(id, type))(*)(GJGarageLayer*, int, UnlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37dbb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, type);
}

auto GJGarageLayer::updateRate() -> decltype(updateRate()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJGarageLayer::updateRate), this);
	using FunctionType = decltype(updateRate())(*)(GJGarageLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37e7d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJGarageLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&GJGarageLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(GJGarageLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37e370, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto GJGarageLayer::dialogClosed(DialogLayer* layer) -> decltype(dialogClosed(layer)) {
	auto self = addresser::thunkAdjust(Resolve<DialogLayer*>::func(&GJGarageLayer::dialogClosed), this);
	using FunctionType = decltype(dialogClosed(layer))(*)(GJGarageLayer*, DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37e590, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto GJGarageLayer::playerColorChanged() -> decltype(playerColorChanged()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJGarageLayer::playerColorChanged), this);
	using FunctionType = decltype(playerColorChanged())(*)(GJGarageLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37da00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJGarageLayer::rewardedVideoFinished() -> decltype(rewardedVideoFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJGarageLayer::rewardedVideoFinished), this);
	using FunctionType = decltype(rewardedVideoFinished())(*)(GJGarageLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37aa40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJGarageLayer::getItems(IconType type) -> decltype(getItems(type)) {
	using FunctionType = decltype(getItems(type))(*)(GJGarageLayer*, IconType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37c640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GJGarageLayer::getItems(int count, int page, IconType type, int current) -> decltype(getItems(count, page, type, current)) {
	using FunctionType = decltype(getItems(count, page, type, current))(*)(GJGarageLayer*, int, int, IconType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37c700, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, count, page, type, current);
}

auto GJGarageLayer::onArrow(cocos2d::CCObject* sender) -> decltype(onArrow(sender)) {
	using FunctionType = decltype(onArrow(sender))(*)(GJGarageLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37bcf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJGarageLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(GJGarageLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37ef50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJGarageLayer::onInfo(cocos2d::CCObject* sender) -> decltype(onInfo(sender)) {
	using FunctionType = decltype(onInfo(sender))(*)(GJGarageLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37a840, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJGarageLayer::onNavigate(cocos2d::CCObject* sender) -> decltype(onNavigate(sender)) {
	using FunctionType = decltype(onNavigate(sender))(*)(GJGarageLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37be00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJGarageLayer::onToggleItem(cocos2d::CCObject* sender) -> decltype(onToggleItem(sender)) {
	using FunctionType = decltype(onToggleItem(sender))(*)(GJGarageLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37d7c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJGarageLayer::playRainbowEffect() -> decltype(playRainbowEffect()) {
	using FunctionType = decltype(playRainbowEffect())(*)(GJGarageLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37ea30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGarageLayer::selectTab(IconType type) -> decltype(selectTab(type)) {
	using FunctionType = decltype(selectTab(type))(*)(GJGarageLayer*, IconType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37be60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GJGarageLayer::setupIconSelect() -> decltype(setupIconSelect()) {
	using FunctionType = decltype(setupIconSelect())(*)(GJGarageLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37b030, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGarageLayer::setupPage(int page, IconType type) -> decltype(setupPage(page, type)) {
	using FunctionType = decltype(setupPage(page, type))(*)(GJGarageLayer*, int, IconType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37bf20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page, type);
}

auto GJGarageLayer::setupSpecialPage() -> decltype(setupSpecialPage()) {
	using FunctionType = decltype(setupSpecialPage())(*)(GJGarageLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14b2c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGarageLayer::updatePlayerColors() -> decltype(updatePlayerColors()) {
	using FunctionType = decltype(updatePlayerColors())(*)(GJGarageLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37da30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
