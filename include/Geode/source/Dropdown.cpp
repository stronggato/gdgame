
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/Dropdown.hpp>
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

Dropdown::~Dropdown() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(Dropdown*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x11f0f0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) Dropdown(geode::CutoffConstructor, sizeof(Dropdown));
		geode::DestructorLock::addLock(this);
	}
}

auto Dropdown::setPosition(cocos2d::CCPoint const& p0) -> decltype(setPosition(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCPoint const&>::func(&Dropdown::setPosition), this);
	using FunctionType = decltype(setPosition(p0))(*)(Dropdown*, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11f700, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto Dropdown::setVisible(bool p0) -> decltype(setVisible(p0)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&Dropdown::setVisible), this);
	using FunctionType = decltype(setVisible(p0))(*)(Dropdown*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11f760, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto Dropdown::dropdownListPopupClosed(DropdownListPopup* p0) -> decltype(dropdownListPopupClosed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<DropdownListPopup*>::func(&Dropdown::dropdownListPopupClosed), this);
	using FunctionType = decltype(dropdownListPopupClosed(p0))(*)(Dropdown*, DropdownListPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11fe30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}
