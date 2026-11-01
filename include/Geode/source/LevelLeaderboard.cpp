
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/LevelLeaderboard.hpp>
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

LevelLeaderboard::~LevelLeaderboard() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(LevelLeaderboard*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x4250a0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) LevelLeaderboard(geode::CutoffConstructor, sizeof(LevelLeaderboard));
		geode::DestructorLock::addLock(this);
	}
}

auto LevelLeaderboard::create(GJGameLevel* level, LevelLeaderboardType type, LevelLeaderboardMode mode) -> decltype(create(level, type, mode)) {
	using FunctionType = decltype(create(level, type, mode))(*)(GJGameLevel*, LevelLeaderboardType, LevelLeaderboardMode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4251e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(level, type, mode);
}

auto LevelLeaderboard::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelLeaderboard::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(LevelLeaderboard*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelLeaderboard::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelLeaderboard::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(LevelLeaderboard*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99e20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelLeaderboard::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelLeaderboard::show), this);
	using FunctionType = decltype(show())(*)(LevelLeaderboard*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9ed50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelLeaderboard::loadLeaderboardFinished(cocos2d::CCArray* scores, char const* key) -> decltype(loadLeaderboardFinished(scores, key)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, char const*>::func(&LevelLeaderboard::loadLeaderboardFinished), this);
	using FunctionType = decltype(loadLeaderboardFinished(scores, key))(*)(LevelLeaderboard*, cocos2d::CCArray*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x427690, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scores, key);
}

auto LevelLeaderboard::loadLeaderboardFailed(char const* key) -> decltype(loadLeaderboardFailed(key)) {
	auto self = addresser::thunkAdjust(Resolve<char const*>::func(&LevelLeaderboard::loadLeaderboardFailed), this);
	using FunctionType = decltype(loadLeaderboardFailed(key))(*)(LevelLeaderboard*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x427730, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key);
}

auto LevelLeaderboard::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&LevelLeaderboard::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(LevelLeaderboard*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x426890, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto LevelLeaderboard::updateUserScoreFinished() -> decltype(updateUserScoreFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelLeaderboard::updateUserScoreFinished), this);
	using FunctionType = decltype(updateUserScoreFinished())(*)(LevelLeaderboard*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x426ed0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelLeaderboard::updateUserScoreFailed() -> decltype(updateUserScoreFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelLeaderboard::updateUserScoreFailed), this);
	using FunctionType = decltype(updateUserScoreFailed())(*)(LevelLeaderboard*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x426ee0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelLeaderboard::ownsTouchPrio() -> decltype(ownsTouchPrio()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelLeaderboard::ownsTouchPrio), this);
	using FunctionType = decltype(ownsTouchPrio())(*)(LevelLeaderboard*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ff70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelLeaderboard::getLocalScores() -> decltype(getLocalScores()) {
	using FunctionType = decltype(getLocalScores())(*)(LevelLeaderboard*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x426a10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelLeaderboard::init(GJGameLevel* level, LevelLeaderboardType type, LevelLeaderboardMode mode) -> decltype(init(level, type, mode)) {
	using FunctionType = decltype(init(level, type, mode))(*)(LevelLeaderboard*, GJGameLevel*, LevelLeaderboardType, LevelLeaderboardMode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x425330, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level, type, mode);
}

auto LevelLeaderboard::loadScores() -> decltype(loadScores()) {
	using FunctionType = decltype(loadScores())(*)(LevelLeaderboard*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x426be0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelLeaderboard::onChangeMode(cocos2d::CCObject* sender) -> decltype(onChangeMode(sender)) {
	using FunctionType = decltype(onChangeMode(sender))(*)(LevelLeaderboard*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x138190, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelLeaderboard::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(LevelLeaderboard*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99df0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelLeaderboard::onUpdate(cocos2d::CCObject* sender) -> decltype(onUpdate(sender)) {
	using FunctionType = decltype(onUpdate(sender))(*)(LevelLeaderboard*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x24f3a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
