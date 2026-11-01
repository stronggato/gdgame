
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ColorSelectPopup.hpp>
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

auto ColorSelectPopup::colorToHex(cocos2d::ccColor3B color) -> decltype(colorToHex(color)) {
	using FunctionType = decltype(colorToHex(color))(*)(cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12a140, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(color);
}

auto ColorSelectPopup::create(EffectGameObject* effect, cocos2d::CCArray* array, ColorAction* action) -> decltype(create(effect, array, action)) {
	using FunctionType = decltype(create(effect, array, action))(*)(EffectGameObject*, cocos2d::CCArray*, ColorAction*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x125420, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(effect, array, action);
}

auto ColorSelectPopup::hexToColor(std::string hex) -> decltype(hexToColor(hex)) {
	using FunctionType = decltype(hexToColor(hex))(*)(std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14d660, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(hex);
}

auto ColorSelectPopup::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ColorSelectPopup::show), this);
	using FunctionType = decltype(show())(*)(ColorSelectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12a640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ColorSelectPopup::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ColorSelectPopup::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(ColorSelectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x127e50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ColorSelectPopup::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&ColorSelectPopup::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(ColorSelectPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12a730, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto ColorSelectPopup::colorValueChanged(cocos2d::ccColor3B color) -> decltype(colorValueChanged(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B>::func(&ColorSelectPopup::colorValueChanged), this);
	using FunctionType = decltype(colorValueChanged(color))(*)(ColorSelectPopup*, cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x129200, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto ColorSelectPopup::colorSelectClosed(GJSpecialColorSelect* select, int id) -> decltype(colorSelectClosed(select, id)) {
	auto self = addresser::thunkAdjust(Resolve<GJSpecialColorSelect*, int>::func(&ColorSelectPopup::colorSelectClosed), this);
	using FunctionType = decltype(colorSelectClosed(select, id))(*)(ColorSelectPopup*, GJSpecialColorSelect*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12b140, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, select, id);
}

auto ColorSelectPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ColorSelectPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(ColorSelectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1291f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ColorSelectPopup::closeColorSelect(cocos2d::CCObject* sender) -> decltype(closeColorSelect(sender)) {
	using FunctionType = decltype(closeColorSelect(sender))(*)(ColorSelectPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x128f50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ColorSelectPopup::init(EffectGameObject* object, cocos2d::CCArray* objects, ColorAction* action) -> decltype(init(object, objects, action)) {
	using FunctionType = decltype(init(object, objects, action))(*)(ColorSelectPopup*, EffectGameObject*, cocos2d::CCArray*, ColorAction*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x125610, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects, action);
}

auto ColorSelectPopup::onCopy(cocos2d::CCObject* sender) -> decltype(onCopy(sender)) {
	using FunctionType = decltype(onCopy(sender))(*)(ColorSelectPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x128820, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ColorSelectPopup::onDefault(cocos2d::CCObject* sender) -> decltype(onDefault(sender)) {
	using FunctionType = decltype(onDefault(sender))(*)(ColorSelectPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x128920, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ColorSelectPopup::onPaste(cocos2d::CCObject* sender) -> decltype(onPaste(sender)) {
	using FunctionType = decltype(onPaste(sender))(*)(ColorSelectPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa1530, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ColorSelectPopup::onPlayerColor1(cocos2d::CCObject* sender) -> decltype(onPlayerColor1(sender)) {
	using FunctionType = decltype(onPlayerColor1(sender))(*)(ColorSelectPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x128660, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ColorSelectPopup::onPlayerColor2(cocos2d::CCObject* sender) -> decltype(onPlayerColor2(sender)) {
	using FunctionType = decltype(onPlayerColor2(sender))(*)(ColorSelectPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x128740, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ColorSelectPopup::onToggleHSVMode(cocos2d::CCObject* sender) -> decltype(onToggleHSVMode(sender)) {
	using FunctionType = decltype(onToggleHSVMode(sender))(*)(ColorSelectPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12afb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ColorSelectPopup::onToggleTintMode(cocos2d::CCObject* sender) -> decltype(onToggleTintMode(sender)) {
	using FunctionType = decltype(onToggleTintMode(sender))(*)(ColorSelectPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x128470, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ColorSelectPopup::sliderChanged(cocos2d::CCObject* sender) -> decltype(sliderChanged(sender)) {
	using FunctionType = decltype(sliderChanged(sender))(*)(ColorSelectPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x128bf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ColorSelectPopup::updateCustomColorIdx() -> decltype(updateCustomColorIdx()) {
	using FunctionType = decltype(updateCustomColorIdx())(*)(ColorSelectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12ad20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ColorSelectPopup::updateHSVMode() -> decltype(updateHSVMode()) {
	using FunctionType = decltype(updateHSVMode())(*)(ColorSelectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12aff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ColorSelectPopup::updateOpacity() -> decltype(updateOpacity()) {
	using FunctionType = decltype(updateOpacity())(*)(ColorSelectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x128d70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
