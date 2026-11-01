
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJPathPage.hpp>
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

GJPathPage::~GJPathPage() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJPathPage*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x38f7c0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJPathPage(geode::CutoffConstructor, sizeof(GJPathPage));
		geode::DestructorLock::addLock(this);
	}
}

auto GJPathPage::create(int path, GJPathsLayer* layer) -> decltype(create(path, layer)) {
	using FunctionType = decltype(create(path, layer))(*)(int, GJPathsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x390730, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(path, layer);
}

auto GJPathPage::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJPathPage::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(GJPathPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJPathPage::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJPathPage::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(GJPathPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3943a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJPathPage::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJPathPage::show), this);
	using FunctionType = decltype(show())(*)(GJPathPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9ed50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJPathPage::didPurchaseItem(GJStoreItem* item) -> decltype(didPurchaseItem(item)) {
	auto self = addresser::thunkAdjust(Resolve<GJStoreItem*>::func(&GJPathPage::didPurchaseItem), this);
	using FunctionType = decltype(didPurchaseItem(item))(*)(GJPathPage*, GJStoreItem*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x392790, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, item);
}

auto GJPathPage::onActivatePath(cocos2d::CCObject* sender) -> decltype(onActivatePath(sender)) {
	using FunctionType = decltype(onActivatePath(sender))(*)(GJPathPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x117bb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJPathPage::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(GJPathPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x394300, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJPathPage::unlockAnimationFinished() -> decltype(unlockAnimationFinished()) {
	using FunctionType = decltype(unlockAnimationFinished())(*)(GJPathPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3941d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJPathPage::unlockAnimationStep2() -> decltype(unlockAnimationStep2()) {
	using FunctionType = decltype(unlockAnimationStep2())(*)(GJPathPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x393650, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJPathPage::unlockAnimationStep3() -> decltype(unlockAnimationStep3()) {
	using FunctionType = decltype(unlockAnimationStep3())(*)(GJPathPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xccb80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
