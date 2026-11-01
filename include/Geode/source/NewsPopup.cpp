
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/NewsPopup.hpp>
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

NewsPopup::~NewsPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(NewsPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x49a800, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) NewsPopup(geode::CutoffConstructor, sizeof(NewsPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto NewsPopup::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&NewsPopup::init), this);
	using FunctionType = decltype(init())(*)(NewsPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49a9f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto NewsPopup::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchBegan(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&NewsPopup::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(p0, p1))(*)(NewsPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49d430, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto NewsPopup::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchMoved(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&NewsPopup::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(p0, p1))(*)(NewsPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49d4b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto NewsPopup::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchEnded(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&NewsPopup::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(p0, p1))(*)(NewsPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49d5b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto NewsPopup::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchCancelled(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&NewsPopup::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(p0, p1))(*)(NewsPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49d650, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto NewsPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&NewsPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(NewsPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99e20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto NewsPopup::keyDown(cocos2d::enumKeyCodes p0, double p1) -> decltype(keyDown(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&NewsPopup::keyDown), this);
	using FunctionType = decltype(keyDown(p0, p1))(*)(NewsPopup*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49d3c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto NewsPopup::FLAlert_Clicked(FLAlertLayer* p0, bool p1) -> decltype(FLAlert_Clicked(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&NewsPopup::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(p0, p1))(*)(NewsPopup*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49d1e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto NewsPopup::musicActionFinished(GJMusicAction p0) -> decltype(musicActionFinished(p0)) {
	auto self = addresser::thunkAdjust(Resolve<GJMusicAction>::func(&NewsPopup::musicActionFinished), this);
	using FunctionType = decltype(musicActionFinished(p0))(*)(NewsPopup*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49d220, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto NewsPopup::musicActionFailed(GJMusicAction p0) -> decltype(musicActionFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<GJMusicAction>::func(&NewsPopup::musicActionFailed), this);
	using FunctionType = decltype(musicActionFailed(p0))(*)(NewsPopup*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49d240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto NewsPopup::newsImageDownloaded(std::string p0) -> decltype(newsImageDownloaded(p0)) {
	auto self = addresser::thunkAdjust(Resolve<std::string>::func(&NewsPopup::newsImageDownloaded), this);
	using FunctionType = decltype(newsImageDownloaded(p0))(*)(NewsPopup*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49d290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto NewsPopup::newsImageFailed(std::string p0) -> decltype(newsImageFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<std::string>::func(&NewsPopup::newsImageFailed), this);
	using FunctionType = decltype(newsImageFailed(p0))(*)(NewsPopup*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49d320, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}
