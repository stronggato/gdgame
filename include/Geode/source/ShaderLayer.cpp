
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ShaderLayer.hpp>
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

auto ShaderLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ShaderLayer::init), this);
	using FunctionType = decltype(init())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61eb80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ShaderLayer::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&ShaderLayer::update), this);
	using FunctionType = decltype(update(dt))(*)(ShaderLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61fa20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto ShaderLayer::visit() -> decltype(visit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ShaderLayer::visit), this);
	using FunctionType = decltype(visit())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x625d70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ShaderLayer::objectPosToShaderPos(cocos2d::CCPoint position) -> decltype(objectPosToShaderPos(position)) {
	using FunctionType = decltype(objectPosToShaderPos(position))(*)(ShaderLayer*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61ffa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position);
}

auto ShaderLayer::performCalculations() -> decltype(performCalculations()) {
	using FunctionType = decltype(performCalculations())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ccf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::prePixelateShader() -> decltype(prePixelateShader()) {
	using FunctionType = decltype(prePixelateShader())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6234b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::resetAllShaders() -> decltype(resetAllShaders()) {
	using FunctionType = decltype(resetAllShaders())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6268f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::toggleAntiAlias(bool antiAlias) -> decltype(toggleAntiAlias(antiAlias)) {
	using FunctionType = decltype(toggleAntiAlias(antiAlias))(*)(ShaderLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61f9b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, antiAlias);
}

auto ShaderLayer::triggerChromaticGlitch(bool enable, float duration, float speed, float strength, float rgbOffset, float lineThickness, float lineStrength, float segmentHeight, int easingType, float easingRate, bool relative, bool relativePos) -> decltype(triggerChromaticGlitch(enable, duration, speed, strength, rgbOffset, lineThickness, lineStrength, segmentHeight, easingType, easingRate, relative, relativePos)) {
	using FunctionType = decltype(triggerChromaticGlitch(enable, duration, speed, strength, rgbOffset, lineThickness, lineStrength, segmentHeight, easingType, easingRate, relative, relativePos))(*)(ShaderLayer*, bool, float, float, float, float, float, float, float, int, float, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x317d40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, enable, duration, speed, strength, rgbOffset, lineThickness, lineStrength, segmentHeight, easingType, easingRate, relative, relativePos);
}

auto ShaderLayer::triggerInvertColor(float fadeTime, float target, float r, float g, float b, bool editRGB, bool tweenRGB, bool clampRGB, int easingType, float easingRate) -> decltype(triggerInvertColor(fadeTime, target, r, g, b, editRGB, tweenRGB, clampRGB, easingType, easingRate)) {
	using FunctionType = decltype(triggerInvertColor(fadeTime, target, r, g, b, editRGB, tweenRGB, clampRGB, easingType, easingRate))(*)(ShaderLayer*, float, float, float, float, float, bool, bool, bool, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x624ad0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, fadeTime, target, r, g, b, editRGB, tweenRGB, clampRGB, easingType, easingRate);
}

auto ShaderLayer::triggerLensCircle(float fadeTime, float size, float fade, float strength, int targetID, int tintChannel, float screenOffsetX, float screenOffsetY, int easingType, float easingRate, bool relative) -> decltype(triggerLensCircle(fadeTime, size, fade, strength, targetID, tintChannel, screenOffsetX, screenOffsetY, easingType, easingRate, relative)) {
	using FunctionType = decltype(triggerLensCircle(fadeTime, size, fade, strength, targetID, tintChannel, screenOffsetX, screenOffsetY, easingType, easingRate, relative))(*)(ShaderLayer*, float, float, float, float, int, int, float, float, int, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x623a00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, fadeTime, size, fade, strength, targetID, tintChannel, screenOffsetX, screenOffsetY, easingType, easingRate, relative);
}

auto ShaderLayer::tweenValue(float fromValue, float toValue, int action, float duration, int easingType, float easingRate) -> decltype(tweenValue(fromValue, toValue, action, duration, easingType, easingRate)) {
	using FunctionType = decltype(tweenValue(fromValue, toValue, action, duration, easingType, easingRate))(*)(ShaderLayer*, float, float, int, float, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x626760, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, fromValue, toValue, action, duration, easingType, easingRate);
}

auto ShaderLayer::tweenValueAuto(float value, int action, float duration, int easingType, float easingRate) -> decltype(tweenValueAuto(value, action, duration, easingType, easingRate)) {
	using FunctionType = decltype(tweenValueAuto(value, action, duration, easingType, easingRate))(*)(ShaderLayer*, float, int, float, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1a1190, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, value, action, duration, easingType, easingRate);
}

auto ShaderLayer::updateZLayer(int minLayer, int maxLayer, bool noParticles) -> decltype(updateZLayer(minLayer, maxLayer, noParticles)) {
	using FunctionType = decltype(updateZLayer(minLayer, maxLayer, noParticles))(*)(ShaderLayer*, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x626870, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, minLayer, maxLayer, noParticles);
}
