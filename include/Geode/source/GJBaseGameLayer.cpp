
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJBaseGameLayer.hpp>
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

GJBaseGameLayer::GJBaseGameLayer() : GJBaseGameLayer(geode::CutoffConstructor, sizeof(GJBaseGameLayer)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	GJBaseGameLayer::~GJBaseGameLayer();

	using FunctionType = void(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e8c30, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

GJBaseGameLayer::~GJBaseGameLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJBaseGameLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x308f10, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJBaseGameLayer(geode::CutoffConstructor, sizeof(GJBaseGameLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto GJBaseGameLayer::convertToClosestDirection(float angle, float bound) -> decltype(convertToClosestDirection(angle, bound)) {
	using FunctionType = decltype(convertToClosestDirection(angle, bound))(*)(float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3348f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(angle, bound);
}

auto GJBaseGameLayer::gameEventToString(GJGameEvent event) -> decltype(gameEventToString(event)) {
	using FunctionType = decltype(gameEventToString(event))(*)(GJGameEvent);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3388e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(event);
}

auto GJBaseGameLayer::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GJBaseGameLayer::update), this);
	using FunctionType = decltype(update(dt))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33dc40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto GJBaseGameLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJBaseGameLayer::init), this);
	using FunctionType = decltype(init())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x30a570, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJBaseGameLayer::visit() -> decltype(visit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJBaseGameLayer::visit), this);
	using FunctionType = decltype(visit())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34e7b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJBaseGameLayer::opacityForObject(GameObject* object) -> decltype(opacityForObject(object)) {
	auto self = addresser::thunkAdjust(Resolve<GameObject*>::func(&GJBaseGameLayer::opacityForObject), this);
	using FunctionType = decltype(opacityForObject(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33d800, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto GJBaseGameLayer::objectsCollided(int blockAID, int blockBID) -> decltype(objectsCollided(blockAID, blockBID)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&GJBaseGameLayer::objectsCollided), this);
	using FunctionType = decltype(objectsCollided(blockAID, blockBID))(*)(GJBaseGameLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31dca0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, blockAID, blockBID);
}

auto GJBaseGameLayer::updateColor(cocos2d::ccColor3B& color, float fadeTime, int colorID, bool blending, float opacity, cocos2d::ccHSVValue& copyHSV, int colorIDToCopy, bool copyOpacity, EffectGameObject* callerObject, int unk1, int unk2) -> decltype(updateColor(color, fadeTime, colorID, blending, opacity, copyHSV, colorIDToCopy, copyOpacity, callerObject, unk1, unk2)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B&, float, int, bool, float, cocos2d::ccHSVValue&, int, bool, EffectGameObject*, int, int>::func(&GJBaseGameLayer::updateColor), this);
	using FunctionType = decltype(updateColor(color, fadeTime, colorID, blending, opacity, copyHSV, colorIDToCopy, copyOpacity, callerObject, unk1, unk2))(*)(GJBaseGameLayer*, cocos2d::ccColor3B&, float, int, bool, float, cocos2d::ccHSVValue&, int, bool, EffectGameObject*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x328bb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, color, fadeTime, colorID, blending, opacity, copyHSV, colorIDToCopy, copyOpacity, callerObject, unk1, unk2);
}

auto GJBaseGameLayer::toggleGroupTriggered(int group, bool activate, std::vector<int> const& remapKeys, int triggerID, int controlID) -> decltype(toggleGroupTriggered(group, activate, remapKeys, triggerID, controlID)) {
	auto self = addresser::thunkAdjust(Resolve<int, bool, std::vector<int> const&, int, int>::func(&GJBaseGameLayer::toggleGroupTriggered), this);
	using FunctionType = decltype(toggleGroupTriggered(group, activate, remapKeys, triggerID, controlID))(*)(GJBaseGameLayer*, int, bool, std::vector<int> const&, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x328d90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, group, activate, remapKeys, triggerID, controlID);
}

auto GJBaseGameLayer::spawnGroup(int group, bool ordered, double delay, std::vector<int> const& remapKeys, int triggerID, int controlID) -> decltype(spawnGroup(group, ordered, delay, remapKeys, triggerID, controlID)) {
	auto self = addresser::thunkAdjust(Resolve<int, bool, double, std::vector<int> const&, int, int>::func(&GJBaseGameLayer::spawnGroup), this);
	using FunctionType = decltype(spawnGroup(group, ordered, delay, remapKeys, triggerID, controlID))(*)(GJBaseGameLayer*, int, bool, double, std::vector<int> const&, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31f910, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, group, ordered, delay, remapKeys, triggerID, controlID);
}

auto GJBaseGameLayer::spawnObject(GameObject* object, double delay, std::vector<int> const& remapKeys) -> decltype(spawnObject(object, delay, remapKeys)) {
	auto self = addresser::thunkAdjust(Resolve<GameObject*, double, std::vector<int> const&>::func(&GJBaseGameLayer::spawnObject), this);
	using FunctionType = decltype(spawnObject(object, delay, remapKeys))(*)(GJBaseGameLayer*, GameObject*, double, std::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31fd40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object, delay, remapKeys);
}

