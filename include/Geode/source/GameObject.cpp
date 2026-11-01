
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GameObject.hpp>
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

GameObject::GameObject() : GameObject(geode::CutoffConstructor, sizeof(GameObject)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	GameObject::~GameObject();

	using FunctionType = void(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2068c0, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

GameObject::~GameObject() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GameObject*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x2861a0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GameObject(geode::CutoffConstructor, sizeof(GameObject));
		geode::DestructorLock::addLock(this);
	}
}

auto GameObject::createWithFrame(char const* name) -> decltype(createWithFrame(name)) {
	using FunctionType = decltype(createWithFrame(name))(*)(char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x288730, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(name);
}

auto GameObject::createWithKey(int key) -> decltype(createWithKey(key)) {
	using FunctionType = decltype(createWithKey(key))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2862c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(key);
}

auto GameObject::objectFromVector(std::vector<std::string>& propValues, std::vector<void*>& propIsPresent, GJBaseGameLayer* gameLayer, bool lowDetail) -> decltype(objectFromVector(propValues, propIsPresent, gameLayer, lowDetail)) {
	throw std::runtime_error("GameObject::objectFromVector not implemented");
}

auto GameObject::setScaleX(float scaleX) -> decltype(setScaleX(scaleX)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::setScaleX), this);
	using FunctionType = decltype(setScaleX(scaleX))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x292db0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scaleX);
}

auto GameObject::setScaleY(float scaleY) -> decltype(setScaleY(scaleY)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::setScaleY), this);
	using FunctionType = decltype(setScaleY(scaleY))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x292ea0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scaleY);
}

auto GameObject::setScale(float scale) -> decltype(setScale(scale)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::setScale), this);
	using FunctionType = decltype(setScale(scale))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x292f90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scale);
}

auto GameObject::setPosition(cocos2d::CCPoint const& position) -> decltype(setPosition(position)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCPoint const&>::func(&GameObject::setPosition), this);
	using FunctionType = decltype(setPosition(position))(*)(GameObject*, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2926a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, position);
}

auto GameObject::setVisible(bool visible) -> decltype(setVisible(visible)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&GameObject::setVisible), this);
	using FunctionType = decltype(setVisible(visible))(*)(GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2936a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, visible);
}

auto GameObject::setRotation(float rotation) -> decltype(setRotation(rotation)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::setRotation), this);
	using FunctionType = decltype(setRotation(rotation))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x292950, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, rotation);
}

auto GameObject::setRotationX(float rotationX) -> decltype(setRotationX(rotationX)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::setRotationX), this);
	using FunctionType = decltype(setRotationX(rotationX))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x292ab0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, rotationX);
}

auto GameObject::setRotationY(float rotationY) -> decltype(setRotationY(rotationY)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::setRotationY), this);
	using FunctionType = decltype(setRotationY(rotationY))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x292c00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, rotationY);
}

auto GameObject::setOpacity(unsigned char opacity) -> decltype(setOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&GameObject::setOpacity), this);
	using FunctionType = decltype(setOpacity(opacity))(*)(GameObject*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x293250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}

auto GameObject::initWithTexture(cocos2d::CCTexture2D* texture) -> decltype(initWithTexture(texture)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTexture2D*>::func(&GameObject::initWithTexture), this);
	using FunctionType = decltype(initWithTexture(texture))(*)(GameObject*, cocos2d::CCTexture2D*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2887c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, texture);
}

auto GameObject::setChildColor(cocos2d::ccColor3B const& color) -> decltype(setChildColor(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&GameObject::setChildColor), this);
	using FunctionType = decltype(setChildColor(color))(*)(GameObject*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29b6b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto GameObject::setFlipX(bool flipX) -> decltype(setFlipX(flipX)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&GameObject::setFlipX), this);
	using FunctionType = decltype(setFlipX(flipX))(*)(GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x292d20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, flipX);
}

auto GameObject::setFlipY(bool flipY) -> decltype(setFlipY(flipY)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&GameObject::setFlipY), this);
	using FunctionType = decltype(setFlipY(flipY))(*)(GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x292d60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, flipY);
}

