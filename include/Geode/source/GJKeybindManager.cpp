
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJKeybindManager.hpp>
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

GJKeybindManager::~GJKeybindManager() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJKeybindManager*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x385980, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJKeybindManager(geode::CutoffConstructor, sizeof(GJKeybindManager));
		geode::DestructorLock::addLock(this);
	}
}

auto GJKeybindManager::actionsForKey(cocos2d::enumKeyCodes p0, bool p1, bool p2, bool p3) -> decltype(actionsForKey(p0, p1, p2, p3)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, bool, bool, bool>::func(&GJKeybindManager::actionsForKey), this);
	using FunctionType = decltype(actionsForKey(p0, p1, p2, p3))(*)(GJKeybindManager*, cocos2d::enumKeyCodes, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x385ab0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2, p3);
}

auto GJKeybindManager::handleGlobalAction(int p0, bool p1) -> decltype(handleGlobalAction(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, bool>::func(&GJKeybindManager::handleGlobalAction), this);
	using FunctionType = decltype(handleGlobalAction(p0, p1))(*)(GJKeybindManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x385870, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}
