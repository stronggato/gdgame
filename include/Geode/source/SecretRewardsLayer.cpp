
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SecretRewardsLayer.hpp>
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

auto SecretRewardsLayer::scene(bool fromShop) -> decltype(scene(fromShop)) {
	using FunctionType = decltype(scene(fromShop))(*)(bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x564190, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(fromShop);
}

auto SecretRewardsLayer::onExit() -> decltype(onExit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SecretRewardsLayer::onExit), this);
	using FunctionType = decltype(onExit())(*)(SecretRewardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x569ba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SecretRewardsLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SecretRewardsLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SecretRewardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x569b90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SecretRewardsLayer::dialogClosed(DialogLayer* layer) -> decltype(dialogClosed(layer)) {
	auto self = addresser::thunkAdjust(Resolve<DialogLayer*>::func(&SecretRewardsLayer::dialogClosed), this);
	using FunctionType = decltype(dialogClosed(layer))(*)(SecretRewardsLayer*, DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x568600, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto SecretRewardsLayer::scrollLayerMoved(cocos2d::CCPoint position) -> decltype(scrollLayerMoved(position)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCPoint>::func(&SecretRewardsLayer::scrollLayerMoved), this);
	using FunctionType = decltype(scrollLayerMoved(position))(*)(SecretRewardsLayer*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x566a80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, position);
}

auto SecretRewardsLayer::createSecondaryLayer(int chestType) -> decltype(createSecondaryLayer(chestType)) {
	using FunctionType = decltype(createSecondaryLayer(chestType))(*)(SecretRewardsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x566fc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, chestType);
}

auto SecretRewardsLayer::fadeInOutMusic() -> decltype(fadeInOutMusic()) {
	throw std::runtime_error("SecretRewardsLayer::fadeInOutMusic not implemented");
}

auto SecretRewardsLayer::generateChestItems(int chestType) -> decltype(generateChestItems(chestType)) {
	using FunctionType = decltype(generateChestItems(chestType))(*)(SecretRewardsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x567420, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, chestType);
}

auto SecretRewardsLayer::init(bool fromShop) -> decltype(init(fromShop)) {
	using FunctionType = decltype(init(fromShop))(*)(SecretRewardsLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5642f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, fromShop);
}

auto SecretRewardsLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(SecretRewardsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5699b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretRewardsLayer::onGoldChest(cocos2d::CCObject* sender) -> decltype(onGoldChest(sender)) {
	using FunctionType = decltype(onGoldChest(sender))(*)(SecretRewardsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5690d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretRewardsLayer::onSelectItem(cocos2d::CCObject* sender) -> decltype(onSelectItem(sender)) {
	using FunctionType = decltype(onSelectItem(sender))(*)(SecretRewardsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x289360, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretRewardsLayer::onShop(cocos2d::CCObject* sender) -> decltype(onShop(sender)) {
	using FunctionType = decltype(onShop(sender))(*)(SecretRewardsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5683e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretRewardsLayer::onSpecialItem(cocos2d::CCObject* sender) -> decltype(onSpecialItem(sender)) {
	using FunctionType = decltype(onSpecialItem(sender))(*)(SecretRewardsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5687f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretRewardsLayer::showDialog01() -> decltype(showDialog01()) {
	using FunctionType = decltype(showDialog01())(*)(SecretRewardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x569be0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretRewardsLayer::showDialogMechanic() -> decltype(showDialogMechanic()) {
	using FunctionType = decltype(showDialogMechanic())(*)(SecretRewardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x56c780, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretRewardsLayer::switchToOpenedState(CCMenuItemSpriteExtra* button) -> decltype(switchToOpenedState(button)) {
	using FunctionType = decltype(switchToOpenedState(button))(*)(SecretRewardsLayer*, CCMenuItemSpriteExtra*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x568c10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, button);
}

auto SecretRewardsLayer::updateBackButton() -> decltype(updateBackButton()) {
	throw std::runtime_error("SecretRewardsLayer::updateBackButton not implemented");
}

auto SecretRewardsLayer::updateUnlockedLabel() -> decltype(updateUnlockedLabel()) {
	using FunctionType = decltype(updateUnlockedLabel())(*)(SecretRewardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x568cf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