auto GameObject::customSetup() -> decltype(customSetup()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::customSetup), this);
	using FunctionType = decltype(customSetup())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28b9b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::setupCustomSprites(std::string frameName) -> decltype(setupCustomSprites(frameName)) {
	auto self = addresser::thunkAdjust(Resolve<std::string>::func(&GameObject::setupCustomSprites), this);
	using FunctionType = decltype(setupCustomSprites(frameName))(*)(GameObject*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2aa720, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, frameName);
}

auto GameObject::addMainSpriteToParent(bool reorder) -> decltype(addMainSpriteToParent(reorder)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&GameObject::addMainSpriteToParent), this);
	using FunctionType = decltype(addMainSpriteToParent(reorder))(*)(GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2967b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, reorder);
}

auto GameObject::resetObject() -> decltype(resetObject()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::resetObject), this);
	using FunctionType = decltype(resetObject())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28b210, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::activateObject() -> decltype(activateObject()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::activateObject), this);
	using FunctionType = decltype(activateObject())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28b660, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::deactivateObject(bool deactivate) -> decltype(deactivateObject(deactivate)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&GameObject::deactivateObject), this);
	using FunctionType = decltype(deactivateObject(deactivate))(*)(GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28b710, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, deactivate);
}

auto GameObject::transferObjectRect(cocos2d::CCRect& rect) -> decltype(transferObjectRect(rect)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCRect&>::func(&GameObject::transferObjectRect), this);
	using FunctionType = decltype(transferObjectRect(rect))(*)(GameObject*, cocos2d::CCRect&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x292160, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, rect);
}

auto GameObject::getObjectRect() -> decltype(getObjectRect()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getObjectRect), this);
	using FunctionType = decltype(getObjectRect())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2921b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::getObjectRect(float width, float height) -> decltype(getObjectRect(width, height)) {
	auto self = addresser::thunkAdjust(Resolve<float, float>::func(&GameObject::getObjectRect), this);
	using FunctionType = decltype(getObjectRect(width, height))(*)(GameObject*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2921d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, width, height);
}

auto GameObject::getObjectRect2(float width, float height) -> decltype(getObjectRect2(width, height)) {
	auto self = addresser::thunkAdjust(Resolve<float, float>::func(&GameObject::getObjectRect2), this);
	using FunctionType = decltype(getObjectRect2(width, height))(*)(GameObject*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x292370, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, width, height);
}

auto GameObject::getObjectTextureRect() -> decltype(getObjectTextureRect()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getObjectTextureRect), this);
	using FunctionType = decltype(getObjectTextureRect())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x292420, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::getRealPosition() -> decltype(getRealPosition()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getRealPosition), this);
	using FunctionType = decltype(getRealPosition())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x292660, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::setStartPos(cocos2d::CCPoint position) -> decltype(setStartPos(position)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCPoint>::func(&GameObject::setStartPos), this);
	using FunctionType = decltype(setStartPos(position))(*)(GameObject*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28b090, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, position);
}

auto GameObject::updateStartValues() -> decltype(updateStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::updateStartValues), this);
	using FunctionType = decltype(updateStartValues())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x28b520, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::getSaveString(GJBaseGameLayer* layer) -> decltype(getSaveString(layer)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*>::func(&GameObject::getSaveString), this);
	using FunctionType = decltype(getSaveString(layer))(*)(GameObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x299b90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto GameObject::claimParticle() -> decltype(claimParticle()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::claimParticle), this);
	using FunctionType = decltype(claimParticle())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2937c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::unclaimParticle() -> decltype(unclaimParticle()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::unclaimParticle), this);
	using FunctionType = decltype(unclaimParticle())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x293ce0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::isFlipX() -> decltype(isFlipX()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::isFlipX), this);
	using FunctionType = decltype(isFlipX())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x292d00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::isFlipY() -> decltype(isFlipY()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::isFlipY), this);
	using FunctionType = decltype(isFlipY())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x292d10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::setRScaleX(float scaleX) -> decltype(setRScaleX(scaleX)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::setRScaleX), this);
	using FunctionType = decltype(setRScaleX(scaleX))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x293080, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scaleX);
}

