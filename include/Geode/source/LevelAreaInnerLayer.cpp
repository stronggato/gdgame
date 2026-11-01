
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/LevelAreaInnerLayer.hpp>
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

LevelAreaInnerLayer::~LevelAreaInnerLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(LevelAreaInnerLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3daa10, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) LevelAreaInnerLayer(geode::CutoffConstructor, sizeof(LevelAreaInnerLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto LevelAreaInnerLayer::scene(bool returning) -> decltype(scene(returning)) {
	using FunctionType = decltype(scene(returning))(*)(bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dcc40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(returning);
}

auto LevelAreaInnerLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelAreaInnerLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(LevelAreaInnerLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3defd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelAreaInnerLayer::dialogClosed(DialogLayer* layer) -> decltype(dialogClosed(layer)) {
	auto self = addresser::thunkAdjust(Resolve<DialogLayer*>::func(&LevelAreaInnerLayer::dialogClosed), this);
	using FunctionType = decltype(dialogClosed(layer))(*)(LevelAreaInnerLayer*, DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3de420, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto LevelAreaInnerLayer::onExit() -> decltype(onExit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelAreaInnerLayer::onExit), this);
	using FunctionType = decltype(onExit())(*)(LevelAreaInnerLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3def80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelAreaInnerLayer::init(bool returning) -> decltype(init(returning)) {
	using FunctionType = decltype(init(returning))(*)(LevelAreaInnerLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dcd50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, returning);
}

auto LevelAreaInnerLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(LevelAreaInnerLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3def20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelAreaInnerLayer::onDoor(cocos2d::CCObject* sender) -> decltype(onDoor(sender)) {
	using FunctionType = decltype(onDoor(sender))(*)(LevelAreaInnerLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dea30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelAreaInnerLayer::onNextFloor(cocos2d::CCObject* sender) -> decltype(onNextFloor(sender)) {
	using FunctionType = decltype(onNextFloor(sender))(*)(LevelAreaInnerLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ddd40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelAreaInnerLayer::onOnlineVault(cocos2d::CCObject* sender) -> decltype(onOnlineVault(sender)) {
	using FunctionType = decltype(onOnlineVault(sender))(*)(LevelAreaInnerLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ded40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelAreaInnerLayer::playStep1() -> decltype(playStep1()) {
	using FunctionType = decltype(playStep1())(*)(LevelAreaInnerLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x179ff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelAreaInnerLayer::tryResumeTowerMusic() -> decltype(tryResumeTowerMusic()) {
	using FunctionType = decltype(tryResumeTowerMusic())(*)(LevelAreaInnerLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3de990, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
