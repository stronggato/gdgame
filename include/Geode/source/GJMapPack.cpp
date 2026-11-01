
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJMapPack.hpp>
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

auto GJMapPack::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJMapPack::init), this);
	using FunctionType = decltype(init())(*)(GJMapPack*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x269560, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJMapPack::completedMaps() -> decltype(completedMaps()) {
	using FunctionType = decltype(completedMaps())(*)(GJMapPack*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2698a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJMapPack::parsePackColors(std::string textColorStr, std::string barColorStr) -> decltype(parsePackColors(textColorStr, barColorStr)) {
	using FunctionType = decltype(parsePackColors(textColorStr, barColorStr))(*)(GJMapPack*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c2930, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, textColorStr, barColorStr);
}
