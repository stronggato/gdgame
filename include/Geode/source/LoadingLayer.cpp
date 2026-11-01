
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/LoadingLayer.hpp>
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

auto LoadingLayer::scene(bool refresh) -> decltype(scene(refresh)) {
	using FunctionType = decltype(scene(refresh))(*)(bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x465e30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(refresh);
}

auto LoadingLayer::getLoadingString() -> decltype(getLoadingString()) {
	using FunctionType = decltype(getLoadingString())(*)(LoadingLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x467340, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LoadingLayer::init(bool refresh) -> decltype(init(refresh)) {
	using FunctionType = decltype(init(refresh))(*)(LoadingLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x465f40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, refresh);
}

auto LoadingLayer::loadAssets() -> decltype(loadAssets()) {
	using FunctionType = decltype(loadAssets())(*)(LoadingLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x466800, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
