
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJMultiplayerManager.hpp>
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

GJMultiplayerManager::~GJMultiplayerManager() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJMultiplayerManager*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x38d6d0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJMultiplayerManager(geode::CutoffConstructor, sizeof(GJMultiplayerManager));
		geode::DestructorLock::addLock(this);
	}
}

auto GJMultiplayerManager::sharedState() -> decltype(sharedState()) {
	using FunctionType = decltype(sharedState())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38d770, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJMultiplayerManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJMultiplayerManager::init), this);
	using FunctionType = decltype(init())(*)(GJMultiplayerManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38ded0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJMultiplayerManager::addComment(std::string str, int lobbyID) -> decltype(addComment(str, lobbyID)) {
	using FunctionType = decltype(addComment(str, lobbyID))(*)(GJMultiplayerManager*, std::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18a790, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str, lobbyID);
}

auto GJMultiplayerManager::getBasePostString() -> decltype(getBasePostString()) {
	using FunctionType = decltype(getBasePostString())(*)(GJMultiplayerManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38f0d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJMultiplayerManager::handleIt(bool success, std::string response, std::string tag, GJHttpType type) -> decltype(handleIt(success, response, tag, type)) {
	using FunctionType = decltype(handleIt(success, response, tag, type))(*)(GJMultiplayerManager*, bool, std::string, std::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38dc30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, success, response, tag, type);
}

auto GJMultiplayerManager::onJoinLobbyCompleted(std::string response, std::string tag) -> decltype(onJoinLobbyCompleted(response, tag)) {
	using FunctionType = decltype(onJoinLobbyCompleted(response, tag))(*)(GJMultiplayerManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38e010, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJMultiplayerManager::removeDLFromActive(char const* tag) -> decltype(removeDLFromActive(tag)) {
	throw std::runtime_error("GJMultiplayerManager::removeDLFromActive not implemented");
}

auto GJMultiplayerManager::uploadComment(std::string text, int lobbyID) -> decltype(uploadComment(text, lobbyID)) {
	using FunctionType = decltype(uploadComment(text, lobbyID))(*)(GJMultiplayerManager*, std::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38e780, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, text, lobbyID);
}
