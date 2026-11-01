
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJEffectManager.hpp>
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

GJEffectManager::~GJEffectManager() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJEffectManager*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x361d00, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJEffectManager(geode::CutoffConstructor, sizeof(GJEffectManager));
		geode::DestructorLock::addLock(this);
	}
}

auto GJEffectManager::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3624a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJEffectManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJEffectManager::init), this);
	using FunctionType = decltype(init())(*)(GJEffectManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x362500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJEffectManager::calculateInheritedColor(int id, ColorAction* action) -> decltype(calculateInheritedColor(id, action)) {
	using FunctionType = decltype(calculateInheritedColor(id, action))(*)(GJEffectManager*, int, ColorAction*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3630f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, action);
}

auto GJEffectManager::calculateLightBGColor(cocos2d::ccColor3B color) -> decltype(calculateLightBGColor(color)) {
	using FunctionType = decltype(calculateLightBGColor(color))(*)(GJEffectManager*, cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36b820, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, color);
}

auto GJEffectManager::colorForGroupID(int id, cocos2d::ccColor3B const& color, bool mainColor) -> decltype(colorForGroupID(id, color, mainColor)) {
	throw std::runtime_error("GJEffectManager::colorForGroupID not implemented");
}

auto GJEffectManager::colorForPulseEffect(cocos2d::ccColor3B const& color, PulseEffectAction* action) -> decltype(colorForPulseEffect(color, action)) {
	throw std::runtime_error("GJEffectManager::colorForPulseEffect not implemented");
}

auto GJEffectManager::controlActionsForControlID(int id, GJActionCommand command) -> decltype(controlActionsForControlID(id, command)) {
	using FunctionType = decltype(controlActionsForControlID(id, command))(*)(GJEffectManager*, int, GJActionCommand);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x365830, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, command);
}

auto GJEffectManager::countForItem(int id) -> decltype(countForItem(id)) {
	throw std::runtime_error("GJEffectManager::countForItem not implemented");
}

auto GJEffectManager::createFollowCommand(float xMod, float yMod, float duration, int targetID, int centerID, int uniqueID, int controlID) -> decltype(createFollowCommand(xMod, yMod, duration, targetID, centerID, uniqueID, controlID)) {
	using FunctionType = decltype(createFollowCommand(xMod, yMod, duration, targetID, centerID, uniqueID, controlID))(*)(GJEffectManager*, float, float, float, int, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x364350, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, xMod, yMod, duration, targetID, centerID, uniqueID, controlID);
}

auto GJEffectManager::createKeyframeCommand(int targetID, cocos2d::CCArray* group, GameObject* object, int uniqueID, int controlID, bool temporary, float posXMod, float posYMod, float rotMod, float scaleXMod, float scaleYMod, float timeMod, std::vector<int> const& remapKeys) -> decltype(createKeyframeCommand(targetID, group, object, uniqueID, controlID, temporary, posXMod, posYMod, rotMod, scaleXMod, scaleYMod, timeMod, remapKeys)) {
	using FunctionType = decltype(createKeyframeCommand(targetID, group, object, uniqueID, controlID, temporary, posXMod, posYMod, rotMod, scaleXMod, scaleYMod, timeMod, remapKeys))(*)(GJEffectManager*, int, cocos2d::CCArray*, GameObject*, int, int, bool, float, float, float, float, float, float, std::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x364580, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, targetID, group, object, uniqueID, controlID, temporary, posXMod, posYMod, rotMod, scaleXMod, scaleYMod, timeMod, remapKeys);
}

auto GJEffectManager::createMoveCommand(cocos2d::CCPoint pt, int groupID, float duration, int easingType, float easingRate, bool lockPlayerX, bool lockPlayerY, bool lockCameraX, bool lockCameraY, float moveModX, float moveModY, int uniqueID, int controlID) -> decltype(createMoveCommand(pt, groupID, duration, easingType, easingRate, lockPlayerX, lockPlayerY, lockCameraX, lockCameraY, moveModX, moveModY, uniqueID, controlID)) {
	using FunctionType = decltype(createMoveCommand(pt, groupID, duration, easingType, easingRate, lockPlayerX, lockPlayerY, lockCameraX, lockCameraY, moveModX, moveModY, uniqueID, controlID))(*)(GJEffectManager*, cocos2d::CCPoint, int, float, int, float, bool, bool, bool, bool, float, float, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x363f90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, pt, groupID, duration, easingType, easingRate, lockPlayerX, lockPlayerY, lockCameraX, lockCameraY, moveModX, moveModY, uniqueID, controlID);
}

auto GJEffectManager::createPlayerFollowCommand(float delay, float speed, int offset, float maxSpeed, float duration, int targetID, int uniqueID, int controlID) -> decltype(createPlayerFollowCommand(delay, speed, offset, maxSpeed, duration, targetID, uniqueID, controlID)) {
	throw std::runtime_error("GJEffectManager::createPlayerFollowCommand not implemented");
}