auto GameObject::setRScaleY(float scaleY) -> decltype(setRScaleY(scaleY)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::setRScaleY), this);
	using FunctionType = decltype(setRScaleY(scaleY))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2930c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scaleY);
}

auto GameObject::setRScale(float scale) -> decltype(setRScale(scale)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::setRScale), this);
	using FunctionType = decltype(setRScale(scale))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x293100, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scale);
}

auto GameObject::getRScaleX() -> decltype(getRScaleX()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getRScaleX), this);
	using FunctionType = decltype(getRScaleX())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x293140, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::getRScaleY() -> decltype(getRScaleY()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getRScaleY), this);
	using FunctionType = decltype(getRScaleY())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x293180, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::setRRotation(float rotation) -> decltype(setRRotation(rotation)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::setRRotation), this);
	using FunctionType = decltype(setRRotation(rotation))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2928c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, rotation);
}

auto GameObject::setObjectColor(cocos2d::ccColor3B const& color) -> decltype(setObjectColor(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&GameObject::setObjectColor), this);
	using FunctionType = decltype(setObjectColor(color))(*)(GameObject*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29b370, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto GameObject::setGlowColor(cocos2d::ccColor3B const& color) -> decltype(setGlowColor(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&GameObject::setGlowColor), this);
	using FunctionType = decltype(setGlowColor(color))(*)(GameObject*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29b660, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto GameObject::restoreObject() -> decltype(restoreObject()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::restoreObject), this);
	using FunctionType = decltype(restoreObject())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x293dd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::selectObject(cocos2d::ccColor3B color) -> decltype(selectObject(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B>::func(&GameObject::selectObject), this);
	using FunctionType = decltype(selectObject(color))(*)(GameObject*, cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29b730, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto GameObject::getOrientedBox() -> decltype(getOrientedBox()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getOrientedBox), this);
	using FunctionType = decltype(getOrientedBox())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29bda0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::updateOrientedBox() -> decltype(updateOrientedBox()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::updateOrientedBox), this);
	using FunctionType = decltype(updateOrientedBox())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29be00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::getObjectRotation() -> decltype(getObjectRotation()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getObjectRotation), this);
	using FunctionType = decltype(getObjectRotation())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29bd80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::updateMainColor(cocos2d::ccColor3B const& color) -> decltype(updateMainColor(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&GameObject::updateMainColor), this);
	using FunctionType = decltype(updateMainColor(color))(*)(GameObject*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29c8b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto GameObject::updateSecondaryColor(cocos2d::ccColor3B const& color) -> decltype(updateSecondaryColor(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&GameObject::updateSecondaryColor), this);
	using FunctionType = decltype(updateSecondaryColor(color))(*)(GameObject*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29c8c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto GameObject::addToGroup(int id) -> decltype(addToGroup(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&GameObject::addToGroup), this);
	using FunctionType = decltype(addToGroup(id))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x297160, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto GameObject::removeFromGroup(int id) -> decltype(removeFromGroup(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&GameObject::removeFromGroup), this);
	using FunctionType = decltype(removeFromGroup(id))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x297290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto GameObject::saveActiveColors() -> decltype(saveActiveColors()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::saveActiveColors), this);
	using FunctionType = decltype(saveActiveColors())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29b1c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::spawnXPosition() -> decltype(spawnXPosition()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::spawnXPosition), this);
	using FunctionType = decltype(spawnXPosition())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206d00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::updateParticleColor(cocos2d::ccColor3B const& color) -> decltype(updateParticleColor(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&GameObject::updateParticleColor), this);
	using FunctionType = decltype(updateParticleColor(color))(*)(GameObject*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29b550, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto GameObject::updateParticleOpacity(unsigned char opacity) -> decltype(updateParticleOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&GameObject::updateParticleOpacity), this);
	using FunctionType = decltype(updateParticleOpacity(opacity))(*)(GameObject*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2934f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}

