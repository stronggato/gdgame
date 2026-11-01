
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/KeybindingsLayer.hpp>
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

KeybindingsLayer::~KeybindingsLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(KeybindingsLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3d28e0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) KeybindingsLayer(geode::CutoffConstructor, sizeof(KeybindingsLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto KeybindingsLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&KeybindingsLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(KeybindingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa6410, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto KeybindingsLayer::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchBegan(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&KeybindingsLayer::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(p0, p1))(*)(KeybindingsLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d5b70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto KeybindingsLayer::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchMoved(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&KeybindingsLayer::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(p0, p1))(*)(KeybindingsLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d5ca0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto KeybindingsLayer::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchEnded(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&KeybindingsLayer::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(p0, p1))(*)(KeybindingsLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d5d80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto KeybindingsLayer::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchCancelled(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&KeybindingsLayer::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(p0, p1))(*)(KeybindingsLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d5e20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto KeybindingsLayer::rebuildContent() -> decltype(rebuildContent()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&KeybindingsLayer::rebuildContent), this);
	using FunctionType = decltype(rebuildContent())(*)(KeybindingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19cb10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto KeybindingsLayer::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&KeybindingsLayer::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(KeybindingsLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d59c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto KeybindingsLayer::showTab(int p0) -> decltype(showTab(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&KeybindingsLayer::showTab), this);
	using FunctionType = decltype(showTab(p0))(*)(KeybindingsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d4d20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto KeybindingsLayer::setupTabs() -> decltype(setupTabs()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&KeybindingsLayer::setupTabs), this);
	using FunctionType = decltype(setupTabs())(*)(KeybindingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d3590, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto KeybindingsLayer::actionsToShow(int p0) -> decltype(actionsToShow(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&KeybindingsLayer::actionsToShow), this);
	using FunctionType = decltype(actionsToShow(p0))(*)(KeybindingsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d52f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto KeybindingsLayer::nameForAction(int p0) -> decltype(nameForAction(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&KeybindingsLayer::nameForAction), this);
	using FunctionType = decltype(nameForAction(p0))(*)(KeybindingsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d55e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto KeybindingsLayer::openBindingEditor(int p0, int p1) -> decltype(openBindingEditor(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&KeybindingsLayer::openBindingEditor), this);
	using FunctionType = decltype(openBindingEditor(p0, p1))(*)(KeybindingsLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d5630, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto KeybindingsLayer::showControllerChords() -> decltype(showControllerChords()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&KeybindingsLayer::showControllerChords), this);
	using FunctionType = decltype(showControllerChords())(*)(KeybindingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d5660, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto KeybindingsLayer::settingsEntries() -> decltype(settingsEntries()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&KeybindingsLayer::settingsEntries), this);
	using FunctionType = decltype(settingsEntries())(*)(KeybindingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d5680, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto KeybindingsLayer::crossCheckGlobalConflicts() -> decltype(crossCheckGlobalConflicts()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&KeybindingsLayer::crossCheckGlobalConflicts), this);
	using FunctionType = decltype(crossCheckGlobalConflicts())(*)(KeybindingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a230, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto KeybindingsLayer::countForPage(int page) -> decltype(countForPage(page)) {
	throw std::runtime_error("KeybindingsLayer::countForPage not implemented");
}

auto KeybindingsLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(KeybindingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d5ec0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
