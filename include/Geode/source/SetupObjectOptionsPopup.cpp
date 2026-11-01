
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SetupObjectOptionsPopup.hpp>
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

auto SetupObjectOptionsPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupObjectOptionsPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SetupObjectOptionsPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x593a40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupObjectOptionsPopup::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupObjectOptionsPopup::show), this);
	using FunctionType = decltype(show())(*)(SetupObjectOptionsPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x124dc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupObjectOptionsPopup::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupObjectOptionsPopup::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetupObjectOptionsPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x592870, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupObjectOptionsPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupObjectOptionsPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99df0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupObjectOptionsPopup::init(GameObject* object, cocos2d::CCArray* objects, SetGroupIDLayer* layer) -> decltype(init(object, objects, layer)) {
	throw std::runtime_error("SetupObjectOptionsPopup::init not implemented");
}

auto SetupObjectOptionsPopup::onDisableObject(cocos2d::CCObject* sender) -> decltype(onDisableObject(sender)) {
	using FunctionType = decltype(onDisableObject(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x592dd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupObjectOptionsPopup::onExtendedCollision(cocos2d::CCObject* sender) -> decltype(onExtendedCollision(sender)) {
	using FunctionType = decltype(onExtendedCollision(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe5360, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupObjectOptionsPopup::onReverse(cocos2d::CCObject* sender) -> decltype(onReverse(sender)) {
	using FunctionType = decltype(onReverse(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x593820, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
