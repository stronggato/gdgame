
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/EditButtonBar.hpp>
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

EditButtonBar::~EditButtonBar() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(EditButtonBar*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x175960, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) EditButtonBar(geode::CutoffConstructor, sizeof(EditButtonBar));
		geode::DestructorLock::addLock(this);
	}
}

auto EditButtonBar::goToPage(int page) -> decltype(goToPage(page)) {
	using FunctionType = decltype(goToPage(page))(*)(EditButtonBar*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x176570, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto EditButtonBar::loadFromItems(cocos2d::CCArray* objects, int rows, int columns, bool keepPage) -> decltype(loadFromItems(objects, rows, columns, keepPage)) {
	using FunctionType = decltype(loadFromItems(objects, rows, columns, keepPage))(*)(EditButtonBar*, cocos2d::CCArray*, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x110a30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects, rows, columns, keepPage);
}
