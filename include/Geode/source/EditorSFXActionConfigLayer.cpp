
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/EditorSFXActionConfigLayer.hpp>
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

EditorSFXActionConfigLayer::~EditorSFXActionConfigLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(EditorSFXActionConfigLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x181e50, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) EditorSFXActionConfigLayer(geode::CutoffConstructor, sizeof(EditorSFXActionConfigLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto EditorSFXActionConfigLayer::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchBegan(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorSFXActionConfigLayer::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(p0, p1))(*)(EditorSFXActionConfigLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x183800, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto EditorSFXActionConfigLayer::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchMoved(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorSFXActionConfigLayer::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(p0, p1))(*)(EditorSFXActionConfigLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x183930, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto EditorSFXActionConfigLayer::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchEnded(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorSFXActionConfigLayer::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(p0, p1))(*)(EditorSFXActionConfigLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x183a10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto EditorSFXActionConfigLayer::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchCancelled(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorSFXActionConfigLayer::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(p0, p1))(*)(EditorSFXActionConfigLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x183ab0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto EditorSFXActionConfigLayer::rebuildContent() -> decltype(rebuildContent()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorSFXActionConfigLayer::rebuildContent), this);
	using FunctionType = decltype(rebuildContent())(*)(EditorSFXActionConfigLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x183660, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorSFXActionConfigLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&EditorSFXActionConfigLayer::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(EditorSFXActionConfigLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x183670, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto EditorSFXActionConfigLayer::valueDidChange(int p0, float p1) -> decltype(valueDidChange(p0, p1)) {
	throw std::runtime_error("EditorSFXActionConfigLayer::valueDidChange not implemented");
}

auto EditorSFXActionConfigLayer::getValue(int p0) -> decltype(getValue(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&EditorSFXActionConfigLayer::getValue), this);
	using FunctionType = decltype(getValue(p0))(*)(EditorSFXActionConfigLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x183240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto EditorSFXActionConfigLayer::sfxBrowserClosed(SFXBrowser* p0) -> decltype(sfxBrowserClosed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<SFXBrowser*>::func(&EditorSFXActionConfigLayer::sfxBrowserClosed), this);
	using FunctionType = decltype(sfxBrowserClosed(p0))(*)(EditorSFXActionConfigLayer*, SFXBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1833b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}
