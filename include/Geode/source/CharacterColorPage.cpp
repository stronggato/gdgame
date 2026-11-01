
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CharacterColorPage.hpp>
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

auto CharacterColorPage::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CharacterColorPage::init), this);
	using FunctionType = decltype(init())(*)(CharacterColorPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa0690, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CharacterColorPage::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CharacterColorPage::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(CharacterColorPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CharacterColorPage::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CharacterColorPage::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(CharacterColorPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa2f70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CharacterColorPage::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CharacterColorPage::show), this);
	using FunctionType = decltype(show())(*)(CharacterColorPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9ed50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CharacterColorPage::activeColorForMode(int mode) -> decltype(activeColorForMode(mode)) {
	using FunctionType = decltype(activeColorForMode(mode))(*)(CharacterColorPage*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa1bb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, mode);
}

auto CharacterColorPage::colorForIndex(int index) -> decltype(colorForIndex(index)) {
	using FunctionType = decltype(colorForIndex(index))(*)(CharacterColorPage*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa2820, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto CharacterColorPage::createColorMenu() -> decltype(createColorMenu()) {
	using FunctionType = decltype(createColorMenu())(*)(CharacterColorPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa15a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CharacterColorPage::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(CharacterColorPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa2f30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CharacterColorPage::toggleShip(cocos2d::CCObject* sender) -> decltype(toggleShip(sender)) {
	using FunctionType = decltype(toggleShip(sender))(*)(CharacterColorPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa1400, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CharacterColorPage::updateIconColors() -> decltype(updateIconColors()) {
	using FunctionType = decltype(updateIconColors())(*)(CharacterColorPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa2d10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
