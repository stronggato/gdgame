
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ColorSelectLiveOverlay.hpp>
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

ColorSelectLiveOverlay::~ColorSelectLiveOverlay() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(ColorSelectLiveOverlay*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x123670, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) ColorSelectLiveOverlay(geode::CutoffConstructor, sizeof(ColorSelectLiveOverlay));
		geode::DestructorLock::addLock(this);
	}
}

auto ColorSelectLiveOverlay::create(ColorAction* baseAction, ColorAction* detailAction, EffectGameObject* object) -> decltype(create(baseAction, detailAction, object)) {
	throw std::runtime_error("ColorSelectLiveOverlay::create not implemented");
}

auto ColorSelectLiveOverlay::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ColorSelectLiveOverlay::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(ColorSelectLiveOverlay*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x124d70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ColorSelectLiveOverlay::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ColorSelectLiveOverlay::show), this);
	using FunctionType = decltype(show())(*)(ColorSelectLiveOverlay*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x124dc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ColorSelectLiveOverlay::init(ColorAction* baseAction, ColorAction* detailAction, EffectGameObject* object) -> decltype(init(baseAction, detailAction, object)) {
	using FunctionType = decltype(init(baseAction, detailAction, object))(*)(ColorSelectLiveOverlay*, ColorAction*, ColorAction*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbcfd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, baseAction, detailAction, object);
}

auto ColorSelectLiveOverlay::onSelectTab(cocos2d::CCObject* sender) -> decltype(onSelectTab(sender)) {
	using FunctionType = decltype(onSelectTab(sender))(*)(ColorSelectLiveOverlay*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x124c20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
