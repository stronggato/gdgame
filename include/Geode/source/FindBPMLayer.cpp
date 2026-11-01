
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/FindBPMLayer.hpp>
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

FindBPMLayer::~FindBPMLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(FindBPMLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x1317b0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) FindBPMLayer(geode::CutoffConstructor, sizeof(FindBPMLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto FindBPMLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&FindBPMLayer::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(FindBPMLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x133e30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto FindBPMLayer::playMusic() -> decltype(playMusic()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&FindBPMLayer::playMusic), this);
	using FunctionType = decltype(playMusic())(*)(FindBPMLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x133c70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto FindBPMLayer::registerTouch() -> decltype(registerTouch()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&FindBPMLayer::registerTouch), this);
	using FunctionType = decltype(registerTouch())(*)(FindBPMLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x133d40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto FindBPMLayer::onRecord(cocos2d::CCObject* sender) -> decltype(onRecord(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&FindBPMLayer::onRecord), this);
	using FunctionType = decltype(onRecord(sender))(*)(FindBPMLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x133b70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto FindBPMLayer::recordingDidStop() -> decltype(recordingDidStop()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&FindBPMLayer::recordingDidStop), this);
	using FunctionType = decltype(recordingDidStop())(*)(FindBPMLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x133bb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}
