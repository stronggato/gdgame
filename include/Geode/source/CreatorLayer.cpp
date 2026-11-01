
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CreatorLayer.hpp>
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

CreatorLayer::~CreatorLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(CreatorLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x133ed0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) CreatorLayer(geode::CutoffConstructor, sizeof(CreatorLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto CreatorLayer::scene() -> decltype(scene()) {
	using FunctionType = decltype(scene())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x133fe0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto CreatorLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CreatorLayer::init), this);
	using FunctionType = decltype(init())(*)(CreatorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x134180, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CreatorLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CreatorLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(CreatorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x138430, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CreatorLayer::sceneWillResume() -> decltype(sceneWillResume()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CreatorLayer::sceneWillResume), this);
	using FunctionType = decltype(sceneWillResume())(*)(CreatorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1382b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CreatorLayer::dialogClosed(DialogLayer* layer) -> decltype(dialogClosed(layer)) {
	auto self = addresser::thunkAdjust(Resolve<DialogLayer*>::func(&CreatorLayer::dialogClosed), this);
	using FunctionType = decltype(dialogClosed(layer))(*)(CreatorLayer*, DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x138190, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto CreatorLayer::contentStatusFinished() -> decltype(contentStatusFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CreatorLayer::contentStatusFinished), this);
	using FunctionType = decltype(contentStatusFinished())(*)(CreatorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x138180, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CreatorLayer::checkQuestsStatus() -> decltype(checkQuestsStatus()) {
	using FunctionType = decltype(checkQuestsStatus())(*)(CreatorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xeb270, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CreatorLayer::onAdventureMap(cocos2d::CCObject* sender) -> decltype(onAdventureMap(sender)) {
	using FunctionType = decltype(onAdventureMap(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x136c10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onLeaderboards(cocos2d::CCObject* sender) -> decltype(onLeaderboards(sender)) {
	using FunctionType = decltype(onLeaderboards(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x136020, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onMultiplayer(cocos2d::CCObject* sender) -> decltype(onMultiplayer(sender)) {
	using FunctionType = decltype(onMultiplayer(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x136620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onOnlineLevels(cocos2d::CCObject* sender) -> decltype(onOnlineLevels(sender)) {
	using FunctionType = decltype(onOnlineLevels(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1363d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onSecretVault(cocos2d::CCObject* sender) -> decltype(onSecretVault(sender)) {
	using FunctionType = decltype(onSecretVault(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x136f70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onTopLists(cocos2d::CCObject* sender) -> decltype(onTopLists(sender)) {
	using FunctionType = decltype(onTopLists(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x136300, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onTreasureRoom(cocos2d::CCObject* sender) -> decltype(onTreasureRoom(sender)) {
	using FunctionType = decltype(onTreasureRoom(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1377a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
