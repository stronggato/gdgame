
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/InvitesPopup.hpp>
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

InvitesPopup::~InvitesPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(InvitesPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0xd2ed0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) InvitesPopup(geode::CutoffConstructor, sizeof(InvitesPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto InvitesPopup::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&InvitesPopup::init), this);
	using FunctionType = decltype(init())(*)(InvitesPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf5b70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto InvitesPopup::requestPage(int p0) -> decltype(requestPage(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&InvitesPopup::requestPage), this);
	using FunctionType = decltype(requestPage(p0))(*)(InvitesPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a230, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto InvitesPopup::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&InvitesPopup::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(InvitesPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf6390, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto InvitesPopup::FLAlert_Clicked(FLAlertLayer* p0, bool p1) -> decltype(FLAlert_Clicked(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&InvitesPopup::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(p0, p1))(*)(InvitesPopup*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf8640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto InvitesPopup::threadInvitesFinished(cocos2d::CCArray* p0) -> decltype(threadInvitesFinished(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*>::func(&InvitesPopup::threadInvitesFinished), this);
	using FunctionType = decltype(threadInvitesFinished(p0))(*)(InvitesPopup*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf6580, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto InvitesPopup::threadInvitesFailed() -> decltype(threadInvitesFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&InvitesPopup::threadInvitesFailed), this);
	using FunctionType = decltype(threadInvitesFailed())(*)(InvitesPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf65e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto InvitesPopup::threadUpdateFinished(int p0, int p1) -> decltype(threadUpdateFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&InvitesPopup::threadUpdateFinished), this);
	using FunctionType = decltype(threadUpdateFinished(p0, p1))(*)(InvitesPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf87d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto InvitesPopup::threadUpdateFailed(int p0, int p1) -> decltype(threadUpdateFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&InvitesPopup::threadUpdateFailed), this);
	using FunctionType = decltype(threadUpdateFailed(p0, p1))(*)(InvitesPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf8ae0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}
