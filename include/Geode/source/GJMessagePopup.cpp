
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJMessagePopup.hpp>
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

GJMessagePopup::~GJMessagePopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJMessagePopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x396b10, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJMessagePopup(geode::CutoffConstructor, sizeof(GJMessagePopup));
		geode::DestructorLock::addLock(this);
	}
}

auto GJMessagePopup::create(GJUserMessage* message) -> decltype(create(message)) {
	using FunctionType = decltype(create(message))(*)(GJUserMessage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbe210, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(message);
}

auto GJMessagePopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJMessagePopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(GJMessagePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99e20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJMessagePopup::downloadMessageFinished(GJUserMessage* message) -> decltype(downloadMessageFinished(message)) {
	auto self = addresser::thunkAdjust(Resolve<GJUserMessage*>::func(&GJMessagePopup::downloadMessageFinished), this);
	using FunctionType = decltype(downloadMessageFinished(message))(*)(GJMessagePopup*, GJUserMessage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a2090, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, message);
}

auto GJMessagePopup::downloadMessageFailed(int id) -> decltype(downloadMessageFailed(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&GJMessagePopup::downloadMessageFailed), this);
	using FunctionType = decltype(downloadMessageFailed(id))(*)(GJMessagePopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a20e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto GJMessagePopup::uploadActionFinished(int id, int response) -> decltype(uploadActionFinished(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&GJMessagePopup::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(id, response))(*)(GJMessagePopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a2120, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto GJMessagePopup::uploadActionFailed(int id, int response) -> decltype(uploadActionFailed(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&GJMessagePopup::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(id, response))(*)(GJMessagePopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a22d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto GJMessagePopup::onClosePopup(UploadActionPopup* popup) -> decltype(onClosePopup(popup)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&GJMessagePopup::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(popup))(*)(GJMessagePopup*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a2390, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup);
}

auto GJMessagePopup::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&GJMessagePopup::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(GJMessagePopup*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a2410, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto GJMessagePopup::loadFromGJMessage(GJUserMessage* message) -> decltype(loadFromGJMessage(message)) {
	using FunctionType = decltype(loadFromGJMessage(message))(*)(GJMessagePopup*, GJUserMessage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a1400, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, message);
}

auto GJMessagePopup::onBlock(cocos2d::CCObject* sender) -> decltype(onBlock(sender)) {
	using FunctionType = decltype(onBlock(sender))(*)(GJMessagePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a1ba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJMessagePopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(GJMessagePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99df0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
