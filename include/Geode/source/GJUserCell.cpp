
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJUserCell.hpp>
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

auto GJUserCell::init() -> decltype(init()) {
	throw std::runtime_error("GJUserCell::init not implemented");
}

auto GJUserCell::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJUserCell::draw), this);
	using FunctionType = decltype(draw())(*)(GJUserCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x147270, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJUserCell::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	throw std::runtime_error("GJUserCell::FLAlert_Clicked not implemented");
}

auto GJUserCell::uploadActionFinished(int id, int response) -> decltype(uploadActionFinished(id, response)) {
	throw std::runtime_error("GJUserCell::uploadActionFinished not implemented");
}

auto GJUserCell::uploadActionFailed(int id, int response) -> decltype(uploadActionFailed(id, response)) {
	throw std::runtime_error("GJUserCell::uploadActionFailed not implemented");
}

auto GJUserCell::onClosePopup(UploadActionPopup* popup) -> decltype(onClosePopup(popup)) {
	throw std::runtime_error("GJUserCell::onClosePopup not implemented");
}

auto GJUserCell::onRemoveFriend(cocos2d::CCObject* sender) -> decltype(onRemoveFriend(sender)) {
	using FunctionType = decltype(onRemoveFriend(sender))(*)(GJUserCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4441a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJUserCell::onUnblockUser(cocos2d::CCObject* sender) -> decltype(onUnblockUser(sender)) {
	using FunctionType = decltype(onUnblockUser(sender))(*)(GJUserCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x553900, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
