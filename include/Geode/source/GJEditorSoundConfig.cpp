
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJEditorSoundConfig.hpp>
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

GJEditorSoundConfig::~GJEditorSoundConfig() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJEditorSoundConfig*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x35d6e0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJEditorSoundConfig(geode::CutoffConstructor, sizeof(GJEditorSoundConfig));
		geode::DestructorLock::addLock(this);
	}
}

auto GJEditorSoundConfig::encodeWithCoder(DS_Dictionary* p0) -> decltype(encodeWithCoder(p0)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&GJEditorSoundConfig::encodeWithCoder), this);
	using FunctionType = decltype(encodeWithCoder(p0))(*)(GJEditorSoundConfig*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x35ee90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto GJEditorSoundConfig::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJEditorSoundConfig::init), this);
	using FunctionType = decltype(init())(*)(GJEditorSoundConfig*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8aef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}
