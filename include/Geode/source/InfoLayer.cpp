
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/InfoLayer.hpp>
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

InfoLayer::~InfoLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(InfoLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3cae50, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) InfoLayer(geode::CutoffConstructor, sizeof(InfoLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto InfoLayer::create(GJGameLevel* p0, GJUserScore* p1, GJLevelList* p2, GJEditorSoundConfig* p3) -> decltype(create(p0, p1, p2, p3)) {
	using FunctionType = decltype(create(p0, p1, p2, p3))(*)(GJGameLevel*, GJUserScore*, GJLevelList*, GJEditorSoundConfig*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x123790, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

auto InfoLayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&InfoLayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto InfoLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&InfoLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ce950, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto InfoLayer::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&InfoLayer::show), this);
	using FunctionType = decltype(show())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d0320, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto InfoLayer::loadCommentsFinished(cocos2d::CCArray* comments, char const* key) -> decltype(loadCommentsFinished(comments, key)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, char const*>::func(&InfoLayer::loadCommentsFinished), this);
	using FunctionType = decltype(loadCommentsFinished(comments, key))(*)(InfoLayer*, cocos2d::CCArray*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cf470, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, comments, key);
}

auto InfoLayer::loadCommentsFailed(char const* key) -> decltype(loadCommentsFailed(key)) {
	auto self = addresser::thunkAdjust(Resolve<char const*>::func(&InfoLayer::loadCommentsFailed), this);
	using FunctionType = decltype(loadCommentsFailed(key))(*)(InfoLayer*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cf4e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key);
}

auto InfoLayer::setupPageInfo(std::string info, char const* key) -> decltype(setupPageInfo(info, key)) {
	auto self = addresser::thunkAdjust(Resolve<std::string, char const*>::func(&InfoLayer::setupPageInfo), this);
	using FunctionType = decltype(setupPageInfo(info, key))(*)(InfoLayer*, std::string, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cf530, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, info, key);
}

auto InfoLayer::commentUploadFinished(int parentID) -> decltype(commentUploadFinished(parentID)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&InfoLayer::commentUploadFinished), this);
	using FunctionType = decltype(commentUploadFinished(parentID))(*)(InfoLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cf880, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, parentID);
}

auto InfoLayer::commentUploadFailed(int parentID, CommentError errorType) -> decltype(commentUploadFailed(parentID, errorType)) {
	auto self = addresser::thunkAdjust(Resolve<int, CommentError>::func(&InfoLayer::commentUploadFailed), this);
	using FunctionType = decltype(commentUploadFailed(parentID, errorType))(*)(InfoLayer*, int, CommentError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cf940, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, parentID, errorType);
}

auto InfoLayer::updateUserScoreFinished() -> decltype(updateUserScoreFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&InfoLayer::updateUserScoreFinished), this);
	using FunctionType = decltype(updateUserScoreFinished())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cf740, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto InfoLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&InfoLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(InfoLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cdb60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto InfoLayer::keyDown(cocos2d::enumKeyCodes p0, double p1) -> decltype(keyDown(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&InfoLayer::keyDown), this);
	using FunctionType = decltype(keyDown(p0, p1))(*)(InfoLayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d1970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto InfoLayer::ownsTouchPrio() -> decltype(ownsTouchPrio()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&InfoLayer::ownsTouchPrio), this);
	using FunctionType = decltype(ownsTouchPrio())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ff70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto InfoLayer::adminActionConfirmed(int p0, std::vector<int> const& p1, std::string const& p2) -> decltype(adminActionConfirmed(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, std::vector<int> const&, std::string const&>::func(&InfoLayer::adminActionConfirmed), this);
	using FunctionType = decltype(adminActionConfirmed(p0, p1, p2))(*)(InfoLayer*, int, std::vector<int> const&, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d1380, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto InfoLayer::bulkCommentDeleteFinished(int p0) -> decltype(bulkCommentDeleteFinished(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&InfoLayer::bulkCommentDeleteFinished), this);
	using FunctionType = decltype(bulkCommentDeleteFinished(p0))(*)(InfoLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d1660, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto InfoLayer::bulkCommentDeleteFailed() -> decltype(bulkCommentDeleteFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&InfoLayer::bulkCommentDeleteFailed), this);
	using FunctionType = decltype(bulkCommentDeleteFailed())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d1870, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto InfoLayer::getSpriteButton(char const* frame, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale, cocos2d::CCPoint position) -> decltype(getSpriteButton(frame, selector, menu, scale, position)) {
	using FunctionType = decltype(getSpriteButton(frame, selector, menu, scale, position))(*)(InfoLayer*, char const*, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cd500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, frame, selector, menu, scale, position);
}

auto InfoLayer::loadPage(int page, bool noSetup) -> decltype(loadPage(page, noSetup)) {
	using FunctionType = decltype(loadPage(page, noSetup))(*)(InfoLayer*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ceaa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page, noSetup);
}

auto InfoLayer::onComment(cocos2d::CCObject* sender) -> decltype(onComment(sender)) {
	using FunctionType = decltype(onComment(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cdcc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onCopyLevelID(cocos2d::CCObject* sender) -> decltype(onCopyLevelID(sender)) {
	using FunctionType = decltype(onCopyLevelID(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x160b50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onLevelInfo(cocos2d::CCObject* sender) -> decltype(onLevelInfo(sender)) {
	using FunctionType = decltype(onLevelInfo(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x249210, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onMore(cocos2d::CCObject* sender) -> decltype(onMore(sender)) {
	using FunctionType = decltype(onMore(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cdb90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onNextPage(cocos2d::CCObject* sender) -> decltype(onNextPage(sender)) {
	using FunctionType = decltype(onNextPage(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd70a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onOriginal(cocos2d::CCObject* sender) -> decltype(onOriginal(sender)) {
	using FunctionType = decltype(onOriginal(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cdc00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onPrevPage(cocos2d::CCObject* sender) -> decltype(onPrevPage(sender)) {
	using FunctionType = decltype(onPrevPage(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd7090, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::setupLevelInfo() -> decltype(setupLevelInfo()) {
	using FunctionType = decltype(setupLevelInfo())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cd650, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto InfoLayer::toggleCommentMode(cocos2d::CCObject* sender) -> decltype(toggleCommentMode(sender)) {
	using FunctionType = decltype(toggleCommentMode(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cfef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::toggleSmallCommentMode(cocos2d::CCObject* sender) -> decltype(toggleSmallCommentMode(sender)) {
	using FunctionType = decltype(toggleSmallCommentMode(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x284230, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::updateCommentModeButtons() -> decltype(updateCommentModeButtons()) {
	using FunctionType = decltype(updateCommentModeButtons())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cffb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
