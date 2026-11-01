
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/LevelSearchLayer.hpp>
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

auto LevelSearchLayer::scene(int type) -> decltype(scene(type)) {
	using FunctionType = decltype(scene(type))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4311e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type);
}

auto LevelSearchLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelSearchLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(LevelSearchLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x438490, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelSearchLayer::textInputOpened(CCTextInputNode* node) -> decltype(textInputOpened(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&LevelSearchLayer::textInputOpened), this);
	using FunctionType = decltype(textInputOpened(node))(*)(LevelSearchLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x434e20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto LevelSearchLayer::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&LevelSearchLayer::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(LevelSearchLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x434f80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto LevelSearchLayer::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&LevelSearchLayer::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(LevelSearchLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x434f80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto LevelSearchLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&LevelSearchLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(LevelSearchLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x434de0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto LevelSearchLayer::demonFilterSelectClosed(int filter) -> decltype(demonFilterSelectClosed(filter)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&LevelSearchLayer::demonFilterSelectClosed), this);
	using FunctionType = decltype(demonFilterSelectClosed(filter))(*)(LevelSearchLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x433740, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, filter);
}

auto LevelSearchLayer::checkDiff(int diff) -> decltype(checkDiff(diff)) {
	throw std::runtime_error("LevelSearchLayer::checkDiff not implemented");
}

auto LevelSearchLayer::checkTime(int time) -> decltype(checkTime(time)) {
	throw std::runtime_error("LevelSearchLayer::checkTime not implemented");
}

auto LevelSearchLayer::getSearchObject(SearchType type, std::string query) -> decltype(getSearchObject(type, query)) {
	using FunctionType = decltype(getSearchObject(type, query))(*)(LevelSearchLayer*, SearchType, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x435420, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, query);
}

auto LevelSearchLayer::init(int type) -> decltype(init(type)) {
	throw std::runtime_error("LevelSearchLayer::init not implemented");
}

auto LevelSearchLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(LevelSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4371e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSearchLayer::onClearFreeSearch(cocos2d::CCObject* sender) -> decltype(onClearFreeSearch(sender)) {
	using FunctionType = decltype(onClearFreeSearch(sender))(*)(LevelSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4371a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSearchLayer::onSearchMode(cocos2d::CCObject* sender) -> decltype(onSearchMode(sender)) {
	using FunctionType = decltype(onSearchMode(sender))(*)(LevelSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4339b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSearchLayer::toggleDifficulty(cocos2d::CCObject* sender) -> decltype(toggleDifficulty(sender)) {
	using FunctionType = decltype(toggleDifficulty(sender))(*)(LevelSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x437ac0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSearchLayer::toggleStar(cocos2d::CCObject* sender) -> decltype(toggleStar(sender)) {
	using FunctionType = decltype(toggleStar(sender))(*)(LevelSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x502550, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSearchLayer::updateSearchLabel(char const* label) -> decltype(updateSearchLabel(label)) {
	using FunctionType = decltype(updateSearchLabel(label))(*)(LevelSearchLayer*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x435060, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, label);
}
