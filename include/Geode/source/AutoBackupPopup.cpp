
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/AutoBackupPopup.hpp>
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

AutoBackupPopup::~AutoBackupPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(AutoBackupPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0xc89e0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) AutoBackupPopup(geode::CutoffConstructor, sizeof(AutoBackupPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto AutoBackupPopup::requestPage(int p0) -> decltype(requestPage(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&AutoBackupPopup::requestPage), this);
	using FunctionType = decltype(requestPage(p0))(*)(AutoBackupPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a230, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AutoBackupPopup::clearPageContent() -> decltype(clearPageContent()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AutoBackupPopup::clearPageContent), this);
	using FunctionType = decltype(clearPageContent())(*)(AutoBackupPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc9d30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AutoBackupPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&AutoBackupPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(AutoBackupPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcbbf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto AutoBackupPopup::backupsChanged() -> decltype(backupsChanged()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AutoBackupPopup::backupsChanged), this);
	using FunctionType = decltype(backupsChanged())(*)(AutoBackupPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc99c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AutoBackupPopup::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&AutoBackupPopup::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(AutoBackupPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc99f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AutoBackupPopup::FLAlert_Clicked(FLAlertLayer* p0, bool p1) -> decltype(FLAlert_Clicked(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&AutoBackupPopup::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(p0, p1))(*)(AutoBackupPopup*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcb4c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}
