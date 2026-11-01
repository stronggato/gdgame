
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/AchievementBar.hpp>
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

AchievementBar::~AchievementBar() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(AchievementBar*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x95ae0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) AchievementBar(geode::CutoffConstructor, sizeof(AchievementBar));
		geode::DestructorLock::addLock(this);
	}
}

auto AchievementBar::setOpacity(unsigned char opacity) -> decltype(setOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&AchievementBar::setOpacity), this);
	using FunctionType = decltype(setOpacity(opacity))(*)(AchievementBar*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x97440, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}

auto AchievementBar::init(char const* title, char const* desc, char const* icon, bool quest) -> decltype(init(title, desc, icon, quest)) {
	throw std::runtime_error("AchievementBar::init not implemented");
}

auto AchievementBar::show() -> decltype(show()) {
	using FunctionType = decltype(show())(*)(AchievementBar*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x971c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
