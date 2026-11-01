
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GlobalKeybindSource.hpp>
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

GlobalKeybindSource::~GlobalKeybindSource() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GlobalKeybindSource*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3d2710, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GlobalKeybindSource(geode::CutoffConstructor, sizeof(GlobalKeybindSource));
		geode::DestructorLock::addLock(this);
	}
}

auto GlobalKeybindSource::chordsForAction(int p0) -> decltype(chordsForAction(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&GlobalKeybindSource::chordsForAction), this);
	using FunctionType = decltype(chordsForAction(p0))(*)(GlobalKeybindSource*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d2740, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto GlobalKeybindSource::actionsForChord(int p0) -> decltype(actionsForChord(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&GlobalKeybindSource::actionsForChord), this);
	using FunctionType = decltype(actionsForChord(p0))(*)(GlobalKeybindSource*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d2780, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto GlobalKeybindSource::bindChord(int p0, int p1) -> decltype(bindChord(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&GlobalKeybindSource::bindChord), this);
	using FunctionType = decltype(bindChord(p0, p1))(*)(GlobalKeybindSource*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d27c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto GlobalKeybindSource::unbindChord(int p0, int p1) -> decltype(unbindChord(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&GlobalKeybindSource::unbindChord), this);
	using FunctionType = decltype(unbindChord(p0, p1))(*)(GlobalKeybindSource*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d27f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}
