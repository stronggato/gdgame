
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ColorChannelSprite.hpp>
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

ColorChannelSprite::~ColorChannelSprite() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(ColorChannelSprite*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x35fa50, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) ColorChannelSprite(geode::CutoffConstructor, sizeof(ColorChannelSprite));
		geode::DestructorLock::addLock(this);
	}
}

auto ColorChannelSprite::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x360330, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto ColorChannelSprite::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ColorChannelSprite::init), this);
	using FunctionType = decltype(init())(*)(ColorChannelSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3603f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ColorChannelSprite::updateBlending(bool enabled) -> decltype(updateBlending(enabled)) {
	throw std::runtime_error("ColorChannelSprite::updateBlending not implemented");
}

auto ColorChannelSprite::updateCopyLabel(int channelID, bool copyColorLoop) -> decltype(updateCopyLabel(channelID, copyColorLoop)) {
	throw std::runtime_error("ColorChannelSprite::updateCopyLabel not implemented");
}

auto ColorChannelSprite::updateOpacity(float alpha) -> decltype(updateOpacity(alpha)) {
	using FunctionType = decltype(updateOpacity(alpha))(*)(ColorChannelSprite*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3605d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, alpha);
}
