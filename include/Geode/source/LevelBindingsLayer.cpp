
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/LevelBindingsLayer.hpp>
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

LevelBindingsLayer::~LevelBindingsLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(LevelBindingsLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3d28e0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) LevelBindingsLayer(geode::CutoffConstructor, sizeof(LevelBindingsLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto LevelBindingsLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&LevelBindingsLayer::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(LevelBindingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44a060, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto LevelBindingsLayer::setupTabs() -> decltype(setupTabs()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelBindingsLayer::setupTabs), this);
	using FunctionType = decltype(setupTabs())(*)(LevelBindingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4495f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelBindingsLayer::actionsToShow(int p0) -> decltype(actionsToShow(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&LevelBindingsLayer::actionsToShow), this);
	using FunctionType = decltype(actionsToShow(p0))(*)(LevelBindingsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x449770, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto LevelBindingsLayer::openBindingEditor(int p0, int p1) -> decltype(openBindingEditor(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&LevelBindingsLayer::openBindingEditor), this);
	using FunctionType = decltype(openBindingEditor(p0, p1))(*)(LevelBindingsLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4497e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto LevelBindingsLayer::showControllerChords() -> decltype(showControllerChords()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelBindingsLayer::showControllerChords), this);
	using FunctionType = decltype(showControllerChords())(*)(LevelBindingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ff70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelBindingsLayer::settingsEntries() -> decltype(settingsEntries()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelBindingsLayer::settingsEntries), this);
	using FunctionType = decltype(settingsEntries())(*)(LevelBindingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x449300, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelBindingsLayer::crossCheckGlobalConflicts() -> decltype(crossCheckGlobalConflicts()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelBindingsLayer::crossCheckGlobalConflicts), this);
	using FunctionType = decltype(crossCheckGlobalConflicts())(*)(LevelBindingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ff70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}
