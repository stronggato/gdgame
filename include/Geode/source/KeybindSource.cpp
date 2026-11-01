
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/KeybindSource.hpp>
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

auto KeybindSource::chordsForAction(int p0) -> decltype(chordsForAction(p0)) {
	throw std::runtime_error("KeybindSource::chordsForAction not implemented");
}

auto KeybindSource::actionsForChord(int p0) -> decltype(actionsForChord(p0)) {
	throw std::runtime_error("KeybindSource::actionsForChord not implemented");
}

auto KeybindSource::bindChord(int p0, int p1) -> decltype(bindChord(p0, p1)) {
	throw std::runtime_error("KeybindSource::bindChord not implemented");
}

auto KeybindSource::unbindChord(int p0, int p1) -> decltype(unbindChord(p0, p1)) {
	throw std::runtime_error("KeybindSource::unbindChord not implemented");
}

auto KeybindSource::isLevelSet() -> decltype(isLevelSet()) {
	using FunctionType = decltype(isLevelSet())(*)(KeybindSource*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a230, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
