
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SetupGradientPopup.hpp>
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

auto SetupGradientPopup::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupGradientPopup::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetupGradientPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b3370, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupGradientPopup::updateToggleItem(int value, bool toggled) -> decltype(updateToggleItem(value, toggled)) {
	auto self = addresser::thunkAdjust(Resolve<int, bool>::func(&SetupGradientPopup::updateToggleItem), this);
	using FunctionType = decltype(updateToggleItem(value, toggled))(*)(SetupGradientPopup*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b3480, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, value, toggled);
}

auto SetupGradientPopup::valueDidChange(int tag, float value) -> decltype(valueDidChange(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupGradientPopup::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(tag, value))(*)(SetupGradientPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b38a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupGradientPopup::init(GradientTriggerObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	throw std::runtime_error("SetupGradientPopup::init not implemented");
}

auto SetupGradientPopup::onZLayer(cocos2d::CCObject* sender) -> decltype(onZLayer(sender)) {
	using FunctionType = decltype(onZLayer(sender))(*)(SetupGradientPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b3630, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupGradientPopup::updateBlendingLabel() -> decltype(updateBlendingLabel()) {
	using FunctionType = decltype(updateBlendingLabel())(*)(SetupGradientPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b3810, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupGradientPopup::updateGradientLabels(bool vertex) -> decltype(updateGradientLabels(vertex)) {
	using FunctionType = decltype(updateGradientLabels(vertex))(*)(SetupGradientPopup*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b3520, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, vertex);
}