auto GameObject::getObjectRectDirty() const  -> decltype(getObjectRectDirty()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getObjectRectDirty), this);
	using FunctionType = decltype(getObjectRectDirty())(*)(GameObject const *);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206d20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::setObjectRectDirty(bool dirty) -> decltype(setObjectRectDirty(dirty)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&GameObject::setObjectRectDirty), this);
	using FunctionType = decltype(setObjectRectDirty(dirty))(*)(GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206d30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dirty);
}

auto GameObject::getOrientedRectDirty() const  -> decltype(getOrientedRectDirty()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getOrientedRectDirty), this);
	using FunctionType = decltype(getOrientedRectDirty())(*)(GameObject const *);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206d40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::setOrientedRectDirty(bool dirty) -> decltype(setOrientedRectDirty(dirty)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&GameObject::setOrientedRectDirty), this);
	using FunctionType = decltype(setOrientedRectDirty(dirty))(*)(GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206d50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dirty);
}

auto GameObject::getType() const  -> decltype(getType()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getType), this);
	using FunctionType = decltype(getType())(*)(GameObject const *);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206d60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::setType(GameObjectType type) -> decltype(setType(type)) {
	auto self = addresser::thunkAdjust(Resolve<GameObjectType>::func(&GameObject::setType), this);
	using FunctionType = decltype(setType(type))(*)(GameObject*, GameObjectType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206d70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, type);
}

