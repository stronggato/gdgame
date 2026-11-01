
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/EditorSoundConfigUploadPopup.hpp>
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

EditorSoundConfigUploadPopup::~EditorSoundConfigUploadPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(EditorSoundConfigUploadPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x1990b0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) EditorSoundConfigUploadPopup(geode::CutoffConstructor, sizeof(EditorSoundConfigUploadPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto EditorSoundConfigUploadPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorSoundConfigUploadPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(EditorSoundConfigUploadPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19ac50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorSoundConfigUploadPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&EditorSoundConfigUploadPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(EditorSoundConfigUploadPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19ac70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto EditorSoundConfigUploadPopup::uploadEditorSoundFinished(int p0) -> decltype(uploadEditorSoundFinished(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&EditorSoundConfigUploadPopup::uploadEditorSoundFinished), this);
	using FunctionType = decltype(uploadEditorSoundFinished(p0))(*)(EditorSoundConfigUploadPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19ad50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto EditorSoundConfigUploadPopup::uploadEditorSoundFailed(int p0) -> decltype(uploadEditorSoundFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&EditorSoundConfigUploadPopup::uploadEditorSoundFailed), this);
	using FunctionType = decltype(uploadEditorSoundFailed(p0))(*)(EditorSoundConfigUploadPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19b040, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}
