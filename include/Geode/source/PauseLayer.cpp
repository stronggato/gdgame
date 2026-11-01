
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/PauseLayer.hpp>
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

PauseLayer::~PauseLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(PauseLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x4d3410, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) PauseLayer(geode::CutoffConstructor, sizeof(PauseLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto PauseLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PauseLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(PauseLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d8370, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PauseLayer::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&PauseLayer::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(PauseLayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d8260, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto PauseLayer::customSetup() -> decltype(customSetup()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PauseLayer::customSetup), this);
	using FunctionType = decltype(customSetup())(*)(PauseLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d36f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PauseLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&PauseLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(PauseLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d8050, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto PauseLayer::volumeChanged() -> decltype(volumeChanged()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PauseLayer::volumeChanged), this);
	using FunctionType = decltype(volumeChanged())(*)(PauseLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d3630, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PauseLayer::handleAction(int p0, bool p1, double p2) -> decltype(handleAction(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, bool, double>::func(&PauseLayer::handleAction), this);
	using FunctionType = decltype(handleAction(p0, p1, p2))(*)(PauseLayer*, int, bool, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d8210, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto PauseLayer::startPosSelected(StartPosBrowser* p0, int p1, StartPosObject* p2) -> decltype(startPosSelected(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<StartPosBrowser*, int, StartPosObject*>::func(&PauseLayer::startPosSelected), this);
	using FunctionType = decltype(startPosSelected(p0, p1, p2))(*)(PauseLayer*, StartPosBrowser*, int, StartPosObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d6060, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto PauseLayer::createStartPosPopupClosed(CreateStartPosPopup* p0) -> decltype(createStartPosPopupClosed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CreateStartPosPopup*>::func(&PauseLayer::createStartPosPopupClosed), this);
	using FunctionType = decltype(createStartPosPopupClosed(p0))(*)(PauseLayer*, CreateStartPosPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d6080, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto PauseLayer::checkQuestsStatus() -> decltype(checkQuestsStatus()) {
	throw std::runtime_error("PauseLayer::checkQuestsStatus not implemented");
}

auto PauseLayer::goEdit() -> decltype(goEdit()) {
	using FunctionType = decltype(goEdit())(*)(PauseLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe95b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PauseLayer::musicSliderChanged(cocos2d::CCObject* sender) -> decltype(musicSliderChanged(sender)) {
	using FunctionType = decltype(musicSliderChanged(sender))(*)(PauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x180d10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PauseLayer::onEdit(cocos2d::CCObject* sender) -> decltype(onEdit(sender)) {
	using FunctionType = decltype(onEdit(sender))(*)(PauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d7bb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PauseLayer::onNormalMode(cocos2d::CCObject* sender) -> decltype(onNormalMode(sender)) {
	using FunctionType = decltype(onNormalMode(sender))(*)(PauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d7540, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PauseLayer::onPracticeMode(cocos2d::CCObject* sender) -> decltype(onPracticeMode(sender)) {
	using FunctionType = decltype(onPracticeMode(sender))(*)(PauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d7480, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PauseLayer::onQuit(cocos2d::CCObject* sender) -> decltype(onQuit(sender)) {
	using FunctionType = decltype(onQuit(sender))(*)(PauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d80c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PauseLayer::onRestart(cocos2d::CCObject* sender) -> decltype(onRestart(sender)) {
	using FunctionType = decltype(onRestart(sender))(*)(PauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d7790, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PauseLayer::onRestartFull(cocos2d::CCObject* sender) -> decltype(onRestartFull(sender)) {
	using FunctionType = decltype(onRestartFull(sender))(*)(PauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d78c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PauseLayer::onResume(cocos2d::CCObject* sender) -> decltype(onResume(sender)) {
	using FunctionType = decltype(onResume(sender))(*)(PauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d75b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PauseLayer::onTryEdit(cocos2d::CCObject* sender) -> decltype(onTryEdit(sender)) {
	using FunctionType = decltype(onTryEdit(sender))(*)(PauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d79f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PauseLayer::sfxSliderChanged(cocos2d::CCObject* sender) -> decltype(sfxSliderChanged(sender)) {
	using FunctionType = decltype(sfxSliderChanged(sender))(*)(PauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x180db0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PauseLayer::tryQuit(cocos2d::CCObject* sender) -> decltype(tryQuit(sender)) {
	using FunctionType = decltype(tryQuit(sender))(*)(PauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d7e80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
