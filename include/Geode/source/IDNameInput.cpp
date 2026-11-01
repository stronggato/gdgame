
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/IDNameInput.hpp>
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

IDNameInput::~IDNameInput() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(IDNameInput*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3c47f0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) IDNameInput(geode::CutoffConstructor, sizeof(IDNameInput));
		geode::DestructorLock::addLock(this);
	}
}

auto IDNameInput::idNameBrowserClosed(IDNameBrowserPopup* p0, int p1) -> decltype(idNameBrowserClosed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<IDNameBrowserPopup*, int>::func(&IDNameInput::idNameBrowserClosed), this);
	using FunctionType = decltype(idNameBrowserClosed(p0, p1))(*)(IDNameInput*, IDNameBrowserPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c6b80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto IDNameInput::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&IDNameInput::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(IDNameInput*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c8120, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto IDNameInput::textInputOpened(CCTextInputNode* p0) -> decltype(textInputOpened(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&IDNameInput::textInputOpened), this);
	using FunctionType = decltype(textInputOpened(p0))(*)(IDNameInput*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c8500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto IDNameInput::textInputClosed(CCTextInputNode* p0) -> decltype(textInputClosed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&IDNameInput::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(p0))(*)(IDNameInput*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c82e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto IDNameInput::textInputShouldOffset(CCTextInputNode* p0, float p1) -> decltype(textInputShouldOffset(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*, float>::func(&IDNameInput::textInputShouldOffset), this);
	using FunctionType = decltype(textInputShouldOffset(p0, p1))(*)(IDNameInput*, CCTextInputNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c8520, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto IDNameInput::textInputReturn(CCTextInputNode* p0) -> decltype(textInputReturn(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&IDNameInput::textInputReturn), this);
	using FunctionType = decltype(textInputReturn(p0))(*)(IDNameInput*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c8540, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto IDNameInput::allowTextInput(CCTextInputNode* p0) -> decltype(allowTextInput(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&IDNameInput::allowTextInput), this);
	using FunctionType = decltype(allowTextInput(p0))(*)(IDNameInput*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c8560, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto IDNameInput::enterPressed(CCTextInputNode* p0) -> decltype(enterPressed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&IDNameInput::enterPressed), this);
	using FunctionType = decltype(enterPressed(p0))(*)(IDNameInput*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c8580, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto IDNameInput::dropdownListPopupClosed(DropdownListPopup* p0) -> decltype(dropdownListPopupClosed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<DropdownListPopup*>::func(&IDNameInput::dropdownListPopupClosed), this);
	using FunctionType = decltype(dropdownListPopupClosed(p0))(*)(IDNameInput*, DropdownListPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c8680, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}
