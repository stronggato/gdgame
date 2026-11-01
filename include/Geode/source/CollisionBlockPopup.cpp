
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CollisionBlockPopup.hpp>
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

CollisionBlockPopup::~CollisionBlockPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(CollisionBlockPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0xa49a0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) CollisionBlockPopup(geode::CutoffConstructor, sizeof(CollisionBlockPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto CollisionBlockPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CollisionBlockPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(CollisionBlockPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa6410, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CollisionBlockPopup::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CollisionBlockPopup::show), this);
	using FunctionType = decltype(show())(*)(CollisionBlockPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a5900, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CollisionBlockPopup::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&CollisionBlockPopup::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(CollisionBlockPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1250a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto CollisionBlockPopup::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&CollisionBlockPopup::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(CollisionBlockPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x608f30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto CollisionBlockPopup::textInputShouldOffset(CCTextInputNode* node, float yOffset) -> decltype(textInputShouldOffset(node, yOffset)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*, float>::func(&CollisionBlockPopup::textInputShouldOffset), this);
	using FunctionType = decltype(textInputShouldOffset(node, yOffset))(*)(CollisionBlockPopup*, CCTextInputNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b9a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node, yOffset);
}

auto CollisionBlockPopup::textInputReturn(CCTextInputNode* node) -> decltype(textInputReturn(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&CollisionBlockPopup::textInputReturn), this);
	using FunctionType = decltype(textInputReturn(node))(*)(CollisionBlockPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5bb00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto CollisionBlockPopup::valueDidChange(int p0, float p1) -> decltype(valueDidChange(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&CollisionBlockPopup::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(p0, p1))(*)(CollisionBlockPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa5000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto CollisionBlockPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(CollisionBlockPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6090f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
