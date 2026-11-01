
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CreateParticlePopup.hpp>
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

CreateParticlePopup::~CreateParticlePopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(CreateParticlePopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x5bd270, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) CreateParticlePopup(geode::CutoffConstructor, sizeof(CreateParticlePopup));
		geode::DestructorLock::addLock(this);
	}
}

auto CreateParticlePopup::create(ParticleGameObject* object, cocos2d::CCArray* objects, std::string str) -> decltype(create(object, objects, str)) {
	using FunctionType = decltype(create(object, objects, str))(*)(ParticleGameObject*, cocos2d::CCArray*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5bd440, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects, str);
}

auto CreateParticlePopup::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&CreateParticlePopup::update), this);
	using FunctionType = decltype(update(dt))(*)(CreateParticlePopup*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c40f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto CreateParticlePopup::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CreateParticlePopup::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(CreateParticlePopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c6e30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto CreateParticlePopup::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CreateParticlePopup::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(CreateParticlePopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c6f30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto CreateParticlePopup::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CreateParticlePopup::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(CreateParticlePopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c7360, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto CreateParticlePopup::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CreateParticlePopup::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(CreateParticlePopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x83d80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto CreateParticlePopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CreateParticlePopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(CreateParticlePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c6e20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CreateParticlePopup::sliderBegan(Slider* slider) -> decltype(sliderBegan(slider)) {
	auto self = addresser::thunkAdjust(Resolve<Slider*>::func(&CreateParticlePopup::sliderBegan), this);
	using FunctionType = decltype(sliderBegan(slider))(*)(CreateParticlePopup*, Slider*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c6540, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, slider);
}

auto CreateParticlePopup::sliderEnded(Slider* slider) -> decltype(sliderEnded(slider)) {
	auto self = addresser::thunkAdjust(Resolve<Slider*>::func(&CreateParticlePopup::sliderEnded), this);
	using FunctionType = decltype(sliderEnded(slider))(*)(CreateParticlePopup*, Slider*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c6600, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, slider);
}

auto CreateParticlePopup::colorSelectClosed(cocos2d::CCNode* popup) -> decltype(colorSelectClosed(popup)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCNode*>::func(&CreateParticlePopup::colorSelectClosed), this);
	using FunctionType = decltype(colorSelectClosed(popup))(*)(CreateParticlePopup*, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c3750, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup);
}

auto CreateParticlePopup::textInputShouldOffset(CCTextInputNode* node, float yOffset) -> decltype(textInputShouldOffset(node, yOffset)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*, float>::func(&CreateParticlePopup::textInputShouldOffset), this);
	using FunctionType = decltype(textInputShouldOffset(node, yOffset))(*)(CreateParticlePopup*, CCTextInputNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b9a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node, yOffset);
}

auto CreateParticlePopup::textInputReturn(CCTextInputNode* node) -> decltype(textInputReturn(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&CreateParticlePopup::textInputReturn), this);
	using FunctionType = decltype(textInputReturn(node))(*)(CreateParticlePopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5bb00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto CreateParticlePopup::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&CreateParticlePopup::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(CreateParticlePopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1250a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto CreateParticlePopup::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&CreateParticlePopup::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(CreateParticlePopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c4420, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto CreateParticlePopup::createParticleSlider(gjParticleValue value, int page, bool centerLabel, cocos2d::CCPoint position, cocos2d::CCArray* displayNodes) -> decltype(createParticleSlider(value, page, centerLabel, position, displayNodes)) {
	using FunctionType = decltype(createParticleSlider(value, page, centerLabel, position, displayNodes))(*)(CreateParticlePopup*, gjParticleValue, int, bool, cocos2d::CCPoint, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c21c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, value, page, centerLabel, position, displayNodes);
}

auto CreateParticlePopup::maxSliderValueForType(gjParticleValue type) -> decltype(maxSliderValueForType(type)) {
	using FunctionType = decltype(maxSliderValueForType(type))(*)(CreateParticlePopup*, gjParticleValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c5640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto CreateParticlePopup::minSliderValueForType(gjParticleValue type) -> decltype(minSliderValueForType(type)) {
	using FunctionType = decltype(minSliderValueForType(type))(*)(CreateParticlePopup*, gjParticleValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c5710, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto CreateParticlePopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c6ce0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onDuplicateColor(cocos2d::CCObject* sender) -> decltype(onDuplicateColor(sender)) {
	using FunctionType = decltype(onDuplicateColor(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c3200, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onDynamicColor(cocos2d::CCObject* sender) -> decltype(onDynamicColor(sender)) {
	using FunctionType = decltype(onDynamicColor(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c2ed0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onEmitterMode(cocos2d::CCObject* sender) -> decltype(onEmitterMode(sender)) {
	using FunctionType = decltype(onEmitterMode(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c6960, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onMode(cocos2d::CCObject* sender) -> decltype(onMode(sender)) {
	using FunctionType = decltype(onMode(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c3a30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onPasteSettings(cocos2d::CCObject* sender) -> decltype(onPasteSettings(sender)) {
	using FunctionType = decltype(onPasteSettings(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c35c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onPosType(cocos2d::CCObject* sender) -> decltype(onPosType(sender)) {
	using FunctionType = decltype(onPosType(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c68e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onSelectColor(cocos2d::CCObject* sender) -> decltype(onSelectColor(sender)) {
	using FunctionType = decltype(onSelectColor(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c30d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onUniformColor(cocos2d::CCObject* sender) -> decltype(onUniformColor(sender)) {
	using FunctionType = decltype(onUniformColor(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c2ff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::particleValueIsInt(gjParticleValue type) -> decltype(particleValueIsInt(type)) {
	using FunctionType = decltype(particleValueIsInt(type))(*)(CreateParticlePopup*, gjParticleValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c66c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto CreateParticlePopup::sliderChanged(cocos2d::CCObject* sender) -> decltype(sliderChanged(sender)) {
	using FunctionType = decltype(sliderChanged(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c6610, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::toggleGravityMode(bool gravityMode) -> decltype(toggleGravityMode(gravityMode)) {
	using FunctionType = decltype(toggleGravityMode(gravityMode))(*)(CreateParticlePopup*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c69e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, gravityMode);
}

auto CreateParticlePopup::updateParticleValueForType(float value, gjParticleValue type, cocos2d::CCParticleSystemQuad* particle) -> decltype(updateParticleValueForType(value, type, particle)) {
	using FunctionType = decltype(updateParticleValueForType(value, type, particle))(*)(CreateParticlePopup*, float, gjParticleValue, cocos2d::CCParticleSystemQuad*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12a730, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, value, type, particle);
}

auto CreateParticlePopup::valueForParticleValue(gjParticleValue type) -> decltype(valueForParticleValue(type)) {
	using FunctionType = decltype(valueForParticleValue(type))(*)(CreateParticlePopup*, gjParticleValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38faf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto CreateParticlePopup::willClose() -> decltype(willClose()) {
	using FunctionType = decltype(willClose())(*)(CreateParticlePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c6c50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
