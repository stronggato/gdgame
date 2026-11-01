
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SetupShaderEffectPopup.hpp>
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

auto SetupShaderEffectPopup::toggleGroup(int group, bool visible) -> decltype(toggleGroup(group, visible)) {
	auto self = addresser::thunkAdjust(Resolve<int, bool>::func(&SetupShaderEffectPopup::toggleGroup), this);
	using FunctionType = decltype(toggleGroup(group, visible))(*)(SetupShaderEffectPopup*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e64e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, group, visible);
}

auto SetupShaderEffectPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupShaderEffectPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupShaderEffectPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3978d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupShaderEffectPopup::updateDefaultTriggerValues() -> decltype(updateDefaultTriggerValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupShaderEffectPopup::updateDefaultTriggerValues), this);
	using FunctionType = decltype(updateDefaultTriggerValues())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5dbf10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupShaderEffectPopup::valueDidChange(int tag, float value) -> decltype(valueDidChange(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupShaderEffectPopup::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(tag, value))(*)(SetupShaderEffectPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e60b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupShaderEffectPopup::init(EffectGameObject* object, cocos2d::CCArray* objects, int id) -> decltype(init(object, objects, id)) {
	using FunctionType = decltype(init(object, objects, id))(*)(SetupShaderEffectPopup*, EffectGameObject*, cocos2d::CCArray*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5dbc20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects, id);
}

auto SetupShaderEffectPopup::onResetColors(cocos2d::CCObject* sender) -> decltype(onResetColors(sender)) {
	using FunctionType = decltype(onResetColors(sender))(*)(SetupShaderEffectPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e5a10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupShaderEffectPopup::setupBulge() -> decltype(setupBulge()) {
	using FunctionType = decltype(setupBulge())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x593a60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::setupChromatic() -> decltype(setupChromatic()) {
	using FunctionType = decltype(setupChromatic())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5df730, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::setupChromaticGlitch() -> decltype(setupChromaticGlitch()) {
	using FunctionType = decltype(setupChromaticGlitch())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5dfcb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::setupColorChange() -> decltype(setupColorChange()) {
	using FunctionType = decltype(setupColorChange())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5fb3f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::setupGlitch() -> decltype(setupGlitch()) {
	using FunctionType = decltype(setupGlitch())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x395b90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::setupGrayscale() -> decltype(setupGrayscale()) {
	using FunctionType = decltype(setupGrayscale())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e4150, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::setupHueShift() -> decltype(setupHueShift()) {
	using FunctionType = decltype(setupHueShift())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e4fe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::setupInvertColor() -> decltype(setupInvertColor()) {
	using FunctionType = decltype(setupInvertColor())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e4980, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::setupPinch() -> decltype(setupPinch()) {
	using FunctionType = decltype(setupPinch())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ad310, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::setupPixelate() -> decltype(setupPixelate()) {
	using FunctionType = decltype(setupPixelate())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e0560, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::setupSepia() -> decltype(setupSepia()) {
	using FunctionType = decltype(setupSepia())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e4650, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::setupShaderTrigger() -> decltype(setupShaderTrigger()) {
	using FunctionType = decltype(setupShaderTrigger())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5dc000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::setupSplitScreen() -> decltype(setupSplitScreen()) {
	using FunctionType = decltype(setupSplitScreen())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e5bd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupShaderEffectPopup::updateZLayerButtons() -> decltype(updateZLayerButtons()) {
	using FunctionType = decltype(updateZLayerButtons())(*)(SetupShaderEffectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5dcad0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
