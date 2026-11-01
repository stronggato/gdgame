
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SetupSmartBlockLayer.hpp>
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

SetupSmartBlockLayer::~SetupSmartBlockLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SetupSmartBlockLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x5e80a0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SetupSmartBlockLayer(geode::CutoffConstructor, sizeof(SetupSmartBlockLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto SetupSmartBlockLayer::create(SmartGameObject* object, cocos2d::CCArray* objects) -> decltype(create(object, objects)) {
	using FunctionType = decltype(create(object, objects))(*)(SmartGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e8430, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects);
}

auto SetupSmartBlockLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupSmartBlockLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SetupSmartBlockLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ea650, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupSmartBlockLayer::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupSmartBlockLayer::show), this);
	using FunctionType = decltype(show())(*)(SetupSmartBlockLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x124dc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupSmartBlockLayer::selectArtClosed(SelectArtLayer* layer) -> decltype(selectArtClosed(layer)) {
	auto self = addresser::thunkAdjust(Resolve<SelectArtLayer*>::func(&SetupSmartBlockLayer::selectArtClosed), this);
	using FunctionType = decltype(selectArtClosed(layer))(*)(SetupSmartBlockLayer*, SelectArtLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ea610, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto SetupSmartBlockLayer::init(SmartGameObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(SetupSmartBlockLayer*, SmartGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e8580, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}

auto SetupSmartBlockLayer::onAllowFlipping(cocos2d::CCObject* sender) -> decltype(onAllowFlipping(sender)) {
	using FunctionType = decltype(onAllowFlipping(sender))(*)(SetupSmartBlockLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd6960, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupSmartBlockLayer::onCreate(cocos2d::CCObject* sender) -> decltype(onCreate(sender)) {
	using FunctionType = decltype(onCreate(sender))(*)(SetupSmartBlockLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ea070, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupSmartBlockLayer::onCreateAll(cocos2d::CCObject* sender) -> decltype(onCreateAll(sender)) {
	using FunctionType = decltype(onCreateAll(sender))(*)(SetupSmartBlockLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7ea50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupSmartBlockLayer::onCreateTemplate(cocos2d::CCObject* sender) -> decltype(onCreateTemplate(sender)) {
	using FunctionType = decltype(onCreateTemplate(sender))(*)(SetupSmartBlockLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ea4a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupSmartBlockLayer::onPasteTemplate(cocos2d::CCObject* sender) -> decltype(onPasteTemplate(sender)) {
	using FunctionType = decltype(onPasteTemplate(sender))(*)(SetupSmartBlockLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x378130, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupSmartBlockLayer::onSelectTemplate(cocos2d::CCObject* sender) -> decltype(onSelectTemplate(sender)) {
	using FunctionType = decltype(onSelectTemplate(sender))(*)(SetupSmartBlockLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ea620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
