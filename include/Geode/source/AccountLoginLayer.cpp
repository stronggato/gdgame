
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/AccountLoginLayer.hpp>
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

AccountLoginLayer::~AccountLoginLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(AccountLoginLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x8bea0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) AccountLoginLayer(geode::CutoffConstructor, sizeof(AccountLoginLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto AccountLoginLayer::create(std::string username) -> decltype(create(username)) {
	using FunctionType = decltype(create(username))(*)(std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x907f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(username);
}

auto AccountLoginLayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountLoginLayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(AccountLoginLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountLoginLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountLoginLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(AccountLoginLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x91ef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountLoginLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&AccountLoginLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(AccountLoginLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x91a50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto AccountLoginLayer::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&AccountLoginLayer::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(AccountLoginLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x91fc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto AccountLoginLayer::loginAccountFinished(int accountID, int userID) -> decltype(loginAccountFinished(accountID, userID)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&AccountLoginLayer::loginAccountFinished), this);
	using FunctionType = decltype(loginAccountFinished(accountID, userID))(*)(AccountLoginLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x915f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, accountID, userID);
}

auto AccountLoginLayer::loginAccountFailed(AccountError errorType) -> decltype(loginAccountFailed(errorType)) {
	auto self = addresser::thunkAdjust(Resolve<AccountError>::func(&AccountLoginLayer::loginAccountFailed), this);
	using FunctionType = decltype(loginAccountFailed(errorType))(*)(AccountLoginLayer*, AccountError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x91850, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, errorType);
}

auto AccountLoginLayer::createTextInput(cocos2d::CCPoint position, cocos2d::CCSize size, char const* text, int tag) -> decltype(createTextInput(position, size, text, tag)) {
	using FunctionType = decltype(createTextInput(position, size, text, tag))(*)(AccountLoginLayer*, cocos2d::CCPoint, cocos2d::CCSize, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x914f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position, size, text, tag);
}

auto AccountLoginLayer::createTextLabel(cocos2d::CCPoint position, char const* text, cocos2d::CCSize size) -> decltype(createTextLabel(position, text, size)) {
	using FunctionType = decltype(createTextLabel(position, text, size))(*)(AccountLoginLayer*, cocos2d::CCPoint, char const*, cocos2d::CCSize);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x91410, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position, text, size);
}

auto AccountLoginLayer::init(std::string username) -> decltype(init(username)) {
	using FunctionType = decltype(init(username))(*)(AccountLoginLayer*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1582a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, username);
}

auto AccountLoginLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(AccountLoginLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x91ea0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountLoginLayer::resetLabel(int tag) -> decltype(resetLabel(tag)) {
	using FunctionType = decltype(resetLabel(tag))(*)(AccountLoginLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x919d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, tag);
}

auto AccountLoginLayer::toggleUI(bool enable) -> decltype(toggleUI(enable)) {
	using FunctionType = decltype(toggleUI(enable))(*)(AccountLoginLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x91f50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, enable);
}
