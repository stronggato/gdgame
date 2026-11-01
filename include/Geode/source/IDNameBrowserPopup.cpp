
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/IDNameBrowserPopup.hpp>
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

IDNameBrowserPopup::~IDNameBrowserPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(IDNameBrowserPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3beac0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) IDNameBrowserPopup(geode::CutoffConstructor, sizeof(IDNameBrowserPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto IDNameBrowserPopup::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchBegan(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&IDNameBrowserPopup::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(p0, p1))(*)(IDNameBrowserPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c2340, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto IDNameBrowserPopup::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchMoved(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&IDNameBrowserPopup::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(p0, p1))(*)(IDNameBrowserPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c23b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto IDNameBrowserPopup::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchEnded(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&IDNameBrowserPopup::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(p0, p1))(*)(IDNameBrowserPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c2420, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto IDNameBrowserPopup::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchCancelled(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&IDNameBrowserPopup::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(p0, p1))(*)(IDNameBrowserPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c2470, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto IDNameBrowserPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&IDNameBrowserPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(IDNameBrowserPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c2330, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto IDNameBrowserPopup::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&IDNameBrowserPopup::show), this);
	using FunctionType = decltype(show())(*)(IDNameBrowserPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c21d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto IDNameBrowserPopup::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&IDNameBrowserPopup::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(IDNameBrowserPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c0b20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto IDNameBrowserPopup::textInputClosed(CCTextInputNode* p0) -> decltype(textInputClosed(p0)) {
	throw std::runtime_error("IDNameBrowserPopup::textInputClosed not implemented");
}

auto IDNameBrowserPopup::virtualRowCount() -> decltype(virtualRowCount()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&IDNameBrowserPopup::virtualRowCount), this);
	using FunctionType = decltype(virtualRowCount())(*)(IDNameBrowserPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c05d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto IDNameBrowserPopup::virtualRowHeight(int p0) -> decltype(virtualRowHeight(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&IDNameBrowserPopup::virtualRowHeight), this);
	using FunctionType = decltype(virtualRowHeight(p0))(*)(IDNameBrowserPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c0600, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto IDNameBrowserPopup::mountVirtualRow(int p0, cocos2d::CCNode* p1, cocos2d::CCMenu* p2) -> decltype(mountVirtualRow(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCNode*, cocos2d::CCMenu*>::func(&IDNameBrowserPopup::mountVirtualRow), this);
	using FunctionType = decltype(mountVirtualRow(p0, p1, p2))(*)(IDNameBrowserPopup*, int, cocos2d::CCNode*, cocos2d::CCMenu*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c0610, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}
