
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/MenuLayer.hpp>
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

MenuLayer::~MenuLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(MenuLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x46ebe0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) MenuLayer(geode::CutoffConstructor, sizeof(MenuLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto MenuLayer::scene(bool isVideoOptionsOpen) -> decltype(scene(isVideoOptionsOpen)) {
	using FunctionType = decltype(scene(isVideoOptionsOpen))(*)(bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46ed30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(isVideoOptionsOpen);
}

auto MenuLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MenuLayer::init), this);
	using FunctionType = decltype(init())(*)(MenuLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46eee0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MenuLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MenuLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(MenuLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x471f60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MenuLayer::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&MenuLayer::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(MenuLayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x472360, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto MenuLayer::googlePlaySignedIn() -> decltype(googlePlaySignedIn()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MenuLayer::googlePlaySignedIn), this);
	using FunctionType = decltype(googlePlaySignedIn())(*)(MenuLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x471940, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MenuLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&MenuLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(MenuLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x472130, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto MenuLayer::musicActionFinished(GJMusicAction p0) -> decltype(musicActionFinished(p0)) {
	auto self = addresser::thunkAdjust(Resolve<GJMusicAction>::func(&MenuLayer::musicActionFinished), this);
	using FunctionType = decltype(musicActionFinished(p0))(*)(MenuLayer*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4717c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto MenuLayer::endGame() -> decltype(endGame()) {
	using FunctionType = decltype(endGame())(*)(MenuLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4723d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MenuLayer::onAchievements(cocos2d::CCObject* sender) -> decltype(onAchievements(sender)) {
	using FunctionType = decltype(onAchievements(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4717e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onMyProfile(cocos2d::CCObject* sender) -> decltype(onMyProfile(sender)) {
	using FunctionType = decltype(onMyProfile(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4710d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onStats(cocos2d::CCObject* sender) -> decltype(onStats(sender)) {
	using FunctionType = decltype(onStats(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x471bf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::showTOS() -> decltype(showTOS()) {
	using FunctionType = decltype(showTOS())(*)(MenuLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x470fa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MenuLayer::updateUserProfileButton() -> decltype(updateUserProfileButton()) {
	using FunctionType = decltype(updateUserProfileButton())(*)(MenuLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd6210, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MenuLayer::willClose() -> decltype(willClose()) {
	using FunctionType = decltype(willClose())(*)(MenuLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x472090, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
