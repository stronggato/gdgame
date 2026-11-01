
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/MessagesProfilePage.hpp>
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

MessagesProfilePage::~MessagesProfilePage() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(MessagesProfilePage*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x472400, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) MessagesProfilePage(geode::CutoffConstructor, sizeof(MessagesProfilePage));
		geode::DestructorLock::addLock(this);
	}
}

auto MessagesProfilePage::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MessagesProfilePage::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(MessagesProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MessagesProfilePage::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MessagesProfilePage::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(MessagesProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x473e00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MessagesProfilePage::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&MessagesProfilePage::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(MessagesProfilePage*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x473aa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto MessagesProfilePage::onClosePopup(UploadActionPopup* popup) -> decltype(onClosePopup(popup)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&MessagesProfilePage::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(popup))(*)(MessagesProfilePage*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x473ad0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup);
}

auto MessagesProfilePage::uploadActionFinished(int id, int response) -> decltype(uploadActionFinished(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&MessagesProfilePage::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(id, response))(*)(MessagesProfilePage*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x473b20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto MessagesProfilePage::uploadActionFailed(int id, int response) -> decltype(uploadActionFailed(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&MessagesProfilePage::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(id, response))(*)(MessagesProfilePage*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x473ca0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto MessagesProfilePage::loadMessagesFinished(cocos2d::CCArray* messages, char const* key) -> decltype(loadMessagesFinished(messages, key)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, char const*>::func(&MessagesProfilePage::loadMessagesFinished), this);
	using FunctionType = decltype(loadMessagesFinished(messages, key))(*)(MessagesProfilePage*, cocos2d::CCArray*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4745b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, messages, key);
}

auto MessagesProfilePage::loadMessagesFailed(char const* key, GJErrorCode errorType) -> decltype(loadMessagesFailed(key, errorType)) {
	auto self = addresser::thunkAdjust(Resolve<char const*, GJErrorCode>::func(&MessagesProfilePage::loadMessagesFailed), this);
	using FunctionType = decltype(loadMessagesFailed(key, errorType))(*)(MessagesProfilePage*, char const*, GJErrorCode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x474710, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, errorType);
}

auto MessagesProfilePage::forceReloadMessages(bool sent) -> decltype(forceReloadMessages(sent)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&MessagesProfilePage::forceReloadMessages), this);
	using FunctionType = decltype(forceReloadMessages(sent))(*)(MessagesProfilePage*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4747b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sent);
}

auto MessagesProfilePage::setupPageInfo(std::string info, char const* key) -> decltype(setupPageInfo(info, key)) {
	auto self = addresser::thunkAdjust(Resolve<std::string, char const*>::func(&MessagesProfilePage::setupPageInfo), this);
	using FunctionType = decltype(setupPageInfo(info, key))(*)(MessagesProfilePage*, std::string, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4747d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, info, key);
}

auto MessagesProfilePage::ownsTouchPrio() -> decltype(ownsTouchPrio()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MessagesProfilePage::ownsTouchPrio), this);
	using FunctionType = decltype(ownsTouchPrio())(*)(MessagesProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ff70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MessagesProfilePage::deleteSelected() -> decltype(deleteSelected()) {
	using FunctionType = decltype(deleteSelected())(*)(MessagesProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x473820, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MessagesProfilePage::init(bool sent) -> decltype(init(sent)) {
	using FunctionType = decltype(init(sent))(*)(MessagesProfilePage*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc8a80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sent);
}
