
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/AutoSaveSettingsLayer.hpp>
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

AutoSaveSettingsLayer::~AutoSaveSettingsLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(AutoSaveSettingsLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x9ac10, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) AutoSaveSettingsLayer(geode::CutoffConstructor, sizeof(AutoSaveSettingsLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto AutoSaveSettingsLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AutoSaveSettingsLayer::init), this);
	using FunctionType = decltype(init())(*)(AutoSaveSettingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9ae30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AutoSaveSettingsLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&AutoSaveSettingsLayer::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(AutoSaveSettingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9d3f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto AutoSaveSettingsLayer::valueDidChange(int p0, float p1) -> decltype(valueDidChange(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&AutoSaveSettingsLayer::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(p0, p1))(*)(AutoSaveSettingsLayer*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9c140, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto AutoSaveSettingsLayer::getValue(int p0) -> decltype(getValue(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&AutoSaveSettingsLayer::getValue), this);
	using FunctionType = decltype(getValue(p0))(*)(AutoSaveSettingsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9be30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}
