
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJSmartTemplate.hpp>
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

GJSmartTemplate::~GJSmartTemplate() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJSmartTemplate*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3b3f30, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJSmartTemplate(geode::CutoffConstructor, sizeof(GJSmartTemplate));
		geode::DestructorLock::addLock(this);
	}
}

auto GJSmartTemplate::applyTransformationsForType(SmartBlockType type, cocos2d::CCSprite* sprite) -> decltype(applyTransformationsForType(type, sprite)) {
	using FunctionType = decltype(applyTransformationsForType(type, sprite))(*)(SmartBlockType, cocos2d::CCSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b7160, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type, sprite);
}

auto GJSmartTemplate::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b4330, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJSmartTemplate::flipKey(std::string key, bool flipX, bool flipY) -> decltype(flipKey(key, flipX, flipY)) {
	using FunctionType = decltype(flipKey(key, flipX, flipY))(*)(std::string, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b8070, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(key, flipX, flipY);
}

auto GJSmartTemplate::getVerySimplifiedKey(std::string key) -> decltype(getVerySimplifiedKey(key)) {
	using FunctionType = decltype(getVerySimplifiedKey(key))(*)(std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x220880, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(key);
}

auto GJSmartTemplate::keyFromNeighbors(cocos2d::CCPoint position, SmartGameObject* object, SmartGameObject* left, SmartGameObject* right, SmartGameObject* top, SmartGameObject* bottom, SmartGameObject* topLeft, SmartGameObject* topRight, SmartGameObject* bottomLeft, SmartGameObject* bottomRight) -> decltype(keyFromNeighbors(position, object, left, right, top, bottom, topLeft, topRight, bottomLeft, bottomRight)) {
	using FunctionType = decltype(keyFromNeighbors(position, object, left, right, top, bottom, topLeft, topRight, bottomLeft, bottomRight))(*)(cocos2d::CCPoint, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b7530, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(position, object, left, right, top, bottom, topLeft, topRight, bottomLeft, bottomRight);
}

auto GJSmartTemplate::offsetForDir(GJSmartDirection direction, int key) -> decltype(offsetForDir(direction, key)) {
	using FunctionType = decltype(offsetForDir(direction, key))(*)(GJSmartDirection, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b6f70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(direction, key);
}

auto GJSmartTemplate::offsetForType(SmartBlockType type) -> decltype(offsetForType(type)) {
	using FunctionType = decltype(offsetForType(type))(*)(SmartBlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b7070, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type);
}

auto GJSmartTemplate::rotateBlockType(SmartBlockType type, int degrees) -> decltype(rotateBlockType(type, degrees)) {
	using FunctionType = decltype(rotateBlockType(type, degrees))(*)(SmartBlockType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b7920, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type, degrees);
}

auto GJSmartTemplate::rotateKey(std::string key, int degrees) -> decltype(rotateKey(key, degrees)) {
	using FunctionType = decltype(rotateKey(key, degrees))(*)(std::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b7d10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(key, degrees);
}

auto GJSmartTemplate::smartObjectToType(SmartGameObject* object, cocos2d::CCPoint point) -> decltype(smartObjectToType(object, point)) {
	using FunctionType = decltype(smartObjectToType(object, point))(*)(SmartGameObject*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b72a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, point);
}

auto GJSmartTemplate::encodeWithCoder(DS_Dictionary* dict) -> decltype(encodeWithCoder(dict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&GJSmartTemplate::encodeWithCoder), this);
	using FunctionType = decltype(encodeWithCoder(dict))(*)(GJSmartTemplate*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b9270, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dict);
}

auto GJSmartTemplate::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	using FunctionType = decltype(dataLoaded(dict))(*)(GJSmartTemplate*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b8fa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GJSmartTemplate::getNoCornerKey(std::string key) -> decltype(getNoCornerKey(key)) {
	using FunctionType = decltype(getNoCornerKey(key))(*)(GJSmartTemplate*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b5330, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GJSmartTemplate::getPrefab(std::string key, bool flipX, bool flipY) -> decltype(getPrefab(key, flipX, flipY)) {
	throw std::runtime_error("GJSmartTemplate::getPrefab not implemented");
}

auto GJSmartTemplate::getPrefabWithID(std::string key, int id) -> decltype(getPrefabWithID(key, id)) {
	using FunctionType = decltype(getPrefabWithID(key, id))(*)(GJSmartTemplate*, std::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b6eb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, id);
}

auto GJSmartTemplate::getRandomPrefab(std::string key) -> decltype(getRandomPrefab(key)) {
	using FunctionType = decltype(getRandomPrefab(key))(*)(GJSmartTemplate*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9a7e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GJSmartTemplate::getTemplateState(std::vector<SmartPrefabResult>& results) -> decltype(getTemplateState(results)) {
	using FunctionType = decltype(getTemplateState(results))(*)(GJSmartTemplate*, std::vector<SmartPrefabResult>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b8970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, results);
}

auto GJSmartTemplate::getTotalChanceForPrefab(std::string key) -> decltype(getTotalChanceForPrefab(key)) {
	using FunctionType = decltype(getTotalChanceForPrefab(key))(*)(GJSmartTemplate*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b6310, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GJSmartTemplate::logTemplateStatus(bool unused) -> decltype(logTemplateStatus(unused)) {
	using FunctionType = decltype(logTemplateStatus(unused))(*)(GJSmartTemplate*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b83a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, unused);
}

auto GJSmartTemplate::saveRemap(std::string key) -> decltype(saveRemap(key)) {
	throw std::runtime_error("GJSmartTemplate::saveRemap not implemented");
}

auto GJSmartTemplate::saveRemapToDict(std::string key, std::string remap, cocos2d::CCDictionary* dict) -> decltype(saveRemapToDict(key, remap, dict)) {
	using FunctionType = decltype(saveRemapToDict(key, remap, dict))(*)(GJSmartTemplate*, std::string, std::string, cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b4890, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, remap, dict);
}
