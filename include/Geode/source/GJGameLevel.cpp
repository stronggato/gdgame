
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJGameLevel.hpp>
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

GJGameLevel::GJGameLevel() : GJGameLevel(geode::CutoffConstructor, sizeof(GJGameLevel)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	GJGameLevel::~GJGameLevel();

	using FunctionType = void(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x215760, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

auto GJGameLevel::encodeWithCoder(DS_Dictionary* dict) -> decltype(encodeWithCoder(dict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&GJGameLevel::encodeWithCoder), this);
	using FunctionType = decltype(encodeWithCoder(dict))(*)(GJGameLevel*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x266a90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dict);
}

auto GJGameLevel::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJGameLevel::init), this);
	using FunctionType = decltype(init())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2618a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJGameLevel::areCoinsVerified() -> decltype(areCoinsVerified()) {
	using FunctionType = decltype(areCoinsVerified())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2687a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGameLevel::copyLevelInfo(GJGameLevel* level) -> decltype(copyLevelInfo(level)) {
	using FunctionType = decltype(copyLevelInfo(level))(*)(GJGameLevel*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x524cc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GJGameLevel::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	throw std::runtime_error("GJGameLevel::dataLoaded not implemented");
}

auto GJGameLevel::getCoinKey(int coinNumber) -> decltype(getCoinKey(coinNumber)) {
	throw std::runtime_error("GJGameLevel::getCoinKey not implemented");
}

auto GJGameLevel::getListSnapshot() -> decltype(getListSnapshot()) {
	using FunctionType = decltype(getListSnapshot())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7fbd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGameLevel::getSongName() -> decltype(getSongName()) {
	using FunctionType = decltype(getSongName())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x262260, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGameLevel::handleStatsConflict(GJGameLevel* level) -> decltype(handleStatsConflict(level)) {
	using FunctionType = decltype(handleStatsConflict(level))(*)(GJGameLevel*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x268020, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GJGameLevel::saveNewScore(int value, int type, int ticks, int clicks, int coins, std::string inputs, bool save) -> decltype(saveNewScore(value, type, ticks, clicks, coins, inputs, save)) {
	using FunctionType = decltype(saveNewScore(value, type, ticks, clicks, coins, inputs, save))(*)(GJGameLevel*, int, int, int, int, int, std::string, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2624e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, value, type, ticks, clicks, coins, inputs, save);
}

auto GJGameLevel::savePercentage(int percent, bool isPracticeMode, int clicks, int attempts, bool isChkValid) -> decltype(savePercentage(percent, isPracticeMode, clicks, attempts, isChkValid)) {
	using FunctionType = decltype(savePercentage(percent, isPracticeMode, clicks, attempts, isChkValid))(*)(GJGameLevel*, int, bool, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xab9b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, percent, isPracticeMode, clicks, attempts, isChkValid);
}

auto GJGameLevel::unverifyCoins() -> decltype(unverifyCoins()) {
	using FunctionType = decltype(unverifyCoins())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x268800, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
