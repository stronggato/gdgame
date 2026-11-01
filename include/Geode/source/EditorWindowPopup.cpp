
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/EditorWindowPopup.hpp>
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

EditorWindowPopup::EditorWindowPopup() {
	throw std::runtime_error("EditorWindowPopup::EditorWindowPopup not implemented");
}

auto EditorWindowPopup::onExit() -> decltype(onExit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorWindowPopup::onExit), this);
	using FunctionType = decltype(onExit())(*)(EditorWindowPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17e6e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorWindowPopup::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchBegan(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorWindowPopup::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(p0, p1))(*)(EditorWindowPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17d750, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto EditorWindowPopup::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchMoved(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorWindowPopup::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(p0, p1))(*)(EditorWindowPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17de10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto EditorWindowPopup::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchEnded(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorWindowPopup::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(p0, p1))(*)(EditorWindowPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17e270, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto EditorWindowPopup::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchCancelled(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorWindowPopup::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(p0, p1))(*)(EditorWindowPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17e3e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto EditorWindowPopup::keyDown(cocos2d::enumKeyCodes p0, double p1) -> decltype(keyDown(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&EditorWindowPopup::keyDown), this);
	using FunctionType = decltype(keyDown(p0, p1))(*)(EditorWindowPopup*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17e510, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto EditorWindowPopup::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorWindowPopup::show), this);
	using FunctionType = decltype(show())(*)(EditorWindowPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17e6d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorWindowPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&EditorWindowPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(EditorWindowPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17e720, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto EditorWindowPopup::textInputClosed(CCTextInputNode* p0) -> decltype(textInputClosed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&EditorWindowPopup::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(p0))(*)(EditorWindowPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17e6a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto EditorWindowPopup::handleAction(int p0, bool p1, double p2) -> decltype(handleAction(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, bool, double>::func(&EditorWindowPopup::handleAction), this);
	using FunctionType = decltype(handleAction(p0, p1, p2))(*)(EditorWindowPopup*, int, bool, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17e5c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto EditorWindowPopup::onBuildWindowContent() -> decltype(onBuildWindowContent()) {
	throw std::runtime_error("EditorWindowPopup::onBuildWindowContent not implemented");
}

auto EditorWindowPopup::onWindowResized() -> decltype(onWindowResized()) {
	throw std::runtime_error("EditorWindowPopup::onWindowResized not implemented");
}

auto EditorWindowPopup::onFieldEnter() -> decltype(onFieldEnter()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorWindowPopup::onFieldEnter), this);
	using FunctionType = decltype(onFieldEnter())(*)(EditorWindowPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17e690, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}
