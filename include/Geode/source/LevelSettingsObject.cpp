
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/LevelSettingsObject.hpp>
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

LevelSettingsObject::~LevelSettingsObject() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(LevelSettingsObject*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3ea290, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) LevelSettingsObject(geode::CutoffConstructor, sizeof(LevelSettingsObject));
		geode::DestructorLock::addLock(this);
	}
}

auto LevelSettingsObject::objectFromDict(cocos2d::CCDictionary* dict) -> decltype(objectFromDict(dict)) {
	throw std::runtime_error("LevelSettingsObject::objectFromDict not implemented");
}

auto LevelSettingsObject::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelSettingsObject::init), this);
	using FunctionType = decltype(init())(*)(LevelSettingsObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40bcb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelSettingsObject::getSaveString() -> decltype(getSaveString()) {
	using FunctionType = decltype(getSaveString())(*)(LevelSettingsObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40bfc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
