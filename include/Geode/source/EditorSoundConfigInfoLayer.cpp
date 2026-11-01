
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/EditorSoundConfigInfoLayer.hpp>
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

EditorSoundConfigInfoLayer::~EditorSoundConfigInfoLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(EditorSoundConfigInfoLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x1907d0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) EditorSoundConfigInfoLayer(geode::CutoffConstructor, sizeof(EditorSoundConfigInfoLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto EditorSoundConfigInfoLayer::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchBegan(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorSoundConfigInfoLayer::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(p0, p1))(*)(EditorSoundConfigInfoLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1938c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto EditorSoundConfigInfoLayer::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchMoved(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorSoundConfigInfoLayer::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(p0, p1))(*)(EditorSoundConfigInfoLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x193990, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto EditorSoundConfigInfoLayer::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchEnded(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorSoundConfigInfoLayer::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(p0, p1))(*)(EditorSoundConfigInfoLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x193a00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto EditorSoundConfigInfoLayer::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchCancelled(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorSoundConfigInfoLayer::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(p0, p1))(*)(EditorSoundConfigInfoLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x193a50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto EditorSoundConfigInfoLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&EditorSoundConfigInfoLayer::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(EditorSoundConfigInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1973e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto EditorSoundConfigInfoLayer::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&EditorSoundConfigInfoLayer::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(EditorSoundConfigInfoLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1956f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto EditorSoundConfigInfoLayer::adminActionConfirmed(int p0, std::vector<int> const& p1, std::string const& p2) -> decltype(adminActionConfirmed(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, std::vector<int> const&, std::string const&>::func(&EditorSoundConfigInfoLayer::adminActionConfirmed), this);
	using FunctionType = decltype(adminActionConfirmed(p0, p1, p2))(*)(EditorSoundConfigInfoLayer*, int, std::vector<int> const&, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x196780, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto EditorSoundConfigInfoLayer::downloadEditorSoundFinished(GJEditorSoundConfig* p0) -> decltype(downloadEditorSoundFinished(p0)) {
	auto self = addresser::thunkAdjust(Resolve<GJEditorSoundConfig*>::func(&EditorSoundConfigInfoLayer::downloadEditorSoundFinished), this);
	using FunctionType = decltype(downloadEditorSoundFinished(p0))(*)(EditorSoundConfigInfoLayer*, GJEditorSoundConfig*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1975c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto EditorSoundConfigInfoLayer::downloadEditorSoundFailed(int p0, int p1) -> decltype(downloadEditorSoundFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&EditorSoundConfigInfoLayer::downloadEditorSoundFailed), this);
	using FunctionType = decltype(downloadEditorSoundFailed(p0, p1))(*)(EditorSoundConfigInfoLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x197800, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto EditorSoundConfigInfoLayer::deleteEditorSoundFinished(int p0) -> decltype(deleteEditorSoundFinished(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&EditorSoundConfigInfoLayer::deleteEditorSoundFinished), this);
	using FunctionType = decltype(deleteEditorSoundFinished(p0))(*)(EditorSoundConfigInfoLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x197950, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto EditorSoundConfigInfoLayer::deleteEditorSoundFailed(int p0, int p1) -> decltype(deleteEditorSoundFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&EditorSoundConfigInfoLayer::deleteEditorSoundFailed), this);
	using FunctionType = decltype(deleteEditorSoundFailed(p0, p1))(*)(EditorSoundConfigInfoLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x197b80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto EditorSoundConfigInfoLayer::FLAlert_Clicked(FLAlertLayer* p0, bool p1) -> decltype(FLAlert_Clicked(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&EditorSoundConfigInfoLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(p0, p1))(*)(EditorSoundConfigInfoLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1967a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto EditorSoundConfigInfoLayer::likedItem(LikeItemType p0, int p1, bool p2) -> decltype(likedItem(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<LikeItemType, int, bool>::func(&EditorSoundConfigInfoLayer::likedItem), this);
	using FunctionType = decltype(likedItem(p0, p1, p2))(*)(EditorSoundConfigInfoLayer*, LikeItemType, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1957c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto EditorSoundConfigInfoLayer::soundPackDescSaved(std::string const& p0, std::string const& p1) -> decltype(soundPackDescSaved(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<std::string const&, std::string const&>::func(&EditorSoundConfigInfoLayer::soundPackDescSaved), this);
	using FunctionType = decltype(soundPackDescSaved(p0, p1))(*)(EditorSoundConfigInfoLayer*, std::string const&, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1948d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto EditorSoundConfigInfoLayer::uploadActionFinished(int p0, int p1) -> decltype(uploadActionFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&EditorSoundConfigInfoLayer::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(p0, p1))(*)(EditorSoundConfigInfoLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x194bf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto EditorSoundConfigInfoLayer::uploadActionFailed(int p0, int p1) -> decltype(uploadActionFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&EditorSoundConfigInfoLayer::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(p0, p1))(*)(EditorSoundConfigInfoLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x194de0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto EditorSoundConfigInfoLayer::onClosePopup(UploadActionPopup* p0) -> decltype(onClosePopup(p0)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&EditorSoundConfigInfoLayer::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(p0))(*)(EditorSoundConfigInfoLayer*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x194ec0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto EditorSoundConfigInfoLayer::musicActionFinished(GJMusicAction p0) -> decltype(musicActionFinished(p0)) {
	auto self = addresser::thunkAdjust(Resolve<GJMusicAction>::func(&EditorSoundConfigInfoLayer::musicActionFinished), this);
	using FunctionType = decltype(musicActionFinished(p0))(*)(EditorSoundConfigInfoLayer*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1955e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto EditorSoundConfigInfoLayer::musicActionFailed(GJMusicAction p0) -> decltype(musicActionFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<GJMusicAction>::func(&EditorSoundConfigInfoLayer::musicActionFailed), this);
	using FunctionType = decltype(musicActionFailed(p0))(*)(EditorSoundConfigInfoLayer*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x195610, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}
