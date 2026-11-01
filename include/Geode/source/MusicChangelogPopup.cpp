
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/MusicChangelogPopup.hpp>
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

MusicChangelogPopup::~MusicChangelogPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(MusicChangelogPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x61db30, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) MusicChangelogPopup(geode::CutoffConstructor, sizeof(MusicChangelogPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto MusicChangelogPopup::buildContent(cocos2d::CCNode* p0, float p1, float p2) -> decltype(buildContent(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCNode*, float, float>::func(&MusicChangelogPopup::buildContent), this);
	using FunctionType = decltype(buildContent(p0, p1, p2))(*)(MusicChangelogPopup*, cocos2d::CCNode*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47c870, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}
