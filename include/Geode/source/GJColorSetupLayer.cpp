
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJColorSetupLayer.hpp>
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

GJColorSetupLayer::~GJColorSetupLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJColorSetupLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x35beb0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJColorSetupLayer(geode::CutoffConstructor, sizeof(GJColorSetupLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto GJColorSetupLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJColorSetupLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(GJColorSetupLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x35ce00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJColorSetupLayer::colorSelectClosed(cocos2d::CCNode* popup) -> decltype(colorSelectClosed(popup)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCNode*>::func(&GJColorSetupLayer::colorSelectClosed), this);
	using FunctionType = decltype(colorSelectClosed(popup))(*)(GJColorSetupLayer*, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x35cd40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup);
}

auto GJColorSetupLayer::init(LevelSettingsObject* object) -> decltype(init(object)) {
	using FunctionType = decltype(init(object))(*)(GJColorSetupLayer*, LevelSettingsObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x35c110, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJColorSetupLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(GJColorSetupLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x35cdb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJColorSetupLayer::onColor(cocos2d::CCObject* sender) -> decltype(onColor(sender)) {
	using FunctionType = decltype(onColor(sender))(*)(GJColorSetupLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x35cc70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJColorSetupLayer::showPage(int page) -> decltype(showPage(page)) {
	using FunctionType = decltype(showPage(page))(*)(GJColorSetupLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x35cd50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto GJColorSetupLayer::updateSpriteColor(ColorChannelSprite* sprite, cocos2d::CCLabelBMFont* label, int id) -> decltype(updateSpriteColor(sprite, label, id)) {
	using FunctionType = decltype(updateSpriteColor(sprite, label, id))(*)(GJColorSetupLayer*, ColorChannelSprite*, cocos2d::CCLabelBMFont*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x35cab0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sprite, label, id);
}

auto GJColorSetupLayer::updateSpriteColors() -> decltype(updateSpriteColors()) {
	using FunctionType = decltype(updateSpriteColors())(*)(GJColorSetupLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x35c990, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
