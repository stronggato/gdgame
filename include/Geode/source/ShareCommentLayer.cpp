
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ShareCommentLayer.hpp>
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

ShareCommentLayer::~ShareCommentLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(ShareCommentLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x629d50, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) ShareCommentLayer(geode::CutoffConstructor, sizeof(ShareCommentLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto ShareCommentLayer::create(std::string title, int charLimit, CommentType type, int ID, std::string desc) -> decltype(create(title, charLimit, type, ID, desc)) {
	using FunctionType = decltype(create(title, charLimit, type, ID, desc))(*)(std::string, int, CommentType, int, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x629ea0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(title, charLimit, type, ID, desc);
}

auto ShareCommentLayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ShareCommentLayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(ShareCommentLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ShareCommentLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ShareCommentLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(ShareCommentLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x62bce0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ShareCommentLayer::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&ShareCommentLayer::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(ShareCommentLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x62bd40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto ShareCommentLayer::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&ShareCommentLayer::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(ShareCommentLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x62bea0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto ShareCommentLayer::uploadActionFinished(int id, int response) -> decltype(uploadActionFinished(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&ShareCommentLayer::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(id, response))(*)(ShareCommentLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x62c2c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto ShareCommentLayer::uploadActionFailed(int id, int response) -> decltype(uploadActionFailed(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&ShareCommentLayer::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(id, response))(*)(ShareCommentLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x62c350, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto ShareCommentLayer::onClosePopup(UploadActionPopup* popup) -> decltype(onClosePopup(popup)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&ShareCommentLayer::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(popup))(*)(ShareCommentLayer*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x62c410, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup);
}

auto ShareCommentLayer::emotePickerClosed(EmotePickerPopup* p0) -> decltype(emotePickerClosed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<EmotePickerPopup*>::func(&ShareCommentLayer::emotePickerClosed), this);
	using FunctionType = decltype(emotePickerClosed(p0))(*)(ShareCommentLayer*, EmotePickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x62c2b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ShareCommentLayer::onClear(cocos2d::CCObject* sender) -> decltype(onClear(sender)) {
	using FunctionType = decltype(onClear(sender))(*)(ShareCommentLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x62b560, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ShareCommentLayer::onShare(cocos2d::CCObject* sender) -> decltype(onShare(sender)) {
	using FunctionType = decltype(onShare(sender))(*)(ShareCommentLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16a7a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ShareCommentLayer::updateDescText(std::string desc) -> decltype(updateDescText(desc)) {
	using FunctionType = decltype(updateDescText(desc))(*)(ShareCommentLayer*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x77590, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, desc);
}

auto ShareCommentLayer::updatePercentLabel() -> decltype(updatePercentLabel()) {
	using FunctionType = decltype(updatePercentLabel())(*)(ShareCommentLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x812b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
