
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GameToolbox.hpp>
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

auto GameToolbox::addBackButton(cocos2d::CCLayer* parent, cocos2d::CCMenuItem* menuItem) -> decltype(addBackButton(parent, menuItem)) {
	using FunctionType = decltype(addBackButton(parent, menuItem))(*)(cocos2d::CCLayer*, cocos2d::CCMenuItem*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b230, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(parent, menuItem);
}

auto GameToolbox::addRThumbScrollButton(cocos2d::CCLayer* parent) -> decltype(addRThumbScrollButton(parent)) {
	using FunctionType = decltype(addRThumbScrollButton(parent))(*)(cocos2d::CCLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6ef90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(parent);
}

auto GameToolbox::alignItemsHorisontally(cocos2d::CCArray* items, float gap, cocos2d::CCPoint position, bool skipSize) -> decltype(alignItemsHorisontally(items, gap, position, skipSize)) {
	using FunctionType = decltype(alignItemsHorisontally(items, gap, position, skipSize))(*)(cocos2d::CCArray*, float, cocos2d::CCPoint, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6c5d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(items, gap, position, skipSize);
}

auto GameToolbox::bounceTime(float time) -> decltype(bounceTime(time)) {
	using FunctionType = decltype(bounceTime(time))(*)(float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x73010, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(time);
}

auto GameToolbox::createToggleButton(std::string label, cocos2d::SEL_MenuHandler selector, bool state, cocos2d::CCMenu* menu, cocos2d::CCPoint position, cocos2d::CCNode* parent, cocos2d::CCNode* labelParent, float buttonScale, float maxLabelScale, float maxLabelWidth, cocos2d::CCPoint labelOffset, char const* font, bool labelTop, int labelTag, cocos2d::CCArray* container) -> decltype(createToggleButton(label, selector, state, menu, position, parent, labelParent, buttonScale, maxLabelScale, maxLabelWidth, labelOffset, font, labelTop, labelTag, container)) {
	using FunctionType = decltype(createToggleButton(label, selector, state, menu, position, parent, labelParent, buttonScale, maxLabelScale, maxLabelWidth, labelOffset, font, labelTop, labelTag, container))(*)(std::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, float, float, float, cocos2d::CCPoint, char const*, bool, int, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1208c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(label, selector, state, menu, position, parent, labelParent, buttonScale, maxLabelScale, maxLabelWidth, labelOffset, font, labelTop, labelTag, container);
}

auto GameToolbox::easeToText(int easingType) -> decltype(easeToText(easingType)) {
	using FunctionType = decltype(easeToText(easingType))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x72b00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(easingType);
}

auto GameToolbox::getEasedValue(float value, int easingType, float easingRate) -> decltype(getEasedValue(value, easingType, easingRate)) {
	throw std::runtime_error("GameToolbox::getEasedValue not implemented");
}

auto GameToolbox::getRelativeOffset(GameObject* object, cocos2d::CCPoint offset) -> decltype(getRelativeOffset(object, offset)) {
	using FunctionType = decltype(getRelativeOffset(object, offset))(*)(GameObject*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6e740, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, offset);
}

auto GameToolbox::getTimeString(int seconds, bool noSeconds) -> decltype(getTimeString(seconds, noSeconds)) {
	using FunctionType = decltype(getTimeString(seconds, noSeconds))(*)(int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6fdc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(seconds, noSeconds);
}

auto GameToolbox::intToString(int value) -> decltype(intToString(value)) {
	using FunctionType = decltype(intToString(value))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x735f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(value);
}

auto GameToolbox::mergeDictsSaveLargestInt(cocos2d::CCDictionary* toDict, cocos2d::CCDictionary* fromDict) -> decltype(mergeDictsSaveLargestInt(toDict, fromDict)) {
	throw std::runtime_error("GameToolbox::mergeDictsSaveLargestInt not implemented");
}

auto GameToolbox::particleFromStruct(cocos2d::ParticleStruct const& particleStruct, cocos2d::CCParticleSystemQuad* system, bool dontUpdate) -> decltype(particleFromStruct(particleStruct, system, dontUpdate)) {
	using FunctionType = decltype(particleFromStruct(particleStruct, system, dontUpdate))(*)(cocos2d::ParticleStruct const&, cocos2d::CCParticleSystemQuad*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x72590, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(particleStruct, system, dontUpdate);
}

auto GameToolbox::particleStringToStruct(std::string const& str, cocos2d::ParticleStruct& particleStruct) -> decltype(particleStringToStruct(str, particleStruct)) {
	throw std::runtime_error("GameToolbox::particleStringToStruct not implemented");
}

auto GameToolbox::pointsToString(int points) -> decltype(pointsToString(points)) {
	using FunctionType = decltype(pointsToString(points))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x74770, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(points);
}

auto GameToolbox::saveParticleToString(cocos2d::CCParticleSystemQuad* system) -> decltype(saveParticleToString(system)) {
	using FunctionType = decltype(saveParticleToString(system))(*)(cocos2d::CCParticleSystemQuad*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6f7d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(system);
}

auto GameToolbox::stringFromHSV(cocos2d::ccHSVValue value, char const* separator) -> decltype(stringFromHSV(value, separator)) {
	using FunctionType = decltype(stringFromHSV(value, separator))(*)(cocos2d::ccHSVValue, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4836d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(value, separator);
}

auto GameToolbox::stringSetupToDict(std::string const& str, char const* separator) -> decltype(stringSetupToDict(str, separator)) {
	throw std::runtime_error("GameToolbox::stringSetupToDict not implemented");
}

auto GameToolbox::timestampToHumanReadable(long p0) -> decltype(timestampToHumanReadable(p0)) {
	using FunctionType = decltype(timestampToHumanReadable(p0))(*)(long);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x74010, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto GameToolbox::transformColor(cocos2d::ccColor3B const& color, cocos2d::ccHSVValue hsv) -> decltype(transformColor(color, hsv)) {
	using FunctionType = decltype(transformColor(color, hsv))(*)(cocos2d::ccColor3B const&, cocos2d::ccHSVValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6f370, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(color, hsv);
}
