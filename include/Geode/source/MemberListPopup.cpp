
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/MemberListPopup.hpp>
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

MemberListPopup::~MemberListPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(MemberListPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0xd2a70, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) MemberListPopup(geode::CutoffConstructor, sizeof(MemberListPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto MemberListPopup::requestPage(int p0) -> decltype(requestPage(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&MemberListPopup::requestPage), this);
	using FunctionType = decltype(requestPage(p0))(*)(MemberListPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a230, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto MemberListPopup::friendPicked(GJUserScore* p0) -> decltype(friendPicked(p0)) {
	auto self = addresser::thunkAdjust(Resolve<GJUserScore*>::func(&MemberListPopup::friendPicked), this);
	using FunctionType = decltype(friendPicked(p0))(*)(MemberListPopup*, GJUserScore*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xec9d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto MemberListPopup::isRecipientSelected(int p0) -> decltype(isRecipientSelected(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&MemberListPopup::isRecipientSelected), this);
	using FunctionType = decltype(isRecipientSelected(p0))(*)(MemberListPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xecb80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto MemberListPopup::selectedRecipientCount() -> decltype(selectedRecipientCount()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MemberListPopup::selectedRecipientCount), this);
	using FunctionType = decltype(selectedRecipientCount())(*)(MemberListPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xecc00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MemberListPopup::selectedRecipients() -> decltype(selectedRecipients()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MemberListPopup::selectedRecipients), this);
	using FunctionType = decltype(selectedRecipients())(*)(MemberListPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xecc20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MemberListPopup::pickerRowState(int p0) -> decltype(pickerRowState(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&MemberListPopup::pickerRowState), this);
	using FunctionType = decltype(pickerRowState(p0))(*)(MemberListPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xecc30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto MemberListPopup::pickerCountBase() -> decltype(pickerCountBase()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MemberListPopup::pickerCountBase), this);
	using FunctionType = decltype(pickerCountBase())(*)(MemberListPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xecd70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MemberListPopup::friendPickerAdd() -> decltype(friendPickerAdd()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MemberListPopup::friendPickerAdd), this);
	using FunctionType = decltype(friendPickerAdd())(*)(MemberListPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xecda0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MemberListPopup::friendPickerClosed() -> decltype(friendPickerClosed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MemberListPopup::friendPickerClosed), this);
	using FunctionType = decltype(friendPickerClosed())(*)(MemberListPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xecd80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MemberListPopup::FLAlert_Clicked(FLAlertLayer* p0, bool p1) -> decltype(FLAlert_Clicked(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&MemberListPopup::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(p0, p1))(*)(MemberListPopup*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xec4c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto MemberListPopup::threadUpdateFinished(int p0, int p1) -> decltype(threadUpdateFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&MemberListPopup::threadUpdateFinished), this);
	using FunctionType = decltype(threadUpdateFinished(p0, p1))(*)(MemberListPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xed890, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto MemberListPopup::threadUpdateFailed(int p0, int p1) -> decltype(threadUpdateFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&MemberListPopup::threadUpdateFailed), this);
	using FunctionType = decltype(threadUpdateFailed(p0, p1))(*)(MemberListPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xedca0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto MemberListPopup::threadMembersFinished(int p0) -> decltype(threadMembersFinished(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&MemberListPopup::threadMembersFinished), this);
	using FunctionType = decltype(threadMembersFinished(p0))(*)(MemberListPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xeaff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto MemberListPopup::threadMembersFailed(int p0) -> decltype(threadMembersFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&MemberListPopup::threadMembersFailed), this);
	using FunctionType = decltype(threadMembersFailed(p0))(*)(MemberListPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xeaff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto MemberListPopup::threadMessagesFinished(int p0, cocos2d::CCArray* p1, bool p2) -> decltype(threadMessagesFinished(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCArray*, bool>::func(&MemberListPopup::threadMessagesFinished), this);
	using FunctionType = decltype(threadMessagesFinished(p0, p1, p2))(*)(MemberListPopup*, int, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xeb0c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto MemberListPopup::threadMessagesFailed(int p0) -> decltype(threadMessagesFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&MemberListPopup::threadMessagesFailed), this);
	using FunctionType = decltype(threadMessagesFailed(p0))(*)(MemberListPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xeb120, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto MemberListPopup::threadSearchFinished(int p0, cocos2d::CCArray* p1, bool p2) -> decltype(threadSearchFinished(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCArray*, bool>::func(&MemberListPopup::threadSearchFinished), this);
	using FunctionType = decltype(threadSearchFinished(p0, p1, p2))(*)(MemberListPopup*, int, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xeb140, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto MemberListPopup::threadSearchFailed(int p0) -> decltype(threadSearchFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&MemberListPopup::threadSearchFailed), this);
	using FunctionType = decltype(threadSearchFailed(p0))(*)(MemberListPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xeb160, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto MemberListPopup::threadSendFinished(int p0, long long p1) -> decltype(threadSendFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, long long>::func(&MemberListPopup::threadSendFinished), this);
	using FunctionType = decltype(threadSendFinished(p0, p1))(*)(MemberListPopup*, int, long long);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xeb180, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto MemberListPopup::threadSendFailed() -> decltype(threadSendFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MemberListPopup::threadSendFailed), this);
	using FunctionType = decltype(threadSendFailed())(*)(MemberListPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xeb250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}
