
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/FriendRequestPopup.hpp>
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

FriendRequestPopup::~FriendRequestPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(FriendRequestPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3969c0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) FriendRequestPopup(geode::CutoffConstructor, sizeof(FriendRequestPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto FriendRequestPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&FriendRequestPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(FriendRequestPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a0440, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto FriendRequestPopup::uploadActionFinished(int id, int response) -> decltype(uploadActionFinished(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&FriendRequestPopup::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(id, response))(*)(FriendRequestPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a0450, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto FriendRequestPopup::uploadActionFailed(int id, int response) -> decltype(uploadActionFailed(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&FriendRequestPopup::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(id, response))(*)(FriendRequestPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a0620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto FriendRequestPopup::onClosePopup(UploadActionPopup* popup) -> decltype(onClosePopup(popup)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&FriendRequestPopup::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(popup))(*)(FriendRequestPopup*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a06f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup);
}

auto FriendRequestPopup::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&FriendRequestPopup::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(FriendRequestPopup*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a0750, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto FriendRequestPopup::loadFromGJFriendRequest(GJFriendRequest* request) -> decltype(loadFromGJFriendRequest(request)) {
	using FunctionType = decltype(loadFromGJFriendRequest(request))(*)(FriendRequestPopup*, GJFriendRequest*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x62d5f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, request);
}