auto GameObject::getStartPos() const  -> decltype(getStartPos()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getStartPos), this);
	using FunctionType = decltype(getStartPos())(*)(GameObject const *);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206d80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::addColorSprite(std::string frame) -> decltype(addColorSprite(frame)) {
	using FunctionType = decltype(addColorSprite(frame))(*)(GameObject*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x526950, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}

auto GameObject::addColorSpriteToSelf() -> decltype(addColorSpriteToSelf()) {
	using FunctionType = decltype(addColorSpriteToSelf())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x296bb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::addCustomChild(std::string frame, cocos2d::CCPoint offset, int zOrder) -> decltype(addCustomChild(frame, offset, zOrder)) {
	using FunctionType = decltype(addCustomChild(frame, offset, zOrder))(*)(GameObject*, std::string, cocos2d::CCPoint, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x291db0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, frame, offset, zOrder);
}

auto GameObject::addCustomColorChild(std::string frame) -> decltype(addCustomColorChild(frame)) {
	throw std::runtime_error("GameObject::addCustomColorChild not implemented");
}

auto GameObject::addEmptyGlow() -> decltype(addEmptyGlow()) {
	using FunctionType = decltype(addEmptyGlow())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x289210, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::addGlow(std::string frame) -> decltype(addGlow(frame)) {
	using FunctionType = decltype(addGlow(frame))(*)(GameObject*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x493b90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}

auto GameObject::addInternalCustomColorChild(std::string frame, cocos2d::CCPoint offset, int zOrder) -> decltype(addInternalCustomColorChild(frame, offset, zOrder)) {
	using FunctionType = decltype(addInternalCustomColorChild(frame, offset, zOrder))(*)(GameObject*, std::string, cocos2d::CCPoint, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x291fa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, frame, offset, zOrder);
}

auto GameObject::addInternalGlowChild(std::string frame, cocos2d::CCPoint offset) -> decltype(addInternalGlowChild(frame, offset)) {
	using FunctionType = decltype(addInternalGlowChild(frame, offset))(*)(GameObject*, std::string, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x292080, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, frame, offset);
}

auto GameObject::addRotation(float rotation) -> decltype(addRotation(rotation)) {
	using FunctionType = decltype(addRotation(rotation))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x292820, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, rotation);
}

auto GameObject::colorForMode(int id, bool mainColor) -> decltype(colorForMode(id, mainColor)) {
	using FunctionType = decltype(colorForMode(id, mainColor))(*)(GameObject*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29c8d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, mainColor);
}

auto GameObject::commonInteractiveSetup() -> decltype(commonInteractiveSetup()) {
	using FunctionType = decltype(commonInteractiveSetup())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x291880, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::commonSetup() -> decltype(commonSetup()) {
	throw std::runtime_error("GameObject::commonSetup not implemented");
}

auto GameObject::copyGroups(GameObject* object) -> decltype(copyGroups(object)) {
	using FunctionType = decltype(copyGroups(object))(*)(GameObject*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x297320, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameObject::createAndAddParticle(int objectType, char const* plistName, int tag, cocos2d::tCCPositionType positionType) -> decltype(createAndAddParticle(objectType, plistName, tag, positionType)) {
	using FunctionType = decltype(createAndAddParticle(objectType, plistName, tag, positionType))(*)(GameObject*, int, char const*, int, cocos2d::tCCPositionType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x293570, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objectType, plistName, tag, positionType);
}

auto GameObject::createGroupContainer(int size) -> decltype(createGroupContainer(size)) {
	using FunctionType = decltype(createGroupContainer(size))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x297090, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, size);
}

auto GameObject::determineSlopeDirection() -> decltype(determineSlopeDirection()) {
	using FunctionType = decltype(determineSlopeDirection())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x296cb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::duplicateAttributes(GameObject* object) -> decltype(duplicateAttributes(object)) {
	using FunctionType = decltype(duplicateAttributes(object))(*)(GameObject*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29c520, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameObject::duplicateColorMode(GameObject* object) -> decltype(duplicateColorMode(object)) {
	using FunctionType = decltype(duplicateColorMode(object))(*)(GameObject*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29c440, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameObject::duplicateValues(GameObject* object) -> decltype(duplicateValues(object)) {
	using FunctionType = decltype(duplicateValues(object))(*)(GameObject*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29c660, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameObject::editorColorForMode(int id) -> decltype(editorColorForMode(id)) {
	using FunctionType = decltype(editorColorForMode(id))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29b8fb, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameObject::getActiveColorForMode(int id, bool mainColor) -> decltype(getActiveColorForMode(id, mainColor)) {
	using FunctionType = decltype(getActiveColorForMode(id, mainColor))(*)(GameObject*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29ca00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, mainColor);
}

auto GameObject::getBoxOffset() -> decltype(getBoxOffset()) {
	using FunctionType = decltype(getBoxOffset())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29c070, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getGlowFrame(std::string frame) -> decltype(getGlowFrame(frame)) {
	throw std::runtime_error("GameObject::getGlowFrame not implemented");
}

auto GameObject::getObjectDirection() -> decltype(getObjectDirection()) {
	using FunctionType = decltype(getObjectDirection())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x296ef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getParentMode() -> decltype(getParentMode()) {
	using FunctionType = decltype(getParentMode())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x295510, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getRelativeSpriteColor(int type) -> decltype(getRelativeSpriteColor(type)) {
	using FunctionType = decltype(getRelativeSpriteColor(type))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29c350, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameObject::getScalePosDelta() -> decltype(getScalePosDelta()) {
	using FunctionType = decltype(getScalePosDelta())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x296f70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::groupOpacityMod() -> decltype(groupOpacityMod()) {
	using FunctionType = decltype(groupOpacityMod())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2976c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::ignoreEditorDuration() -> decltype(ignoreEditorDuration()) {
	using FunctionType = decltype(ignoreEditorDuration())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29da30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::isBasicTrigger() -> decltype(isBasicTrigger()) {
	using FunctionType = decltype(isBasicTrigger())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29df20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::isFacingDown() -> decltype(isFacingDown()) {
	using FunctionType = decltype(isFacingDown())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29c1b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::isFacingLeft() -> decltype(isFacingLeft()) {
	using FunctionType = decltype(isFacingLeft())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29c270, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::isSpawnableTrigger() -> decltype(isSpawnableTrigger()) {
	using FunctionType = decltype(isSpawnableTrigger())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29cfe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::isSpecialObject() -> decltype(isSpecialObject()) {
	using FunctionType = decltype(isSpecialObject())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29d3f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::isTrigger() -> decltype(isTrigger()) {
	using FunctionType = decltype(isTrigger())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29cb70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::parentForZLayer(int zLayer, bool blending, int parentMode) -> decltype(parentForZLayer(zLayer, blending, parentMode)) {
	using FunctionType = decltype(parentForZLayer(zLayer, blending, parentMode))(*)(GameObject*, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2968e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, zLayer, blending, parentMode);
}

auto GameObject::perspectiveColorFrame(char const* prefix, int index) -> decltype(perspectiveColorFrame(prefix, index)) {
	using FunctionType = decltype(perspectiveColorFrame(prefix, index))(*)(GameObject*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2aa6f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, prefix, index);
}

auto GameObject::perspectiveFrame(char const* prefix, int index) -> decltype(perspectiveFrame(prefix, index)) {
	using FunctionType = decltype(perspectiveFrame(prefix, index))(*)(GameObject*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2aa5e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, prefix, index);
}

auto GameObject::playDestroyObjectAnim(GJBaseGameLayer* layer) -> decltype(playDestroyObjectAnim(layer)) {
	using FunctionType = decltype(playDestroyObjectAnim(layer))(*)(GameObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a5410, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, layer);
}

auto GameObject::playPickupAnimation(cocos2d::CCSprite* target, float offset, float duration, float randomValue1, float randomValue2) -> decltype(playPickupAnimation(target, offset, duration, randomValue1, randomValue2)) {
	using FunctionType = decltype(playPickupAnimation(target, offset, duration, randomValue1, randomValue2))(*)(GameObject*, cocos2d::CCSprite*, float, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a4e40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, target, offset, duration, randomValue1, randomValue2);
}

auto GameObject::playPickupAnimation(cocos2d::CCSprite* target, float xOffset, float yOffset, float controlYOffset1, float controlYOffset2, float endYOffset, float duration, float fadeDelay, float fadeDuration, bool rotate, float randomValue1, float randomValue2) -> decltype(playPickupAnimation(target, xOffset, yOffset, controlYOffset1, controlYOffset2, endYOffset, duration, fadeDelay, fadeDuration, rotate, randomValue1, randomValue2)) {
	using FunctionType = decltype(playPickupAnimation(target, xOffset, yOffset, controlYOffset1, controlYOffset2, endYOffset, duration, fadeDelay, fadeDuration, rotate, randomValue1, randomValue2))(*)(GameObject*, cocos2d::CCSprite*, float, float, float, float, float, float, float, float, bool, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a4f30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, target, xOffset, yOffset, controlYOffset1, controlYOffset2, endYOffset, duration, fadeDelay, fadeDuration, rotate, randomValue1, randomValue2);
}

auto GameObject::setAreaOpacity(float step, float value, int index) -> decltype(setAreaOpacity(step, value, index)) {
	using FunctionType = decltype(setAreaOpacity(step, value, index))(*)(GameObject*, float, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2931c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, step, value, index);
}

auto GameObject::setupSpriteSize() -> decltype(setupSpriteSize()) {
	using FunctionType = decltype(setupSpriteSize())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29dfd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::shouldBlendColor(GJSpriteColor* color, bool mainColor) -> decltype(shouldBlendColor(color, mainColor)) {
	throw std::runtime_error("GameObject::shouldBlendColor not implemented");
}

auto GameObject::shouldLockX() -> decltype(shouldLockX()) {
	using FunctionType = decltype(shouldLockX())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x291940, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::slopeYPos(float x) -> decltype(slopeYPos(x)) {
	using FunctionType = decltype(slopeYPos(x))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29bc40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, x);
}

auto GameObject::spawnDefaultPickupParticle(GJBaseGameLayer* layer) -> decltype(spawnDefaultPickupParticle(layer)) {
	using FunctionType = decltype(spawnDefaultPickupParticle(layer))(*)(GameObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a51d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, layer);
}

auto GameObject::updateIsOriented() -> decltype(updateIsOriented()) {
	using FunctionType = decltype(updateIsOriented())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29bfd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::updateObjectEditorColor() -> decltype(updateObjectEditorColor()) {
	using FunctionType = decltype(updateObjectEditorColor())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29bb80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::updateStartPos() -> decltype(updateStartPos()) {
	throw std::runtime_error("GameObject::updateStartPos not implemented");
}
