
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ConfigureHSVWidget.hpp>
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

ConfigureHSVWidget::~ConfigureHSVWidget() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(ConfigureHSVWidget*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x12df70, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) ConfigureHSVWidget(geode::CutoffConstructor, sizeof(ConfigureHSVWidget));
		geode::DestructorLock::addLock(this);
	}
}

auto ConfigureHSVWidget::getHSV(GameObject* object, cocos2d::CCArray* objects, int mode) -> decltype(getHSV(object, objects, mode)) {
	throw std::runtime_error("ConfigureHSVWidget::getHSV not implemented");
}

auto ConfigureHSVWidget::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&ConfigureHSVWidget::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(ConfigureHSVWidget*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1250a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto ConfigureHSVWidget::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&ConfigureHSVWidget::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(ConfigureHSVWidget*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12f2b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto ConfigureHSVWidget::textInputShouldOffset(CCTextInputNode* p0, float p1) -> decltype(textInputShouldOffset(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*, float>::func(&ConfigureHSVWidget::textInputShouldOffset), this);
	using FunctionType = decltype(textInputShouldOffset(p0, p1))(*)(ConfigureHSVWidget*, CCTextInputNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12f1c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ConfigureHSVWidget::textInputReturn(CCTextInputNode* p0) -> decltype(textInputReturn(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&ConfigureHSVWidget::textInputReturn), this);
	using FunctionType = decltype(textInputReturn(p0))(*)(ConfigureHSVWidget*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12f200, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ConfigureHSVWidget::onResetHSV(cocos2d::CCObject* sender) -> decltype(onResetHSV(sender)) {
	using FunctionType = decltype(onResetHSV(sender))(*)(ConfigureHSVWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12f8b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ConfigureHSVWidget::sliderChanged(cocos2d::CCObject* sender) -> decltype(sliderChanged(sender)) {
	using FunctionType = decltype(sliderChanged(sender))(*)(ConfigureHSVWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12f690, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ConfigureHSVWidget::updateLabels() -> decltype(updateLabels()) {
	using FunctionType = decltype(updateLabels())(*)(ConfigureHSVWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12f940, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
