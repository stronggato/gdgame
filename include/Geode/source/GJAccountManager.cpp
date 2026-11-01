
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJAccountManager.hpp>
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

GJAccountManager::~GJAccountManager() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJAccountManager*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x302790, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJAccountManager(geode::CutoffConstructor, sizeof(GJAccountManager));
		geode::DestructorLock::addLock(this);
	}
}

auto GJAccountManager::sharedState() -> decltype(sharedState()) {
	using FunctionType = decltype(sharedState())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x302830, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJAccountManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJAccountManager::init), this);
	using FunctionType = decltype(init())(*)(GJAccountManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x302e90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJAccountManager::addDLToActive(char const* tag) -> decltype(addDLToActive(tag)) {
	using FunctionType = decltype(addDLToActive(tag))(*)(GJAccountManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x302ed0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, tag);
}

auto GJAccountManager::backupAccount(std::string url) -> decltype(backupAccount(url)) {
	using FunctionType = decltype(backupAccount(url))(*)(GJAccountManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54f60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, url);
}

auto GJAccountManager::getAccountBackupURL() -> decltype(getAccountBackupURL()) {
	throw std::runtime_error("GJAccountManager::getAccountBackupURL not implemented");
}

auto GJAccountManager::getAccountSyncURL() -> decltype(getAccountSyncURL()) {
	throw std::runtime_error("GJAccountManager::getAccountSyncURL not implemented");
}

auto GJAccountManager::getShaPassword(std::string password) -> decltype(getShaPassword(password)) {
	using FunctionType = decltype(getShaPassword(password))(*)(GJAccountManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x307770, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, password);
}

auto GJAccountManager::handleIt(bool success, std::string response, std::string tag, GJHttpType type) -> decltype(handleIt(success, response, tag, type)) {
	using FunctionType = decltype(handleIt(success, response, tag, type))(*)(GJAccountManager*, bool, std::string, std::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e8040, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, success, response, tag, type);
}

auto GJAccountManager::linkToAccount(std::string username, std::string gjp2, int accountID, int userID) -> decltype(linkToAccount(username, gjp2, accountID, userID)) {
	using FunctionType = decltype(linkToAccount(username, gjp2, accountID, userID))(*)(GJAccountManager*, std::string, std::string, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x306c50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, username, gjp2, accountID, userID);
}

auto GJAccountManager::loginAccount(std::string username, std::string gjp2) -> decltype(loginAccount(username, gjp2)) {
	using FunctionType = decltype(loginAccount(username, gjp2))(*)(GJAccountManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x303ca0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, username, gjp2);
}

auto GJAccountManager::onLoginAccountCompleted(std::string response, std::string tag) -> decltype(onLoginAccountCompleted(response, tag)) {
	using FunctionType = decltype(onLoginAccountCompleted(response, tag))(*)(GJAccountManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x304120, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJAccountManager::onRegisterAccountCompleted(std::string response, std::string tag) -> decltype(onRegisterAccountCompleted(response, tag)) {
	using FunctionType = decltype(onRegisterAccountCompleted(response, tag))(*)(GJAccountManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x303850, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJAccountManager::ProcessHttpRequest(std::string url, std::string params, std::string tag, GJHttpType type) -> decltype(ProcessHttpRequest(url, params, tag, type)) {
	using FunctionType = decltype(ProcessHttpRequest(url, params, tag, type))(*)(GJAccountManager*, std::string, std::string, std::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x302970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, url, params, tag, type);
}

auto GJAccountManager::syncAccount(std::string url) -> decltype(syncAccount(url)) {
	using FunctionType = decltype(syncAccount(url))(*)(GJAccountManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x659b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, url);
}

auto GJAccountManager::updateAccountSettings(int p0, int p1, int p2, int p3, int p4, std::string p5, std::string p6, std::string p7, std::string p8, std::string p9, std::string p10, std::string p11) -> decltype(updateAccountSettings(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11)) {
	using FunctionType = decltype(updateAccountSettings(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11))(*)(GJAccountManager*, int, int, int, int, int, std::string, std::string, std::string, std::string, std::string, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3482e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
}
