
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ParentalOptionsLayer.hpp>
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

auto ParentalOptionsLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ParentalOptionsLayer::init), this);
	using FunctionType = decltype(init())(*)(ParentalOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ce340, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ParentalOptionsLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ParentalOptionsLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(ParentalOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d09a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ParentalOptionsLayer::addToggle(char const* p0, char const* p1, int p2, char const* p3) -> decltype(addToggle(p0, p1, p2, p3)) {
	using FunctionType = decltype(addToggle(p0, p1, p2, p3))(*)(ParentalOptionsLayer*, char const*, char const*, int, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46840, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3);
}

auto ParentalOptionsLayer::countForPage(int page) -> decltype(countForPage(page)) {
	throw std::runtime_error("ParentalOptionsLayer::countForPage not implemented");
}

auto ParentalOptionsLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(ParentalOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99df0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
