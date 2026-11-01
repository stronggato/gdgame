
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJRequestCell.hpp>
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

auto GJRequestCell::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJRequestCell::init), this);
	using FunctionType = decltype(init())(*)(GJRequestCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1577f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJRequestCell::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJRequestCell::draw), this);
	using FunctionType = decltype(draw())(*)(GJRequestCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x147270, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJRequestCell::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	throw std::runtime_error("GJRequestCell::FLAlert_Clicked not implemented");
}

auto GJRequestCell::uploadActionFinished(int id, int response) -> decltype(uploadActionFinished(id, response)) {
	throw std::runtime_error("GJRequestCell::uploadActionFinished not implemented");
}

auto GJRequestCell::uploadActionFailed(int id, int response) -> decltype(uploadActionFailed(id, response)) {
	throw std::runtime_error("GJRequestCell::uploadActionFailed not implemented");
}

auto GJRequestCell::onClosePopup(UploadActionPopup* popup) -> decltype(onClosePopup(popup)) {
	throw std::runtime_error("GJRequestCell::onClosePopup not implemented");
}

auto GJRequestCell::markAsRead() -> decltype(markAsRead()) {
	using FunctionType = decltype(markAsRead())(*)(GJRequestCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x500b10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJRequestCell::onViewFriendRequest(cocos2d::CCObject* sender) -> decltype(onViewFriendRequest(sender)) {
	using FunctionType = decltype(onViewFriendRequest(sender))(*)(GJRequestCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x153ba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
