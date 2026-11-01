
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/LevelEditorLayer.hpp>
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

LevelEditorLayer::~LevelEditorLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(LevelEditorLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3ea540, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) LevelEditorLayer(geode::CutoffConstructor, sizeof(LevelEditorLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto LevelEditorLayer::create(GJGameLevel* level, bool noUI) -> decltype(create(level, noUI)) {
	using FunctionType = decltype(create(level, noUI))(*)(GJGameLevel*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3eada0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(level, noUI);
}

auto LevelEditorLayer::updateObjectLabel(GameObject* object) -> decltype(updateObjectLabel(object)) {
	using FunctionType = decltype(updateObjectLabel(object))(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18bda0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object);
}

auto LevelEditorLayer::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelEditorLayer::draw), this);
	using FunctionType = decltype(draw())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x405cb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelEditorLayer::postUpdate(float dt) -> decltype(postUpdate(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&LevelEditorLayer::postUpdate), this);
	using FunctionType = decltype(postUpdate(dt))(*)(LevelEditorLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fdb90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto LevelEditorLayer::updateVisibility(float dt) -> decltype(updateVisibility(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&LevelEditorLayer::updateVisibility), this);
	using FunctionType = decltype(updateVisibility(dt))(*)(LevelEditorLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f3870, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto LevelEditorLayer::playerTookDamage(PlayerObject* player) -> decltype(playerTookDamage(player)) {
	auto self = addresser::thunkAdjust(Resolve<PlayerObject*>::func(&LevelEditorLayer::playerTookDamage), this);
	using FunctionType = decltype(playerTookDamage(player))(*)(LevelEditorLayer*, PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fdb80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, player);
}

auto LevelEditorLayer::updateColor(cocos2d::ccColor3B& color, float fadeTime, int colorID, bool blending, float opacity, cocos2d::ccHSVValue& copyHSV, int colorIDToCopy, bool copyOpacity, EffectGameObject* callerObject, int unk1, int unk2) -> decltype(updateColor(color, fadeTime, colorID, blending, opacity, copyHSV, colorIDToCopy, copyOpacity, callerObject, unk1, unk2)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B&, float, int, bool, float, cocos2d::ccHSVValue&, int, bool, EffectGameObject*, int, int>::func(&LevelEditorLayer::updateColor), this);
	using FunctionType = decltype(updateColor(color, fadeTime, colorID, blending, opacity, copyHSV, colorIDToCopy, copyOpacity, callerObject, unk1, unk2))(*)(LevelEditorLayer*, cocos2d::ccColor3B&, float, int, bool, float, cocos2d::ccHSVValue&, int, bool, EffectGameObject*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f9960, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, color, fadeTime, colorID, blending, opacity, copyHSV, colorIDToCopy, copyOpacity, callerObject, unk1, unk2);
}

auto LevelEditorLayer::updateDebugDraw() -> decltype(updateDebugDraw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelEditorLayer::updateDebugDraw), this);
	using FunctionType = decltype(updateDebugDraw())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x403ea0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelEditorLayer::addToGroup(GameObject* object, int groupID, bool triggerGroup) -> decltype(addToGroup(object, groupID, triggerGroup)) {
	auto self = addresser::thunkAdjust(Resolve<GameObject*, int, bool>::func(&LevelEditorLayer::addToGroup), this);
	using FunctionType = decltype(addToGroup(object, groupID, triggerGroup))(*)(LevelEditorLayer*, GameObject*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fa800, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object, groupID, triggerGroup);
}

auto LevelEditorLayer::removeFromGroup(GameObject* object, int groupID) -> decltype(removeFromGroup(object, groupID)) {
	auto self = addresser::thunkAdjust(Resolve<GameObject*, int>::func(&LevelEditorLayer::removeFromGroup), this);
	using FunctionType = decltype(removeFromGroup(object, groupID))(*)(LevelEditorLayer*, GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fa960, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object, groupID);
}

auto LevelEditorLayer::updateObjectSection(GameObject* object) -> decltype(updateObjectSection(object)) {
	auto self = addresser::thunkAdjust(Resolve<GameObject*>::func(&LevelEditorLayer::updateObjectSection), this);
	using FunctionType = decltype(updateObjectSection(object))(*)(LevelEditorLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fb730, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto LevelEditorLayer::updateDisabledObjectsLastPos(cocos2d::CCArray* objects) -> decltype(updateDisabledObjectsLastPos(objects)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*>::func(&LevelEditorLayer::updateDisabledObjectsLastPos), this);
	using FunctionType = decltype(updateDisabledObjectsLastPos(objects))(*)(LevelEditorLayer*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fb9e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, objects);
}

auto LevelEditorLayer::timeForPos(cocos2d::CCPoint position, int order, int channel, bool songTriggers, int id) -> decltype(timeForPos(position, order, channel, songTriggers, id)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCPoint, int, int, bool, int>::func(&LevelEditorLayer::timeForPos), this);
	using FunctionType = decltype(timeForPos(position, order, channel, songTriggers, id))(*)(LevelEditorLayer*, cocos2d::CCPoint, int, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fa5e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, position, order, channel, songTriggers, id);
}

auto LevelEditorLayer::posForTime(float time) -> decltype(posForTime(time)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&LevelEditorLayer::posForTime), this);
	using FunctionType = decltype(posForTime(time))(*)(LevelEditorLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fa690, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, time);
}

