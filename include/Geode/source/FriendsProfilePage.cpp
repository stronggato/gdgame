
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/FriendsProfilePage.hpp>
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

FriendsProfilePage::~FriendsProfilePage() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(FriendsProfilePage*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x211180, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) FriendsProfilePage(geode::CutoffConstructor, sizeof(FriendsProfilePage));
		geode::DestructorLock::addLock(this);
	}
}

auto FriendsProfilePage::create(UserListType type) -> decltype(create(type)) {
	using FunctionType = decltype(create(type))(*)(UserListType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16ddb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type);
}

auto FriendsProfilePage::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&FriendsProfilePage::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(FriendsProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b940, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto FriendsProfilePage::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&FriendsProfilePage::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(FriendsProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc2bc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto FriendsProfilePage::getUserListFinished(cocos2d::CCArray* scores, UserListType type) -> decltype(getUserListFinished(scores, type)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, UserListType>::func(&FriendsProfilePage::getUserListFinished), this);
	using FunctionType = decltype(getUserListFinished(scores, type))(*)(FriendsProfilePage*, cocos2d::CCArray*, UserListType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x212c80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scores, type);
}

auto FriendsProfilePage::getUserListFailed(UserListType type, GJErrorCode errorType) -> decltype(getUserListFailed(type, errorType)) {
	auto self = addresser::thunkAdjust(Resolve<UserListType, GJErrorCode>::func(&FriendsProfilePage::getUserListFailed), this);
	using FunctionType = decltype(getUserListFailed(type, errorType))(*)(FriendsProfilePage*, UserListType, GJErrorCode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x213540, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, type, errorType);
}

auto FriendsProfilePage::userListChanged(cocos2d::CCArray* scores, UserListType type) -> decltype(userListChanged(scores, type)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, UserListType>::func(&FriendsProfilePage::userListChanged), this);
	using FunctionType = decltype(userListChanged(scores, type))(*)(FriendsProfilePage*, cocos2d::CCArray*, UserListType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1250a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scores, type);
}

auto FriendsProfilePage::forceReloadList(UserListType type) -> decltype(forceReloadList(type)) {
	auto self = addresser::thunkAdjust(Resolve<UserListType>::func(&FriendsProfilePage::forceReloadList), this);
	using FunctionType = decltype(forceReloadList(type))(*)(FriendsProfilePage*, UserListType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x213610, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, type);
}

auto FriendsProfilePage::requestPage(int p0) -> decltype(requestPage(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&FriendsProfilePage::requestPage), this);
	using FunctionType = decltype(requestPage(p0))(*)(FriendsProfilePage*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a230, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto FriendsProfilePage::virtualRowCount() -> decltype(virtualRowCount()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&FriendsProfilePage::virtualRowCount), this);
	using FunctionType = decltype(virtualRowCount())(*)(FriendsProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x212680, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto FriendsProfilePage::virtualRowHeight(int p0) -> decltype(virtualRowHeight(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&FriendsProfilePage::virtualRowHeight), this);
	using FunctionType = decltype(virtualRowHeight(p0))(*)(FriendsProfilePage*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe7470, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto FriendsProfilePage::mountVirtualRow(int p0, cocos2d::CCNode* p1, cocos2d::CCMenu* p2) -> decltype(mountVirtualRow(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCNode*, cocos2d::CCMenu*>::func(&FriendsProfilePage::mountVirtualRow), this);
	using FunctionType = decltype(mountVirtualRow(p0, p1, p2))(*)(FriendsProfilePage*, int, cocos2d::CCNode*, cocos2d::CCMenu*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2126b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto FriendsProfilePage::FLAlert_Clicked(FLAlertLayer* p0, bool p1) -> decltype(FLAlert_Clicked(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&FriendsProfilePage::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(p0, p1))(*)(FriendsProfilePage*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x213e40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto FriendsProfilePage::uploadActionFinished(int p0, int p1) -> decltype(uploadActionFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&FriendsProfilePage::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(p0, p1))(*)(FriendsProfilePage*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x214090, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto FriendsProfilePage::uploadActionFailed(int p0, int p1) -> decltype(uploadActionFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&FriendsProfilePage::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(p0, p1))(*)(FriendsProfilePage*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x214120, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto FriendsProfilePage::onClosePopup(UploadActionPopup* p0) -> decltype(onClosePopup(p0)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&FriendsProfilePage::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(p0))(*)(FriendsProfilePage*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2141f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto FriendsProfilePage::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&FriendsProfilePage::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(FriendsProfilePage*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x214240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto FriendsProfilePage::init(UserListType type) -> decltype(init(type)) {
	using FunctionType = decltype(init(type))(*)(FriendsProfilePage*, UserListType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12f2b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto FriendsProfilePage::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(FriendsProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x214fa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto FriendsProfilePage::setupUsersBrowser(cocos2d::CCArray* users, UserListType type) -> decltype(setupUsersBrowser(users, type)) {
	using FunctionType = decltype(setupUsersBrowser(users, type))(*)(FriendsProfilePage*, cocos2d::CCArray*, UserListType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd7e10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, users, type);
}
