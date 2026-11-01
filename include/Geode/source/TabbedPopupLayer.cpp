
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/TabbedPopupLayer.hpp>
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

TabbedPopupLayer::~TabbedPopupLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(TabbedPopupLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x19b720, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) TabbedPopupLayer(geode::CutoffConstructor, sizeof(TabbedPopupLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto TabbedPopupLayer::pageChanged() -> decltype(pageChanged()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&TabbedPopupLayer::pageChanged), this);
	using FunctionType = decltype(pageChanged())(*)(TabbedPopupLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x669290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto TabbedPopupLayer::showTab(int p0) -> decltype(showTab(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&TabbedPopupLayer::showTab), this);
	using FunctionType = decltype(showTab(p0))(*)(TabbedPopupLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x668e10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}
