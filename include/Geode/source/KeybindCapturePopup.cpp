
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/KeybindCapturePopup.hpp>
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

KeybindCapturePopup::~KeybindCapturePopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(KeybindCapturePopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x44b110, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) KeybindCapturePopup(geode::CutoffConstructor, sizeof(KeybindCapturePopup));
		geode::DestructorLock::addLock(this);
	}
}

auto KeybindCapturePopup::keyDown(cocos2d::enumKeyCodes p0, double p1) -> decltype(keyDown(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&KeybindCapturePopup::keyDown), this);
	using FunctionType = decltype(keyDown(p0, p1))(*)(KeybindCapturePopup*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44bd10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto KeybindCapturePopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&KeybindCapturePopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(KeybindCapturePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44bcc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto KeybindCapturePopup::inputKeySelected(int p0) -> decltype(inputKeySelected(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&KeybindCapturePopup::inputKeySelected), this);
	using FunctionType = decltype(inputKeySelected(p0))(*)(KeybindCapturePopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44b240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto KeybindCapturePopup::keyUp(cocos2d::enumKeyCodes p0, double p1) -> decltype(keyUp(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&KeybindCapturePopup::keyUp), this);
	using FunctionType = decltype(keyUp(p0, p1))(*)(KeybindCapturePopup*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44bf80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}
