
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/FriendPickerPopup.hpp>
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

FriendPickerPopup::~FriendPickerPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(FriendPickerPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0xd28f0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) FriendPickerPopup(geode::CutoffConstructor, sizeof(FriendPickerPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto FriendPickerPopup::requestPage(int p0) -> decltype(requestPage(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&FriendPickerPopup::requestPage), this);
	using FunctionType = decltype(requestPage(p0))(*)(FriendPickerPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a230, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto FriendPickerPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&FriendPickerPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(FriendPickerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe7b30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto FriendPickerPopup::virtualRowCount() -> decltype(virtualRowCount()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&FriendPickerPopup::virtualRowCount), this);
	using FunctionType = decltype(virtualRowCount())(*)(FriendPickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe7450, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto FriendPickerPopup::virtualRowHeight(int p0) -> decltype(virtualRowHeight(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&FriendPickerPopup::virtualRowHeight), this);
	using FunctionType = decltype(virtualRowHeight(p0))(*)(FriendPickerPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe7470, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto FriendPickerPopup::mountVirtualRow(int p0, cocos2d::CCNode* p1, cocos2d::CCMenu* p2) -> decltype(mountVirtualRow(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCNode*, cocos2d::CCMenu*>::func(&FriendPickerPopup::mountVirtualRow), this);
	using FunctionType = decltype(mountVirtualRow(p0, p1, p2))(*)(FriendPickerPopup*, int, cocos2d::CCNode*, cocos2d::CCMenu*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe7480, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto FriendPickerPopup::getUserListFinished(cocos2d::CCArray* p0, UserListType p1) -> decltype(getUserListFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, UserListType>::func(&FriendPickerPopup::getUserListFinished), this);
	using FunctionType = decltype(getUserListFinished(p0, p1))(*)(FriendPickerPopup*, cocos2d::CCArray*, UserListType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe65f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto FriendPickerPopup::getUserListFailed(UserListType p0, GJErrorCode p1) -> decltype(getUserListFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<UserListType, GJErrorCode>::func(&FriendPickerPopup::getUserListFailed), this);
	using FunctionType = decltype(getUserListFailed(p0, p1))(*)(FriendPickerPopup*, UserListType, GJErrorCode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe66c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto FriendPickerPopup::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&FriendPickerPopup::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(FriendPickerPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe6830, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}
