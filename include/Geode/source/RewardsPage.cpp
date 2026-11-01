
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/RewardsPage.hpp>
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

auto RewardsPage::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&RewardsPage::init), this);
	using FunctionType = decltype(init())(*)(RewardsPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x55df40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto RewardsPage::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&RewardsPage::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(RewardsPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto RewardsPage::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&RewardsPage::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(RewardsPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99e20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto RewardsPage::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&RewardsPage::show), this);
	using FunctionType = decltype(show())(*)(RewardsPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x555630, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto RewardsPage::rewardsStatusFinished(int type) -> decltype(rewardsStatusFinished(type)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&RewardsPage::rewardsStatusFinished), this);
	using FunctionType = decltype(rewardsStatusFinished(type))(*)(RewardsPage*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x55efd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, type);
}

auto RewardsPage::rewardsStatusFailed() -> decltype(rewardsStatusFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&RewardsPage::rewardsStatusFailed), this);
	using FunctionType = decltype(rewardsStatusFailed())(*)(RewardsPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x55f230, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto RewardsPage::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(RewardsPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99df0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto RewardsPage::onReward(cocos2d::CCObject* sender) -> decltype(onReward(sender)) {
	using FunctionType = decltype(onReward(sender))(*)(RewardsPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x55ee90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
