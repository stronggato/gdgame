
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/HardStreak.hpp>
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

HardStreak::~HardStreak() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(HardStreak*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3bce70, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) HardStreak(geode::CutoffConstructor, sizeof(HardStreak));
		geode::DestructorLock::addLock(this);
	}
}

auto HardStreak::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bcee0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto HardStreak::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&HardStreak::init), this);
	using FunctionType = decltype(init())(*)(HardStreak*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bcfb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto HardStreak::addPoint(cocos2d::CCPoint point) -> decltype(addPoint(point)) {
	throw std::runtime_error("HardStreak::addPoint not implemented");
}

auto HardStreak::stopStroke() -> decltype(stopStroke()) {
	using FunctionType = decltype(stopStroke())(*)(HardStreak*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27c6f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto HardStreak::updateStroke(float dt) -> decltype(updateStroke(dt)) {
	throw std::runtime_error("HardStreak::updateStroke not implemented");
}