auto LevelEditorLayer::resetSPTriggered() -> decltype(resetSPTriggered()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelEditorLayer::resetSPTriggered), this);
	using FunctionType = decltype(resetSPTriggered())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fa700, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelEditorLayer::didRotateGameplay() -> decltype(didRotateGameplay()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelEditorLayer::didRotateGameplay), this);
	using FunctionType = decltype(didRotateGameplay())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fb6c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelEditorLayer::manualUpdateObjectColors(GameObject* object) -> decltype(manualUpdateObjectColors(object)) {
	auto self = addresser::thunkAdjust(Resolve<GameObject*>::func(&LevelEditorLayer::manualUpdateObjectColors), this);
	using FunctionType = decltype(manualUpdateObjectColors(object))(*)(LevelEditorLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f48e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto LevelEditorLayer::claimCustomParticle(std::string const& key, cocos2d::ParticleStruct const& particleStruct, int zLayer, int zOrder, int uiObject, bool dontAdd) -> decltype(claimCustomParticle(key, particleStruct, zLayer, zOrder, uiObject, dontAdd)) {
	auto self = addresser::thunkAdjust(Resolve<std::string const&, cocos2d::ParticleStruct const&, int, int, int, bool>::func(&LevelEditorLayer::claimCustomParticle), this);
	using FunctionType = decltype(claimCustomParticle(key, particleStruct, zLayer, zOrder, uiObject, dontAdd))(*)(LevelEditorLayer*, std::string const&, cocos2d::ParticleStruct const&, int, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fe500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, particleStruct, zLayer, zOrder, uiObject, dontAdd);
}

auto LevelEditorLayer::unclaimCustomParticle(std::string const& key, cocos2d::CCParticleSystemQuad* particle) -> decltype(unclaimCustomParticle(key, particle)) {
	auto self = addresser::thunkAdjust(Resolve<std::string const&, cocos2d::CCParticleSystemQuad*>::func(&LevelEditorLayer::unclaimCustomParticle), this);
	using FunctionType = decltype(unclaimCustomParticle(key, particle))(*)(LevelEditorLayer*, std::string const&, cocos2d::CCParticleSystemQuad*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fe5d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, particle);
}

auto LevelEditorLayer::activatedAudioTrigger(SFXTriggerGameObject* object) -> decltype(activatedAudioTrigger(object)) {
	auto self = addresser::thunkAdjust(Resolve<SFXTriggerGameObject*>::func(&LevelEditorLayer::activatedAudioTrigger), this);
	using FunctionType = decltype(activatedAudioTrigger(object))(*)(LevelEditorLayer*, SFXTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fd9c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto LevelEditorLayer::checkpointActivated(CheckpointGameObject* object) -> decltype(checkpointActivated(object)) {
	auto self = addresser::thunkAdjust(Resolve<CheckpointGameObject*>::func(&LevelEditorLayer::checkpointActivated), this);
	using FunctionType = decltype(checkpointActivated(object))(*)(LevelEditorLayer*, CheckpointGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fd9f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto LevelEditorLayer::addKeyframe(KeyframeGameObject* object) -> decltype(addKeyframe(object)) {
	auto self = addresser::thunkAdjust(Resolve<KeyframeGameObject*>::func(&LevelEditorLayer::addKeyframe), this);
	using FunctionType = decltype(addKeyframe(object))(*)(LevelEditorLayer*, KeyframeGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fe610, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto LevelEditorLayer::levelSettingsUpdated() -> decltype(levelSettingsUpdated()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelEditorLayer::levelSettingsUpdated), this);
	using FunctionType = decltype(levelSettingsUpdated())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ecd60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelEditorLayer::shouldDrawDebugHitboxes() -> decltype(shouldDrawDebugHitboxes()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelEditorLayer::shouldDrawDebugHitboxes), this);
	using FunctionType = decltype(shouldDrawDebugHitboxes())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x403e50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelEditorLayer::shouldDrawHitboxTrail() -> decltype(shouldDrawHitboxTrail()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelEditorLayer::shouldDrawHitboxTrail), this);
	using FunctionType = decltype(shouldDrawHitboxTrail())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x403e60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelEditorLayer::shouldRecordHitboxTrail() -> decltype(shouldRecordHitboxTrail()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelEditorLayer::shouldRecordHitboxTrail), this);
	using FunctionType = decltype(shouldRecordHitboxTrail())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x403e70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelEditorLayer::getHitboxTrailMax() -> decltype(getHitboxTrailMax()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelEditorLayer::getHitboxTrailMax), this);
	using FunctionType = decltype(getHitboxTrailMax())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x403e90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelEditorLayer::addSpecial(GameObject* object) -> decltype(addSpecial(object)) {
	throw std::runtime_error("LevelEditorLayer::addSpecial not implemented");
}

auto LevelEditorLayer::applyGroupState(GameObject* dest, GameObject* src) -> decltype(applyGroupState(dest, src)) {
	using FunctionType = decltype(applyGroupState(dest, src))(*)(LevelEditorLayer*, GameObject*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fe080, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dest, src);
}

auto LevelEditorLayer::copyObjectState(GameObject* object) -> decltype(copyObjectState(object)) {
	using FunctionType = decltype(copyObjectState(object))(*)(LevelEditorLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc53e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto LevelEditorLayer::getLastObjectX() -> decltype(getLastObjectX()) {
	using FunctionType = decltype(getLastObjectX())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36ac60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelEditorLayer::getNextColorChannel() -> decltype(getNextColorChannel()) {
	using FunctionType = decltype(getNextColorChannel())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f6da0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelEditorLayer::getObjectRect(GameObject* object, bool forceSize, bool dontCalculate) -> decltype(getObjectRect(object, forceSize, dontCalculate)) {
	throw std::runtime_error("LevelEditorLayer::getObjectRect not implemented");
}

auto LevelEditorLayer::getTriggerGroup(int id) -> decltype(getTriggerGroup(id)) {
	using FunctionType = decltype(getTriggerGroup(id))(*)(LevelEditorLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3faac0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto LevelEditorLayer::handleAction(bool undo, cocos2d::CCArray* undoObjects) -> decltype(handleAction(undo, undoObjects)) {
	using FunctionType = decltype(handleAction(undo, undoObjects))(*)(LevelEditorLayer*, bool, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3efa70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, undo, undoObjects);
}

auto LevelEditorLayer::init(GJGameLevel* level, bool noUI) -> decltype(init(level, noUI)) {
	using FunctionType = decltype(init(level, noUI))(*)(LevelEditorLayer*, GJGameLevel*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x30a570, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level, noUI);
}

auto LevelEditorLayer::objectAtPosition(cocos2d::CCPoint position) -> decltype(objectAtPosition(position)) {
	using FunctionType = decltype(objectAtPosition(position))(*)(LevelEditorLayer*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x311ea0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position);
}

auto LevelEditorLayer::objectsInRect(cocos2d::CCRect rect, bool ignoreGroups) -> decltype(objectsInRect(rect, ignoreGroups)) {
	using FunctionType = decltype(objectsInRect(rect, ignoreGroups))(*)(LevelEditorLayer*, cocos2d::CCRect, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ef2a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, rect, ignoreGroups);
}

auto LevelEditorLayer::onPlaytest() -> decltype(onPlaytest()) {
	using FunctionType = decltype(onPlaytest())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fbab0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelEditorLayer::onStopPlaytest() -> decltype(onStopPlaytest()) {
	using FunctionType = decltype(onStopPlaytest())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fd180, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelEditorLayer::quickUpdateAllPositions() -> decltype(quickUpdateAllPositions()) {
	using FunctionType = decltype(quickUpdateAllPositions())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd04d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelEditorLayer::recreateGroups() -> decltype(recreateGroups()) {
	using FunctionType = decltype(recreateGroups())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fab20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelEditorLayer::removeAllObjectsOfType(int objectID) -> decltype(removeAllObjectsOfType(objectID)) {
	using FunctionType = decltype(removeAllObjectsOfType(objectID))(*)(LevelEditorLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ef7e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objectID);
}

auto LevelEditorLayer::removeObject(GameObject* object, bool noUndo) -> decltype(removeObject(object, noUndo)) {
	using FunctionType = decltype(removeObject(object, noUndo))(*)(LevelEditorLayer*, GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ef6a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, noUndo);
}

auto LevelEditorLayer::removeSpecial(GameObject* object) -> decltype(removeSpecial(object)) {
	throw std::runtime_error("LevelEditorLayer::removeSpecial not implemented");
}

auto LevelEditorLayer::resetToggledGroupsAndObjects() -> decltype(resetToggledGroupsAndObjects()) {
	using FunctionType = decltype(resetToggledGroupsAndObjects())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fa410, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelEditorLayer::resetUnusedColorChannels() -> decltype(resetUnusedColorChannels()) {
	using FunctionType = decltype(resetUnusedColorChannels())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f7170, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelEditorLayer::rotationForSlopeNearObject(GameObject* object) -> decltype(rotationForSlopeNearObject(object)) {
	using FunctionType = decltype(rotationForSlopeNearObject(object))(*)(LevelEditorLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ee540, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto LevelEditorLayer::runColorEffect(EffectGameObject* object, int colorID, float delay, float interval, bool instant) -> decltype(runColorEffect(object, colorID, delay, interval, instant)) {
	using FunctionType = decltype(runColorEffect(object, colorID, delay, interval, instant))(*)(LevelEditorLayer*, EffectGameObject*, int, float, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f97c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, colorID, delay, interval, instant);
}

auto LevelEditorLayer::spawnGroupPreview(int groupID, float xPos, float delay, float currentTime, float playTime, float boundTime, bool ordered, bool active) -> decltype(spawnGroupPreview(groupID, xPos, delay, currentTime, playTime, boundTime, ordered, active)) {
	using FunctionType = decltype(spawnGroupPreview(groupID, xPos, delay, currentTime, playTime, boundTime, ordered, active))(*)(LevelEditorLayer*, int, float, float, float, float, float, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f9e90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, groupID, xPos, delay, currentTime, playTime, boundTime, ordered, active);
}

auto LevelEditorLayer::stopTriggersInGroup(int id, float delay) -> decltype(stopTriggersInGroup(id, delay)) {
	using FunctionType = decltype(stopTriggersInGroup(id, delay))(*)(LevelEditorLayer*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f9ad0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, delay);
}

auto LevelEditorLayer::transferDefaultColors(GJEffectManager* src, GJEffectManager* dest) -> decltype(transferDefaultColors(src, dest)) {
	using FunctionType = decltype(transferDefaultColors(src, dest))(*)(LevelEditorLayer*, GJEffectManager*, GJEffectManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f7af0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, src, dest);
}

auto LevelEditorLayer::tryUpdateSpeedObject(EffectGameObject* object, bool noPreview) -> decltype(tryUpdateSpeedObject(object, noPreview)) {
	using FunctionType = decltype(tryUpdateSpeedObject(object, noPreview))(*)(LevelEditorLayer*, EffectGameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f2d10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, noPreview);
}

auto LevelEditorLayer::typeExistsAtPosition(int objectID, cocos2d::CCPoint position, bool flipX, bool flipY, float rotation) -> decltype(typeExistsAtPosition(objectID, position, flipX, flipY, rotation)) {
	using FunctionType = decltype(typeExistsAtPosition(objectID, position, flipX, flipY, rotation))(*)(LevelEditorLayer*, int, cocos2d::CCPoint, bool, bool, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ee0e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objectID, position, flipX, flipY, rotation);
}

auto LevelEditorLayer::updateAnimateOnTriggerObjects(bool animate) -> decltype(updateAnimateOnTriggerObjects(animate)) {
	using FunctionType = decltype(updateAnimateOnTriggerObjects(animate))(*)(LevelEditorLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fe2d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, animate);
}

auto LevelEditorLayer::updateEditorMode() -> decltype(updateEditorMode()) {
	using FunctionType = decltype(updateEditorMode())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x369200, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelEditorLayer::updateGridLayerParent() -> decltype(updateGridLayerParent()) {
	throw std::runtime_error("LevelEditorLayer::updateGridLayerParent not implemented");
}

auto LevelEditorLayer::updateKeyframeObjects() -> decltype(updateKeyframeObjects()) {
	using FunctionType = decltype(updateKeyframeObjects())(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fe6c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelEditorLayer::updateObjectColors(cocos2d::CCArray* gameObjects) -> decltype(updateObjectColors(gameObjects)) {
	using FunctionType = decltype(updateObjectColors(gameObjects))(*)(LevelEditorLayer*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f4920, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, gameObjects);
}

auto LevelEditorLayer::updatePreviewParticle(ParticleGameObject* object) -> decltype(updatePreviewParticle(object)) {
	using FunctionType = decltype(updatePreviewParticle(object))(*)(LevelEditorLayer*, ParticleGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fe470, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}
