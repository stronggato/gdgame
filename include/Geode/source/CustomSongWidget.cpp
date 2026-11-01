
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CustomSongWidget.hpp>
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

auto CustomSongWidget::create(SongInfoObject* p0, CustomSongDelegate* p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7, int p8, bool p9, bool p10) -> decltype(create(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10)) {
	using FunctionType = decltype(create(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10))(*)(SongInfoObject*, CustomSongDelegate*, bool, bool, bool, bool, bool, bool, int, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x167b30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
}

auto CustomSongWidget::loadSongInfoFinished(SongInfoObject* object) -> decltype(loadSongInfoFinished(object)) {
	auto self = addresser::thunkAdjust(Resolve<SongInfoObject*>::func(&CustomSongWidget::loadSongInfoFinished), this);
	using FunctionType = decltype(loadSongInfoFinished(object))(*)(CustomSongWidget*, SongInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16c9b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto CustomSongWidget::loadSongInfoFailed(int id, GJSongError errorType) -> decltype(loadSongInfoFailed(id, errorType)) {
	auto self = addresser::thunkAdjust(Resolve<int, GJSongError>::func(&CustomSongWidget::loadSongInfoFailed), this);
	using FunctionType = decltype(loadSongInfoFailed(id, errorType))(*)(CustomSongWidget*, int, GJSongError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16cb60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, errorType);
}

auto CustomSongWidget::downloadSongStarted(int id) -> decltype(downloadSongStarted(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&CustomSongWidget::downloadSongStarted), this);
	using FunctionType = decltype(downloadSongStarted(id))(*)(CustomSongWidget*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16cc40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto CustomSongWidget::downloadSongFinished(int id) -> decltype(downloadSongFinished(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&CustomSongWidget::downloadSongFinished), this);
	using FunctionType = decltype(downloadSongFinished(id))(*)(CustomSongWidget*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16cc60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto CustomSongWidget::downloadSongFailed(int id, GJSongError errorType) -> decltype(downloadSongFailed(id, errorType)) {
	auto self = addresser::thunkAdjust(Resolve<int, GJSongError>::func(&CustomSongWidget::downloadSongFailed), this);
	using FunctionType = decltype(downloadSongFailed(id, errorType))(*)(CustomSongWidget*, int, GJSongError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16cd20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, errorType);
}

auto CustomSongWidget::downloadSFXFinished(int id) -> decltype(downloadSFXFinished(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&CustomSongWidget::downloadSFXFinished), this);
	using FunctionType = decltype(downloadSFXFinished(id))(*)(CustomSongWidget*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16cda0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto CustomSongWidget::downloadSFXFailed(int id, GJSongError errorType) -> decltype(downloadSFXFailed(id, errorType)) {
	auto self = addresser::thunkAdjust(Resolve<int, GJSongError>::func(&CustomSongWidget::downloadSFXFailed), this);
	using FunctionType = decltype(downloadSFXFailed(id, errorType))(*)(CustomSongWidget*, int, GJSongError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16cdc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, errorType);
}

auto CustomSongWidget::musicActionFinished(GJMusicAction action) -> decltype(musicActionFinished(action)) {
	auto self = addresser::thunkAdjust(Resolve<GJMusicAction>::func(&CustomSongWidget::musicActionFinished), this);
	using FunctionType = decltype(musicActionFinished(action))(*)(CustomSongWidget*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16d440, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, action);
}

auto CustomSongWidget::musicActionFailed(GJMusicAction action) -> decltype(musicActionFailed(action)) {
	auto self = addresser::thunkAdjust(Resolve<GJMusicAction>::func(&CustomSongWidget::musicActionFailed), this);
	using FunctionType = decltype(musicActionFailed(action))(*)(CustomSongWidget*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16d470, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, action);
}

auto CustomSongWidget::songStateChanged() -> decltype(songStateChanged()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CustomSongWidget::songStateChanged), this);
	using FunctionType = decltype(songStateChanged())(*)(CustomSongWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16ae20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CustomSongWidget::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&CustomSongWidget::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(CustomSongWidget*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16d7f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto CustomSongWidget::downloadAssetFailed(int id, GJAssetType type, GJSongError errorType) -> decltype(downloadAssetFailed(id, type, errorType)) {
	using FunctionType = decltype(downloadAssetFailed(id, type, errorType))(*)(CustomSongWidget*, int, GJAssetType, GJSongError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16d370, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type, errorType);
}

auto CustomSongWidget::getSongInfoIfUnloaded() -> decltype(getSongInfoIfUnloaded()) {
	using FunctionType = decltype(getSongInfoIfUnloaded())(*)(CustomSongWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16a060, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSongWidget::init(SongInfoObject* p0, CustomSongDelegate* p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7, int p8, bool p9, bool p10) -> decltype(init(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10)) {
	using FunctionType = decltype(init(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10))(*)(CustomSongWidget*, SongInfoObject*, CustomSongDelegate*, bool, bool, bool, bool, bool, bool, int, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd83f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
}

auto CustomSongWidget::onDownload(cocos2d::CCObject* sender) -> decltype(onDownload(sender)) {
	using FunctionType = decltype(onDownload(sender))(*)(CustomSongWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ae080, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSongWidget::onPlayback(cocos2d::CCObject* sender) -> decltype(onPlayback(sender)) {
	using FunctionType = decltype(onPlayback(sender))(*)(CustomSongWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x445ac0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSongWidget::onSelect(cocos2d::CCObject* sender) -> decltype(onSelect(sender)) {
	using FunctionType = decltype(onSelect(sender))(*)(CustomSongWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x160cb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSongWidget::startMultiAssetDownload() -> decltype(startMultiAssetDownload()) {
	using FunctionType = decltype(startMultiAssetDownload())(*)(CustomSongWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16cde0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSongWidget::updateDownloadProgress(float dt) -> decltype(updateDownloadProgress(dt)) {
	throw std::runtime_error("CustomSongWidget::updateDownloadProgress not implemented");
}

auto CustomSongWidget::updateError(GJSongError errorType) -> decltype(updateError(errorType)) {
	using FunctionType = decltype(updateError(errorType))(*)(CustomSongWidget*, GJSongError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16d4d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, errorType);
}

auto CustomSongWidget::updateMultiAssetInfo(bool update) -> decltype(updateMultiAssetInfo(update)) {
	using FunctionType = decltype(updateMultiAssetInfo(update))(*)(CustomSongWidget*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16c160, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, update);
}

auto CustomSongWidget::updatePlaybackBtn() -> decltype(updatePlaybackBtn()) {
	using FunctionType = decltype(updatePlaybackBtn())(*)(CustomSongWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16ac30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSongWidget::updateProgressBar(int progress) -> decltype(updateProgressBar(progress)) {
	throw std::runtime_error("CustomSongWidget::updateProgressBar not implemented");
}

auto CustomSongWidget::updateSongInfo() -> decltype(updateSongInfo()) {
	using FunctionType = decltype(updateSongInfo())(*)(CustomSongWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16ae50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
