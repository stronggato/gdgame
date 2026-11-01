
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJDifficultySprite.hpp>
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

GJDifficultySprite::~GJDifficultySprite() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJDifficultySprite*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x7e610, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJDifficultySprite(geode::CutoffConstructor, sizeof(GJDifficultySprite));
		geode::DestructorLock::addLock(this);
	}
}

auto GJDifficultySprite::create(int difficulty, GJDifficultyName name) -> decltype(create(difficulty, name)) {
	using FunctionType = decltype(create(difficulty, name))(*)(int, GJDifficultyName);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a8450, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(difficulty, name);
}

auto GJDifficultySprite::getDifficultyFrame(int difficulty, GJDifficultyName name) -> decltype(getDifficultyFrame(difficulty, name)) {
	using FunctionType = decltype(getDifficultyFrame(difficulty, name))(*)(int, GJDifficultyName);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a8540, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(difficulty, name);
}

auto GJDifficultySprite::updateFeatureState(GJFeatureState state) -> decltype(updateFeatureState(state)) {
	throw std::runtime_error("GJDifficultySprite::updateFeatureState not implemented");
}
