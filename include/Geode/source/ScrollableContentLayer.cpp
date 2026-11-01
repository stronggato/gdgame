
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ScrollableContentLayer.hpp>
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

ScrollableContentLayer::~ScrollableContentLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(ScrollableContentLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x80a80, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) ScrollableContentLayer(geode::CutoffConstructor, sizeof(ScrollableContentLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto ScrollableContentLayer::update(float p0) -> decltype(update(p0)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&ScrollableContentLayer::update), this);
	using FunctionType = decltype(update(p0))(*)(ScrollableContentLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81ed0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ScrollableContentLayer::visit() -> decltype(visit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ScrollableContentLayer::visit), this);
	using FunctionType = decltype(visit())(*)(ScrollableContentLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81cc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ScrollableContentLayer::touchInsideClip(cocos2d::CCPoint const& p0) -> decltype(touchInsideClip(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCPoint const&>::func(&ScrollableContentLayer::touchInsideClip), this);
	using FunctionType = decltype(touchInsideClip(p0))(*)(ScrollableContentLayer*, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81d30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ScrollableContentLayer::scrollWheel(float p0, float p1) -> decltype(scrollWheel(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<float, float>::func(&ScrollableContentLayer::scrollWheel), this);
	using FunctionType = decltype(scrollWheel(p0, p1))(*)(ScrollableContentLayer*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81d60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}