auto GJEffectManager::createRotateCommand(float offset, float duration, int targetID, int centerID, int easingType, float easingRate, bool lockRotation, bool player1, bool player2, int uniqueID, int controlID) -> decltype(createRotateCommand(offset, duration, targetID, centerID, easingType, easingRate, lockRotation, player1, player2, uniqueID, controlID)) {
	using FunctionType = decltype(createRotateCommand(offset, duration, targetID, centerID, easingType, easingRate, lockRotation, player1, player2, uniqueID, controlID))(*)(GJEffectManager*, float, float, int, int, int, float, bool, bool, bool, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x364220, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, offset, duration, targetID, centerID, easingType, easingRate, lockRotation, player1, player2, uniqueID, controlID);
}

auto GJEffectManager::getAllColorActions() -> decltype(getAllColorActions()) {
	using FunctionType = decltype(getAllColorActions())(*)(GJEffectManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x362b80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJEffectManager::getColorAction(int index) -> decltype(getColorAction(index)) {
	using FunctionType = decltype(getColorAction(index))(*)(GJEffectManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10ff20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GJEffectManager::getColorSprite(int index) -> decltype(getColorSprite(index)) {
	using FunctionType = decltype(getColorSprite(index))(*)(GJEffectManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c0220, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GJEffectManager::getLoadedMoveOffset(std::unordered_map<int, std::pair<double, double>>& offsets) -> decltype(getLoadedMoveOffset(offsets)) {
	using FunctionType = decltype(getLoadedMoveOffset(offsets))(*)(GJEffectManager*, std::unordered_map<int, std::pair<double, double>>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x368640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, offsets);
}

auto GJEffectManager::getMoveCommandObject() -> decltype(getMoveCommandObject()) {
	using FunctionType = decltype(getMoveCommandObject())(*)(GJEffectManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x366c70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJEffectManager::getPersistentStateString() -> decltype(getPersistentStateString()) {
	using FunctionType = decltype(getPersistentStateString())(*)(GJEffectManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36a610, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJEffectManager::handleObjectCollision(bool triggerOnExit, int blockAID, int blockBID) -> decltype(handleObjectCollision(triggerOnExit, blockAID, blockBID)) {
	using FunctionType = decltype(handleObjectCollision(triggerOnExit, blockAID, blockBID))(*)(GJEffectManager*, bool, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x363dd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, triggerOnExit, blockAID, blockBID);
}

auto GJEffectManager::loadFromState(EffectManagerState& state) -> decltype(loadFromState(state)) {
	using FunctionType = decltype(loadFromState(state))(*)(GJEffectManager*, EffectManagerState&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36c170, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, state);
}

auto GJEffectManager::playerButton(bool down, bool player1) -> decltype(playerButton(down, player1)) {
	using FunctionType = decltype(playerButton(down, player1))(*)(GJEffectManager*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x369ec0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, down, player1);
}

auto GJEffectManager::postCollisionCheck() -> decltype(postCollisionCheck()) {
	using FunctionType = decltype(postCollisionCheck())(*)(GJEffectManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x363b70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJEffectManager::postMoveActions() -> decltype(postMoveActions()) {
	using FunctionType = decltype(postMoveActions())(*)(GJEffectManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3684e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJEffectManager::prepareMoveActions(float dt, bool intermediate) -> decltype(prepareMoveActions(dt, intermediate)) {
	using FunctionType = decltype(prepareMoveActions(dt, intermediate))(*)(GJEffectManager*, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt, intermediate);
}

auto GJEffectManager::processColors() -> decltype(processColors()) {
	using FunctionType = decltype(processColors())(*)(GJEffectManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x362bf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJEffectManager::processInheritedColors() -> decltype(processInheritedColors()) {
	using FunctionType = decltype(processInheritedColors())(*)(GJEffectManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1bc870, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJEffectManager::registerCollisionTrigger(int targetID, int blockAID, int blockBID, bool triggerOnExit, bool activateGroup, std::vector<int> const& remapKeys, int uniqueID, int controlID) -> decltype(registerCollisionTrigger(targetID, blockAID, blockBID, triggerOnExit, activateGroup, remapKeys, uniqueID, controlID)) {
	using FunctionType = decltype(registerCollisionTrigger(targetID, blockAID, blockBID, triggerOnExit, activateGroup, remapKeys, uniqueID, controlID))(*)(GJEffectManager*, int, int, int, bool, bool, std::vector<int> const&, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x363cc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, targetID, blockAID, blockBID, triggerOnExit, activateGroup, remapKeys, uniqueID, controlID);
}

auto GJEffectManager::removeTriggeredID(int objectUniqueID, int playerUniqueID) -> decltype(removeTriggeredID(objectUniqueID, playerUniqueID)) {
	throw std::runtime_error("GJEffectManager::removeTriggeredID not implemented");
}

auto GJEffectManager::reset() -> decltype(reset()) {
	using FunctionType = decltype(reset())(*)(GJEffectManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x362950, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJEffectManager::resetEffects() -> decltype(resetEffects()) {
	using FunctionType = decltype(resetEffects())(*)(GJEffectManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3638b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJEffectManager::runOpacityActionOnGroup(int targetID, float duration, float opacity, int uniqueID, int controlID) -> decltype(runOpacityActionOnGroup(targetID, duration, opacity, uniqueID, controlID)) {
	using FunctionType = decltype(runOpacityActionOnGroup(targetID, duration, opacity, uniqueID, controlID))(*)(GJEffectManager*, int, float, float, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x368760, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, targetID, duration, opacity, uniqueID, controlID);
}

auto GJEffectManager::runPulseEffect(int targetID, bool targetGroup, float fadeInDuration, float holdDuration, float fadeOutDuration, PulseEffectType effectType, cocos2d::ccColor3B targetColor, cocos2d::ccHSVValue targetHSV, int copyID, bool mainOnly, bool detailOnly, bool exclusive, bool legacyHSV, int uniqueID, int controlID) -> decltype(runPulseEffect(targetID, targetGroup, fadeInDuration, holdDuration, fadeOutDuration, effectType, targetColor, targetHSV, copyID, mainOnly, detailOnly, exclusive, legacyHSV, uniqueID, controlID)) {
	using FunctionType = decltype(runPulseEffect(targetID, targetGroup, fadeInDuration, holdDuration, fadeOutDuration, effectType, targetColor, targetHSV, copyID, mainOnly, detailOnly, exclusive, legacyHSV, uniqueID, controlID))(*)(GJEffectManager*, int, bool, float, float, float, PulseEffectType, cocos2d::ccColor3B, cocos2d::ccHSVValue, int, bool, bool, bool, bool, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x368930, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, targetID, targetGroup, fadeInDuration, holdDuration, fadeOutDuration, effectType, targetColor, targetHSV, copyID, mainOnly, detailOnly, exclusive, legacyHSV, uniqueID, controlID);
}

auto GJEffectManager::setColorAction(ColorAction* action, int id) -> decltype(setColorAction(action, id)) {
	using FunctionType = decltype(setColorAction(action, id))(*)(GJEffectManager*, ColorAction*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3636b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, action, id);
}

auto GJEffectManager::setupFromString(std::string str) -> decltype(setupFromString(str)) {
	using FunctionType = decltype(setupFromString(str))(*)(GJEffectManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36ba20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto GJEffectManager::spawnGroup(int targetID, float delay, bool spawnOrdered, std::vector<int> const& remapKeys, int uniqueID, int controlID) -> decltype(spawnGroup(targetID, delay, spawnOrdered, remapKeys, uniqueID, controlID)) {
	using FunctionType = decltype(spawnGroup(targetID, delay, spawnOrdered, remapKeys, uniqueID, controlID))(*)(GJEffectManager*, int, float, bool, std::vector<int> const&, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x369aa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, targetID, delay, spawnOrdered, remapKeys, uniqueID, controlID);
}

auto GJEffectManager::startTimer(int id, double startTime, double targetTime, bool stopTime, bool active, bool dontOverride, float timeMod, bool ignoreTimewarp, int targetID, std::vector<int> const& remapKeys, int uniqueID, int controlID) -> decltype(startTimer(id, startTime, targetTime, stopTime, active, dontOverride, timeMod, ignoreTimewarp, targetID, remapKeys, uniqueID, controlID)) {
	using FunctionType = decltype(startTimer(id, startTime, targetTime, stopTime, active, dontOverride, timeMod, ignoreTimewarp, targetID, remapKeys, uniqueID, controlID))(*)(GJEffectManager*, int, double, double, bool, bool, bool, float, bool, int, std::vector<int> const&, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36ace0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, startTime, targetTime, stopTime, active, dontOverride, timeMod, ignoreTimewarp, targetID, remapKeys, uniqueID, controlID);
}

auto GJEffectManager::updateCountForItem(int id, int count) -> decltype(updateCountForItem(id, count)) {
	using FunctionType = decltype(updateCountForItem(id, count))(*)(GJEffectManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36a1e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, count);
}

auto GJEffectManager::updateEffects(float dt) -> decltype(updateEffects(dt)) {
	using FunctionType = decltype(updateEffects(dt))(*)(GJEffectManager*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x363730, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto GJEffectManager::updateSpawnTriggers(float dt) -> decltype(updateSpawnTriggers(dt)) {
	using FunctionType = decltype(updateSpawnTriggers(dt))(*)(GJEffectManager*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x369b90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto GJEffectManager::wouldCreateLoop(InheritanceNode* node, int id) -> decltype(wouldCreateLoop(node, id)) {
	using FunctionType = decltype(wouldCreateLoop(node, id))(*)(GJEffectManager*, InheritanceNode*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x363470, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, node, id);
}