auto GJBaseGameLayer::updateDebugDraw() -> decltype(updateDebugDraw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJBaseGameLayer::updateDebugDraw), this);
	using FunctionType = decltype(updateDebugDraw())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x314070, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJBaseGameLayer::addToSection(GameObject* object) -> decltype(addToSection(object)) {
	auto self = addresser::thunkAdjust(Resolve<GameObject*>::func(&GJBaseGameLayer::addToSection), this);
	using FunctionType = decltype(addToSection(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32c790, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto GJBaseGameLayer::addToGroup(GameObject* object, int groupID, bool triggerGroup) -> decltype(addToGroup(object, groupID, triggerGroup)) {
	auto self = addresser::thunkAdjust(Resolve<GameObject*, int, bool>::func(&GJBaseGameLayer::addToGroup), this);
	using FunctionType = decltype(addToGroup(object, groupID, triggerGroup))(*)(GJBaseGameLayer*, GameObject*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3291f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object, groupID, triggerGroup);
}

auto GJBaseGameLayer::removeFromGroup(GameObject* object, int groupID) -> decltype(removeFromGroup(object, groupID)) {
	auto self = addresser::thunkAdjust(Resolve<GameObject*, int>::func(&GJBaseGameLayer::removeFromGroup), this);
	using FunctionType = decltype(removeFromGroup(object, groupID))(*)(GJBaseGameLayer*, GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x329370, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object, groupID);
}

auto GJBaseGameLayer::updateObjectSection(GameObject* object) -> decltype(updateObjectSection(object)) {
	auto self = addresser::thunkAdjust(Resolve<GameObject*>::func(&GJBaseGameLayer::updateObjectSection), this);
	using FunctionType = decltype(updateObjectSection(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32e0b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto GJBaseGameLayer::updateScreenRotation(float rotation, bool add, bool convert, float duration, int easingType, float easingRate, int uniqueID, int controlID) -> decltype(updateScreenRotation(rotation, add, convert, duration, easingType, easingRate, uniqueID, controlID)) {
	auto self = addresser::thunkAdjust(Resolve<float, bool, bool, float, int, float, int, int>::func(&GJBaseGameLayer::updateScreenRotation), this);
	using FunctionType = decltype(updateScreenRotation(rotation, add, convert, duration, easingType, easingRate, uniqueID, controlID))(*)(GJBaseGameLayer*, float, bool, bool, float, int, float, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33c1b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, rotation, add, convert, duration, easingType, easingRate, uniqueID, controlID);
}

auto GJBaseGameLayer::reverseDirection(EffectGameObject* object) -> decltype(reverseDirection(object)) {
	auto self = addresser::thunkAdjust(Resolve<EffectGameObject*>::func(&GJBaseGameLayer::reverseDirection), this);
	using FunctionType = decltype(reverseDirection(object))(*)(GJBaseGameLayer*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31cec0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto GJBaseGameLayer::rotateGameplay(RotateGameplayGameObject* object) -> decltype(rotateGameplay(object)) {
	auto self = addresser::thunkAdjust(Resolve<RotateGameplayGameObject*>::func(&GJBaseGameLayer::rotateGameplay), this);
	using FunctionType = decltype(rotateGameplay(object))(*)(GJBaseGameLayer*, RotateGameplayGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31cf20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto GJBaseGameLayer::updateTimeWarp(float timeWarp) -> decltype(updateTimeWarp(timeWarp)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GJBaseGameLayer::updateTimeWarp), this);
	using FunctionType = decltype(updateTimeWarp(timeWarp))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33c4d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, timeWarp);
}

auto GJBaseGameLayer::applyTimeWarp(float timeWarp) -> decltype(applyTimeWarp(timeWarp)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GJBaseGameLayer::applyTimeWarp), this);
	using FunctionType = decltype(applyTimeWarp(timeWarp))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33c510, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, timeWarp);
}

auto GJBaseGameLayer::createCustomParticle(std::string const& key, cocos2d::ParticleStruct const& particleStruct, int minimum, bool dontAdd) -> decltype(createCustomParticle(key, particleStruct, minimum, dontAdd)) {
	auto self = addresser::thunkAdjust(Resolve<std::string const&, cocos2d::ParticleStruct const&, int, bool>::func(&GJBaseGameLayer::createCustomParticle), this);
	using FunctionType = decltype(createCustomParticle(key, particleStruct, minimum, dontAdd))(*)(GJBaseGameLayer*, std::string const&, cocos2d::ParticleStruct const&, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x347f90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, particleStruct, minimum, dontAdd);
}

auto GJBaseGameLayer::claimCustomParticle(std::string const& key, cocos2d::ParticleStruct const& particleStruct, int zLayer, int zOrder, int uiObject, bool dontAdd) -> decltype(claimCustomParticle(key, particleStruct, zLayer, zOrder, uiObject, dontAdd)) {
	auto self = addresser::thunkAdjust(Resolve<std::string const&, cocos2d::ParticleStruct const&, int, int, int, bool>::func(&GJBaseGameLayer::claimCustomParticle), this);
	using FunctionType = decltype(claimCustomParticle(key, particleStruct, zLayer, zOrder, uiObject, dontAdd))(*)(GJBaseGameLayer*, std::string const&, cocos2d::ParticleStruct const&, int, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3482e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, particleStruct, zLayer, zOrder, uiObject, dontAdd);
}

auto GJBaseGameLayer::unclaimCustomParticle(std::string const& key, cocos2d::CCParticleSystemQuad* particle) -> decltype(unclaimCustomParticle(key, particle)) {
	auto self = addresser::thunkAdjust(Resolve<std::string const&, cocos2d::CCParticleSystemQuad*>::func(&GJBaseGameLayer::unclaimCustomParticle), this);
	using FunctionType = decltype(unclaimCustomParticle(key, particle))(*)(GJBaseGameLayer*, std::string const&, cocos2d::CCParticleSystemQuad*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x348880, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, particle);
}

auto GJBaseGameLayer::activatedAudioTrigger(SFXTriggerGameObject* object) -> decltype(activatedAudioTrigger(object)) {
	auto self = addresser::thunkAdjust(Resolve<SFXTriggerGameObject*>::func(&GJBaseGameLayer::activatedAudioTrigger), this);
	using FunctionType = decltype(activatedAudioTrigger(object))(*)(GJBaseGameLayer*, SFXTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34a500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto GJBaseGameLayer::checkpointActivated(CheckpointGameObject* object) -> decltype(checkpointActivated(object)) {
	auto self = addresser::thunkAdjust(Resolve<CheckpointGameObject*>::func(&GJBaseGameLayer::checkpointActivated), this);
	using FunctionType = decltype(checkpointActivated(object))(*)(GJBaseGameLayer*, CheckpointGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34e390, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto GJBaseGameLayer::addKeyframe(KeyframeGameObject* object) -> decltype(addKeyframe(object)) {
	auto self = addresser::thunkAdjust(Resolve<KeyframeGameObject*>::func(&GJBaseGameLayer::addKeyframe), this);
	using FunctionType = decltype(addKeyframe(object))(*)(GJBaseGameLayer*, KeyframeGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x339dc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto GJBaseGameLayer::shouldDrawDebugHitboxes() -> decltype(shouldDrawDebugHitboxes()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJBaseGameLayer::shouldDrawDebugHitboxes), this);
	using FunctionType = decltype(shouldDrawDebugHitboxes())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x314d10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJBaseGameLayer::shouldDrawHitboxTrail() -> decltype(shouldDrawHitboxTrail()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJBaseGameLayer::shouldDrawHitboxTrail), this);
	using FunctionType = decltype(shouldDrawHitboxTrail())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a230, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJBaseGameLayer::shouldRecordHitboxTrail() -> decltype(shouldRecordHitboxTrail()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJBaseGameLayer::shouldRecordHitboxTrail), this);
	using FunctionType = decltype(shouldRecordHitboxTrail())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a230, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJBaseGameLayer::getHitboxTrailMax() -> decltype(getHitboxTrailMax()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJBaseGameLayer::getHitboxTrailMax), this);
	using FunctionType = decltype(getHitboxTrailMax())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x314d30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJBaseGameLayer::activateEventTrigger(EventLinkTrigger* object, std::vector<int> const& remapKeys) -> decltype(activateEventTrigger(object, remapKeys)) {
	using FunctionType = decltype(activateEventTrigger(object, remapKeys))(*)(GJBaseGameLayer*, EventLinkTrigger*, std::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22dcd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, remapKeys);
}

auto GJBaseGameLayer::activateItemCompareTrigger(ItemTriggerGameObject* object, std::vector<int> const& remapKeys) -> decltype(activateItemCompareTrigger(object, remapKeys)) {
	using FunctionType = decltype(activateItemCompareTrigger(object, remapKeys))(*)(GJBaseGameLayer*, ItemTriggerGameObject*, std::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33a880, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, remapKeys);
}

auto GJBaseGameLayer::activateItemEditTrigger(ItemTriggerGameObject* object) -> decltype(activateItemEditTrigger(object)) {
	using FunctionType = decltype(activateItemEditTrigger(object))(*)(GJBaseGameLayer*, ItemTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33a4b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::activatePersistentItemTrigger(ItemTriggerGameObject* object) -> decltype(activatePersistentItemTrigger(object)) {
	using FunctionType = decltype(activatePersistentItemTrigger(object))(*)(GJBaseGameLayer*, ItemTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33aca0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::activatePlayerControlTrigger(PlayerControlGameObject* object) -> decltype(activatePlayerControlTrigger(object)) {
	using FunctionType = decltype(activatePlayerControlTrigger(object))(*)(GJBaseGameLayer*, PlayerControlGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31c110, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::activateSFXEditTrigger(SFXTriggerGameObject* object) -> decltype(activateSFXEditTrigger(object)) {
	using FunctionType = decltype(activateSFXEditTrigger(object))(*)(GJBaseGameLayer*, SFXTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x349530, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::activateSFXTrigger(SFXTriggerGameObject* object) -> decltype(activateSFXTrigger(object)) {
	using FunctionType = decltype(activateSFXTrigger(object))(*)(GJBaseGameLayer*, SFXTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2223a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::activateSongEditTrigger(SongTriggerGameObject* object) -> decltype(activateSongEditTrigger(object)) {
	using FunctionType = decltype(activateSongEditTrigger(object))(*)(GJBaseGameLayer*, SongTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x348fb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::activateTimerTrigger(TimerTriggerGameObject* object, std::vector<int> const& remapKeys) -> decltype(activateTimerTrigger(object, remapKeys)) {
	using FunctionType = decltype(activateTimerTrigger(object, remapKeys))(*)(GJBaseGameLayer*, TimerTriggerGameObject*, std::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33b0f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, remapKeys);
}

auto GJBaseGameLayer::addCustomEnterEffect(EnterEffectObject* object, bool enter) -> decltype(addCustomEnterEffect(object, enter)) {
	throw std::runtime_error("GJBaseGameLayer::addCustomEnterEffect not implemented");
}

auto GJBaseGameLayer::addGuideArt(GameObject* object) -> decltype(addGuideArt(object)) {
	using FunctionType = decltype(addGuideArt(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34d780, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::addProximityVolumeEffect(int channelID, int targetType, SFXTriggerGameObject* object) -> decltype(addProximityVolumeEffect(channelID, targetType, object)) {
	using FunctionType = decltype(addProximityVolumeEffect(channelID, targetType, object))(*)(GJBaseGameLayer*, int, int, SFXTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1a6a80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, channelID, targetType, object);
}

auto GJBaseGameLayer::addToGroups(GameObject* object, bool duplicateTrigger) -> decltype(addToGroups(object, duplicateTrigger)) {
	using FunctionType = decltype(addToGroups(object, duplicateTrigger))(*)(GJBaseGameLayer*, GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcffd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, duplicateTrigger);
}

auto GJBaseGameLayer::addUIObject(GameObject* object) -> decltype(addUIObject(object)) {
	using FunctionType = decltype(addUIObject(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32c1a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::applyRemap(EffectGameObject* object, std::vector<int> const& remapKeys, std::unordered_map<int, int>& remap) -> decltype(applyRemap(object, remapKeys, remap)) {
	using FunctionType = decltype(applyRemap(object, remapKeys, remap))(*)(GJBaseGameLayer*, EffectGameObject*, std::vector<int> const&, std::unordered_map<int, int>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31ffe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, remapKeys, remap);
}

auto GJBaseGameLayer::applySFXEditTrigger(int channelID, int targetType, SFXTriggerGameObject* object) -> decltype(applySFXEditTrigger(channelID, targetType, object)) {
	using FunctionType = decltype(applySFXEditTrigger(channelID, targetType, object))(*)(GJBaseGameLayer*, int, int, SFXTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x349800, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, channelID, targetType, object);
}

auto GJBaseGameLayer::assignNewStickyGroups(cocos2d::CCArray* objects) -> decltype(assignNewStickyGroups(objects)) {
	using FunctionType = decltype(assignNewStickyGroups(objects))(*)(GJBaseGameLayer*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32aa90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects);
}

auto GJBaseGameLayer::bumpPlayer(PlayerObject* player, EffectGameObject* object) -> decltype(bumpPlayer(player, object)) {
	using FunctionType = decltype(bumpPlayer(player, object))(*)(GJBaseGameLayer*, PlayerObject*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31c620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, player, object);
}

auto GJBaseGameLayer::buttonIsRelevant(PlayerButtonCommand const& button) -> decltype(buttonIsRelevant(button)) {
	using FunctionType = decltype(buttonIsRelevant(button))(*)(GJBaseGameLayer*, PlayerButtonCommand const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x338020, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, button);
}

auto GJBaseGameLayer::canBeActivatedByPlayer(PlayerObject* player, EffectGameObject* object) -> decltype(canBeActivatedByPlayer(player, object)) {
	throw std::runtime_error("GJBaseGameLayer::canBeActivatedByPlayer not implemented");
}

auto GJBaseGameLayer::checkCameraLimitAfterTeleport(PlayerObject* player, float yOffset) -> decltype(checkCameraLimitAfterTeleport(player, yOffset)) {
	using FunctionType = decltype(checkCameraLimitAfterTeleport(player, yOffset))(*)(GJBaseGameLayer*, PlayerObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33fd50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, player, yOffset);
}

auto GJBaseGameLayer::checkCollision(int blockAID, int blockBID) -> decltype(checkCollision(blockAID, blockBID)) {
	using FunctionType = decltype(checkCollision(blockAID, blockBID))(*)(GJBaseGameLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31dbd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, blockAID, blockBID);
}

auto GJBaseGameLayer::checkCollisionBlocks(EffectGameObject* object, std::vector<EffectGameObject*>* blocks, int blockCount) -> decltype(checkCollisionBlocks(object, blocks, blockCount)) {
	using FunctionType = decltype(checkCollisionBlocks(object, blocks, blockCount))(*)(GJBaseGameLayer*, EffectGameObject*, std::vector<EffectGameObject*>*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x419f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, blocks, blockCount);
}

auto GJBaseGameLayer::checkCollisions(PlayerObject* object, float dt, bool ignoreDamage) -> decltype(checkCollisions(object, dt, ignoreDamage)) {
	using FunctionType = decltype(checkCollisions(object, dt, ignoreDamage))(*)(GJBaseGameLayer*, PlayerObject*, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x318190, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, dt, ignoreDamage);
}

auto GJBaseGameLayer::checkRepellPlayer() -> decltype(checkRepellPlayer()) {
	using FunctionType = decltype(checkRepellPlayer())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f0c60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::checkSpawnObjects() -> decltype(checkSpawnObjects()) {
	using FunctionType = decltype(checkSpawnObjects())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31f620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::claimParticle(std::string key, int zLayer) -> decltype(claimParticle(key, zLayer)) {
	using FunctionType = decltype(claimParticle(key, zLayer))(*)(GJBaseGameLayer*, std::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x347bc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, zLayer);
}

auto GJBaseGameLayer::claimRotationAction(int targetID, int centerID, float& rotation, float& offset, bool ignoreStaticGroups, bool unused) -> decltype(claimRotationAction(targetID, centerID, rotation, offset, ignoreStaticGroups, unused)) {
	using FunctionType = decltype(claimRotationAction(targetID, centerID, rotation, offset, ignoreStaticGroups, unused))(*)(GJBaseGameLayer*, int, int, float&, float&, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x333a40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, targetID, centerID, rotation, offset, ignoreStaticGroups, unused);
}

auto GJBaseGameLayer::collisionCheckObjects(PlayerObject* object, std::vector<GameObject*>* objects, int objectCount, float dt) -> decltype(collisionCheckObjects(object, objects, objectCount, dt)) {
	using FunctionType = decltype(collisionCheckObjects(object, objects, objectCount, dt))(*)(GJBaseGameLayer*, PlayerObject*, std::vector<GameObject*>*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x319390, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects, objectCount, dt);
}

auto GJBaseGameLayer::controlAreaEffect(EnterEffectObject* object, std::vector<EnterEffectInstance>* instances, GJActionCommand command) -> decltype(controlAreaEffect(object, instances, command)) {
	using FunctionType = decltype(controlAreaEffect(object, instances, command))(*)(GJBaseGameLayer*, EnterEffectObject*, std::vector<EnterEffectInstance>*, GJActionCommand);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32db80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, instances, command);
}

auto GJBaseGameLayer::controlAreaEffectWithID(int uniqueID, int controlID, GJActionCommand command) -> decltype(controlAreaEffectWithID(uniqueID, controlID, command)) {
	using FunctionType = decltype(controlAreaEffectWithID(uniqueID, controlID, command))(*)(GJBaseGameLayer*, int, int, GJActionCommand);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32d980, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, uniqueID, controlID, command);
}

auto GJBaseGameLayer::controlEventLink(int uniqueID, int controlID, GJActionCommand command) -> decltype(controlEventLink(uniqueID, controlID, command)) {
	using FunctionType = decltype(controlEventLink(uniqueID, controlID, command))(*)(GJBaseGameLayer*, int, int, GJActionCommand);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x338540, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, uniqueID, controlID, command);
}

auto GJBaseGameLayer::controlTriggersInGroup(int group, GJActionCommand command) -> decltype(controlTriggersInGroup(group, command)) {
	using FunctionType = decltype(controlTriggersInGroup(group, command))(*)(GJBaseGameLayer*, int, GJActionCommand);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x323030, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, group, command);
}

auto GJBaseGameLayer::createBackground(int background) -> decltype(createBackground(background)) {
	using FunctionType = decltype(createBackground(background))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x30f090, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, background);
}

auto GJBaseGameLayer::createGroundLayer(int ground, int line) -> decltype(createGroundLayer(ground, line)) {
	using FunctionType = decltype(createGroundLayer(ground, line))(*)(GJBaseGameLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x30f4d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, ground, line);
}

auto GJBaseGameLayer::createMiddleground(int middleground) -> decltype(createMiddleground(middleground)) {
	using FunctionType = decltype(createMiddleground(middleground))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x30f350, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, middleground);
}

auto GJBaseGameLayer::createParticle(int objectType, char const* plistName, int tag, cocos2d::tCCPositionType positionType) -> decltype(createParticle(objectType, plistName, tag, positionType)) {
	using FunctionType = decltype(createParticle(objectType, plistName, tag, positionType))(*)(GJBaseGameLayer*, int, char const*, int, cocos2d::tCCPositionType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23efd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objectType, plistName, tag, positionType);
}

auto GJBaseGameLayer::createPlayer() -> decltype(createPlayer()) {
	using FunctionType = decltype(createPlayer())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31d0d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::createTextLayers() -> decltype(createTextLayers()) {
	using FunctionType = decltype(createTextLayers())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3124d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::damagingObjectsInRect(cocos2d::CCRect rect, bool enabledGroups) -> decltype(damagingObjectsInRect(rect, enabledGroups)) {
	using FunctionType = decltype(damagingObjectsInRect(rect, enabledGroups))(*)(GJBaseGameLayer*, cocos2d::CCRect, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x315bc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, rect, enabledGroups);
}

auto GJBaseGameLayer::destroyObject(GameObject* object) -> decltype(destroyObject(object)) {
	using FunctionType = decltype(destroyObject(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbae70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::flipGravity(PlayerObject* object, bool flip, bool noEffects) -> decltype(flipGravity(object, flip, noEffects)) {
	using FunctionType = decltype(flipGravity(object, flip, noEffects))(*)(GJBaseGameLayer*, PlayerObject*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3174d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, flip, noEffects);
}

auto GJBaseGameLayer::gameEventTriggered(GJGameEvent event, int material, int playerID) -> decltype(gameEventTriggered(event, material, playerID)) {
	throw std::runtime_error("GJBaseGameLayer::gameEventTriggered not implemented");
}

auto GJBaseGameLayer::generateEnterEasingBuffer(int easingType, float easingRate) -> decltype(generateEnterEasingBuffer(easingType, easingRate)) {
	throw std::runtime_error("GJBaseGameLayer::generateEnterEasingBuffer not implemented");
}

auto GJBaseGameLayer::generateSpawnRemap() -> decltype(generateSpawnRemap()) {
	using FunctionType = decltype(generateSpawnRemap())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x311690, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::generateVisibilityGroups() -> decltype(generateVisibilityGroups()) {
	using FunctionType = decltype(generateVisibilityGroups())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32abb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::getAreaObjectValue(EnterEffectInstance* instance, GameObject* object, cocos2d::CCPoint& position, bool& show) -> decltype(getAreaObjectValue(instance, object, position, show)) {
	using FunctionType = decltype(getAreaObjectValue(instance, object, position, show))(*)(GJBaseGameLayer*, EnterEffectInstance*, GameObject*, cocos2d::CCPoint&, bool&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32e1d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, instance, object, position, show);
}

auto GJBaseGameLayer::getEasedAreaValue(GameObject* object, EnterEffectInstance* instance, float value, bool show, int index) -> decltype(getEasedAreaValue(object, instance, value, show, index)) {
	using FunctionType = decltype(getEasedAreaValue(object, instance, value, show, index))(*)(GJBaseGameLayer*, GameObject*, EnterEffectInstance*, float, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32e3c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, instance, value, show, index);
}

auto GJBaseGameLayer::getFollowSpeedVal(GameObject* object, int startSpeedRef, int startDirRef, float startDir, float startSpeed) -> decltype(getFollowSpeedVal(object, startSpeedRef, startDirRef, startDir, startSpeed)) {
	using FunctionType = decltype(getFollowSpeedVal(object, startSpeedRef, startDirRef, startDir, startSpeed))(*)(GJBaseGameLayer*, GameObject*, int, int, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x334990, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, startSpeedRef, startDirRef, startDir, startSpeed);
}

auto GJBaseGameLayer::getGroundHeightForMode(int type) -> decltype(getGroundHeightForMode(type)) {
	using FunctionType = decltype(getGroundHeightForMode(type))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3162e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GJBaseGameLayer::getGroup(int id) -> decltype(getGroup(id)) {
	using FunctionType = decltype(getGroup(id))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3294b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GJBaseGameLayer::getItemValue(int type, int id) -> decltype(getItemValue(type, id)) {
	using FunctionType = decltype(getItemValue(type, id))(*)(GJBaseGameLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33a420, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, id);
}

auto GJBaseGameLayer::getMaxPortalY() -> decltype(getMaxPortalY()) {
	using FunctionType = decltype(getMaxPortalY())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x318110, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::getMinDistance(cocos2d::CCPoint position, cocos2d::CCArray* objects, float minNear, int mode) -> decltype(getMinDistance(position, objects, minNear, mode)) {
	using FunctionType = decltype(getMinDistance(position, objects, minNear, mode))(*)(GJBaseGameLayer*, cocos2d::CCPoint, cocos2d::CCArray*, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34a0b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position, objects, minNear, mode);
}

auto GJBaseGameLayer::getMinPortalY() -> decltype(getMinPortalY()) {
	using FunctionType = decltype(getMinPortalY())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x318030, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::getModifiedDelta(float dt) -> decltype(getModifiedDelta(dt)) {
	using FunctionType = decltype(getModifiedDelta(dt))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33dba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto GJBaseGameLayer::getParticleKey(int objectType, char const* plistName, int tag, cocos2d::tCCPositionType positionType) -> decltype(getParticleKey(objectType, plistName, tag, positionType)) {
	using FunctionType = decltype(getParticleKey(objectType, plistName, tag, positionType))(*)(GJBaseGameLayer*, int, char const*, int, cocos2d::tCCPositionType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x347570, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objectType, plistName, tag, positionType);
}

auto GJBaseGameLayer::getParticleKey2(std::string key) -> decltype(getParticleKey2(key)) {
	using FunctionType = decltype(getParticleKey2(key))(*)(GJBaseGameLayer*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3476f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GJBaseGameLayer::getRecordString(bool compress) -> decltype(getRecordString(compress)) {
	using FunctionType = decltype(getRecordString(compress))(*)(GJBaseGameLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d14f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, compress);
}

auto GJBaseGameLayer::getSavedPosition(int groupID, float delay) -> decltype(getSavedPosition(groupID, delay)) {
	using FunctionType = decltype(getSavedPosition(groupID, delay))(*)(GJBaseGameLayer*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31ddc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, groupID, delay);
}

auto GJBaseGameLayer::handleButton(bool down, int button, bool isPlayer1) -> decltype(handleButton(down, button, isPlayer1)) {
	using FunctionType = decltype(handleButton(down, button, isPlayer1))(*)(GJBaseGameLayer*, bool, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x339ac0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, down, button, isPlayer1);
}

auto GJBaseGameLayer::hasUniqueCoin(EffectGameObject* object) -> decltype(hasUniqueCoin(object)) {
	using FunctionType = decltype(hasUniqueCoin(object))(*)(GJBaseGameLayer*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1235e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::increaseBatchNodeCapacity() -> decltype(increaseBatchNodeCapacity()) {
	using FunctionType = decltype(increaseBatchNodeCapacity())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3103f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::lightningFlash(cocos2d::CCPoint from, cocos2d::CCPoint to, cocos2d::ccColor3B color, float lineWidth, float duration, int displacement, bool flash, float opacity) -> decltype(lightningFlash(from, to, color, lineWidth, duration, displacement, flash, opacity)) {
	using FunctionType = decltype(lightningFlash(from, to, color, lineWidth, duration, displacement, flash, opacity))(*)(GJBaseGameLayer*, cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::ccColor3B, float, float, int, bool, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34e5d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, from, to, color, lineWidth, duration, displacement, flash, opacity);
}

auto GJBaseGameLayer::loadLevelSettings() -> decltype(loadLevelSettings()) {
	using FunctionType = decltype(loadLevelSettings())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x342200, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::loadStartPosObject(StartPosObject* p0) -> decltype(loadStartPosObject(p0)) {
	using FunctionType = decltype(loadStartPosObject(p0))(*)(GJBaseGameLayer*, StartPosObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33b9d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto GJBaseGameLayer::loadUpToPosition(float position, int order, int channel) -> decltype(loadUpToPosition(position, order, channel)) {
	using FunctionType = decltype(loadUpToPosition(position, order, channel))(*)(GJBaseGameLayer*, float, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33bbe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position, order, channel);
}

auto GJBaseGameLayer::maxZOrderForShaderZ(int zLayer) -> decltype(maxZOrderForShaderZ(zLayer)) {
	using FunctionType = decltype(maxZOrderForShaderZ(zLayer))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x328a00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, zLayer);
}

auto GJBaseGameLayer::modifyGroupPhysics(AdvancedFollowEditObject* object, cocos2d::CCArray* group) -> decltype(modifyGroupPhysics(object, group)) {
	using FunctionType = decltype(modifyGroupPhysics(object, group))(*)(GJBaseGameLayer*, AdvancedFollowEditObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x334e30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, group);
}

auto GJBaseGameLayer::moveAreaObject(GameObject* object, float dx, float dy) -> decltype(moveAreaObject(object, dx, dy)) {
	using FunctionType = decltype(moveAreaObject(object, dx, dy))(*)(GJBaseGameLayer*, GameObject*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x330c10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, dx, dy);
}

auto GJBaseGameLayer::moveObjects(cocos2d::CCArray* objects, double dx, double dy, bool lockPlayerY) -> decltype(moveObjects(objects, dx, dy, lockPlayerY)) {
	using FunctionType = decltype(moveObjects(objects, dx, dy, lockPlayerY))(*)(GJBaseGameLayer*, cocos2d::CCArray*, double, double, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x333de0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects, dx, dy, lockPlayerY);
}

auto GJBaseGameLayer::moveObjectToStaticGroup(GameObject* object) -> decltype(moveObjectToStaticGroup(object)) {
	using FunctionType = decltype(moveObjectToStaticGroup(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x337420, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::objectTypeToGameEvent(int type) -> decltype(objectTypeToGameEvent(type)) {
	using FunctionType = decltype(objectTypeToGameEvent(type))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x338720, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GJBaseGameLayer::optimizeMoveGroups() -> decltype(optimizeMoveGroups()) {
	using FunctionType = decltype(optimizeMoveGroups())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x336a30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::orderSpawnObjects() -> decltype(orderSpawnObjects()) {
	using FunctionType = decltype(orderSpawnObjects())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34d620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::parentForZLayer(int zLayer, bool blending, int parentMode, int uiObject) -> decltype(parentForZLayer(zLayer, blending, parentMode, uiObject)) {
	using FunctionType = decltype(parentForZLayer(zLayer, blending, parentMode, uiObject))(*)(GJBaseGameLayer*, int, bool, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3129b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, zLayer, blending, parentMode, uiObject);
}

auto GJBaseGameLayer::pauseAudio() -> decltype(pauseAudio()) {
	using FunctionType = decltype(pauseAudio())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33d8a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::playerTouchedRing(PlayerObject* player, RingObject* object) -> decltype(playerTouchedRing(player, object)) {
	using FunctionType = decltype(playerTouchedRing(player, object))(*)(GJBaseGameLayer*, PlayerObject*, RingObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31cb40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, player, object);
}

auto GJBaseGameLayer::playerWillSwitchMode(PlayerObject* player, GameObject* object) -> decltype(playerWillSwitchMode(player, object)) {
	using FunctionType = decltype(playerWillSwitchMode(player, object))(*)(GJBaseGameLayer*, PlayerObject*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18ee20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, player, object);
}

auto GJBaseGameLayer::playExitDualEffect(PlayerObject* player) -> decltype(playExitDualEffect(player)) {
	using FunctionType = decltype(playExitDualEffect(player))(*)(GJBaseGameLayer*, PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31ba80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, player);
}

auto GJBaseGameLayer::positionForShaderTarget(int groupID) -> decltype(positionForShaderTarget(groupID)) {
	using FunctionType = decltype(positionForShaderTarget(groupID))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x328790, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, groupID);
}

auto GJBaseGameLayer::positionUIObjects() -> decltype(positionUIObjects()) {
	using FunctionType = decltype(positionUIObjects())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32c2c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::processActivatedAudioTriggers(float levelTime) -> decltype(processActivatedAudioTriggers(levelTime)) {
	using FunctionType = decltype(processActivatedAudioTriggers(levelTime))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34b000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, levelTime);
}

auto GJBaseGameLayer::processAdvancedFollowAction(AdvancedFollowInstance& instance, bool started, float dt) -> decltype(processAdvancedFollowAction(instance, started, dt)) {
	using FunctionType = decltype(processAdvancedFollowAction(instance, started, dt))(*)(GJBaseGameLayer*, AdvancedFollowInstance&, bool, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x335370, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, instance, started, dt);
}

auto GJBaseGameLayer::processAreaEffects(std::vector<EnterEffectInstance>* effects, GJAreaActionType type, float dt, bool visibleFrame) -> decltype(processAreaEffects(effects, type, dt, visibleFrame)) {
	using FunctionType = decltype(processAreaEffects(effects, type, dt, visibleFrame))(*)(GJBaseGameLayer*, std::vector<EnterEffectInstance>*, GJAreaActionType, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32e540, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, effects, type, dt, visibleFrame);
}

auto GJBaseGameLayer::processAreaMoveGroupAction(cocos2d::CCArray* objects, EnterEffectInstance* instance, cocos2d::CCPoint position, int outerMin, int outerMax, int middleMin, int middleMax, int startIndex, bool targetGroups, bool reset) -> decltype(processAreaMoveGroupAction(objects, instance, position, outerMin, outerMax, middleMin, middleMax, startIndex, targetGroups, reset)) {
	using FunctionType = decltype(processAreaMoveGroupAction(objects, instance, position, outerMin, outerMax, middleMin, middleMax, startIndex, targetGroups, reset))(*)(GJBaseGameLayer*, cocos2d::CCArray*, EnterEffectInstance*, cocos2d::CCPoint, int, int, int, int, int, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x330630, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects, instance, position, outerMin, outerMax, middleMin, middleMax, startIndex, targetGroups, reset);
}

auto GJBaseGameLayer::processAreaRotateGroupAction(cocos2d::CCArray* objects, EnterEffectInstance* instance, cocos2d::CCPoint position, int outerMin, int outerMax, int middleMin, int middleMax, int startIndex, bool targetGroups, bool reset) -> decltype(processAreaRotateGroupAction(objects, instance, position, outerMin, outerMax, middleMin, middleMax, startIndex, targetGroups, reset)) {
	using FunctionType = decltype(processAreaRotateGroupAction(objects, instance, position, outerMin, outerMax, middleMin, middleMax, startIndex, targetGroups, reset))(*)(GJBaseGameLayer*, cocos2d::CCArray*, EnterEffectInstance*, cocos2d::CCPoint, int, int, int, int, int, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32fee0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects, instance, position, outerMin, outerMax, middleMin, middleMax, startIndex, targetGroups, reset);
}

auto GJBaseGameLayer::processAreaTintGroupAction(cocos2d::CCArray* objects, EnterEffectInstance* instance, cocos2d::CCPoint position, bool targetGroups) -> decltype(processAreaTintGroupAction(objects, instance, position, targetGroups)) {
	using FunctionType = decltype(processAreaTintGroupAction(objects, instance, position, targetGroups))(*)(GJBaseGameLayer*, cocos2d::CCArray*, EnterEffectInstance*, cocos2d::CCPoint, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x330d00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects, instance, position, targetGroups);
}

auto GJBaseGameLayer::processAreaTransformGroupAction(cocos2d::CCArray* objects, EnterEffectInstance* instance, cocos2d::CCPoint position, int outerMin, int outerMax, int middleMin, int middleMax, int startIndex, bool targetGroups, bool reset) -> decltype(processAreaTransformGroupAction(objects, instance, position, outerMin, outerMax, middleMin, middleMax, startIndex, targetGroups, reset)) {
	using FunctionType = decltype(processAreaTransformGroupAction(objects, instance, position, outerMin, outerMax, middleMin, middleMax, startIndex, targetGroups, reset))(*)(GJBaseGameLayer*, cocos2d::CCArray*, EnterEffectInstance*, cocos2d::CCPoint, int, int, int, int, int, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32f370, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects, instance, position, outerMin, outerMax, middleMin, middleMax, startIndex, targetGroups, reset);
}

auto GJBaseGameLayer::processCommands(float dt, bool isHalfTick, bool isLastTick) -> decltype(processCommands(dt, isHalfTick, isLastTick)) {
	using FunctionType = decltype(processCommands(dt, isHalfTick, isLastTick))(*)(GJBaseGameLayer*, float, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33fe10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt, isHalfTick, isLastTick);
}

auto GJBaseGameLayer::processFollowActions() -> decltype(processFollowActions()) {
	using FunctionType = decltype(processFollowActions())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x336610, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::processItems() -> decltype(processItems()) {
	using FunctionType = decltype(processItems())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31ae10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::processMoveActions() -> decltype(processMoveActions()) {
	using FunctionType = decltype(processMoveActions())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x333680, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::processOptionsTrigger(GameOptionsTrigger* object) -> decltype(processOptionsTrigger(object)) {
	using FunctionType = decltype(processOptionsTrigger(object))(*)(GJBaseGameLayer*, GameOptionsTrigger*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x328f70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::processPlayerFollowActions(float dt) -> decltype(processPlayerFollowActions(dt)) {
	using FunctionType = decltype(processPlayerFollowActions(dt))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x333f60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto GJBaseGameLayer::processQueuedButtons(float dt, bool clearInputQueue) -> decltype(processQueuedButtons(dt, clearInputQueue)) {
	using FunctionType = decltype(processQueuedButtons(dt, clearInputQueue))(*)(GJBaseGameLayer*, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x337eb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt, clearInputQueue);
}

auto GJBaseGameLayer::processSFXObjects() -> decltype(processSFXObjects()) {
	using FunctionType = decltype(processSFXObjects())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x349050, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::processSFXState(SFXTriggerState* state1, SFXTriggerState* state2, int type, float levelTime) -> decltype(processSFXState(state1, state2, type, levelTime)) {
	using FunctionType = decltype(processSFXState(state1, state2, type, levelTime))(*)(GJBaseGameLayer*, SFXTriggerState*, SFXTriggerState*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34c750, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, state1, state2, type, levelTime);
}

auto GJBaseGameLayer::processSongState(int musicID, float spawnDelay, float levelTime, int songOffset, float volume, float speed, std::vector<SongTriggerState>* states, SongTriggerGameObject* object) -> decltype(processSongState(musicID, spawnDelay, levelTime, songOffset, volume, speed, states, object)) {
	using FunctionType = decltype(processSongState(musicID, spawnDelay, levelTime, songOffset, volume, speed, states, object))(*)(GJBaseGameLayer*, int, float, float, int, float, float, std::vector<SongTriggerState>*, SongTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34cbe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, musicID, spawnDelay, levelTime, songOffset, volume, speed, states, object);
}

auto GJBaseGameLayer::refreshKeyframeAnims() -> decltype(refreshKeyframeAnims()) {
	using FunctionType = decltype(refreshKeyframeAnims())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x339f20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::removeFromGroups(GameObject* object) -> decltype(removeFromGroups(object)) {
	using FunctionType = decltype(removeFromGroups(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3292e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::removeObjectFromSection(GameObject* object) -> decltype(removeObjectFromSection(object)) {
	using FunctionType = decltype(removeObjectFromSection(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32cf00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::resetActiveEnterEffects() -> decltype(resetActiveEnterEffects()) {
	using FunctionType = decltype(resetActiveEnterEffects())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x311b00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::resetAreaObjectValues(GameObject* object, bool update) -> decltype(resetAreaObjectValues(object, update)) {
	using FunctionType = decltype(resetAreaObjectValues(object, update))(*)(GJBaseGameLayer*, GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32ddb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, update);
}

auto GJBaseGameLayer::resetAudio() -> decltype(resetAudio()) {
	using FunctionType = decltype(resetAudio())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33db00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::resetCamera() -> decltype(resetCamera()) {
	using FunctionType = decltype(resetCamera())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346cc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::resetGradientLayers() -> decltype(resetGradientLayers()) {
	using FunctionType = decltype(resetGradientLayers())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x128ef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::resetLevelVariables() -> decltype(resetLevelVariables()) {
	using FunctionType = decltype(resetLevelVariables())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x342540, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::resetRecord(int steps, bool noFullReset) -> decltype(resetRecord(steps, noFullReset)) {
	using FunctionType = decltype(resetRecord(steps, noFullReset))(*)(GJBaseGameLayer*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x340070, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, steps, noFullReset);
}

auto GJBaseGameLayer::resetSpawnChannelIndex() -> decltype(resetSpawnChannelIndex()) {
	using FunctionType = decltype(resetSpawnChannelIndex())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34d6d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::resetStaticCamera(bool resetX, bool resetY) -> decltype(resetStaticCamera(resetX, resetY)) {
	using FunctionType = decltype(resetStaticCamera(resetX, resetY))(*)(GJBaseGameLayer*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346fa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, resetX, resetY);
}

auto GJBaseGameLayer::resumeAudio() -> decltype(resumeAudio()) {
	using FunctionType = decltype(resumeAudio())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33d9f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::rotateAreaObjects(GameObject* object, cocos2d::CCArray* objects, float rotation, bool reset) -> decltype(rotateAreaObjects(object, objects, rotation, reset)) {
	using FunctionType = decltype(rotateAreaObjects(object, objects, rotation, reset))(*)(GJBaseGameLayer*, GameObject*, cocos2d::CCArray*, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x330250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects, rotation, reset);
}

auto GJBaseGameLayer::rotateObject(GameObject* object, float rotation) -> decltype(rotateObject(object, rotation)) {
	using FunctionType = decltype(rotateObject(object, rotation))(*)(GJBaseGameLayer*, GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x332210, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, rotation);
}

auto GJBaseGameLayer::rotateObjects(cocos2d::CCArray* objects, float rotation, cocos2d::CCPoint position, cocos2d::CCPoint offset, bool finished, bool unused) -> decltype(rotateObjects(objects, rotation, position, offset, finished, unused)) {
	using FunctionType = decltype(rotateObjects(objects, rotation, position, offset, finished, unused))(*)(GJBaseGameLayer*, cocos2d::CCArray*, float, cocos2d::CCPoint, cocos2d::CCPoint, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3322b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects, rotation, position, offset, finished, unused);
}

auto GJBaseGameLayer::setGroupParent(GameObject* object, int groupID) -> decltype(setGroupParent(object, groupID)) {
	using FunctionType = decltype(setGroupParent(object, groupID))(*)(GJBaseGameLayer*, GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x329a70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, groupID);
}

auto GJBaseGameLayer::setupLayers() -> decltype(setupLayers()) {
	using FunctionType = decltype(setupLayers())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x30c1e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::setupLevelStart(LevelSettingsObject* settings) -> decltype(setupLevelStart(settings)) {
	using FunctionType = decltype(setupLevelStart(settings))(*)(GJBaseGameLayer*, LevelSettingsObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65e610, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, settings);
}

auto GJBaseGameLayer::shakeCamera(float duration, float strength, float interval) -> decltype(shakeCamera(duration, strength, interval)) {
	using FunctionType = decltype(shakeCamera(duration, strength, interval))(*)(GJBaseGameLayer*, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x82120, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, duration, strength, interval);
}

auto GJBaseGameLayer::shouldExitHackedLevel() -> decltype(shouldExitHackedLevel()) {
	using FunctionType = decltype(shouldExitHackedLevel())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x30e840, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::sortSectionVector() -> decltype(sortSectionVector()) {
	using FunctionType = decltype(sortSectionVector())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32d140, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::sortStickyGroups() -> decltype(sortStickyGroups()) {
	using FunctionType = decltype(sortStickyGroups())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32a750, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::spawnParticleTrigger(int particleID, cocos2d::CCPoint position, float rotation, float scale) -> decltype(spawnParticleTrigger(particleID, position, rotation, scale)) {
	using FunctionType = decltype(spawnParticleTrigger(particleID, position, rotation, scale))(*)(GJBaseGameLayer*, int, cocos2d::CCPoint, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xeb5f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, particleID, position, rotation, scale);
}

auto GJBaseGameLayer::speedForShaderTarget(int groupID) -> decltype(speedForShaderTarget(groupID)) {
	using FunctionType = decltype(speedForShaderTarget(groupID))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x328840, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, groupID);
}

auto GJBaseGameLayer::staticObjectsInRect(cocos2d::CCRect rect, bool enabledGroups) -> decltype(staticObjectsInRect(rect, enabledGroups)) {
	using FunctionType = decltype(staticObjectsInRect(rect, enabledGroups))(*)(GJBaseGameLayer*, cocos2d::CCRect, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x315810, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, rect, enabledGroups);
}

auto GJBaseGameLayer::stopCustomEnterEffect(EnterEffectObject* object, bool enter) -> decltype(stopCustomEnterEffect(object, enter)) {
	throw std::runtime_error("GJBaseGameLayer::stopCustomEnterEffect not implemented");
}

auto GJBaseGameLayer::switchToSpiderMode(PlayerObject* player, GameObject* object, bool noPortal) -> decltype(switchToSpiderMode(player, object, noPortal)) {
	using FunctionType = decltype(switchToSpiderMode(player, object, noPortal))(*)(GJBaseGameLayer*, PlayerObject*, GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3aab00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, player, object, noPortal);
}

auto GJBaseGameLayer::syncBGTextures() -> decltype(syncBGTextures()) {
	using FunctionType = decltype(syncBGTextures())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x164ba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::teleportPlayer(TeleportPortalObject* object, PlayerObject* player) -> decltype(teleportPlayer(object, player)) {
	using FunctionType = decltype(teleportPlayer(object, player))(*)(GJBaseGameLayer*, TeleportPortalObject*, PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x313600, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, player);
}

auto GJBaseGameLayer::toggleDualMode(GameObject* object, bool dual, PlayerObject* player, bool noEffects) -> decltype(toggleDualMode(object, dual, player, noEffects)) {
	using FunctionType = decltype(toggleDualMode(object, dual, player, noEffects))(*)(GJBaseGameLayer*, GameObject*, bool, PlayerObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31b4c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, dual, player, noEffects);
}

auto GJBaseGameLayer::toggleFlipped(bool flip, bool noEffects) -> decltype(toggleFlipped(flip, noEffects)) {
	using FunctionType = decltype(toggleFlipped(flip, noEffects))(*)(GJBaseGameLayer*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34e0a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, flip, noEffects);
}

auto GJBaseGameLayer::transformAreaObjects(GameObject* object, cocos2d::CCArray* objects, float scaleX, float scaleY, bool reset) -> decltype(transformAreaObjects(object, objects, scaleX, scaleY, reset)) {
	using FunctionType = decltype(transformAreaObjects(object, objects, scaleX, scaleY, reset))(*)(GJBaseGameLayer*, GameObject*, cocos2d::CCArray*, float, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32f870, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects, scaleX, scaleY, reset);
}

auto GJBaseGameLayer::triggerAdvancedFollowEditCommand(AdvancedFollowEditObject* object) -> decltype(triggerAdvancedFollowEditCommand(object)) {
	using FunctionType = decltype(triggerAdvancedFollowEditCommand(object))(*)(GJBaseGameLayer*, AdvancedFollowEditObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x334b00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::triggerAreaEffect(EnterEffectObject* object) -> decltype(triggerAreaEffect(object)) {
	using FunctionType = decltype(triggerAreaEffect(object))(*)(GJBaseGameLayer*, EnterEffectObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32d360, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::triggerDynamicRotateCommand(EnhancedTriggerObject* object) -> decltype(triggerDynamicRotateCommand(object)) {
	using FunctionType = decltype(triggerDynamicRotateCommand(object))(*)(GJBaseGameLayer*, EnhancedTriggerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3245a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::triggerGradientCommand(GradientTriggerObject* object) -> decltype(triggerGradientCommand(object)) {
	using FunctionType = decltype(triggerGradientCommand(object))(*)(GJBaseGameLayer*, GradientTriggerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x324a50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::triggerShaderCommand(ShaderGameObject* object) -> decltype(triggerShaderCommand(object)) {
	using FunctionType = decltype(triggerShaderCommand(object))(*)(GJBaseGameLayer*, ShaderGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x326340, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::triggerTransformCommand(TransformTriggerGameObject* object) -> decltype(triggerTransformCommand(object)) {
	using FunctionType = decltype(triggerTransformCommand(object))(*)(GJBaseGameLayer*, TransformTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3247c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::tryGetMainObject(int groupID) -> decltype(tryGetMainObject(groupID)) {
	using FunctionType = decltype(tryGetMainObject(groupID))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47e990, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, groupID);
}

auto GJBaseGameLayer::tryGetObject(int groupID) -> decltype(tryGetObject(groupID)) {
	using FunctionType = decltype(tryGetObject(groupID))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x329850, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, groupID);
}

auto GJBaseGameLayer::unclaimParticle(char const* key, cocos2d::CCParticleSystemQuad* particle) -> decltype(unclaimParticle(key, particle)) {
	using FunctionType = decltype(unclaimParticle(key, particle))(*)(GJBaseGameLayer*, char const*, cocos2d::CCParticleSystemQuad*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x347de0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, particle);
}

auto GJBaseGameLayer::ungroupStickyObjects(cocos2d::CCArray* objects) -> decltype(ungroupStickyObjects(objects)) {
	using FunctionType = decltype(ungroupStickyObjects(objects))(*)(GJBaseGameLayer*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32a9d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objects);
}

auto GJBaseGameLayer::updateAreaObjectLastValues(GameObject* object) -> decltype(updateAreaObjectLastValues(object)) {
	using FunctionType = decltype(updateAreaObjectLastValues(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32e010, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::updateCamera(float dt) -> decltype(updateCamera(dt)) {
	using FunctionType = decltype(updateCamera(dt))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x343200, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto GJBaseGameLayer::updateCollisionBlocks() -> decltype(updateCollisionBlocks()) {
	using FunctionType = decltype(updateCollisionBlocks())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31d4b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateCounters(int itemId, int value) -> decltype(updateCounters(itemId, value)) {
	throw std::runtime_error("GJBaseGameLayer::updateCounters not implemented");
}

auto GJBaseGameLayer::updateDualGround(PlayerObject* object, int mode, bool instant, float duration) -> decltype(updateDualGround(object, mode, instant, duration)) {
	using FunctionType = decltype(updateDualGround(object, mode, instant, duration))(*)(GJBaseGameLayer*, PlayerObject*, int, bool, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x317b50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, mode, instant, duration);
}

auto GJBaseGameLayer::updateExtraGameLayers() -> decltype(updateExtraGameLayers()) {
	throw std::runtime_error("GJBaseGameLayer::updateExtraGameLayers not implemented");
}

auto GJBaseGameLayer::updateGradientLayers() -> decltype(updateGradientLayers()) {
	using FunctionType = decltype(updateGradientLayers())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x324ee0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateGroundShadows() -> decltype(updateGroundShadows()) {
	using FunctionType = decltype(updateGroundShadows())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x30f5d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateGuideArt() -> decltype(updateGuideArt()) {
	using FunctionType = decltype(updateGuideArt())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34df90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateKeyframeOrder(int keyframeGroup) -> decltype(updateKeyframeOrder(keyframeGroup)) {
	using FunctionType = decltype(updateKeyframeOrder(keyframeGroup))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x339e50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, keyframeGroup);
}

auto GJBaseGameLayer::updateLayerCapacity(std::string capacityString) -> decltype(updateLayerCapacity(capacityString)) {
	using FunctionType = decltype(updateLayerCapacity(capacityString))(*)(GJBaseGameLayer*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7aca0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, capacityString);
}

auto GJBaseGameLayer::updateLevelColors() -> decltype(updateLevelColors()) {
	using FunctionType = decltype(updateLevelColors())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x30fd00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateMaxGameplayY() -> decltype(updateMaxGameplayY()) {
	using FunctionType = decltype(updateMaxGameplayY())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3423c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updatePlatformerTime() -> decltype(updatePlatformerTime()) {
	using FunctionType = decltype(updatePlatformerTime())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6cd50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateProximityVolumeEffects() -> decltype(updateProximityVolumeEffects()) {
	using FunctionType = decltype(updateProximityVolumeEffects())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x349a00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateSpecialGroupData() -> decltype(updateSpecialGroupData()) {
	using FunctionType = decltype(updateSpecialGroupData())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x311690, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateSpecialLabels() -> decltype(updateSpecialLabels()) {
	using FunctionType = decltype(updateSpecialLabels())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33f580, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateZoom(float zoom, float duration, int easing, float rate, int uniqueID, int controlID) -> decltype(updateZoom(zoom, duration, easing, rate, uniqueID, controlID)) {
	using FunctionType = decltype(updateZoom(zoom, duration, easing, rate, uniqueID, controlID))(*)(GJBaseGameLayer*, float, float, int, float, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33c030, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, zoom, duration, easing, rate, uniqueID, controlID);
}

auto GJBaseGameLayer::volumeForProximityEffect(SFXTriggerInstance& instance) -> decltype(volumeForProximityEffect(instance)) {
	using FunctionType = decltype(volumeForProximityEffect(instance))(*)(GJBaseGameLayer*, SFXTriggerInstance&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x349ce0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, instance);
}
