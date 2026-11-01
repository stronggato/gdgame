
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ThreadViewPopup.hpp>
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

ThreadViewPopup::~ThreadViewPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(ThreadViewPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0xd2190, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) ThreadViewPopup(geode::CutoffConstructor, sizeof(ThreadViewPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto ThreadViewPopup::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchBegan(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&ThreadViewPopup::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(p0, p1))(*)(ThreadViewPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe2e10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ThreadViewPopup::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchMoved(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&ThreadViewPopup::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(p0, p1))(*)(ThreadViewPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe2e80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ThreadViewPopup::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchEnded(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&ThreadViewPopup::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(p0, p1))(*)(ThreadViewPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe2ef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ThreadViewPopup::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchCancelled(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&ThreadViewPopup::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(p0, p1))(*)(ThreadViewPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe4500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ThreadViewPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ThreadViewPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(ThreadViewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe1e00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ThreadViewPopup::keyDown(cocos2d::enumKeyCodes p0, double p1) -> decltype(keyDown(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&ThreadViewPopup::keyDown), this);
	using FunctionType = decltype(keyDown(p0, p1))(*)(ThreadViewPopup*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe1e40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ThreadViewPopup::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ThreadViewPopup::show), this);
	using FunctionType = decltype(show())(*)(ThreadViewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc2b30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ThreadViewPopup::emotePickerKeyDown(EmotePickerPopup* p0, cocos2d::enumKeyCodes p1, double p2) -> decltype(emotePickerKeyDown(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<EmotePickerPopup*, cocos2d::enumKeyCodes, double>::func(&ThreadViewPopup::emotePickerKeyDown), this);
	using FunctionType = decltype(emotePickerKeyDown(p0, p1, p2))(*)(ThreadViewPopup*, EmotePickerPopup*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe1e20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto ThreadViewPopup::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&ThreadViewPopup::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(ThreadViewPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe1f10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadViewPopup::textInputOpened(CCTextInputNode* p0) -> decltype(textInputOpened(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&ThreadViewPopup::textInputOpened), this);
	using FunctionType = decltype(textInputOpened(p0))(*)(ThreadViewPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe1ed0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadViewPopup::textInputClosed(CCTextInputNode* p0) -> decltype(textInputClosed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&ThreadViewPopup::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(p0))(*)(ThreadViewPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe1ef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadViewPopup::emotePickerClosed(EmotePickerPopup* p0) -> decltype(emotePickerClosed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<EmotePickerPopup*>::func(&ThreadViewPopup::emotePickerClosed), this);
	using FunctionType = decltype(emotePickerClosed(p0))(*)(ThreadViewPopup*, EmotePickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdd3f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadViewPopup::levelPicked(GJGameLevel* p0) -> decltype(levelPicked(p0)) {
	auto self = addresser::thunkAdjust(Resolve<GJGameLevel*>::func(&ThreadViewPopup::levelPicked), this);
	using FunctionType = decltype(levelPicked(p0))(*)(ThreadViewPopup*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdb930, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadViewPopup::listPicked(GJLevelList* p0) -> decltype(listPicked(p0)) {
	auto self = addresser::thunkAdjust(Resolve<GJLevelList*>::func(&ThreadViewPopup::listPicked), this);
	using FunctionType = decltype(listPicked(p0))(*)(ThreadViewPopup*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdba30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadViewPopup::shareIDPicked(int p0, bool p1) -> decltype(shareIDPicked(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, bool>::func(&ThreadViewPopup::shareIDPicked), this);
	using FunctionType = decltype(shareIDPicked(p0, p1))(*)(ThreadViewPopup*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdbb20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ThreadViewPopup::threadMessagesFinished(int p0, cocos2d::CCArray* p1, bool p2) -> decltype(threadMessagesFinished(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCArray*, bool>::func(&ThreadViewPopup::threadMessagesFinished), this);
	using FunctionType = decltype(threadMessagesFinished(p0, p1, p2))(*)(ThreadViewPopup*, int, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xddaa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto ThreadViewPopup::threadMessagesFailed(int p0) -> decltype(threadMessagesFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&ThreadViewPopup::threadMessagesFailed), this);
	using FunctionType = decltype(threadMessagesFailed(p0))(*)(ThreadViewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdf040, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadViewPopup::threadSearchFinished(int p0, cocos2d::CCArray* p1, bool p2) -> decltype(threadSearchFinished(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCArray*, bool>::func(&ThreadViewPopup::threadSearchFinished), this);
	using FunctionType = decltype(threadSearchFinished(p0, p1, p2))(*)(ThreadViewPopup*, int, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdaf40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto ThreadViewPopup::threadSearchFailed(int p0) -> decltype(threadSearchFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&ThreadViewPopup::threadSearchFailed), this);
	using FunctionType = decltype(threadSearchFailed(p0))(*)(ThreadViewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdb560, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadViewPopup::threadSendFinished(int p0, long long p1) -> decltype(threadSendFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, long long>::func(&ThreadViewPopup::threadSendFinished), this);
	using FunctionType = decltype(threadSendFinished(p0, p1))(*)(ThreadViewPopup*, int, long long);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdd400, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ThreadViewPopup::threadSendFailed() -> decltype(threadSendFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ThreadViewPopup::threadSendFailed), this);
	using FunctionType = decltype(threadSendFailed())(*)(ThreadViewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdd820, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ThreadViewPopup::threadUpdateFinished(int p0, int p1) -> decltype(threadUpdateFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&ThreadViewPopup::threadUpdateFinished), this);
	using FunctionType = decltype(threadUpdateFinished(p0, p1))(*)(ThreadViewPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdc220, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ThreadViewPopup::threadUpdateFailed(int p0, int p1) -> decltype(threadUpdateFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&ThreadViewPopup::threadUpdateFailed), this);
	using FunctionType = decltype(threadUpdateFailed(p0, p1))(*)(ThreadViewPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdc5d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ThreadViewPopup::virtualRowCount() -> decltype(virtualRowCount()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ThreadViewPopup::virtualRowCount), this);
	using FunctionType = decltype(virtualRowCount())(*)(ThreadViewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe0620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ThreadViewPopup::virtualRowHeight(int p0) -> decltype(virtualRowHeight(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&ThreadViewPopup::virtualRowHeight), this);
	using FunctionType = decltype(virtualRowHeight(p0))(*)(ThreadViewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe0630, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadViewPopup::mountVirtualRow(int p0, cocos2d::CCNode* p1, cocos2d::CCMenu* p2) -> decltype(mountVirtualRow(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCNode*, cocos2d::CCMenu*>::func(&ThreadViewPopup::mountVirtualRow), this);
	using FunctionType = decltype(mountVirtualRow(p0, p1, p2))(*)(ThreadViewPopup*, int, cocos2d::CCNode*, cocos2d::CCMenu*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe0730, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto ThreadViewPopup::unmountVirtualRow(int p0, cocos2d::CCNode* p1) -> decltype(unmountVirtualRow(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCNode*>::func(&ThreadViewPopup::unmountVirtualRow), this);
	using FunctionType = decltype(unmountVirtualRow(p0, p1))(*)(ThreadViewPopup*, int, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe0650, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}
