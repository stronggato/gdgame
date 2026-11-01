
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ParentalPrivacyPopup.hpp>
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

ParentalPrivacyPopup::~ParentalPrivacyPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(ParentalPrivacyPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x4c7a10, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) ParentalPrivacyPopup(geode::CutoffConstructor, sizeof(ParentalPrivacyPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto ParentalPrivacyPopup::getUserInfoFinished(GJUserScore* p0) -> decltype(getUserInfoFinished(p0)) {
	auto self = addresser::thunkAdjust(Resolve<GJUserScore*>::func(&ParentalPrivacyPopup::getUserInfoFinished), this);
	using FunctionType = decltype(getUserInfoFinished(p0))(*)(ParentalPrivacyPopup*, GJUserScore*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d23c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ParentalPrivacyPopup::getUserInfoFailed(int p0) -> decltype(getUserInfoFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&ParentalPrivacyPopup::getUserInfoFailed), this);
	using FunctionType = decltype(getUserInfoFailed(p0))(*)(ParentalPrivacyPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d2480, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ParentalPrivacyPopup::updateSettingsFinished() -> decltype(updateSettingsFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ParentalPrivacyPopup::updateSettingsFinished), this);
	using FunctionType = decltype(updateSettingsFinished())(*)(ParentalPrivacyPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d2530, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ParentalPrivacyPopup::updateSettingsFailed() -> decltype(updateSettingsFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ParentalPrivacyPopup::updateSettingsFailed), this);
	using FunctionType = decltype(updateSettingsFailed())(*)(ParentalPrivacyPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d2cc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}
