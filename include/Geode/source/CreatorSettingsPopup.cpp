
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CreatorSettingsPopup.hpp>
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

CreatorSettingsPopup::~CreatorSettingsPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(CreatorSettingsPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x445950, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) CreatorSettingsPopup(geode::CutoffConstructor, sizeof(CreatorSettingsPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto CreatorSettingsPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&CreatorSettingsPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(CreatorSettingsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3978d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto CreatorSettingsPopup::setTextPopupClosed(SetTextPopup* p0, std::string p1) -> decltype(setTextPopupClosed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<SetTextPopup*, std::string>::func(&CreatorSettingsPopup::setTextPopupClosed), this);
	using FunctionType = decltype(setTextPopupClosed(p0, p1))(*)(CreatorSettingsPopup*, SetTextPopup*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x445e10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto CreatorSettingsPopup::uploadActionFinished(int p0, int p1) -> decltype(uploadActionFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&CreatorSettingsPopup::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(p0, p1))(*)(CreatorSettingsPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4460b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto CreatorSettingsPopup::uploadActionFailed(int p0, int p1) -> decltype(uploadActionFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&CreatorSettingsPopup::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(p0, p1))(*)(CreatorSettingsPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x446170, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto CreatorSettingsPopup::onClosePopup(UploadActionPopup* p0) -> decltype(onClosePopup(p0)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&CreatorSettingsPopup::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(p0))(*)(CreatorSettingsPopup*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x446250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}
